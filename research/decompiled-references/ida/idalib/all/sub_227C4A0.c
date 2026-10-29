void __fastcall sub_227C4A0(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v3; // rax
  void *v4; // rdi
  size_t v5; // r12
  unsigned __int8 *v6; // rsi
  void *v7; // rdi
  __int64 v8; // rdi
  bool v9; // zf
  void *v10; // rdi

  v1 = *(__int64 **)(a1 + 56);
  *(_QWORD *)a1 = &off_2BEBFE0;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = (void *)v1[4];
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(unsigned __int8 **)v3;
  if ( v5 > v1[3] - (__int64)v4 )
  {
    sub_227BF10(v1, v6, v5);
  }
  else if ( v5 )
  {
    memcpy(v4, v6, v5);
    v1[4] += v5;
  }
  v7 = *(void **)(a1 + 64);
  if ( v7 != (void *)(a1 + 88) )
    free(v7);
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
    (*(void (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v8 + 8LL))(v8, v6);
  v9 = *(_DWORD *)(a1 + 44) == 1;
  *(_QWORD *)a1 = &unk_2C76210;
  if ( v9 )
  {
    v10 = *(void **)(a1 + 16);
    if ( v10 )
      operator delete[](v10);
  }
}
