__int64 __fastcall sub_372A30(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char *v10; // rdx
  __int64 v11; // rbp
  __int64 v13; // r13
  __int64 i; // rbx
  char *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 j; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  const char *v22; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  _DWORD *v30; // rbp
  __m128 v31; // xmm0
  unsigned __int64 v32; // r13
  __int64 *v33; // r15
  __int64 *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  int v41; // r10d
  _DWORD *v42; // r15
  int v43; // r11d
  __int64 v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // r15
  char *v47; // rcx
  char *v48; // rax
  const char *v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  char *v52; // rax
  void *v53; // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // rbx
  char v56; // [rsp+0h] [rbp-F8h]
  unsigned __int8 v57; // [rsp+7h] [rbp-F1h]
  void *v58; // [rsp+8h] [rbp-F0h]
  __int64 v59; // [rsp+10h] [rbp-E8h]
  int v60; // [rsp+18h] [rbp-E0h]
  __int64 v61; // [rsp+18h] [rbp-E0h]
  int v62; // [rsp+1Ch] [rbp-DCh]
  __int64 v63; // [rsp+28h] [rbp-D0h] BYREF
  const char *v64; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v65; // [rsp+38h] [rbp-C0h]
  _DWORD *v66; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v67; // [rsp+58h] [rbp-A0h]
  char *v68; // [rsp+70h] [rbp-88h] BYREF
  __int128 v69; // [rsp+78h] [rbp-80h]
  __int64 v70; // [rsp+90h] [rbp-68h]
  __int64 v71; // [rsp+98h] [rbp-60h]
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v73; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v74; // [rsp+B8h] [rbp-40h]

  v10 = *(char **)a1;
  v11 = *(_QWORD *)(a1 + 24);
  v74 = __readfsqword(0x28u);
  if ( v10 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = &v10[40 * i];
        v16 = *((_QWORD *)v15 + 2);
        if ( v16 )
        {
          *((_QWORD *)v15 + 3) = 0;
          qfree(v16, a2);
          v10 = *(char **)a1;
        }
      }
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v10, a2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 32) + 336LL) = 1;
  v17 = *(_QWORD *)(a1 + 40);
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 48);
    if ( v18 )
    {
      for ( j = 0; j != v18; ++j )
      {
        v20 = v17 + 40 * j;
        v21 = *(_QWORD *)(v20 + 16);
        if ( v21 )
        {
          *(_QWORD *)(v20 + 24) = 0;
          qfree(v21, a2);
          v17 = *(_QWORD *)(a1 + 40);
        }
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v17, a2);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v65 = 0;
  v64 = nullptr;
  sub_169A50((__int64 *)&v64, (__int64)"$ pv2 blob %a", v11);
  v22 = &s1;
  if ( (_QWORD)v65 )
    v22 = v64;
  netnode_check(&v63, v22, 0, 0);
  v57 = netnode_exist(&v63);
  if ( v57 )
  {
    v22 = (const char *)&v66;
    v66 = nullptr;
    v67 = 0;
    netnode_qgetblob(v63, &v66, 1, 0, 87);
    v30 = v66;
    v31 = 0;
    v68 = nullptr;
    v69 = 0;
    v32 = (unsigned __int64)v66 + v67;
    if ( v66 >= (_DWORD *)((char *)v66 + v67) )
    {
      if ( (_DWORD *)v32 == v66 )
      {
LABEL_28:
        v22 = (const char *)&v66;
        if ( netnode_qgetblob(v63, &v66, 1, 0, 80) <= 0
          || (v30 = v66, v32 = (unsigned __int64)v66 + v67, v66 >= (_DWORD *)((char *)v66 + v67)) )
        {
LABEL_65:
          if ( v30 != (_DWORD *)v32 )
            sub_169700(
              (int)"Coherency check failed: pt == end\n",
              (__int64)v22,
              v35,
              v36,
              v37,
              v38,
              v31,
              a4,
              a5,
              a6,
              v39,
              v40,
              a9,
              a10,
              v56);
          goto LABEL_54;
        }
        while ( 1 )
        {
          a4 = 0;
          v70 = a1;
          src = nullptr;
          v71 = 0xFFFFFFFFLL;
          v73 = 0;
          if ( v32 < (unsigned __int64)(v30 + 1) )
            break;
          v41 = *v30;
          v42 = v30 + 2;
          LODWORD(v71) = *v30;
          if ( v32 < (unsigned __int64)(v30 + 2) )
            break;
          v43 = v30[1];
          HIDWORD(v71) = v43;
          if ( (unsigned __int64)v42 < v32 )
          {
            while ( 1 )
            {
              v42 += 2;
              if ( v32 < (unsigned __int64)v42 )
                break;
              v44 = *((_QWORD *)v42 - 1);
              v55 = v73;
              if ( v44 != -1 )
              {
                v22 = (const char *)src;
                if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v73 + 1) )
                {
                  src = (void *)qvector_reserve(&src, src, v73 + 1, 8);
                  v55 = v73;
                  v22 = (const char *)src;
                }
                *(_QWORD *)&v22[8 * v55] = v44;
                v55 = v73 + 1;
                *(_QWORD *)&v73 = v73 + 1;
                if ( (unsigned __int64)v42 < v32 )
                  continue;
              }
              v41 = v71;
              v30 = v42;
              v58 = nullptr;
              v43 = HIDWORD(v71);
              v59 = v70;
              if ( v55 )
              {
                v61 = v71;
                v58 = (void *)qalloc_or_throw(8 * v55);
                v30 = v42;
                memcpy(v58, src, 8 * v55);
                v43 = HIDWORD(v61);
                v41 = v61;
              }
              goto LABEL_60;
            }
            if ( src )
            {
              *(_QWORD *)&v73 = 0;
              qfree(src, v22);
            }
            break;
          }
          v59 = a1;
          v30 += 2;
          v55 = 0;
          v58 = nullptr;
LABEL_60:
          v51 = *(_QWORD *)(a1 + 48);
          v22 = *(const char **)(a1 + 40);
          v35 = v51 + 1;
          if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v51 + 1) )
          {
            v62 = v43;
            v60 = v41;
            v54 = qvector_reserve(a1 + 40, v22, v35, 40);
            *(_QWORD *)(a1 + 40) = v54;
            v22 = (const char *)v54;
            v43 = v62;
            v51 = *(_QWORD *)(a1 + 48);
            v41 = v60;
          }
          v52 = (char *)&v22[40 * v51];
          v31 = (__m128)_mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
          *(_QWORD *)v52 = v59;
          *((_DWORD *)v52 + 2) = v41;
          *((_DWORD *)v52 + 3) = v43;
          *((_QWORD *)v52 + 2) = v58;
          v53 = src;
          *(__m128 *)(v52 + 24) = v31;
          ++*(_QWORD *)(a1 + 48);
          if ( v53 )
          {
            *(_QWORD *)&v73 = 0;
            *(double *)v31.m128_u64 = qfree(v53, v22);
          }
          if ( (unsigned __int64)v42 >= v32 )
            goto LABEL_65;
        }
