__int64 __fastcall worklists_commit_action_t__::vfunc_1(__int64 a1, const char *a2)
{
  unsigned int v2; // ebp
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  const char *v6; // rdx
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 (*v10)(); // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 i; // r12
  void *v15; // r13
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  char *v18; // rax
  const char *v19; // r13
  size_t v20; // r15
  unsigned __int64 v21; // rdi
  __m128i v22; // xmm0
  char *v23; // rax
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(_QWORD *, __int64, unsigned int); // rax
  __int64 v26; // rdi
  __int64 (*v27)(); // rax
  const char *v28; // r12
  char *v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rbx
  char *v32; // rax
  __int64 v33; // rdi
  const char *v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rbx
  const char *v37; // rax
  __int64 v38; // rdi
  const char *v39; // rsi
  __int64 v40; // rax
  char v41; // al
  const char *v42; // r12
  __int64 v43; // r9
  unsigned __int32 v44; // r13d
  __int64 (__fastcall *v45)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v46; // rdi
  __int64 (*v47)(); // rax
  char *v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // rbx
  char *v51; // rax
  __int64 v52; // rdi
  char v53; // al
  char v54; // al
  __m128i v55; // [rsp+8h] [rbp-C0h] BYREF
  __m128i v56; // [rsp+18h] [rbp-B0h] BYREF
  unsigned __int32 v57; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v58[4]; // [rsp+2Ch] [rbp-9Ch] BYREF
  const char *v59; // [rsp+30h] [rbp-98h] BYREF
  __int128 v60; // [rsp+38h] [rbp-90h]
  const char *v61; // [rsp+50h] [rbp-78h] BYREF
  __int128 v62; // [rsp+58h] [rbp-70h]
  char *v63; // [rsp+70h] [rbp-58h] BYREF
  __m128i v64; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+88h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v2 = 0;
  if ( !*((_QWORD *)a2 + 1) )
    return v2;
  v56.m128i_i16[7] = 0;
  v59 = nullptr;
  v60 = 0;
  v55.m128i_i32[3] = sub_44ED70(&v59, a2, (char *)&v56.m128i_u64[1] + 6);
  if ( v55.m128i_i32[3] == -1 )
    goto LABEL_49;
  v4 = sub_426230(&v59, a2);
  v5 = (_QWORD *)sub_417080((__int64)v4);
  v6 = &s1;
  v7 = *(__int64 (__fastcall **)(__int64))(*v5 + 256LL);
  if ( (_QWORD)v60 )
    v6 = v59;
  if ( v7 != vault_with_events_t__::vfunc_32 )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int32 *, const char *))v7)(v5, &v57, v6);
