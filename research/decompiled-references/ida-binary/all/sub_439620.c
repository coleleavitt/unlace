__int64 __fastcall sub_439620(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  char *v10; // rsi
  unsigned __int64 *v11; // rdi
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v19; // rax
  __int64 v20; // r15
  __m128 v21; // xmm0
  __int64 v22; // rbp
  char *v23; // r14
  __m128i v24; // xmm0
  char *v25; // rax
  const char *v26; // r12
  size_t v27; // rax
  __int64 v28; // r13
  size_t v29; // r14
  char *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // r13
  __int64 (__fastcall *v33)(_QWORD *, __int64, unsigned int, unsigned int); // rax
  __int64 v34; // rdi
  __int64 (*v35)(); // rax
  char *v36; // rbp
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  char *v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rbx
  char *v45; // rax
  __int64 v46; // rdi
  char *v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // rbx
  char *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdi
  unsigned __int8 v54; // al
  char *v55; // rdx
  __int64 v56; // r12
  __int64 v57; // rbx
  char *v58; // rax
  __int64 v59; // rdi
  __m128i v60; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+10h] [rbp-98h] BYREF
  __int128 v62; // [rsp+18h] [rbp-90h]
  char *v63; // [rsp+30h] [rbp-78h] BYREF
  __int128 v64; // [rsp+38h] [rbp-70h]
  char *v65; // [rsp+50h] [rbp-58h] BYREF
  __m128i v66; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+68h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 == 64 )
  {
    if ( *(_QWORD *)(a1 + 56) == 1 )
    {
      v53 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 216LL) + 88LL * **(int **)(a1 + 48));
      v66 = 0;
      v65 = nullptr;
      v54 = sub_437180(v53, (const char *)&v65, 0, 1, (__m128)0LL, a3, a4, a5, a6, a7, a8, a9);
      v55 = v65;
      v12 = v54;
      if ( v65 )
      {
        v56 = v66.m128i_i64[0];
        if ( v66.m128i_i64[0] )
        {
          v57 = 0;
          do
          {
            v58 = &v55[24 * v57];
            v59 = *(_QWORD *)v58;
            if ( *(_QWORD *)v58 )
            {
              *((_QWORD *)v58 + 1) = 0;
              qfree(v59, (const char *)&v65);
              v55 = v65;
            }
            ++v57;
          }
          while ( v56 != v57 );
        }
        v66.m128i_i64[0] = 0;
        qfree(v55, (const char *)&v65);
      }
      return v12;
    }
    goto LABEL_4;
  }
  if ( (unsigned int)(v9 - 69) > 1 )
  {
    v61 = 0;
    v62 = 0;
    if ( ((v9 - 63) & 0xFFFFFFFD) == 0 )
    {
      v10 = (char *)a1;
      v11 = (unsigned __int64 *)&v61;
      if ( !(unsigned __int8)sub_4339F0((const char *)&v61, v10, 1u) )
        goto LABEL_6;
      v19 = v62;
      if ( (_QWORD)v62 )
        goto LABEL_18;
    }
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(a1 + 56) )
  {
LABEL_4:
    v61 = 0;
    v62 = 0;
LABEL_5:
    v10 = "AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to sync all files?";
    v11 = (_QWORD *)(&dword_0 + 1);
    if ( (unsigned int)sub_1698A0(1, (int)"AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to sync all files?") != 1 )
    {
LABEL_6:
      v12 = 0;
LABEL_7:
      v13 = v61;
      if ( v61 )
      {
        v14 = v62;
        if ( (_QWORD)v62 )
        {
          v15 = 0;
          do
          {
            v16 = (__int64 *)(v13 + 48 * v15);
            v17 = *v16;
            if ( *v16 )
            {
              v16[1] = 0;
              qfree(v17, v10);
              v13 = v61;
            }
            ++v15;
          }
          while ( v14 != v15 );
        }
        *(_QWORD *)&v62 = 0;
        qfree(v13, v10);
      }
      return v12;
    }
    v19 = v62;
LABEL_18:
    v20 = v61;
    v21 = 0;
    v63 = nullptr;
    v64 = 0;
    v22 = v61 + 48 * v19;
    if ( v61 != v22 )
    {
      do
      {
        while ( 1 )
        {
          v26 = &s1;
          if ( *(_QWORD *)(v20 + 8) )
            v26 = *(const char **)v20;
          v65 = nullptr;
          v66 = 0;
          if ( v26 )
          {
            v27 = strlen(v26);
            v28 = v27 + 1;
            v29 = v27;
            v65 = (char *)qvector_reserve(&v65, 0, v27 + 1, 1);
            v66.m128i_i64[0] = v28;
            memmove(v65, v26, v29);
            v65[v29] = 0;
          }
          v52 = v64;
          v10 = v63;
          v11 = (unsigned __int64 *)(v64 + 1);
          if ( &v65 < (char **)v63 || &v65 >= (char **)&v63[24 * *((_QWORD *)&v64 + 1)] )
            break;
          a4 = 0;
          v23 = v65;
          v24 = _mm_loadl_epi64(&v66);
          v65 = nullptr;
          a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v66.m128i_u64[1]);
          v66 = 0;
          if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)v11 )
          {
            v60.m128i_i64[1] = a3.m128_u64[0];
            v60.m128i_i64[0] = v24.m128i_i64[0];
            v63 = (char *)qvector_reserve(&v63, v63, v64 + 1, 24);
            v10 = v63;
            a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v60.m128i_u64[1]);
            v52 = v64;
            v24 = _mm_loadl_epi64(&v60);
          }
          v21 = (__m128)_mm_unpacklo_epi64(v24, (__m128i)a3);
          v25 = &v10[24 * v52];
          *(_QWORD *)v25 = v23;
          *(__m128 *)(v25 + 8) = v21;
          v11 = (unsigned __int64 *)v65;
          *(_QWORD *)&v64 = v64 + 1;
          if ( v65 )
          {
            v66.m128i_i64[0] = 0;
            *(double *)v21.m128_u64 = qfree(v65, v10);
          }
          v20 += 48;
          if ( v22 == v20 )
            goto LABEL_34;
        }
        if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)v11 )
        {
          v11 = (unsigned __int64 *)&v63;
          v63 = (char *)qvector_reserve(&v63, v63, v64 + 1, 24);
          v10 = v63;
          v52 = v64;
        }
        v21 = (__m128)_mm_loadu_si128(&v66);
        v20 += 48;
        v30 = &v10[24 * v52];
        *(_QWORD *)v30 = v65;
        *(__m128 *)(v30 + 8) = v21;
        *(_QWORD *)&v64 = v64 + 1;
      }
      while ( v22 != v20 );
    }
