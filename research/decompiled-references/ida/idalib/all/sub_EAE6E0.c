_BYTE *__fastcall sub_EAE6E0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  void *v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  _BYTE *result; // rax

  v3 = *a1;
  v4 = *(void **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v4 > 0xDu )
  {
    qmemcpy(v4, "default_async(", 14);
    *(_QWORD *)(v3 + 32) += 14LL;
  }
  else
  {
    sub_227BF10(v3, "default_async(", 14);
  }
  LODWORD(v5) = 0;
  if ( *(_QWORD *)(a2 + 32) )
    v5 = **(_QWORD **)(a2 + 24);
  sub_F07C00(v5, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
  v6 = *a1;
  result = *(_BYTE **)(*a1 + 32LL);
  if ( result == *(_BYTE **)(*a1 + 24LL) )
    return (_BYTE *)sub_227BF10(v6, ")", 1);
  *result = 41;
  ++*(_QWORD *)(v6 + 32);
  return result;
}
