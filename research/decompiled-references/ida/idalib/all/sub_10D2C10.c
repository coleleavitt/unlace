__int64 (__fastcall **__fastcall sub_10D2C10(__int64 a1, __int64 a2, int a3))()
{
  unsigned int v4; // r12d
  void *v5; // rax
  __int64 v7; // rdi
  size_t v8; // rdx

  *(_QWORD *)(a1 + 24) = 0x300000000LL;
  v4 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a1 = &off_2B62EF8;
  v5 = (void *)(a1 + 32);
  *(_DWORD *)(a1 + 8) = 19;
  *(_DWORD *)(a1 + 12) = a3;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  if ( v4 )
  {
    v7 = a1 + 16;
    if ( v7 != a2 )
    {
      v8 = 8LL * v4;
      if ( v4 <= 3uLL
        || (sub_2237220(v7, v5, v4, 8), v5 = *(void **)(a1 + 16), (v8 = 8LL * *(unsigned int *)(a2 + 8)) != 0) )
      {
        memcpy(v5, *(const void **)a2, v8);
      }
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  *(_BYTE *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 60) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)a1 = &off_2B63238;
  return &off_2B63238;
}