LABEL_34:
    v31 = sub_426230(v11, v10);
    v32 = (_QWORD *)sub_417080((__int64)v31);
    v33 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int, unsigned int))(*v32 + 376LL);
    if ( v33 == sub_418E80 )
    {
      v34 = v32[1];
      if ( !v34 || (v35 = *(__int64 (**)())(*(_QWORD *)v34 + 480LL), v35 != sub_178B60) && (unsigned __int8)v35() )
      {
        LODWORD(v36) = 52;
        goto LABEL_63;
      }
      v21 = 0;
      v65 = nullptr;
      v66 = 0;
      v36 = (char *)(*(unsigned int (__fastcall **)(_QWORD, char **, char **, __int64, __int64))(*(_QWORD *)v32[1]
                                                                                               + 344LL))(
                      v32[1],
                      &v65,
                      &v63,
                      0xFFFFFFFFLL,
                      1);
      v10 = v36;
      (*(void (__fastcall **)(_QWORD *, char *, char **))(*v32 + 24LL))(v32, v36, &v65);
      v42 = v65;
      if ( v65 )
      {
        v43 = v66.m128i_i64[0];
        if ( v66.m128i_i64[0] )
        {
          v44 = 0;
          do
          {
            v45 = &v42[32 * v44];
            v46 = *((_QWORD *)v45 + 1);
            if ( v46 )
            {
              *((_QWORD *)v45 + 2) = 0;
              qfree(v46, v36);
              v42 = v65;
            }
            ++v44;
          }
          while ( v43 != v44 );
        }
        v66.m128i_i64[0] = 0;
        *(double *)v21.m128_u64 = qfree(v42, v36);
      }
    }
    else
    {
      v10 = (char *)&v63;
      LODWORD(v36) = v33(v32, (__int64)&v63, 0xFFFFFFFF, 1u);
    }
    if ( !(_DWORD)v36 )
    {
LABEL_45:
      sub_169700(
        (int)"ok sync completed\n",
        (__int64)v10,
        (__int64)v42,
        v37,
        v38,
        v39,
        v21,
        a3,
        a4,
        a5,
        v40,
        v41,
        a8,
        a9,
        v60.m128i_i8[0]);
      v47 = v63;
      if ( v63 )
      {
        v48 = v64;
        if ( (_QWORD)v64 )
        {
          v49 = 0;
          do
          {
            v50 = &v47[24 * v49];
            v51 = *(_QWORD *)v50;
            if ( *(_QWORD *)v50 )
            {
              *((_QWORD *)v50 + 1) = 0;
              qfree(v51, v10);
              v47 = v63;
            }
            ++v49;
          }
          while ( v48 != v49 );
        }
        *(_QWORD *)&v64 = 0;
        qfree(v47, v10);
      }
      v12 = 1;
      goto LABEL_7;
    }
LABEL_63:
    v10 = "Failed to get latest revision";
    sub_416980((unsigned int)v36, (__int64)"Failed to get latest revision");
    goto LABEL_45;
  }
  return sub_43F150(a1, 1, 4294967286LL);
}
