unsigned __int64 __fastcall sub_1949B0(__int64 *a1, const char *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char **v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rax
  const char **v12; // rbx
  __int64 v13; // r13
  const char *v14; // rsi
  const char *v15; // rdi
  const char *v16; // rdi
  char **p_s2; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __m128i v21; // xmm0
  char *v22; // r14
  __int64 v23; // r13
  __m128i v24; // xmm0
  __int64 v25; // rax
  char *v26; // r14
  const char *v27; // r13
  size_t v28; // r15
  const char *v29; // rdx
  const char *v30; // rdi
  __int64 v32; // r13
  const char *v33; // rdi
  void *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  const char *v38; // rdx
  __int64 v39; // rax
  char *v40; // rsi
  const char *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // [rsp+0h] [rbp-B8h]
  __m128i v45; // [rsp+10h] [rbp-A8h] BYREF
  const char *v46; // [rsp+20h] [rbp-98h] BYREF
  __int64 v47; // [rsp+28h] [rbp-90h]
  char *s2; // [rsp+40h] [rbp-78h] BYREF
  __m128i v49; // [rsp+48h] [rbp-70h]
  char *v50; // [rsp+60h] [rbp-58h] BYREF
  __m128i v51; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp-40h]

  v43 = (__int64)a2;
  v52 = __readfsqword(0x28u);
  v5 = sub_1EA540(a2 + 384);
  v9 = (const char **)*a1;
  v10 = v5;
  v11 = 24 * a1[1];
  v12 = (const char **)(*a1 + v11);
  if ( !a3 )
  {
    if ( !v11 )
      return v52 - __readfsqword(0x28u);
    v32 = *(_QWORD *)(v10 + 8);
    while ( 1 )
    {
      if ( v9[1] )
      {
        a2 = *v9;
        v33 = &s1;
        if ( !v32 )
          goto LABEL_40;
      }
      else
      {
        if ( !v32 )
        {
LABEL_11:
          if ( v9 == v12 )
            return v52 - __readfsqword(0x28u);
          v16 = *v9;
          if ( *v9 )
          {
            v9[1] = nullptr;
            qfree(v16, a2, v6, v7, v8);
          }
          memmove(v9, v9 + 3, *a1 + 24 * a1[1]-- - (_QWORD)v9 - 24);
LABEL_15:
          sub_191EF0((__int64)&v46, v10);
          v49 = 0;
          s2 = nullptr;
          sub_194860(a1, (__int64 *)&s2, v43, 0);
          p_s2 = &s2;
          sub_191EF0((__int64)&v50, (__int64)&s2);
          v21 = _mm_loadu_si128(&v51);
          v22 = v50;
          v51 = 0;
          v50 = nullptr;
          v23 = v21.m128i_i64[0];
          if ( s2 )
          {
            v45 = v21;
            v49.m128i_i64[0] = 0;
            qfree(s2, &s2, v18, v19, v20);
            v24 = _mm_load_si128(&v45);
            s2 = v22;
            v49 = v24;
            if ( v50 )
            {
              v51.m128i_i64[0] = 0;
              qfree(v50, &s2, v18, v19, v20);
              v23 = v49.m128i_i64[0];
            }
            v25 = v47;
            if ( v23 )
            {
LABEL_19:
              v26 = s2;
              v27 = &s1;
              if ( !v25 )
                goto LABEL_20;
              goto LABEL_32;
            }
          }
          else
          {
            s2 = v22;
            v25 = v47;
            v49 = v21;
            if ( v21.m128i_i64[0] )
              goto LABEL_19;
          }
          v26 = (char *)&s1;
          if ( v25 )
          {
LABEL_32:
            v27 = v46;
LABEL_20:
            p_s2 = (char **)v26;
            if ( strcmp(v27, v26) )
            {
              v28 = *(_QWORD *)(v10 + 8);
              if ( a3 )
              {
                v34 = nullptr;
                if ( v28 )
                {
                  v34 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 8));
                  memcpy(v34, *(const void **)v10, v28);
                }
                v35 = a1[1];
                v36 = *a1;
                if ( a1[2] < (unsigned __int64)(v35 + 1) )
                {
                  v42 = qvector_reserve(a1, v36, v35 + 1, 24);
                  *a1 = v42;
                  v35 = a1[1];
                  v36 = v42;
                }
                v37 = 3 * v35;
                v38 = &s1;
                v39 = v36 + 8 * v37;
                *(_QWORD *)v39 = v34;
                *(__m128i *)(v39 + 8) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
                ++a1[1];
                if ( *(_QWORD *)(v10 + 8) )
                  v38 = *(const char **)v10;
                v40 = (char *)&s1;
                if ( v49.m128i_i64[0] )
                  v40 = s2;
                v41 = &s1;
                if ( v47 )
                  v41 = v46;
                navstack_t_perform_move(v41, v40, v38, 1);
              }
              else
              {
                v29 = &s1;
                if ( v28 )
                  v29 = *(const char **)v10;
                navstack_t_perform_move(v26, v27, v29, 0);
              }
              sub_194860(a1, (__int64 *)&s2, v43, 1);
              p_s2 = &s2;
              sub_192020(v43, (__int64)&s2);
              if ( s2 )
              {
                v49.m128i_i64[0] = 0;
                qfree(s2, &s2, v18, v19, v20);
              }
              v30 = v46;
              if ( !v46 )
                return v52 - __readfsqword(0x28u);
              goto LABEL_28;
            }
          }
          if ( s2 )
          {
            v49.m128i_i64[0] = 0;
            qfree(s2, p_s2, v18, v19, v20);
          }
          v30 = v46;
          if ( !v46 )
            return v52 - __readfsqword(0x28u);
LABEL_28:
          v47 = 0;
          qfree(v30, p_s2, v18, v19, v20);
          return v52 - __readfsqword(0x28u);
        }
        a2 = &s1;
      }
      v33 = *(const char **)v10;
LABEL_40:
      if ( !strcmp(v33, a2) )
        goto LABEL_11;
      v9 += 3;
      if ( v9 == v12 )
        return v52 - __readfsqword(0x28u);
    }
  }
  if ( v9 == v12 )
    goto LABEL_15;
  v13 = *(_QWORD *)(v10 + 8);
  while ( 1 )
  {
    if ( v9[1] )
    {
      v14 = *v9;
      v15 = &s1;
      if ( !v13 )
        goto LABEL_5;
      goto LABEL_10;
    }
    if ( !v13 )
      break;
    v14 = &s1;
LABEL_10:
    v15 = *(const char **)v10;
LABEL_5:
    if ( !strcmp(v15, v14) )
      break;
    v9 += 3;
    if ( v9 == v12 )
      goto LABEL_15;
  }
  if ( v9 == v12 )
    goto LABEL_15;
  return v52 - __readfsqword(0x28u);
}
