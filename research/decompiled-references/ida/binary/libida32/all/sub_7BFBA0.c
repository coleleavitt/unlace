void __fastcall sub_7BFBA0(__int64 a1, __int64 a2)
{
  size_t v2; // r12
  void *v3; // rax
  const void *v4; // rsi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_7B9AC0((_QWORD *)a1, a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v2 = *(_QWORD *)(a2 + 32);
  if ( v2 )
  {
    v3 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 32), (const char *)a2);
    *(_QWORD *)(a1 + 40) = v2;
    v4 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 24) = v3;
    memcpy(v3, v4, v2);
    *(_QWORD *)(a1 + 32) = v2;
  }
}

