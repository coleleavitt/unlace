/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F780
// Address: 0x000000000045F780

//----- (000000000045F780) ----------------------------------------------------
__int64 __fastcall sub_45F780(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __m128 v11; // xmm0
  unsigned int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  unsigned int v21; // r13d
  char *v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v25; // rbx
  void *v26; // rdi
  char *v28; // rsi
  unsigned __int64 v29; // r13
  char *v30; // rbx
  unsigned __int64 v31; // r9
  __int64 v32; // rax
  char *v33; // rbx
  __int64 v34; // r13
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __int64 v38; // r13
  unsigned __int64 v39; // rsi
  unsigned __int8 *v40; // rax
  unsigned __int64 v41; // r9
  char *v42; // rdx
  unsigned __int64 v43; // rcx
  char *v44; // rcx
  _QWORD *v45; // rax
  void *v46; // rdx
  char *v47; // r14
  __int64 v48; // rdx
  __int64 v49; // r8
  __m128 v50; // xmm0
  __int64 v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // r9
  __m128 v54; // xmm4
  __m128 v55; // xmm5
  __int64 *v56; // r15
  __int64 *v57; // rbx
  __int64 v58; // rax
  char *v59; // r8
  char **v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __m128 v63; // xmm4
  __m128 v64; // xmm5
  char *v65; // r15
  __int64 v66; // rdx
  __int64 v67; // rax
  char v68; // r14
  char *v69; // rsi
  char *v70; // rax
  char *i; // rbx
  __int64 v72; // rax
  char *v73; // rdx
  __int64 v74; // rax
  char v75; // r14
  char *v76; // rsi
  char *v77; // rax
  const char *v78; // rsi
  __int64 v79; // r14
  char *v80; // rsi
  unsigned __int64 v81; // rdx
  size_t v82; // rdx
  char *v83; // rax
  unsigned __int64 v84; // rbx
  char *v85; // rax
  void *v86; // rdi
  __int64 v87; // rcx
  __int64 v88; // rax
  char *v89; // rbx
  void *v90; // rax
  char *v91; // rsi
  char *v92; // rax
  char v93; // [rsp-8h] [rbp-D8h]
  size_t n; // [rsp+0h] [rbp-D0h]
  size_t na; // [rsp+0h] [rbp-D0h]
  size_t nb; // [rsp+0h] [rbp-D0h]
  __int64 nc; // [rsp+0h] [rbp-D0h]
  unsigned int v98; // [rsp+Ch] [rbp-C4h]
  __int64 v99; // [rsp+10h] [rbp-C0h]
  unsigned __int64 v100; // [rsp+10h] [rbp-C0h]
  __int64 v101; // [rsp+18h] [rbp-B8h]
  __int64 v102; // [rsp+18h] [rbp-B8h]
  unsigned __int64 v103; // [rsp+20h] [rbp-B0h]
  unsigned __int64 v104; // [rsp+20h] [rbp-B0h]
  unsigned int v105; // [rsp+34h] [rbp-9Ch] BYREF
  void *v106; // [rsp+38h] [rbp-98h] BYREF
  __int128 v107; // [rsp+40h] [rbp-90h]
  __m256i ptr; // [rsp+58h] [rbp-78h] BYREF
  _BYTE v109[20]; // [rsp+78h] [rbp-58h]
  int v110; // [rsp+8Ch] [rbp-44h]
  unsigned __int64 v111; // [rsp+90h] [rbp-40h]

  v11 = 0;
  v111 = __readfsqword(0x28u);
  v107 = 0;
  v106 = nullptr;
  v98 = sub_47FD50(a3, a3[1]);
  v15 = sub_47FD50(a3, a3[1]);
  if ( ((v15 | v98) & 0x80000000) != 0 || (int)(0x7FFFFFFF - v15) < (int)v98 )
  {
    sub_45BD90((char **)a2, 0);
    if ( *(_BYTE *)(a1 + 184) )
      sub_410EA0(
        (int)"update_bpts(nadd=%d, ndel=%d) => 0 (incorrect values)\n",
        v98,
        v15,
        v16,
        v17,
        v18,
        (__m128)0LL,
        a5,
        a6,
        a7,
        v19,
        v20,
        a10,
        a11,
        v93);
    v21 = 0;
    goto LABEL_6;
  }
  v28 = (char *)v106;
  v29 = v107;
  v30 = (char *)v106;
  v31 = (int)(v98 + v15);
  if ( v31 != (_QWORD)v107 )
  {
    v110 = 0;
    *(_OWORD *)&v109[4] = 0;
    v11 = 0;
    ptr.m256i_i64[0] = -1;
    memset(&ptr.m256i_u64[1], 0, 24);
    *(_DWORD *)v109 = 4;
    *(_DWORD *)&v109[12] = -1;
    if ( v31 < (unsigned __int64)v107 )
    {
      v84 = (int)(v98 + v15);
      do
      {
        v85 = &v28[56 * v84];
        v86 = *((void **)v85 + 1);
        if ( v86 )
        {
          *((_QWORD *)v85 + 2) = 0;
          nb = v31;
          j__free(v86);
          v28 = (char *)v106;
          v31 = nb;
        }
        ++v84;
      }
      while ( v84 < v29 );
      *(_QWORD *)&v107 = v31;
      v30 = v28;
    }
    else
    {
      if ( &ptr < v106 || &ptr >= (__m256i *)((char *)v106 + 56 * *((_QWORD *)&v107 + 1)) )
      {
        if ( *((_QWORD *)&v107 + 1) < v31 )
        {
          v106 = sub_481540((__int64)&v106, v106, (int)(v98 + v15), 0x38u);
          v29 = v107;
          v30 = (char *)v106;
          v31 = (int)(v98 + v15);
        }
        if ( v29 < v31 )
        {
          v87 = 56 * v29;
          do
          {
            v88 = ptr.m256i_i64[0];
            v89 = &v30[v87];
            a5 = 0;
            *((_QWORD *)v89 + 1) = 0;
            *(_QWORD *)v89 = v88;
            *((_OWORD *)v89 + 1) = 0;
            if ( ptr.m256i_i64[2] )
            {
              v102 = v87;
              v100 = v31;
              nc = ptr.m256i_i64[2];
              v90 = sub_4814F0(ptr.m256i_i64[2]);
              *((_QWORD *)v89 + 1) = v90;
              *((_QWORD *)v89 + 3) = nc;
              memcpy(v90, (const void *)ptr.m256i_i64[1], nc);
              v87 = v102;
              v31 = v100;
              *((_QWORD *)v89 + 2) = nc;
            }
            ++v29;
            v87 += 56;
            *((_QWORD *)v89 + 4) = *(_QWORD *)v109;
            v89[40] = v109[8];
            *(_QWORD *)(v89 + 44) = *(_QWORD *)&v109[12];
            v30 = (char *)v106;
          }
          while ( v29 < v31 );
        }
      }
      else
      {
        if ( *((_QWORD *)&v107 + 1) < v31 )
        {
          v106 = sub_481540((__int64)&v106, v106, (int)(v98 + v15), 0x38u);
          v29 = v107;
          v30 = (char *)v106;
          v31 = (int)(v98 + v15);
        }
        if ( v29 < v31 )
        {
          v11 = 0;
          v32 = 56 * v29;
          do
          {
            v33 = &v30[v32];
            ++v29;
            v32 += 56;
            *(_QWORD *)v33 = -1;
            *((_QWORD *)v33 + 1) = 0;
            *((_QWORD *)v33 + 4) = 4;
            *((_QWORD *)v33 + 5) = 0xFFFFFFFF00000000LL;
            *((_DWORD *)v33 + 12) = 0;
            *((_OWORD *)v33 + 1) = 0;
            v30 = (char *)v106;
          }
          while ( v31 != v29 );
        }
      }
      *(_QWORD *)&v107 = v31;
    }
  }
  v99 = 56LL * v98;
  n = (size_t)&v30[v99];
  if ( &v30[v99] == v30 )
  {
    v101 = 56LL * v15;
    na = (size_t)&v30[v101];
    if ( &v30[v101] != v30 )
    {
LABEL_28:
      v38 = 0;
      while ( 1 )
      {
        v38 = v38 + sub_47FE70(a3, a3[1]) - 1;
        *(_QWORD *)v30 = v38;
        v39 = a3[1];
        v40 = (unsigned __int8 *)*a3;
        if ( *a3 >= v39 )
          goto LABEL_29;
        v41 = *v40;
        v42 = (char *)(v40 + 1);
        *a3 = (unsigned __int64)(v40 + 1);
        if ( !(_BYTE)v41 )
          goto LABEL_29;
        v43 = *((_QWORD *)v30 + 2);
        if ( v43 < v41 )
        {
          v91 = *((char **)v30 + 1);
          if ( *((_QWORD *)v30 + 3) < v41 )
          {
            v104 = v41;
            v92 = (char *)sub_481540((__int64)(v30 + 8), v91, v41, 1u);
            v43 = *((_QWORD *)v30 + 2);
            v41 = v104;
            *((_QWORD *)v30 + 1) = v92;
            v91 = v92;
          }
          v103 = v41;
          memset(&v91[v43], 0, v41 - v43);
          v41 = v103;
          *((_QWORD *)v30 + 2) = v103;
          v39 = a3[1];
          v42 = (char *)*a3;
        }
        else if ( v41 != v43 )
        {
          *((_QWORD *)v30 + 2) = v41;
          v39 = a3[1];
          v42 = (char *)*a3;
        }
        v44 = &v42[v41];
        if ( __CFADD__(v41, v42) || v39 < (unsigned __int64)v44 )
          goto LABEL_29;
        v45 = *((_QWORD **)v30 + 1);
        *a3 = (unsigned __int64)v44;
        if ( (unsigned int)v41 >= 8 )
        {
          *v45 = *(_QWORD *)v42;
          *(_QWORD *)((char *)v45 + v41 - 8) = *(_QWORD *)&v42[v41 - 8];
          qmemcpy(
            (void *)((unsigned __int64)(v45 + 1) & 0xFFFFFFFFFFFFFFF8LL),
            (const void *)(v42 - ((char *)v45 - ((unsigned __int64)(v45 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
            8LL * (((unsigned int)v41 + (_DWORD)v45 - (((_DWORD)v45 + 8) & 0xFFFFFFF8)) >> 3));
        }
        else
        {
          if ( (v41 & 4) != 0 )
          {
            *(_DWORD *)v45 = *(_DWORD *)v42;
            *(_DWORD *)((char *)v45 + v41 - 4) = *(_DWORD *)&v42[v41 - 4];
            v39 = a3[1];
            goto LABEL_29;
          }
          *(_BYTE *)v45 = *v42;
          if ( (v41 & 2) != 0 )
          {
            *(_WORD *)((char *)v45 + v41 - 2) = *(_WORD *)&v42[v41 - 2];
            v39 = a3[1];
            goto LABEL_29;
          }
        }
        v39 = a3[1];
LABEL_29:
        *((_DWORD *)v30 + 8) = sub_47FD50(a3, v39);
        *((_DWORD *)v30 + 11) = sub_47FD50(a3, a3[1]);
        *((_DWORD *)v30 + 12) = sub_47FD50(a3, a3[1]);
        v30 += 56;
        if ( (char *)na == v30 )
          goto LABEL_41;
      }
    }
    v101 = 0;
    v46 = v30;
  }
  else
  {
    v34 = 0;
    do
    {
      v30[40] = 0;
      v34 = v34 + sub_47FE70(a3, a3[1]) - 1;
      *(_QWORD *)v30 = v34;
      *((_DWORD *)v30 + 9) = sub_47FD50(a3, a3[1]);
      *((_DWORD *)v30 + 8) = sub_47FD50(a3, a3[1]);
      *((_DWORD *)v30 + 11) = sub_47FD50(a3, a3[1]);
      *((_DWORD *)v30 + 12) = sub_47FD50(a3, a3[1]);
      v30 += 56;
    }
    while ( (char *)n != v30 );
    v101 = 56LL * v15;
    na = (size_t)&v30[v101];
    if ( &v30[v101] != v30 )
      goto LABEL_28;
LABEL_41:
    v46 = v106;
    v47 = (char *)v106 + v99;
    if ( (char *)v106 + v99 != v30 )
    {
      do
      {
        if ( *(_BYTE *)(a1 + 184) )
        {
          v48 = *((unsigned int *)v47 + 8);
          v49 = 0;
          if ( (_DWORD)v48 != 4 )
            v49 = *((unsigned int *)v47 + 9);
          *(double *)v11.m128_u64 = sub_410EA0(
                                      (int)"del_bpt(ea=%a, type=%d orgbytes.size=%zu size=%d)\n",
                                      *(_QWORD *)v47,
                                      v48,
                                      *((_QWORD *)v47 + 2),
                                      v49,
                                      v35,
                                      v11,
                                      a5,
                                      a6,
                                      a7,
                                      v36,
                                      v37,
                                      a10,
                                      a11,
                                      v93);
        }
        v47 += 56;
      }
      while ( v47 != v30 );
      v46 = v106;
    }
  }
  v50 = 0;
  v51 = *(_QWORD *)(a1 + 440);
  memset(&ptr, 0, 24);
  v52 = (*(__int64 (__fastcall **)(__int64, unsigned int *, void *, _QWORD, _QWORD, __m256i *))(*(_QWORD *)v51 + 328LL))(
          v51,
          &v105,
          v46,
          v98,
          v15,
          &ptr);
  v56 = (__int64 *)v106;
  v21 = v52;
  v57 = (__int64 *)((char *)v106 + v99);
  if ( (char *)v106 + v99 != v106 )
  {
    do
    {
      if ( *(_BYTE *)(a1 + 184) )
      {
        v58 = *((unsigned __int8 *)v56 + 40);
        v59 = "?";
        if ( (unsigned int)v58 <= 0xA )
          v59 = off_4C3500[v58];
        *(double *)v50.m128_u64 = sub_410EA0(
                                    (int)"add_bpt(ea=%a type=%d len=%d) => %s\n",
                                    *v56,
                                    *((unsigned int *)v56 + 8),
                                    *((unsigned int *)v56 + 9),
                                    (__int64)v59,
                                    v53,
                                    v50,
                                    a5,
                                    a6,
                                    a7,
                                    v54,
                                    v55,
                                    a10,
                                    a11,
                                    v93);
      }
      v56 += 7;
    }
    while ( v57 != v56 );
  }
  sub_45BD90((char **)a2, v21);
  sub_45BD90((char **)a2, v105);
  v65 = (char *)v106;
  if ( v57 != v106 )
  {
    do
    {
      v67 = *(_QWORD *)(a2 + 8);
      v68 = v65[40];
      v69 = *(char **)a2;
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v67 + 1) )
      {
        v70 = (char *)sub_481540(a2, v69, v67 + 1, 1u);
        *(_QWORD *)a2 = v70;
        v69 = v70;
        v67 = *(_QWORD *)(a2 + 8);
      }
      v69[v67] = v68;
      v66 = *(_QWORD *)(a2 + 8);
      v60 = (char **)(v66 + 1);
      *(_QWORD *)(a2 + 8) = v66 + 1;
      if ( !v65[40] && *((_DWORD *)v65 + 8) == 4 )
      {
        v79 = *((_QWORD *)v65 + 2);
        v80 = *(char **)a2;
        v81 = v66 + 2;
        if ( *(_QWORD *)(a2 + 16) < v81 )
        {
          v83 = (char *)sub_481540(a2, v80, v81, 1u);
          *(_QWORD *)a2 = v83;
          v60 = *(char ***)(a2 + 8);
          v80 = v83;
        }
        *((_BYTE *)v60 + (_QWORD)v80) = v79;
        ++*(_QWORD *)(a2 + 8);
        v82 = *((_QWORD *)v65 + 2);
        if ( v82 )
          sub_45BB20((char **)a2, *((const void **)v65 + 1), v82);
      }
      v65 += 56;
    }
    while ( v57 != (__int64 *)v65 );
  }
  for ( i = (char *)&v57[(unsigned __int64)v101 / 8]; i != v65; v65 += 56 )
  {
    v74 = *(_QWORD *)(a2 + 8);
    v75 = v65[40];
    v76 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v74 + 1) )
    {
      v77 = (char *)sub_481540(a2, v76, v74 + 1, 1u);
      *(_QWORD *)a2 = v77;
      v76 = v77;
      v74 = *(_QWORD *)(a2 + 8);
    }
    v76[v74] = v75;
    ++*(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(a1 + 184) )
    {
      v72 = (unsigned __int8)v65[40];
      v73 = "?";
      if ( (unsigned int)v72 <= 0xA )
      {
        v60 = off_4C3500;
        v73 = off_4C3500[v72];
      }
      *(double *)v50.m128_u64 = sub_410EA0(
                                  (int)"del_bpt(ea=%a) => %s\n",
                                  *(_QWORD *)v65,
                                  (__int64)v73,
                                  (__int64)v60,
                                  v61,
                                  v62,
                                  v50,
                                  a5,
                                  a6,
                                  a7,
                                  v63,
                                  v64,
                                  a10,
                                  a11,
                                  v93);
    }
  }
  if ( v21 != 1 )
  {
    v78 = s1;
    if ( ptr.m256i_i64[1] )
      v78 = (const char *)ptr.m256i_i64[0];
    sub_45BFB0((char **)a2, v78);
  }
  if ( ptr.m256i_i64[0] )
  {
    ptr.m256i_i64[1] = 0;
    j__free((void *)ptr.m256i_i64[0]);
  }
LABEL_6:
  v22 = (char *)v106;
  if ( v106 )
  {
    v23 = v107;
    if ( (_QWORD)v107 )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = *(void **)&v22[v24 + 8];
        if ( v26 )
        {
          *(_QWORD *)&v22[v24 + 16] = 0;
          j__free(v26);
          v22 = (char *)v106;
        }
        ++v25;
        v24 += 56;
      }
      while ( v23 != v25 );
    }
    *(_QWORD *)&v107 = 0;
    j__free(v22);
  }
  return v21;
}
// 45FB38: conditional instruction was optimized away because r9d.4 is in (1..7)
// 45FB70: variable 'v16' is possibly undefined
// 45FB70: variable 'v17' is possibly undefined
// 45FB70: variable 'v18' is possibly undefined
// 45FB70: variable 'v19' is possibly undefined
// 45FB70: variable 'v20' is possibly undefined
// 45FB70: variable 'v93' is possibly undefined
// 45FBC7: variable 'v35' is possibly undefined
// 45FBC7: variable 'v36' is possibly undefined
// 45FBC7: variable 'v37' is possibly undefined
// 45FC67: variable 'v53' is possibly undefined
// 45FC67: variable 'v54' is possibly undefined
// 45FC67: variable 'v55' is possibly undefined
// 45FD54: variable 'v60' is possibly undefined
// 45FD54: variable 'v61' is possibly undefined
// 45FD54: variable 'v62' is possibly undefined
// 45FD54: variable 'v63' is possibly undefined
// 45FD54: variable 'v64' is possibly undefined
// 4C3500: using guessed type char *off_4C3500[11];
