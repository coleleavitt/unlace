__int64 __fastcall sub_208D0A0(__int64 a1, const char *a2)
{
  __int64 v3; // r12
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r13

  v3 = *(_QWORD *)(a1 + 8);
  if ( !a2 )
    return a1;
  v4 = strlen(a2);
  v5 = *(void **)(v3 + 32);
  v6 = v4;
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    sub_227BF10(v3, a2, v4);
    return a1;
  }
  if ( !v4 )
    return a1;
  memcpy(v5, a2, v4);
  *(_QWORD *)(v3 + 32) += v6;
  return a1;
}
