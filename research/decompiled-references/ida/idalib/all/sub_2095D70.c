void __fastcall sub_2095D70(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // r12
  void *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi

  v2 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)a1 = &unk_2C72528;
  for ( i = &v2[*(unsigned int *)(a1 + 24)]; i != v2; ++v2 )
  {
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
  }
  v4 = *(void **)(a1 + 232);
  if ( v4 != (void *)(a1 + 248) )
    free(v4);
  v5 = *(unsigned int *)(a1 + 224);
  v6 = *(_QWORD *)(a1 + 208);
  v7 = (_QWORD *)(a1 + 32);
  operator delete(v6, 16 * v5, 8);
  v8 = (_QWORD *)*(v7 - 2);
  if ( v8 != v7 )
    free(v8);
}
