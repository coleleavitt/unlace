__int64 __fastcall sub_748330(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        signed __int64 a4,
        signed __int64 a5,
        unsigned __int64 a6)
{
  size_t v9; // rdx
  __int16 v11; // ax
  signed __int64 v12; // rdx
  const char *v13; // rax
  unsigned __int64 v15; // rbx
  signed __int64 v16; // rax
  unsigned int token; // eax
  size_t n; // [rsp+0h] [rbp-90h]
  void *ptr; // [rsp+8h] [rbp-88h]
  unsigned __int64 v20; // [rsp+38h] [rbp-58h]

  v9 = *(_QWORD *)(a3 + 8);
  ptr = nullptr;
  if ( v9 )
  {
    n = v9;
    ptr = (void *)qalloc_or_throw(v9);
    memcpy(ptr, *(const void **)a3, n);
  }
  v11 = *(_WORD *)(a3 + 24);
  v12 = *(_QWORD *)(a3 + 32);
  v20 = _mm_loadu_si128((const __m128i *)(a3 + 48)).m128i_u64[0];
  if ( v11 == 45 )
  {
    token = lex_get_token(a2);
    if ( token )
    {
      v13 = (const char *)qstrerror(token);
LABEL_7:
      sub_747B60(a2, (__int64)"%s", v13);
    }
LABEL_6:
    v13 = (const char *)qstrerror(1352);
    goto LABEL_7;
  }
  if ( v11 == 8 )
  {
    v12 = v20;
    if ( !a6 )
    {
LABEL_9:
      if ( v12 < a4 )
        sub_747B60(a2, (__int64)"number %lld is too low (must be at least %lld)", v12, a4);
      if ( v12 > a5 )
        sub_747B60(a2, (__int64)"number %lld is too high (must be at most %lld)", v12, a5);
      goto LABEL_11;
    }
  }
  else
  {
    if ( ((v11 - 3) & 0xFFFD) != 0 )
      goto LABEL_6;
    if ( !a6 )
      goto LABEL_9;
  }
  v15 = v12;
  v16 = a6 & v12;
  if ( v12 != (a6 & v12) && (v16 & (a6 ^ (a6 >> 1))) != 0 && (~a6 & ~v12) == 0 )
  {
    v12 &= a6;
    v15 = v16;
  }
  if ( v15 < a4 )
    sub_747B60(a2, (__int64)"number 0x%llX is too low (must be at least 0x%llX)", v15, a4);
  if ( a5 < v15 )
    sub_747B60(a2, (__int64)"number 0x%llX is too high (must be at most 0x%llX)", v15, a5);
LABEL_11:
  *a1 = v12;
  if ( ptr )
    qfree(ptr);
  return 1;
}
