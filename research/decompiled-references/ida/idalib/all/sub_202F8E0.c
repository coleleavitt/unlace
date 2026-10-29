__int64 __fastcall sub_202F8E0(__int64 a1, const char **a2)
{
  const char *v2; // rbp
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r12

  v2 = *a2;
  if ( *a2 )
  {
    v4 = j__strlen(*a2);
    v5 = *(void **)(a1 + 32);
    v6 = v4;
    if ( v4 > *(_QWORD *)(a1 + 24) - (_QWORD)v5 )
      return sub_227BF10(a1, v2, v4);
    if ( v4 )
    {
      memcpy(v5, v2, v4);
      *(_QWORD *)(a1 + 32) += v6;
    }
  }
  return a1;
}
