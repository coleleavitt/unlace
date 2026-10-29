__int64 __fastcall sub_837E00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v5; // rax
  const void *v6; // rsi

  v1 = operator new(0x48u);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = v1;
  *(_QWORD *)v1 = off_2B3CCA0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_OWORD *)(v1 + 32) = 0;
  if ( v2 )
  {
    v5 = (void *)qalloc_or_throw(8 * v2);
    *(_QWORD *)(v3 + 24) = v5;
    v6 = *(const void **)a1;
    *(_QWORD *)(v3 + 40) = v2;
    memcpy(v5, v6, 8 * v2);
    *(_QWORD *)(v3 + 32) = v2;
  }
  *(_QWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  return create_generic_linput(v3);
}
