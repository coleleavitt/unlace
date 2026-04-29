__int64 __fastcall sub_6800(_QWORD *a1, __int64 a2, unsigned __int64 a3, int a4, __int64 a5)
{
  _QWORD *v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rdi
  int v12; // eax
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdx
  int v17; // r9d
  __int64 v18; // rdi
  unsigned int v19; // r15d
  __int64 v20; // rax
  char *v21; // rsi
  const char *v22; // rsi
  unsigned __int64 v23; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v24; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v25; // [rsp+8h] [rbp-D0h]
  char *v26; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+18h] [rbp-C0h]
  const char *v28; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+38h] [rbp-A0h]
  __int128 v30; // [rsp+50h] [rbp-88h] BYREF
  __int64 v31; // [rsp+60h] [rbp-78h]
  __int128 v32; // [rsp+68h] [rbp-70h]
  __int64 v33; // [rsp+78h] [rbp-60h]
  __int64 v34; // [rsp+80h] [rbp-58h]
  __int128 v35; // [rsp+88h] [rbp-50h]
  unsigned __int64 v36; // [rsp+98h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v9 = (_QWORD *)getseg();
  if ( !v9 )
    goto LABEL_16;
  if ( v9[1] - *v9 <= 0xFu )
    goto LABEL_16;
  if ( (unsigned __int8)get_fixups() )
    goto LABEL_16;
  if ( !(unsigned __int8)sub_4AA0(a1, a3, a3 + 16, 0) )
    goto LABEL_16;
  if ( !(unsigned __int8)sub_4D20(a1, 0, (unsigned int *)a1 + 12) )
    goto LABEL_16;
  v10 = *((_DWORD *)a1 + 12);
  if ( v10
    || !(unsigned __int8)sub_4D20(a1, 4u, (unsigned int *)a1 + 13)
    || *((_DWORD *)a1 + 13) > 7u
    || !(unsigned __int8)sub_4D20(a1, 8u, (unsigned int *)a1 + 14)
    || !(unsigned __int8)sub_4D90(a1, 0xCu, a1 + 8, 1, 0) )
  {
    goto LABEL_16;
  }
  v11 = a1[8];
  if ( *((_DWORD *)a1 + 14) )
  {
    if ( (unsigned __int8)is_mapped() )
      goto LABEL_13;
LABEL_16:
    a1[3] = 0;
    v10 = 0;
    *(_OWORD *)a1 = -1;
    return v10;
  }
  if ( v11 )
    goto LABEL_16;
LABEL_13:
  v12 = sub_4F60(a1, 2, a2);
  if ( v12 )
  {
    LOBYTE(v10) = v12 == 1;
    return v10;
  }
  v14 = a1[5];
  v15 = *((_DWORD *)a1 + 14);
  v16 = a1[8];
  v31 = 0;
  v33 = v14;
  v34 = 0;
  v30 = 0;
  v32 = 0;
  v35 = 0;
  v10 = sub_87B0((unsigned int)&v30, a2, v16, v15, a4, a5);
  if ( !(_BYTE)v10 )
  {
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree();
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree();
    }
    goto LABEL_16;
  }
  if ( (a4 & 0x10) != 0 && a5 != -1 )
  {
    v28 = 0;
    v29 = 0;
    sub_6200((__int64)a1, (__int64 *)&v28);
    if ( (unsigned __int64)v29 > 1 )
      sub_10940(a2, a5, &v28);
    v18 = a1[5];
    v19 = 4;
    if ( *(_QWORD *)(v18 + 368) == 8 )
      v19 = 3;
    v23 = *a1;
    v24 = sub_10380(v18, *a1, 1, "signature", 0) + v23;
    v25 = sub_10380(a1[5], v24, 2, "attributes", 0) + v24;
    v20 = sub_10380(a1[5], v25, 1, "# of items in the array of base classes", 0);
    sub_10380(a1[5], v20 + v25, v19, "reference to the array of base classes", 0);
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    if ( (a4 & 0x20) == 0 )
      goto LABEL_23;
    v26 = 0;
    v28 = 0;
    v27 = 0;
    v29 = 0;
    goto LABEL_35;
  }
  if ( (a4 & 0x20) != 0 )
  {
    v26 = 0;
    v28 = 0;
    v27 = 0;
    if ( a5 != -1 )
    {
      v29 = 0;
LABEL_35:
      if ( (unsigned __int8)sub_7980(a1[5], a2, (unsigned int)&v26, a5, a4, v17) )
      {
        v21 = (char *)&haystack;
        if ( (_QWORD)v27 )
          v21 = v26;
        if ( (unsigned __int8)sub_4600((__int64)&v28, v21, 1, "??_R3", "8") )
        {
          v22 = &haystack;
          if ( (_QWORD)v29 )
            v22 = v28;
          sub_10260(*a1, v22);
        }
      }
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
    }
  }
LABEL_23:
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  return v10;
}