LABEL_10:
    if ( !v11 )
    {
      v12 = *((_QWORD *)a2 + 1);
      v13 = *(_QWORD *)a2;
      v61 = nullptr;
      v62 = 0;
      for ( i = v13 + 88 * v12; v13 != i; *(_QWORD *)&v62 = v62 + 1 )
      {
        while ( 1 )
        {
          v19 = &s1;
          if ( *(_QWORD *)(v13 + 56) )
            v19 = *(const char **)(v13 + 48);
          v63 = nullptr;
          v64 = 0;
          if ( v19 )
          {
            v20 = strlen(v19);
            v55.m128i_i64[0] = v20 + 1;
            v63 = (char *)qvector_reserve(&v63, 0, v20 + 1, 1);
            v64.m128i_i64[0] = v55.m128i_i64[0];
            memmove(v63, v19, v20);
            v63[v20] = 0;
          }
          v40 = v62;
          v39 = v61;
          v21 = v62 + 1;
          if ( &v63 < (char **)v61 || &v63 >= (char **)&v61[24 * *((_QWORD *)&v62 + 1)] )
            break;
          v15 = v63;
          v16 = _mm_loadl_epi64(&v64);
          v63 = nullptr;
          v17 = _mm_loadl_epi64((const __m128i *)&v64.m128i_u64[1]);
          v64 = 0;
          if ( *((_QWORD *)&v62 + 1) < v21 )
          {
            v56.m128i_i64[0] = v17.m128i_i64[0];
            v55.m128i_i64[0] = v16.m128i_i64[0];
            v61 = (const char *)qvector_reserve(&v61, v61, v62 + 1, 24);
            v39 = v61;
            v17 = _mm_loadl_epi64(&v56);
            v40 = v62;
            v16 = _mm_loadl_epi64(&v55);
          }
          v18 = (char *)&v39[24 * v40];
          *(_QWORD *)v18 = v15;
          *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
          *(_QWORD *)&v62 = v62 + 1;
          if ( v63 )
          {
            v64.m128i_i64[0] = 0;
            qfree(v63, v39);
          }
          v13 += 88;
          if ( v13 == i )
            goto LABEL_27;
        }
        if ( *((_QWORD *)&v62 + 1) < v21 )
        {
          v61 = (const char *)qvector_reserve(&v61, v61, v62 + 1, 24);
          v39 = v61;
          v40 = v62;
        }
        v22 = _mm_loadu_si128(&v64);
        v13 += 88;
        v23 = (char *)&v39[24 * v40];
        *(_QWORD *)v23 = v63;
        *(__m128i *)(v23 + 8) = v22;
      }
LABEL_27:
      v24 = v57;
      v25 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int))(*v5 + 288LL);
      if ( v25 == sub_4197C0 )
      {
        v26 = v5[1];
        if ( !v26
          || (v27 = *(__int64 (**)())(*(_QWORD *)v26 + 480LL), v27 != sub_178B60)
          && (v55.m128i_i32[0] = v57, v41 = v27(), v24 = v55.m128i_u32[0], v41) )
        {
          LODWORD(v28) = 52;
          goto LABEL_54;
        }
        v63 = nullptr;
        v64 = 0;
        v28 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, char **, const char **, __int64))(*(_QWORD *)v5[1] + 256LL))(
                              v5[1],
                              &v63,
                              &v61,
                              v24);
        a2 = v28;
        (*(void (__fastcall **)(_QWORD *, const char *, char **))(*v5 + 24LL))(v5, v28, &v63);
        v29 = v63;
        if ( v63 )
        {
          v30 = v64.m128i_i64[0];
          if ( v64.m128i_i64[0] )
          {
            v31 = 0;
            do
            {
              v32 = &v29[32 * v31];
              v33 = *((_QWORD *)v32 + 1);
              if ( v33 )
              {
                *((_QWORD *)v32 + 2) = 0;
                qfree(v33, v28);
                v29 = v63;
              }
              ++v31;
            }
            while ( v30 != v31 );
          }
          v64.m128i_i64[0] = 0;
          qfree(v29, v28);
        }
      }
      else
      {
        a2 = (const char *)&v61;
        LODWORD(v28) = v25(v5, (__int64)&v61, v57);
      }
      if ( (_DWORD)v28 )
      {
LABEL_54:
        a2 = "Failed to migrate files";
        sub_416980((unsigned int)v28, (__int64)"Failed to migrate files");
        goto LABEL_39;
      }
      if ( v55.m128i_i32[3] != 1 )
      {
LABEL_39:
        v34 = v61;
        if ( v61 )
        {
          v35 = v62;
          if ( (_QWORD)v62 )
          {
            v36 = 0;
            do
            {
              v37 = &v34[24 * v36];
              v38 = *(_QWORD *)v37;
              if ( *(_QWORD *)v37 )
              {
                *((_QWORD *)v37 + 1) = 0;
                qfree(v38, a2);
                v34 = v61;
              }
              ++v36;
            }
            while ( v35 != v36 );
          }
          *(_QWORD *)&v62 = 0;
          qfree(v34, a2);
        }
        v2 = 1;
        goto LABEL_50;
      }
      v42 = &s1;
      v43 = v56.m128i_u16[7];
      v44 = v57;
      v45 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*v5 + 280LL);
      if ( (_QWORD)v60 )
        v42 = v59;
      if ( v45 == sub_419900 )
      {
        v46 = v5[1];
        if ( !v46
          || (v47 = *(__int64 (**)())(*(_QWORD *)v46 + 480LL), v47 != sub_178B60)
          && (v55.m128i_i32[0] = v56.m128i_u16[7], v53 = v47(), v43 = v55.m128i_u32[0], v53) )
        {
          LODWORD(v42) = 52;
          goto LABEL_68;
        }
        v64 = 0;
        v63 = nullptr;
        v42 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, char **, _BYTE *, const char *, _QWORD, __int64))(*(_QWORD *)v5[1] + 248LL))(
                              v5[1],
                              &v63,
                              v58,
                              v42,
                              v44,
                              v43);
        a2 = v42;
        (*(void (__fastcall **)(_QWORD *, const char *, char **))(*v5 + 24LL))(v5, v42, &v63);
        v48 = v63;
        if ( v63 )
        {
          v49 = v64.m128i_i64[0];
          if ( v64.m128i_i64[0] )
          {
            v50 = 0;
            do
            {
              v51 = &v48[32 * v50];
              v52 = *((_QWORD *)v51 + 1);
              if ( v52 )
              {
                *((_QWORD *)v51 + 2) = 0;
                qfree(v52, v42);
                v48 = v63;
              }
              ++v50;
            }
            while ( v49 != v50 );
          }
          v64.m128i_i64[0] = 0;
          qfree(v48, v42);
        }
      }
      else
      {
        a2 = v58;
        LODWORD(v42) = v45(v5, (__int64)v58, (__int64)v42, v57, v56.m128i_u16[7]);
      }
      if ( !(_DWORD)v42 )
        goto LABEL_39;
LABEL_68:
      a2 = "Failed to commit worklist";
      sub_4168C0((unsigned int)v42, (__int64)"Failed to commit worklist");
      goto LABEL_39;
    }
    goto LABEL_48;
  }
  v8 = (__int64 *)v5[1];
  if ( v8 )
  {
    v9 = *v8;
    v10 = *(__int64 (**)())(*v8 + 480);
    if ( v10 == sub_178B60 )
    {
LABEL_9:
      v11 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int32 *, const char *))(v9 + 224))(v8, &v57, v6);
      goto LABEL_10;
    }
    v55.m128i_i64[0] = (__int64)v6;
    v54 = v10();
    v6 = (const char *)v55.m128i_i64[0];
    if ( !v54 )
    {
      v8 = (__int64 *)v5[1];
      v9 = *v8;
      goto LABEL_9;
    }
  }
  v11 = 52;
LABEL_48:
  a2 = "Failed to add worklist";
  sub_4168C0(v11, (__int64)"Failed to add worklist");
LABEL_49:
  v2 = 0;
LABEL_50:
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59, a2);
  }
  return v2;
}
