unsigned __int64 __fastcall sub_1213D0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  const char **v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  const char **v9; // rbx
  __int64 v10; // r13
  const char *v11; // rsi
  const char *v12; // rdi
  __m128i v13; // xmm0
  char *v14; // r14
  __int64 v15; // r13
  __m128i v16; // xmm0
  __int64 v17; // rax
  char *v18; // r14
  const char *v19; // r13
  size_t v20; // r15
  __int64 v22; // r13
  const char *v23; // rsi
  const char *v24; // rdi
  void *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v32; // [rsp+10h] [rbp-A8h] BYREF
  const char *v33; // [rsp+20h] [rbp-98h] BYREF
  __int64 v34; // [rsp+28h] [rbp-90h]
  char *s2; // [rsp+40h] [rbp-78h] BYREF
  __m128i v36; // [rsp+48h] [rbp-70h]
  char *v37; // [rsp+60h] [rbp-58h] BYREF
  __m128i v38; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v5 = sub_15D780(a2 + 440);
  v6 = (const char **)*a1;
  v7 = v5;
  v8 = 24 * a1[1];
  v9 = (const char **)(*a1 + v8);
  if ( !a3 )
  {
    if ( !v8 )
      return v39 - __readfsqword(0x28u);
    v22 = *(_QWORD *)(v7 + 8);
    while ( 1 )
    {
      if ( v6[1] )
      {
        v23 = *v6;
        v24 = s1;
        if ( !v22 )
          goto LABEL_38;
      }
      else
      {
        if ( !v22 )
        {
LABEL_11:
          if ( v6 == v9 )
            return v39 - __readfsqword(0x28u);
          if ( *v6 )
          {
            v6[1] = nullptr;
            qfree();
          }
          memmove(v6, v6 + 3, *a1 + 24 * a1[1]-- - (_QWORD)v6 - 24);
LABEL_15:
          sub_120310((__int64)&v33, v7);
          v36 = 0;
          s2 = nullptr;
          sub_121200(a1, (__int64)&s2, a2, 0);
          sub_120310((__int64)&v37, (__int64)&s2);
          v13 = _mm_loadu_si128(&v38);
          v14 = v37;
          v38 = 0;
          v37 = nullptr;
          v15 = v13.m128i_i64[0];
          if ( s2 )
          {
            v32 = v13;
            v36.m128i_i64[0] = 0;
            qfree();
            v16 = _mm_load_si128(&v32);
            s2 = v14;
            v36 = v16;
            if ( v37 )
            {
              v38.m128i_i64[0] = 0;
              qfree();
              v15 = v36.m128i_i64[0];
            }
            v17 = v34;
            if ( v15 )
            {
LABEL_19:
              v18 = s2;
              v19 = s1;
              if ( !v17 )
                goto LABEL_20;
              goto LABEL_30;
            }
          }
          else
          {
            s2 = v14;
            v17 = v34;
            v36 = v13;
            if ( v13.m128i_i64[0] )
              goto LABEL_19;
          }
          v18 = (char *)s1;
          if ( v17 )
          {
LABEL_30:
            v19 = v33;
LABEL_20:
            if ( strcmp(v19, v18) )
            {
              v20 = *(_QWORD *)(v7 + 8);
              if ( a3 )
              {
                v25 = nullptr;
                if ( v20 )
                {
                  v25 = (void *)qalloc_or_throw();
                  memcpy(v25, *(const void **)v7, v20);
                }
                v26 = a1[1];
                v27 = *a1;
                if ( a1[2] < (unsigned __int64)(v26 + 1) )
                {
                  v29 = qvector_reserve();
                  *a1 = v29;
                  v26 = a1[1];
                  v27 = v29;
                }
                v28 = v27 + 24 * v26;
                *(_QWORD *)v28 = v25;
                *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
                ++a1[1];
                navstack_t_perform_move();
              }
              else
              {
                navstack_t_perform_move();
              }
              sub_121200(a1, (__int64)&s2, a2, 1);
              sub_120440(a2, (__int64)&s2);
              if ( s2 )
              {
                v36.m128i_i64[0] = 0;
                qfree();
              }
              if ( !v33 )
                return v39 - __readfsqword(0x28u);
              goto LABEL_26;
            }
          }
          if ( s2 )
          {
            v36.m128i_i64[0] = 0;
            qfree();
          }
          if ( !v33 )
            return v39 - __readfsqword(0x28u);
LABEL_26:
          v34 = 0;
          qfree();
          return v39 - __readfsqword(0x28u);
        }
        v23 = s1;
      }
      v24 = *(const char **)v7;
LABEL_38:
      if ( !strcmp(v24, v23) )
        goto LABEL_11;
      v6 += 3;
      if ( v6 == v9 )
        return v39 - __readfsqword(0x28u);
    }
  }
  if ( v6 == v9 )
    goto LABEL_15;
  v10 = *(_QWORD *)(v7 + 8);
  while ( 1 )
  {
    if ( v6[1] )
    {
      v11 = *v6;
      v12 = s1;
      if ( !v10 )
        goto LABEL_5;
      goto LABEL_10;
    }
    if ( !v10 )
      break;
    v11 = s1;
LABEL_10:
    v12 = *(const char **)v7;
LABEL_5:
    if ( !strcmp(v12, v11) )
      break;
    v6 += 3;
    if ( v6 == v9 )
      goto LABEL_15;
  }
  if ( v6 == v9 )
    goto LABEL_15;
  return v39 - __readfsqword(0x28u);
}

