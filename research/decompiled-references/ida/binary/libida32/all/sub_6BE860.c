__int64 __fastcall sub_6BE860(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, const char *a5, __int64 a6)
{
  __int64 v7; // rbp
  const char *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r14
  const char *v11; // rdi
  size_t v12; // rax
  size_t v13; // rbp
  void *v15; // rdi
  size_t v16; // r12
  unsigned __int64 v17; // r12
  char *v18; // rbx
  unsigned __int64 v19; // rbx
  __m128i v20; // xmm0
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  __m128i v23; // xmm0
  char *v24; // r14
  __int64 v25; // rax
  char *v26; // rdi
  __int64 v27; // rax
  size_t v28; // rax
  size_t v29; // r15
  unsigned __int64 v30; // r12
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __m128i v34; // xmm0
  const char *v35; // rax
  char *v36; // rsi
  char *v37; // rax
  __m128i v39; // [rsp+10h] [rbp-98h] BYREF
  size_t p_ptr; // [rsp+20h] [rbp-88h]
  __int64 v41; // [rsp+28h] [rbp-80h]
  char *s1; // [rsp+30h] [rbp-78h] BYREF
  __m128i v43; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __m128i v45; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]

  v41 = a3;
  LODWORD(p_ptr) = a4;
  v39.m128i_i64[0] = a6;
  v46 = __readfsqword(0x28u);
  if ( a5 )
  {
    v7 = a1[71];
    v8 = a5;
    if ( !v7 )
      goto LABEL_9;
    v9 = a1[70];
    v10 = 0;
    while ( 1 )
    {
      v11 = haystack;
      if ( *(_QWORD *)(v9 + 32) )
        v11 = *(const char **)(v9 + 24);
      if ( !strcmp(v11, v8) )
        break;
      ++v10;
      v9 += 56;
      if ( v7 == v10 )
        goto LABEL_9;
    }
    v8 = *(const char **)v9;
    if ( *(_QWORD *)v9 )
    {
LABEL_9:
      v12 = strlen(v8);
      v13 = v12;
      if ( v12 )
      {
        v15 = (void *)*a2;
        v16 = v12 + 1;
        if ( a2[2] < v12 + 1 )
        {
          v25 = qvector_reserve(a2, *a2, v12 + 1, 1);
          *a2 = v25;
          v15 = (void *)v25;
        }
        a2[1] = v16;
        memmove(v15, v8, v13);
        *(_BYTE *)(*a2 + v13) = 0;
        if ( (p_ptr & 1) == 0 || a2[1] > 1u )
          goto LABEL_11;
        goto LABEL_16;
      }
    }
  }
  a2[1] = 0;
  if ( (p_ptr & 1) == 0 )
  {
LABEL_11:
    sub_6B9AB0((__int64)a1, (__int64)a2);
    return 1;
  }
LABEL_16:
  if ( v39.m128i_i64[0] )
  {
    if ( (unsigned __int8)tinfo_t__build_anon_type_name(a2, v41) )
    {
      sub_6B75D0((__int64 *)&s1, (__int64)a1, v39.m128i_i64[0]);
      sub_6B9AB0((__int64)a1, (__int64)&s1);
      v17 = v43.m128i_i64[0];
      if ( v43.m128i_i64[0] <= 1uLL )
      {
        if ( (*(_BYTE *)(v39.m128i_i64[0] + 28) & 0x7Fu) - 58 > 4 )
          goto LABEL_51;
      }
      else
      {
        v18 = s1;
        if ( strcmp(s1, "$::") || (*(_BYTE *)(v39.m128i_i64[0] + 28) & 0x7Fu) - 58 > 4 )
          goto LABEL_42;
      }
      v19 = *(_QWORD *)(v39.m128i_i64[0] + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v39.m128i_i64[0] + 16) & 4) != 0 )
        v19 = *(_QWORD *)v19;
      if ( v19 )
      {
        p_ptr = (size_t)&ptr;
        while ( 1 )
        {
          if ( (*(_BYTE *)(v19 + 8) & 0x7Fu) - 58 <= 4 && v19 != 64 )
          {
            sub_6B7530(p_ptr, (__int64)a1, v19 - 64);
            v23 = _mm_loadu_si128(&v45);
            v24 = (char *)ptr;
            v45 = 0;
            ptr = nullptr;
            v21 = v23.m128i_i64[0];
            if ( s1 )
            {
              v39 = v23;
              v43.m128i_i64[0] = 0;
              qfree(s1);
              v20 = _mm_load_si128(&v39);
              s1 = v24;
              v43 = v20;
              if ( ptr )
              {
                v45.m128i_i64[0] = 0;
                qfree(ptr);
                v21 = v43.m128i_i64[0];
              }
            }
            else
            {
              s1 = v24;
              v43 = v23;
            }
            if ( v21 > 1 )
              break;
          }
          v22 = *(_QWORD *)(sub_B68470(v19) + 16);
          v19 = v22 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v22 & 4) != 0 )
            v19 = *(_QWORD *)v19;
          if ( !v19 )
          {
            v21 = v43.m128i_i64[0];
            goto LABEL_37;
          }
        }
LABEL_54:
        v36 = s1;
        if ( v43.m128i_i64[1] < v21 + 2 )
        {
          s1 = (char *)qvector_reserve(&s1, s1, v21 + 2, 1);
          v36 = s1;
        }
        v43.m128i_i64[0] = v21 + 2;
        v36[v21 + 1] = 0;
        *(_WORD *)&s1[v21 - 1] = 14906;
LABEL_40:
        v17 = v43.m128i_i64[0];
        v26 = s1;
        if ( v43.m128i_i64[0] > 1uLL )
        {
          v18 = s1;
LABEL_42:
          v27 = a2[1];
          if ( v27 )
          {
            v28 = v27 - 1;
            v29 = v28;
            if ( v28 )
            {
              v30 = v17 - 1;
              v31 = v28 + v30;
              v32 = v28 + v30 + 1;
              if ( v43.m128i_i64[1] < v32 )
              {
                v39.m128i_i64[0] = v28 + v30;
                p_ptr = v28 + v30 + 1;
                v37 = (char *)qvector_reserve(&s1, v18, v32, 1);
                v31 = v39.m128i_i64[0];
                v32 = p_ptr;
                s1 = v37;
                v18 = v37;
              }
              v43.m128i_i64[0] = v32;
              v18[v31] = 0;
              memcpy(&s1[v30], (const void *)*a2, v29);
              v18 = s1;
            }
          }
          v26 = (char *)*a2;
          v33 = a2[2];
          *a2 = v18;
          v34 = _mm_loadu_si128(&v43);
          s1 = v26;
          v43.m128i_i64[1] = v33;
          *(__m128i *)(a2 + 1) = v34;
        }
LABEL_48:
        if ( v26 )
        {
          v43.m128i_i64[0] = 0;
          qfree(v26);
        }
        goto LABEL_11;
      }
      v21 = v17;
LABEL_37:
      if ( v21 > 1 )
        goto LABEL_54;
      if ( v17 > 1 )
      {
        sub_6B40D0((__int64 *)&s1, "$::");
        goto LABEL_40;
      }
LABEL_51:
      v26 = s1;
      goto LABEL_48;
    }
    sub_6BB730(a1, v39.m128i_i64[0], (__int64)"Could not create name for anonymous udt");
    return 0;
  }
  else
  {
    v35 = (const char *)dstr_tinfo(v41);
    sub_6BB730(a1, 0, (__int64)"Type does not have a name: %s", v35);
    return 0;
  }
}

