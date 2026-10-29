__int64 __fastcall sub_31DCF0(
        _QWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  size_t v16; // rbx
  const char *v17; // rax
  const char *v18; // r12
  const char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  unsigned int v26; // ebx
  char s2; // [rsp+0h] [rbp-48h]
  char *s2a; // [rsp+0h] [rbp-48h]
  void *v30; // [rsp+8h] [rbp-40h]

  v16 = *(_QWORD *)(a2 + 8);
  v30 = nullptr;
  if ( v16 )
  {
    v30 = (void *)qalloc_or_throw(v16);
    memcpy(v30, *(const void **)a2, v16);
  }
  v17 = &s1;
  if ( v16 )
    LOBYTE(v17) = (_BYTE)v30;
  s2 = (char)v17;
  while ( 1 )
  {
    v19 = nullptr;
    v26 = sub_196F50(a2, 0, (int)"Enter snippet name", a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, s2);
    if ( !(_BYTE)v26 )
      break;
    if ( *(_QWORD *)(a2 + 8) <= 1u || (v18 = *(const char **)a2, !a3) && (v19 = s2a, !strcmp(*(const char **)a2, s2a)) )
    {
      v26 = 0;
      break;
    }
    v19 = v18;
    if ( !(*(__int64 (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a1 + 16LL))(*a1, v18) )
      break;
    sub_169630(
      (int)"Snippet '%s' already exists!",
      (__int64)v18,
      v20,
      v21,
      v22,
      v23,
      a7,
      a8,
      a9,
      a10,
      v24,
      v25,
      a13,
      a14,
      (char)s2a);
  }
  if ( v30 )
    qfree(v30, v19);
  return v26;
}
