void __fastcall sub_1AF31A0(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  int v6; // r12d
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  _BYTE v9[40]; // [rsp+10h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL)
                 + 6776LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 344LL)
                 - 6776)
     + 1688LL * a3;
  ptr = v9;
  v5 = *(unsigned int *)(v4 + 976);
  v8 = 0x400000000LL;
  sub_FFF220((__int64)&ptr, v5);
  v6 = v8;
  if ( ptr != v9 )
    free(ptr);
  *a2 -= v6;
}
