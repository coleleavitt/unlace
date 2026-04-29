__int64 __fastcall sub_D270(
        __int64 a1,
        double a2,
        __m128i a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int128 a9,
        __int64 a10)
{
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v21; // r12
  char *v22; // rax
  __m128 v23; // xmm0
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // al
  void *v32; // r12
  const char *v33; // r12
  size_t v34; // rax
  size_t v35; // r15
  size_t v36; // r15
  size_t v37; // r13
  __int64 v38; // r15
  size_t v39; // r14
  _BYTE *v40; // rsi
  __int64 v41; // rax
  size_t v42; // r14
  char *v43; // r13
  size_t v44; // rax
  size_t v45; // r8
  size_t v46; // rax
  size_t v47; // r15
  size_t v48; // rax
  char *v49; // rdi
  char *v50; // rdi
  void *v51; // rdi
  size_t v52; // r13
  __int64 v53; // rax
  size_t v54; // [rsp+20h] [rbp-130h]
  size_t n; // [rsp+28h] [rbp-128h]
  char *s1; // [rsp+30h] [rbp-120h] BYREF
  __m128i v57; // [rsp+38h] [rbp-118h] BYREF
  void *v58; // [rsp+50h] [rbp-100h] BYREF
  size_t v59; // [rsp+58h] [rbp-F8h]
  __int64 v60; // [rsp+60h] [rbp-F0h]
  void *src; // [rsp+70h] [rbp-E0h] BYREF
  __int128 v62; // [rsp+78h] [rbp-D8h]
  void *v63; // [rsp+90h] [rbp-C0h] BYREF
  __int128 v64; // [rsp+98h] [rbp-B8h]
  char *v65; // [rsp+B0h] [rbp-A0h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-98h]
  __int128 v67; // [rsp+D0h] [rbp-80h] BYREF
  __m128i v68; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v69; // [rsp+F0h] [rbp-60h] BYREF
  __m128i v70; // [rsp+100h] [rbp-50h] BYREF
  unsigned __int64 v71; // [rsp+118h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  v11 = sub_BB20();
  sub_A6E0((__int64)&v67, v11, v12, v13, v14, v15, (__int128)_mm_loadu_si128((const __m128i *)&a9), a10);
  if ( (_DWORD)v67 != 601 )
    return sub_CCA0(a1, v11, v16, v17, v18, v19, _mm_load_si128(&v68), a3);
  sub_C150((__int64)&s1);
  v21 = s1;
  if ( v57.m128i_i64[0] > 9uLL && !strncmp(s1, "template ", 9u) )
  {
    v33 = v21 + 9;
    v34 = strlen(v33);
    v35 = v34;
    if ( v34 )
    {
      v51 = *(void **)a1;
      v52 = v34 + 1;
      if ( *(_QWORD *)(a1 + 16) < v34 + 1 )
      {
        v53 = qvector_reserve(a1, *(_QWORD *)a1, v34 + 1, 1);
        *(_QWORD *)a1 = v53;
        v51 = (void *)v53;
      }
      *(_QWORD *)(a1 + 8) = v52;
      memmove(v51, v33, v35);
      *(_BYTE *)(*(_QWORD *)a1 + v35) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    v22 = *(char **)a1;
    a3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    *(_QWORD *)a1 = v21;
    v23 = _mm_loadh_ps((const double *)&v57.m128i_i64[1]);
    s1 = v22;
    *(__m128 *)(a1 + 8) = v23;
    v57 = a3;
  }
  v60 = 0;
  v24 = sub_BB20();
  sub_B370((__int64)&v69, v24, v25, v26);
  v58 = nullptr;
  v59 = 0;
  v31 = sub_CCA0((__int64)&v58, v24, v27, v28, v29, v30, _mm_load_si128(&v70), a3);
  v32 = v58;
  if ( v31 )
  {
    v36 = v59;
    src = nullptr;
    v62 = 0;
    n = v59;
    src = (void *)qvector_reserve(&src, 0, 3, 1);
    *(_QWORD *)&v62 = 3;
    strcpy((char *)src, "::");
    v63 = nullptr;
    v64 = 0;
    if ( v36 )
    {
      v63 = (void *)qalloc_or_throw(n);
      *((_QWORD *)&v64 + 1) = n;
      memcpy(v63, v32, n);
      *(_QWORD *)&v64 = n;
      if ( !(_QWORD)v62 || (v39 = v62 - 1, (_QWORD)v62 == 1) )
      {
        v65 = nullptr;
        v66 = 0;
LABEL_21:
        v65 = (char *)qalloc_or_throw(n);
        *((_QWORD *)&v66 + 1) = n;
        memcpy(v65, v63, n);
        v41 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&v66 = n;
        v42 = *((_QWORD *)&v66 + 1);
        v43 = v65;
        if ( !v41 )
          goto LABEL_28;
        v44 = v41 - 1;
        v45 = v44;
        if ( !v44 )
          goto LABEL_28;
        v46 = v44 + n - 1;
        v47 = n - 1;
        n = v46 + 1;
        if ( *((_QWORD *)&v66 + 1) >= v46 + 1 )
          goto LABEL_24;
        v42 = v46;
LABEL_46:
        v54 = v45;
        v65 = (char *)qvector_reserve(&v65, v43, n, 1);
        v43 = v65;
        v45 = v54;
        v46 = v42;
LABEL_24:
        *(_QWORD *)&v66 = n;
        v43[v46] = 0;
        memcpy(&v65[v47], *(const void **)a1, v45);
        v43 = v65;
        v42 = *((_QWORD *)&v66 + 1);
        n = v66;
LABEL_28:
        v49 = *(char **)a1;
        v65 = nullptr;
        v66 = 0;
        if ( v49 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          qfree(v49);
          v50 = v65;
          *(_QWORD *)a1 = v43;
          *(_QWORD *)(a1 + 16) = v42;
          *(_QWORD *)(a1 + 8) = n;
          if ( v50 )
          {
            *(_QWORD *)&v66 = 0;
            qfree(v50);
          }
        }
        else
        {
          *(_QWORD *)a1 = v43;
          *(_QWORD *)(a1 + 16) = v42;
          *(_QWORD *)(a1 + 8) = n;
        }
        if ( v63 )
        {
          *(_QWORD *)&v64 = 0;
          qfree(v63);
        }
        if ( src )
        {
          *(_QWORD *)&v62 = 0;
          qfree(src);
        }
        goto LABEL_6;
      }
      v38 = v62 - 1 + --n;
      v37 = v62 + n;
    }
    else
    {
      v37 = v62;
      if ( !(_QWORD)v62 || (v38 = v62 - 1, (_QWORD)v62 == 1) )
      {
        v65 = nullptr;
        v66 = 0;
        goto LABEL_26;
      }
      v39 = v62 - 1;
    }
    v40 = v63;
    if ( *((_QWORD *)&v64 + 1) < v37 )
    {
      v63 = (void *)qvector_reserve(&v63, v63, v37, 1);
      v40 = v63;
    }
    *(_QWORD *)&v64 = v37;
    v40[v38] = 0;
    memcpy((char *)v63 + n, src, v39);
    v65 = nullptr;
    v66 = 0;
    n = v64;
    if ( (_QWORD)v64 )
      goto LABEL_21;
LABEL_26:
    v48 = *(_QWORD *)(a1 + 8);
    n = v48;
    if ( !v48 )
    {
      v42 = 0;
      v43 = nullptr;
      goto LABEL_28;
    }
    v42 = v48 - 1;
    if ( v48 == 1 )
    {
      n = 0;
      v43 = nullptr;
      goto LABEL_28;
    }
    v45 = v48 - 1;
    v47 = 0;
    v43 = nullptr;
    goto LABEL_46;
  }
LABEL_6:
  if ( v32 )
    qfree(v32);
  if ( s1 )
  {
    v57.m128i_i64[0] = 0;
    qfree(s1);
  }
  return 1;
}
