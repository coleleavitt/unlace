/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140002FB0
// Address: 0x0000000140002FB0

//----- (0000000140002FB0) ----------------------------------------------------
__int64 sub_140002FB0(__int64 a1, char *a2, ...)
{
  void *v3; // rcx
  int v5; // eax
  unsigned __int64 v6; // rbp
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  v3 = *(void **)a1;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v5 = sub_14005B240(nullptr, 0, a2, va);
  if ( v5 )
  {
    v6 = v5 + 1LL;
    if ( v6 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v6, 1u);
    *(_QWORD *)(a1 + 8) = v6;
    sub_14005B240(*(struct __crt_locale_pointers **)a1, v6, a2, va);
  }
  return a1;
}
