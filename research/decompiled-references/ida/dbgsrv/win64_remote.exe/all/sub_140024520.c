/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140024520
// Address: 0x0000000140024520

//----- (0000000140024520) ----------------------------------------------------
__int64 sub_140024520(__int64 a1, char *a2, ...)
{
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = sub_14005B240(nullptr, 0, a2, va);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v6 - 1;
    if ( !v6 )
      v7 = 0;
    v8 = v5 + v7 + 1;
    if ( v8 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v5 + v7 + 1, 1u);
    *(_QWORD *)(a1 + 8) = v8;
    sub_14005B240((struct __crt_locale_pointers *)(v7 + *(_QWORD *)a1), v5 + 1, a2, va);
  }
  return a1;
}
