unsigned __int64 __fastcall sub_48BE80(void **a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  const char *v13; // rsi
  const char *v14; // r9
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __m128i v27; // xmm1
  char *v28; // rdi
  __m128i v29; // xmm0
  __int64 v30; // r13
  __int64 v31; // r12
  char *v32; // rbp
  char *v33; // rdx
  __int64 v34; // r15
  __int64 i; // rbx
  char *v36; // rax
  void *v37; // rdi
  char *v38; // rdx
  __int64 v39; // r15
  __int64 j; // rbx
  char *v41; // rax
  void *v42; // rdi
  unsigned __int64 v44; // [rsp+8h] [rbp-B0h]
  _QWORD *v46; // [rsp+20h] [rbp-98h] BYREF
  _QWORD *v47; // [rsp+28h] [rbp-90h]
  __m128i v48; // [rsp+30h] [rbp-88h]
  void *v49; // [rsp+40h] [rbp-78h] BYREF
  __int128 v50; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+58h] [rbp-60h]
  __m128i v52; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v3 = a2[1];
  v4 = v3 + 1;
  v53 = __readfsqword(0x28u);
  v5 = a3[1];
  v44 = v3;
  v46 = a2;
  v47 = a3;
  v49 = nullptr;
  ptr = nullptr;
  v6 = (v3 + 1) * (v5 + 1);
  v48 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v5);
  v50 = 0;
  v52 = 0;
  if ( v6 )
  {
    v49 = (void *)qvector_reserve(&v49, 0, v4 * (v5 + 1), 8);
    memset((char *)v49 + 8 * v50, 0, 8 * (v6 - v50));
    *(_QWORD *)&v50 = v4 * (v5 + 1);
  }
  v7 = -24;
  v8 = 0;
  if ( v4 )
  {
    while ( v5 == -1 )
    {
LABEL_26:
      v26 = v8;
      v7 += 24;
      ++v8;
      if ( v44 == v26 )
        goto LABEL_27;
    }
    while ( 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = v9 + v8 * (v48.m128i_i64[1] + 1);
        if ( v10 >= (unsigned __int64)v50 )
        {
          if ( !under_debugger )
            interr(2351);
LABEL_63:
          BUG();
        }
        *((_QWORD *)v49 + v10) = 0;
        v11 = v9 + 1;
        if ( v5 == v9 )
          break;
        ++v9;
        if ( v11 && v8 )
        {
          v12 = v8 - 1;
          while ( 1 )
          {
            v20 = v9 - 1;
            v21 = *v47 + 24 * v9 - 24;
            v22 = *(_QWORD *)(v7 + *v46 + 8);
            if ( *(_QWORD *)(v21 + 8) )
            {
              v13 = *(const char **)v21;
              v14 = haystack;
              if ( !v22 )
                goto LABEL_13;
            }
            else
            {
              v13 = haystack;
              if ( !v22 )
              {
LABEL_23:
                v23 = v20 + (v48.m128i_i64[1] + 1) * v12;
                if ( v23 >= (unsigned __int64)v50 )
                {
                  if ( !under_debugger )
                    interr(2351);
                  goto LABEL_63;
                }
                v24 = v9 + v8 * (v48.m128i_i64[1] + 1);
                v25 = *((_QWORD *)v49 + v23) + 1LL;
                if ( v24 >= (unsigned __int64)v50 )
                {
                  if ( !under_debugger )
                    interr(2351);
                  goto LABEL_63;
                }
                *((_QWORD *)v49 + v24) = v25;
                v19 = v9 + 1;
                if ( v5 == v9 )
                  goto LABEL_26;
                goto LABEL_20;
              }
            }
            v14 = *(const char **)(v7 + *v46);
LABEL_13:
            if ( !strcmp(v14, v13) )
              goto LABEL_23;
            v15 = v9 + (v48.m128i_i64[1] + 1) * v12;
            if ( v15 >= (unsigned __int64)v50 )
            {
              if ( !under_debugger )
                interr(2351);
              goto LABEL_63;
            }
            v16 = v8 * (v48.m128i_i64[1] + 1);
            v17 = *((_QWORD *)v49 + v15);
            if ( v20 + v16 >= (unsigned __int64)v50 )
            {
              if ( !under_debugger )
                interr(2351);
              goto LABEL_63;
            }
            if ( v17 < *((_QWORD *)v49 + v20 + v16) )
              v17 = *((_QWORD *)v49 + v20 + v16);
            v18 = v9 + v16;
            if ( v18 >= (unsigned __int64)v50 )
            {
              if ( !under_debugger )
                interr(2351);
              goto LABEL_63;
            }
            *((_QWORD *)v49 + v18) = v17;
            v19 = v9 + 1;
            if ( v5 == v9 )
              goto LABEL_49;
LABEL_20:
            v9 = v19;
          }
        }
      }
LABEL_49:
      v7 += 24;
      if ( v44 == v8 )
        break;
      ++v8;
    }
  }
LABEL_27:
  txtdiff_t_diff_mod(&v46);
  v27 = _mm_load_si128(&v52);
  v28 = (char *)*a1;
  v29 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  *a1 = ptr;
  *(__m128i *)(a1 + 1) = v27;
  ptr = v28;
  v52 = v29;
  if ( v28 )
  {
    if ( v29.m128i_i64[0] )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v32 = &v28[v30];
        v33 = *(char **)&v28[v30 + 24];
        if ( v33 )
        {
          v34 = *((_QWORD *)v32 + 4);
          if ( v34 )
          {
            for ( i = 0; i != v34; ++i )
            {
              v36 = &v33[24 * i];
              v37 = *(void **)v36;
              if ( *(_QWORD *)v36 )
              {
                *((_QWORD *)v36 + 1) = 0;
                qfree(v37);
                v33 = *((char **)v32 + 3);
              }
            }
          }
          *((_QWORD *)v32 + 4) = 0;
          qfree(v33);
        }
        v38 = *(char **)v32;
        if ( *(_QWORD *)v32 )
        {
          v39 = *((_QWORD *)v32 + 1);
          if ( v39 )
          {
            for ( j = 0; j != v39; ++j )
            {
              v41 = &v38[24 * j];
              v42 = *(void **)v41;
              if ( *(_QWORD *)v41 )
              {
                *((_QWORD *)v41 + 1) = 0;
                qfree(v42);
                v38 = *(char **)v32;
              }
            }
          }
          *((_QWORD *)v32 + 1) = 0;
          qfree(v38);
        }
        ++v31;
        v28 = (char *)ptr;
        v30 += 56;
      }
      while ( v29.m128i_i64[0] != v31 );
    }
    v52.m128i_i64[0] = 0;
    qfree(v28);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  return v53 - __readfsqword(0x28u);
}
