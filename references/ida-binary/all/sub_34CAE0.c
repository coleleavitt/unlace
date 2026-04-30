__int64 __fastcall enc_chooser_t__::vfunc_12(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r14d
  __int64 v11; // r12
  const char *encoding_name; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  double v21; // xmm0_8
  const char *v22; // rbp
  size_t v23; // rax
  size_t v24; // r15
  size_t v25; // r13
  size_t v26; // rbp
  char v27; // al
  const char *v28; // r13
  const char *v29; // rsi
  const char *v30; // rbp
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // r15
  __int64 v34; // rdi
  const char *v35; // rax
  __int64 encoding_bpu_by_name; // r15
  int v37; // eax
  __int64 v38; // rdx
  void **p_src; // [rsp+0h] [rbp-68h]
  char *s2; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4 * a2);
  if ( !v10 )
    return -1;
  encoding_name = (const char *)get_encoding_name(v10);
  v21 = 0.0;
  src = nullptr;
  v22 = encoding_name;
  *(_OWORD *)n = 0;
  if ( !encoding_name )
  {
    p_src = &src;
    goto LABEL_22;
  }
  v23 = strlen(encoding_name);
  v24 = v23 + 1;
  p_src = &src;
  v25 = v23;
  src = (void *)qvector_reserve(&src, 0, v23 + 1, 1);
  n[0] = v24;
  memmove(src, v22, v25);
  *((_BYTE *)src + v25) = 0;
  v26 = n[0];
  if ( !n[0] )
  {
LABEL_22:
    s2 = nullptr;
    v27 = 1;
    goto LABEL_7;
  }
  s2 = (char *)qalloc_or_throw(n[0]);
  memcpy(s2, src, v26);
  v27 = 0;
LABEL_7:
  v28 = &s1;
  if ( !v27 )
    v28 = s2;
  while ( 1 )
  {
    do
    {
      v29 = nullptr;
      if ( (unsigned __int8)sub_196F50(
                              (int)p_src,
                              0,
                              (int)"Enter an encoding name",
                              v16,
                              v17,
                              v18,
                              (__m128)0LL,
                              a4,
                              a5,
                              a6,
                              v19,
                              v20,
                              a9,
                              a10,
                              (char)p_src) )
      {
        if ( n[0] > 1 )
        {
          v30 = (const char *)src;
          v29 = v28;
          if ( strcmp((const char *)src, v28) )
            continue;
        }
      }
      v38 = -1;
      goto LABEL_24;
    }
    while ( !(unsigned __int8)sub_1C74B0((__int64)v30, 0.0, a4, a5, a6, v31, v32, a9, a10) );
    v29 = v30;
    if ( (unsigned __int8)rename_encoding(v10, v30) )
    {
      v38 = a2;
      goto LABEL_24;
    }
    v33 = 0;
    if ( *(_QWORD *)(a1 + 224) )
      break;
LABEL_18:
    encoding_bpu_by_name = (unsigned int)get_encoding_bpu_by_name(v28);
    if ( v10 == (unsigned int)get_default_encoding_idx(encoding_bpu_by_name) )
    {
      v37 = get_encoding_bpu_by_name(v30);
      v16 = (unsigned int)encoding_bpu_by_name;
      if ( (_DWORD)encoding_bpu_by_name != v37 )
        sub_169630(
          (int)"Cannot rename encoding used as %d-bit default encoding to the %d-bit encoding",
          (unsigned int)(8 * encoding_bpu_by_name),
          (unsigned int)(8 * v37),
          (unsigned int)(8 * encoding_bpu_by_name),
          v17,
          v18,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v19,
          v20,
          a9,
          a10,
          (char)p_src);
    }
  }
  while ( 1 )
  {
    v34 = *(unsigned int *)(*(_QWORD *)(a1 + 216) + 4 * v33);
    if ( (_DWORD)v34 )
    {
      v35 = (const char *)get_encoding_name(v34);
      v29 = v30;
      if ( !strcmp(v35, v30) )
        break;
    }
    if ( (unsigned __int64)++v33 >= *(_QWORD *)(a1 + 224) )
      goto LABEL_18;
  }
  v38 = v33;
LABEL_24:
  v11 = v38;
  if ( s2 )
    v21 = qfree(s2, v29);
  if ( src )
  {
    n[0] = 0;
    qfree(src, v29, v21);
  }
  return v11;
}
