unsigned __int64 __fastcall sub_A785F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 *v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  char v16; // [rsp+17h] [rbp-D1h] BYREF
  __int64 v17; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr[0] = v19;
  ptr[1] = (void *)0x2000000000LL;
  v5 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v6 = v5[1];
  else
    v6 = *v5;
  sub_F5FBF0(ptr, a2, v6, a3, a4);
  v17 = 0;
  v7 = sub_2223360(a1 + 496, ptr, &v17, &off_2B40F60);
  if ( !v7 || (v8 = v7 - 24, v7 == 24) )
  {
    v11 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v12 = v11[1];
    else
      v12 = *v11;
    v13 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v12) & 7;
    if ( a4 )
    {
      v14 = sub_A787C0(a1, v13, a3, a4, &v16, 1);
      v13 = *(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v14) & 7;
    }
    v8 = sub_A6FFD0((__int64 *)(a1 + 2352), (unsigned int)(8 * a4 + 48), 4u);
    sub_F57C00(v8, a2, v13, a3, a4);
    sub_A6A720(a1 + 8, v8);
    sub_2223210(a1 + 496, v8 + 24, v17, &off_2B40F60);
  }
  v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v9;
}
