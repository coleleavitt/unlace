__int64 __fastcall sub_57B210(_QWORD *a1, char a2, const char *a3, const char *a4)
{
  __int64 (__fastcall *v4)(__int64); // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  bool v8; // zf
  const char *v9; // rax
  const char *v10; // r12
  char v11; // al
  const char *v12; // rcx
  size_t v15; // rax
  size_t v16; // r15
  size_t v17; // r14
  const char *v18; // rdx
  size_t v19; // rax
  __int64 v20; // r15
  size_t v21; // r12
  __m128i v22; // xmm0
  void *v23; // r14
  __int64 v24; // r12
  __m128i v25; // xmm0
  const char *v26; // rdx
  __m128i v27; // [rsp+0h] [rbp-A8h] BYREF
  void *ptr; // [rsp+10h] [rbp-98h] BYREF
  __m128i v29; // [rsp+18h] [rbp-90h]
  void *v30; // [rsp+30h] [rbp-78h] BYREF
  __m128i v31; // [rsp+38h] [rbp-70h] BYREF
  char s[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( (a2 & 1) == 0 )
    goto LABEL_2;
  ptr = nullptr;
  v29 = 0;
  if ( a3 )
  {
    v15 = strlen(a3);
    v16 = v15 + 1;
    v17 = v15;
    ptr = (void *)qvector_reserve(&ptr, 0, v15 + 1, 1);
    v29.m128i_i64[0] = v16;
    memmove(ptr, a3, v17);
    *((_BYTE *)ptr + v17) = 0;
    if ( v29.m128i_i64[0] > 1uLL )
    {
      if ( a4 )
      {
LABEL_20:
        v18 = (const char *)ptr;
LABEL_21:
        sub_3804E0((__int64)a1, (__int64)"Processor       : %s [%s]", v18, a4);
        goto LABEL_22;
      }
LABEL_36:
      v26 = (const char *)ptr;
      goto LABEL_33;
    }
  }
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  v30 = nullptr;
  v31 = 0;
  v19 = strlen(s);
  v20 = v19 + 1;
  v21 = v19;
  v30 = (void *)qvector_reserve(&v30, 0, v19 + 1, 1);
  v31.m128i_i64[0] = v20;
  memmove(v30, s, v21);
  *((_BYTE *)v30 + v21) = 0;
  v22 = _mm_loadu_si128(&v31);
  v23 = v30;
  v31 = 0;
  v30 = nullptr;
  v24 = v22.m128i_i64[0];
  if ( ptr )
  {
    v27 = v22;
    v29.m128i_i64[0] = 0;
    qfree(ptr);
    v25 = _mm_load_si128(&v27);
    ptr = v23;
    v29 = v25;
    if ( v30 )
    {
      v31.m128i_i64[0] = 0;
      qfree(v30);
      v24 = v29.m128i_i64[0];
    }
  }
  else
  {
    ptr = v23;
    v29 = v22;
  }
  if ( a4 )
  {
    v18 = haystack;
    if ( !v24 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( v24 )
    goto LABEL_36;
  v26 = haystack;
LABEL_33:
  sub_3804E0((__int64)a1, (__int64)"Processor       : %s", v26);
LABEL_22:
  if ( ptr )
  {
    v29.m128i_i64[0] = 0;
    qfree(ptr);
  }
LABEL_2:
  if ( (a2 & 2) != 0 )
    sub_3804E0((__int64)a1, (__int64)"Target assembler: %s", *(const char **)(a1[79] + 8LL));
  if ( (a2 & 4) != 0 )
  {
    v8 = (unsigned __int8)getinf_flag(3, 32) == 0;
    v9 = "Big endian";
    if ( v8 )
      v9 = "Little endian";
    v10 = v9;
    if ( (a2 & 0x10) != 0 )
    {
      v11 = getinf_flag(3, 64);
      v12 = "high_byte_last";
      if ( v11 )
        v12 = "high_byte_first";
      sub_3804E0((__int64)a1, (__int64)"Byte sex        : %s, %s", v10, v12);
    }
    else
    {
      sub_3804E0((__int64)a1, (__int64)"Byte sex        : %s", v9);
    }
  }
  if ( (a2 & 8) == 0 )
    return v33 - __readfsqword(0x28u);
  v4 = *(__int64 (__fastcall **)(__int64))(*a1 + 360LL);
  if ( v4 == sub_573030 )
  {
    v5 = *(_QWORD **)(a1[79] + 24LL);
    if ( v5 && *v5 )
    {
      do
      {
        sub_35CEC0((__int64)a1, 0, (__int64)&unk_22D5EB0);
        v6 = v5[1];
        ++v5;
      }
      while ( v6 );
    }
    return v33 - __readfsqword(0x28u);
  }
  return v4((__int64)a1);
}
