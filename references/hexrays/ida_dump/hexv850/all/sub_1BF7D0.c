__int64 __fastcall sub_1BF7D0(__int64 *a1, _DWORD *a2, _QWORD *a3, int a4)
{
  unsigned int tinfo_property; // ebx
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // r15d
  unsigned int v10; // ebx
  __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // al
  int v17; // edx
  int v18; // r8d
  char v19; // al
  char v20; // al
  __int64 v21; // [rsp+8h] [rbp-90h]
  __int64 v22; // [rsp+8h] [rbp-90h]
  int v23; // [rsp+14h] [rbp-84h]
  int v24; // [rsp+14h] [rbp-84h]
  int v25; // [rsp+18h] [rbp-80h]
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  signed __int64 v27; // [rsp+28h] [rbp-70h] BYREF
  __int64 v28[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+48h] [rbp-50h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  tinfo_property = a4;
  if ( !sub_1BF6D0((__int64)a2, a4) )
  {
    tinfo_property = get_tinfo_property(*a3, 15);
    if ( !sub_1BF6D0((__int64)a2, tinfo_property) )
      return 0;
  }
  if ( !(unsigned __int8)sub_1BE680(&v26, &v27, (__int64)a2, tinfo_property) )
    goto LABEL_10;
  v7 = v26;
  if ( v26 < 0 || v26 >= v27 )
    return 0;
  v8 = a1[6];
  if ( v8 == -1 )
    goto LABEL_10;
  v9 = *(_DWORD *)(*(_QWORD *)(*a1 + 112) + 80LL);
  if ( *a2 == 1 )
  {
    v12 = *a3;
    v21 = a1[6];
    LODWORD(v28[0]) = 0;
    get_tinfo_size(v28, v12, 0);
    v13 = v28[0];
    v14 = v21;
    v15 = (unsigned int)(LODWORD(v28[0]) - 1);
    if ( ((unsigned int)v15 & v28[0]) != 0 )
    {
      if ( !under_debugger )
        interr(2858, v12, LODWORD(v28[0]), v21, v15);
      BUG();
    }
    if ( SLODWORD(v28[0]) > 2 * v9 )
    {
      v25 = LODWORD(v28[0]) - 1;
      v24 = v28[0];
      v20 = getinf_flag(67, 512);
      v14 = v21;
      v17 = v24;
      v18 = v25;
      if ( v20 )
        goto LABEL_24;
      v13 = 2 * v9;
    }
    v23 = v13;
    v22 = v14;
    if ( v9 <= v13 )
    {
      v19 = getinf_flag(67, 4);
      v17 = v23;
      v14 = v22;
      v18 = v23 - 1;
      if ( v19 )
        goto LABEL_24;
    }
    else
    {
      v16 = getinf_flag(67, 2);
      v14 = v22;
      if ( v16 )
      {
        v17 = v23;
        v18 = v23 - 1;
LABEL_24:
        v8 = (v14 + v18) & -v17;
        goto LABEL_8;
      }
    }
    v18 = v9 - 1;
    v17 = v9;
    goto LABEL_24;
  }
LABEL_8:
  if ( v8 != (v7 & -v9) )
    return 0;
  a1[6] = -1;
LABEL_10:
  v30 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v29 = 0;
  sub_1BE430((__int64)a2, v28, tinfo_property, 0, a3);
  if ( (unsigned __int8)sub_5FD00(a1 + 1, v28) || (unsigned __int8)sub_312BB0(a1 + 3, &v29) )
  {
    v10 = 0;
  }
  else
  {
    sub_5F800(a1 + 1, v28);
    sub_3113F0(a1 + 3, &v29);
    v10 = 1;
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  qfree(v28[0]);
  return v10;
}
