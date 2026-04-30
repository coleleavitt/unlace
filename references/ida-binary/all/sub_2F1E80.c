unsigned __int64 __fastcall sub_2F1E80(__int64 *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  struct _Unwind_Exception *v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // r15
  _QWORD *v10; // r14
  unsigned __int64 v11; // rax
  char *v12; // rax
  const char *v13; // rsi
  const char *v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  char *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // r15
  __int64 i; // rbx
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 j; // rbx
  __int64 *v39; // rax
  __int64 v40; // rdi
  unsigned __int64 v42; // [rsp+8h] [rbp-E0h]
  __int64 (__fastcall **v44)(); // [rsp+20h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+28h] [rbp-C0h]
  __m128i v46; // [rsp+30h] [rbp-B8h] BYREF
  char v47; // [rsp+40h] [rbp-A8h]
  _QWORD *v48; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v49; // [rsp+58h] [rbp-90h]
  __m128i v50; // [rsp+60h] [rbp-88h]
  __int64 v51; // [rsp+70h] [rbp-78h] BYREF
  __int128 v52; // [rsp+78h] [rbp-70h]
  __int64 v53; // [rsp+88h] [rbp-60h]
  __int128 v54; // [rsp+90h] [rbp-58h]
  unsigned __int64 v55; // [rsp+A8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = (struct _Unwind_Exception *)(v4 + 1);
  v55 = __readfsqword(0x28u);
  v6 = (_QWORD *)a3[1];
  v42 = v4;
  v48 = (_QWORD *)a2;
  v49 = a3;
  v51 = 0;
  v53 = 0;
  v7 = (v4 + 1) * ((_QWORD)v6 + 1);
  v50 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(unsigned __int64)v6);
  v52 = 0;
  v54 = 0;
  if ( v7 )
  {
    a2 = 0;
    v51 = qvector_reserve(&v51, 0, (_QWORD)v5 * ((_QWORD)v6 + 1), 8);
    memset((void *)(v51 + 8 * v52), 0, 8 * (v7 - v52));
    *(_QWORD *)&v52 = (_QWORD)v5 * ((_QWORD)v6 + 1);
  }
  v8 = -24;
  v9 = 0;
  if ( v5 )
  {
    while ( v6 == (_QWORD *)-1LL )
    {
LABEL_26:
      v22 = v9;
      v8 += 24;
      ++v9;
      if ( v42 == v22 )
        goto LABEL_27;
    }
    while ( 1 )
    {
      v10 = nullptr;
      while ( 1 )
      {
        v11 = (unsigned __int64)v10 + v9 * (v50.m128i_i64[1] + 1);
        if ( v11 >= (unsigned __int64)v52 )
        {
LABEL_57:
          if ( !under_debugger )
          {
            interr(2351, a2, a3, a4, 0.0);
LABEL_59:
            if ( !under_debugger )
            {
              interr(2351, a2, a3, a4, 0.0);
LABEL_61:
              if ( !under_debugger )
              {
                interr(2351, a2, a3, a4, 0.0);
LABEL_63:
                if ( !under_debugger )
                {
                  interr(2351, a2, a3, a4, 0.0);
                  v44 = (__int64 (__fastcall **)())(v8 + 16);
                  if ( v45 )
                  {
                    v46.m128i_i64[0] = 0;
                    qfree(v45, (const char *)a2);
                  }
                  sub_26E940(v6, (const char *)a2);
                  _Unwind_Resume(v5);
                }
              }
            }
          }
          goto LABEL_67;
        }
        a2 = v51;
        *(_QWORD *)(v51 + 8 * v11) = 0;
        v12 = (char *)v10 + 1;
        if ( v6 == v10 )
          break;
        v10 = (_QWORD *)((char *)v10 + 1);
        if ( v12 && v9 )
        {
          v5 = (struct _Unwind_Exception *)(v9 - 1);
          while ( 1 )
          {
            v18 = (char *)v10 - 1;
            v19 = *v49 + 24LL * (_QWORD)v10 - 24;
            a4 = v8 + *v48;
            v20 = *(_QWORD *)(a4 + 8);
            if ( *(_QWORD *)(v19 + 8) )
            {
              v13 = *(const char **)v19;
              v14 = &s1;
              if ( !v20 )
                goto LABEL_13;
            }
            else
            {
              v13 = &s1;
              if ( !v20 )
              {
LABEL_23:
                a2 = (unsigned __int64)&v18[(v50.m128i_i64[1] + 1) * (_QWORD)v5];
                if ( a2 >= (unsigned __int64)v52 )
                  goto LABEL_61;
                v21 = (unsigned __int64)v10 + v9 * (v50.m128i_i64[1] + 1);
                a2 = *(_QWORD *)(v51 + 8 * a2) + 1LL;
                if ( v21 >= (unsigned __int64)v52 )
                  goto LABEL_59;
                *(_QWORD *)(v51 + 8 * v21) = a2;
                v17 = (_QWORD *)((char *)v10 + 1);
                if ( v6 == v10 )
                  goto LABEL_26;
                goto LABEL_20;
              }
            }
            v14 = *(const char **)(v8 + *v48);
LABEL_13:
            if ( !strcmp(v14, v13) )
              goto LABEL_23;
            a2 = (unsigned __int64)v10 + (v50.m128i_i64[1] + 1) * (_QWORD)v5;
            if ( a2 >= (unsigned __int64)v52 )
              goto LABEL_55;
            v15 = v9 * (v50.m128i_i64[1] + 1);
            a2 = *(_QWORD *)(v51 + 8 * a2);
            if ( (unsigned __int64)&v18[v15] >= (unsigned __int64)v52 )
            {
              if ( !under_debugger )
              {
                interr(2351, a2, a3, a4, 0.0);
LABEL_55:
                if ( !under_debugger )
                {
                  interr(2351, a2, a3, a4, 0.0);
                  goto LABEL_57;
                }
              }
LABEL_67:
              BUG();
            }
            if ( a2 < *(_QWORD *)(v51 + 8LL * (_QWORD)&v18[v15]) )
              a2 = *(_QWORD *)(v51 + 8LL * (_QWORD)&v18[v15]);
            v16 = (unsigned __int64)v10 + v15;
            if ( v16 >= (unsigned __int64)v52 )
              goto LABEL_63;
            *(_QWORD *)(v51 + 8 * v16) = a2;
            v17 = (_QWORD *)((char *)v10 + 1);
            if ( v6 == v10 )
              goto LABEL_51;
LABEL_20:
            v10 = v17;
          }
        }
      }
LABEL_51:
      v8 += 24;
      if ( v42 == v9 )
        break;
      ++v9;
    }
  }
