unsigned __int64 __fastcall sub_A78DB0(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v7; // r15d
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  int v12; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // r9d
  __int64 v21; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v22; // [rsp+18h] [rbp-E0h]
  __int64 v23; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v25[184]; // [rsp+40h] [rbp-B8h] BYREF

  v7 = a4;
  if ( a7 && a4 )
  {
    v9 = *(_QWORD *)(a5 + 8LL * (unsigned int)(a7 - 1));
    v10 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v9) & 7;
  }
  else
  {
    ptr[0] = v25;
    ptr[1] = (void *)0x2000000000LL;
    v21 = a2 & 7;
    sub_F5FD80(
      (unsigned int)ptr,
      a1,
      *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFF8
    | v21
    | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7,
      a3,
      a4,
      a6,
      a5,
      a6);
    v23 = 0;
    v14 = sub_2223360(a1 + 456, ptr, &v23, &off_2B40EE0);
    if ( !v14 || (v15 = v14 - 24) == 0 )
    {
      v16 = sub_A6FFD0((__int64 *)(a1 + 2352), 8 * a6 + 64, 4u);
      v17 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | v21
          | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
      v22 = v16;
      sub_F5DEF0(v16, 0, v17, a3, v7, v18, a5, a6);
      sub_2223210(a1 + 456, v22 + 24, v23, &off_2B40EE0);
      LODWORD(v15) = v22;
    }
    LODWORD(v10) = v15 & 0xFFFFFFF0;
    if ( ptr[0] != v25 )
      free(ptr[0]);
  }
  v11 = sub_A6FFD0((__int64 *)(a1 + 2352), 8 * a6 + 64, 4u);
  sub_F5DEF0(v11, v10, a2, a3, v7, v12, a5, a6);
  sub_A6A720(a1 + 8, v11);
  return v11 & 0xFFFFFFFFFFFFFFF0LL;
}
