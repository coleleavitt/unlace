void __fastcall sub_1F74130(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rsi
  unsigned int *v5; // rbx
  unsigned int *v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  int v9; // esi
  void *ptr; // [rsp+0h] [rbp-248h] BYREF
  __int64 v11; // [rsp+8h] [rbp-240h]
  _BYTE v12[568]; // [rsp+10h] [rbp-238h] BYREF

  v3 = *(unsigned int *)(a2 + 1952);
  v11 = 0x4000000000LL;
  v4 = *(unsigned int *)(a2 + 1956) | (unsigned __int64)(v3 << 32);
  ptr = v12;
  sub_9B9C90((__int64)&ptr, v4);
  sub_1F6F570(a1, *(_DWORD *)(a2 + 1960), (__int64)&ptr);
  sub_9B9C90((__int64)&ptr, *(unsigned int *)(a2 + 1872));
  v5 = *(unsigned int **)(a2 + 1864);
  v6 = &v5[8 * *(unsigned int *)(a2 + 1872)];
  while ( v6 != v5 )
  {
    v7 = v5[5] | ((unsigned __int64)v5[4] << 32);
    v8 = (unsigned int)v11 + 1LL;
    if ( v8 > HIDWORD(v11) )
      sub_2237220(&ptr, v12, v8, 8);
    *((_QWORD *)ptr + (unsigned int)v11) = v7;
    v9 = v5[6];
    LODWORD(v11) = v11 + 1;
    v5 += 8;
    sub_1F6F570(a1, v9, (__int64)&ptr);
    sub_1F6F570(a1, *(v5 - 1), (__int64)&ptr);
    sub_1F740F0(*((_QWORD *)v5 - 4), *((_QWORD *)v5 - 3), (__int64)&ptr);
  }
  sub_1F6EB90(a1[2], 0x41u, (__int64)&ptr);
  if ( ptr != v12 )
    free(ptr);
}