LABEL_53:
        v57 = 0;
LABEL_54:
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree(v68, v22);
        }
        if ( v66 )
        {
          *(_QWORD *)&v67 = 0;
          qfree(v66, v22);
        }
        goto LABEL_18;
      }
      sub_169700(
        (int)"Coherency check failed: pt == end\n",
        (__int64)&v66,
        v24,
        v25,
        v26,
        v27,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v28,
        v29,
        a9,
        a10,
        v56);
    }
    else
    {
LABEL_22:
      v30 += 2;
      if ( v32 < (unsigned __int64)v30 )
        goto LABEL_53;
      while ( v30 != (_DWORD *)v32 )
      {
        v22 = v68;
        v45 = v69;
        v46 = *((_QWORD *)v30 - 1);
        v47 = &v68[8 * v69];
        if ( v68 != v47 )
        {
          v48 = v68;
          while ( v46 != *(_QWORD *)v48 )
          {
            v48 += 8;
            if ( v47 == v48 )
              goto LABEL_45;
          }
          if ( v47 != v48 )
          {
            sub_169700(
              (int)"Coherency check failed: !to_add.has(thing)\n",
              (__int64)v68,
              v69,
              (__int64)v47,
              v26,
              v27,
              (__m128)0LL,
              a4,
              a5,
              a6,
              v28,
              v29,
              a9,
              a10,
              v56);
            v22 = v68;
            v45 = v69;
            v47 = &v68[8 * v69];
          }
LABEL_45:
          if ( v47 != v22 )
          {
            v49 = v22;
            while ( v46 != *(_QWORD *)v49 )
            {
              v49 += 8;
              if ( v47 == v49 )
                goto LABEL_50;
            }
            if ( v47 != v49 )
              goto LABEL_22;
          }
        }
LABEL_50:
        v50 = v45 + 1;
        if ( *((_QWORD *)&v69 + 1) < v50 )
        {
          v68 = (char *)qvector_reserve(&v68, v22, v50, 8);
          v47 = &v68[8 * v69];
        }
        v30 += 2;
        *(_QWORD *)v47 = v46;
        *(_QWORD *)&v69 = v69 + 1;
        if ( v32 < (unsigned __int64)v30 )
          goto LABEL_53;
      }
    }
    if ( (_QWORD)v69 )
    {
      v33 = (__int64 *)v68;
      v34 = (__int64 *)&v68[8 * v69];
      if ( v68 != (char *)v34 )
      {
        do
        {
          v22 = (const char *)*v33;
          sub_370AA0(a1, *v33++, 0);
        }
        while ( v34 != v33 );
      }
      sub_370D50((char **)a1, v22);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + 336LL) = 1;
    }
    goto LABEL_28;
  }
LABEL_18:
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64, v22);
  }
  return v57;
}
