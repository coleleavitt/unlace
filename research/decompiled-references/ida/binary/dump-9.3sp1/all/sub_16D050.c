__int64 __fastcall sub_16D050(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  int *v6; // rbp
  int v7; // eax
  int *v8; // rbx
  unsigned int v9; // r15d
  int v11; // r8d
  int v12; // r9d
  int v13; // r9d
  int v14; // ebp
  __int64 i; // rax
  _DWORD *v16; // rdi
  __int128 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  int v23; // [rsp+0h] [rbp-88h]
  int v24; // [rsp+8h] [rbp-80h]
  int v25; // [rsp+10h] [rbp-78h]
  __int64 v26; // [rsp+18h] [rbp-70h] BYREF
  __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  __int128 v28; // [rsp+28h] [rbp-60h]
  __int128 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v5 = a1[7];
  v6 = *(int **)(v5 + 16);
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v7 = *v6;
    v8 = v6;
    if ( *v6 == 67 )
    {
      while ( v8[9] == v8[17] && *((_BYTE *)v8 + 32) == 4 )
      {
        v8 = *((int **)v8 + 5);
        v7 = *v8;
        if ( *v8 != 67 )
          goto LABEL_10;
      }
      goto LABEL_7;
    }
LABEL_10:
    if ( v7 == 65 )
      break;
LABEL_7:
    v6 = *((int **)v6 + 2);
    if ( !v6 )
      return 0;
  }
  if ( !(unsigned __int8)sub_30CFD0(*(_QWORD *)(a1[60] + 112), a1, v6, v8 + 8, v5, a2 + 32) )
    return 0;
  if ( *((_QWORD *)v6 + 1) == a1[7] )
    goto LABEL_17;
  v28 = 0u;
  v29 = 0;
  sub_127FE0((__int64)a1, (__int64)&v27, (__int64)(v6 + 16), 0, v11, v12, v23, v24, v25, v26, 0);
  if ( sub_A9AA0((__int64)a1, &v27, *((_QWORD *)v6 + 1), 0, 1u) )
  {
    if ( *((_QWORD *)&v28 + 1) )
    {
      *(_QWORD *)&v29 = 0;
      qfree(*((__int64 *)&v28 + 1));
    }
    qfree(v27);
    return 0;
  }
  if ( *((_QWORD *)&v28 + 1) )
  {
    *(_QWORD *)&v29 = 0;
    qfree(*((__int64 *)&v28 + 1));
  }
  qfree(v27);
LABEL_17:
  if ( !v8 )
    return 0;
  v27 = 0;
  v28 = 0;
  v9 = sub_16CEF0(a3, (__int64)&v27, (__int64)(v6 + 16), v8[9], v11, (int)v6 + 64);
  if ( (_BYTE)v9 && (int)sub_16CAA0((__int64)a1, (__int64)(v6 + 16), (int)v6, *((_QWORD *)v6 + 1), a1[7], v13) >= 0 )
  {
    v14 = 0;
    for ( i = 0; v14 < (unsigned __int64)v28; i = v14 )
    {
      v16 = *(_DWORD **)(v27 + 8 * i);
      *v16 = 67;
      sub_11CDA0((__int64)(v16 + 12));
      ++v14;
    }
    *((_QWORD *)&v17 + 1) = a2 + 32;
    *(_QWORD *)&v17 = a1;
    v26 = a1[7];
    v18 = sub_129440(v17, (__int64)&v26, 0);
    if ( v18 && *(_DWORD *)v18 == 2 )
    {
      *((_QWORD *)&v17 + 1) = *((_QWORD *)v8 + 3);
      sub_B57F0(a1[8], *((unsigned __int64 *)&v17 + 1), *(_QWORD *)(v18 + 24));
    }
    *v8 = 66;
    sub_B57E0(a3, *((__int64 *)&v17 + 1), v19, v20, v21, v22);
    sub_A2520((__int64)a1, (__int64)"U2F");
  }
  else
  {
    v9 = 0;
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  return v9;
}
