__int64 __fastcall sub_727DF0(__int64 *a1, void **p_ptr, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v8; // rbp
  size_t v10; // rdx
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  void *v18; // rax
  unsigned int token; // eax
  const char *v20; // rax
  __int64 v21; // rdx
  size_t n; // [rsp+0h] [rbp-80h]
  void *ptr; // [rsp+8h] [rbp-78h] BYREF
  __int128 v24; // [rsp+10h] [rbp-70h]
  __int16 v25; // [rsp+20h] [rbp-60h]
  int v26; // [rsp+24h] [rbp-5Ch]
  char v27; // [rsp+28h] [rbp-58h]
  __m128i v28; // [rsp+30h] [rbp-50h]
  unsigned __int64 v29; // [rsp+40h] [rbp-40h]

  v8 = (__int64)p_ptr;
  v10 = *(_QWORD *)(a3 + 8);
  v29 = __readfsqword(0x28u);
  v24 = 0;
  ptr = nullptr;
  if ( v10 )
  {
    n = v10;
    v18 = (void *)qalloc_or_throw(v10, (const char *)p_ptr);
    p_ptr = *(void ***)a3;
    ptr = v18;
    *((_QWORD *)&v24 + 1) = n;
    memcpy(v18, p_ptr, n);
    *(_QWORD *)&v24 = n;
  }
  v12 = *(_WORD *)(a3 + 24);
  v13 = *(int *)(a3 + 28);
  v14 = *(unsigned __int8 *)(a3 + 32);
  v25 = v12;
  v26 = v13;
  v27 = v14;
  v28 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  if ( v12 == 45 )
  {
    p_ptr = &ptr;
    token = lex_get_token(v8);
    if ( token )
    {
      v20 = (const char *)qstrerror(token, &ptr, v13, v14);
LABEL_24:
      sub_727620(v8, (__int64)"%s", v20);
    }
    if ( v25 == 8 )
    {
      v21 = v28.m128i_i64[0];
    }
    else
    {
      if ( ((v25 - 3) & 0xFFFD) != 0 )
      {
LABEL_23:
        v20 = (const char *)qstrerror(1352, p_ptr, v13, v14);
        goto LABEL_24;
      }
      v21 = v26;
    }
    v13 = -v21;
    if ( !a6 )
      goto LABEL_8;
    goto LABEL_13;
  }
  if ( v12 == 8 )
  {
    v13 = v28.m128i_i64[0];
    if ( !a6 )
      goto LABEL_8;
    goto LABEL_13;
  }
  if ( v12 != 3 && v12 != 5 )
    goto LABEL_23;
  if ( !a6 )
  {
LABEL_8:
    if ( v13 < a4 )
      sub_727620(v8, (__int64)"number %lld is too low (must be at least %lld)", v13, a4);
    if ( v13 > a5 )
      sub_727620(v8, (__int64)"number %lld is too high (must be at most %lld)", v13, a5);
    goto LABEL_10;
  }
LABEL_13:
  v16 = v13;
  v17 = a6 & v13;
  if ( v13 != (a6 & v13) && (v17 & (a6 ^ (a6 >> 1))) != 0 && (~a6 & ~v13) == 0 )
  {
    v13 &= a6;
    v16 = v17;
  }
  if ( v16 < a4 )
    sub_727620(v8, (__int64)"number 0x%llX is too low (must be at least 0x%llX)", v16, a4);
  if ( a5 < v16 )
    sub_727620(v8, (__int64)"number 0x%llX is too high (must be at most 0x%llX)", v16, a5);
LABEL_10:
  *a1 = v13;
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
  return 1;
}