LABEL_27:
  txtdiff_t_diff_mod(&v48, a2, a3);
  v45 = 0;
  v47 = 1;
  v44 = &html_diff_printer_t___vtable;
  v46 = 0;
  txtdiff_t_serialize(&v48, &v44);
  v23 = _mm_load_si128(&v46);
  v24 = a1[2];
  v25 = *a1;
  *a1 = v45;
  *(__m128i *)(a1 + 1) = v23;
  v46.m128i_i64[1] = v24;
  v45 = v25;
  v44 = &html_diff_printer_t___vtable;
  if ( v25 )
  {
    v46.m128i_i64[0] = 0;
    *(double *)v23.m128i_i64 = qfree(v25, (const char *)&v44);
  }
  v26 = v53;
  if ( v53 )
  {
    v27 = v54;
    if ( (_QWORD)v54 )
    {
      v28 = 0;
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v26 + v28);
        v31 = *(_QWORD *)(v26 + v28 + 24);
        if ( v31 )
        {
          v32 = v30[4];
          if ( v32 )
          {
            for ( i = 0; i != v32; ++i )
            {
              v34 = (__int64 *)(v31 + 24 * i);
              v35 = *v34;
              if ( *v34 )
              {
                v34[1] = 0;
                *(double *)v23.m128i_i64 = qfree(v35, (const char *)&v44, *(double *)v23.m128i_i64);
                v31 = v30[3];
              }
            }
          }
          v30[4] = 0;
          *(double *)v23.m128i_i64 = qfree(v31, (const char *)&v44, *(double *)v23.m128i_i64);
        }
        v36 = *v30;
        if ( *v30 )
        {
          v37 = v30[1];
          if ( v37 )
          {
            for ( j = 0; j != v37; ++j )
            {
              v39 = (__int64 *)(v36 + 24 * j);
              v40 = *v39;
              if ( *v39 )
              {
                v39[1] = 0;
                *(double *)v23.m128i_i64 = qfree(v40, (const char *)&v44, *(double *)v23.m128i_i64);
                v36 = *v30;
              }
            }
          }
          v30[1] = 0;
          *(double *)v23.m128i_i64 = qfree(v36, (const char *)&v44, *(double *)v23.m128i_i64);
        }
        ++v29;
        v26 = v53;
        v28 += 56;
      }
      while ( v27 != v29 );
    }
    *(_QWORD *)&v54 = 0;
    *(double *)v23.m128i_i64 = qfree(v26, (const char *)&v44, *(double *)v23.m128i_i64);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51, (const char *)&v44, *(double *)v23.m128i_i64);
  }
  return v55 - __readfsqword(0x28u);
}
