/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416760
// Address: 0x0000000000416760

//----- (0000000000416760) ----------------------------------------------------
unsigned __int64 __fastcall sub_416760(
        _QWORD *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v11; // rdi
  bool v12; // zf
  __int64 v14; // r12
  const char *v15; // rbp
  double v16; // xmm4_8
  double v17; // xmm5_8
  char *v18; // rsi
  char *v19; // rax
  const char *v20; // r8
  const char *v21; // rcx
  double v22; // xmm4_8
  double v23; // xmm5_8
  const char *v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // r14
  size_t v29; // rax
  char *v30; // rsi
  __int64 v31; // r12
  unsigned __int64 v32; // rdx
  char *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r14
  size_t v40; // rax
  char *v41; // rsi
  __int64 v42; // rbp
  unsigned __int64 v43; // rdx
  char *v44; // rbp
  __int64 v45; // rax
  int v46; // r12d
  __int64 v47; // rbp
  char *v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // rbx
  char *v51; // rax
  void *v52; // rdi
  double v54; // xmm4_8
  double v55; // xmm5_8
  __int64 v56; // rax
  size_t v57; // r14
  size_t v58; // r14
  _QWORD *v59; // r12
  _QWORD *v60; // r14
  void *v61; // rdi
  char *v62; // rax
  char *v63; // rax
  size_t n; // [rsp+0h] [rbp-5B8h]
  void *v65; // [rsp+10h] [rbp-5A8h] BYREF
  size_t v66[3]; // [rsp+18h] [rbp-5A0h]
  void *src; // [rsp+30h] [rbp-588h] BYREF
  size_t v68[3]; // [rsp+38h] [rbp-580h]
  _QWORD v69[2]; // [rsp+50h] [rbp-568h] BYREF
  void *ptr; // [rsp+60h] [rbp-558h]
  __int128 v71; // [rsp+68h] [rbp-550h]
  void *v72; // [rsp+78h] [rbp-540h]
  __int128 v73; // [rsp+80h] [rbp-538h]
  int v74; // [rsp+98h] [rbp-520h] BYREF
  void *v75; // [rsp+A0h] [rbp-518h]
  int *v76; // [rsp+A8h] [rbp-510h]
  int *v77; // [rsp+B0h] [rbp-508h]
  __int64 v78; // [rsp+B8h] [rbp-500h]
  void *v79; // [rsp+C0h] [rbp-4F8h]
  __int128 v80; // [rsp+C8h] [rbp-4F0h]
  void *v81; // [rsp+D8h] [rbp-4E0h]
  __int128 v82; // [rsp+E0h] [rbp-4D8h]
  int v83; // [rsp+F0h] [rbp-4C8h]
  __int64 (__fastcall **v84)(); // [rsp+100h] [rbp-4B8h] BYREF
  char s2[1024]; // [rsp+108h] [rbp-4B0h] BYREF
  void *v86; // [rsp+508h] [rbp-B0h]
  __int64 v87; // [rsp+510h] [rbp-A8h]
  void *v88; // [rsp+520h] [rbp-98h]
  __int64 v89; // [rsp+528h] [rbp-90h]
  void *v90; // [rsp+538h] [rbp-80h]
  __int64 v91; // [rsp+540h] [rbp-78h]
  void *v92; // [rsp+550h] [rbp-68h]
  __int64 v93; // [rsp+558h] [rbp-60h]
  unsigned __int64 v94; // [rsp+578h] [rbp-40h]

  v11 = s1;
  v12 = a2[6] == 0;
  v94 = __readfsqword(0x28u);
  if ( !v12 )
    v11 = (const char *)a2[5];
  v14 = (__int64)(a1 + 127);
  v15 = sub_485600(v11, "libpthread");
  if ( v15 )
  {
    v14 = (__int64)(a1 + 133);
    a1[183] = *a2;
  }
  sub_413AC0((__int64)a1, v14, a2, *(double *)a3.m128_u64, a4, a5, a6, v16, v17, a9, a10);
  v18 = (char *)sub_45A750();
  v19 = (char *)s1;
  if ( a2[15] )
    v19 = (char *)a2[14];
  v20 = s1;
  if ( a2[18] )
    v20 = (const char *)a2[17];
  v21 = s1;
  if ( a2[3] )
    v21 = (const char *)a2[2];
  sub_4161F0((__int64)&v84, v18, 1, v21, v20, *((_DWORD *)a2 + 40), v19);
  if ( (unsigned int)sub_413190((_BOOL8 (__fastcall ***)(__int64, int))&v84, a3, a4, a5, a6, v22, v23, a9, a10) )
  {
    v24 = s1;
    if ( a2[3] )
      v24 = (const char *)a2[2];
    if ( strcmp(v24, s2) )
    {
      sub_4563D0((__int64)a1, "load separate debug info '%s'\n", s2);
      *(_OWORD *)v68 = 0;
      src = nullptr;
      src = sub_481540((__int64)&src, nullptr, 1u, 1u);
      v68[0] = 1;
      *(_BYTE *)src = 0;
      v65 = nullptr;
      *(_OWORD *)v66 = 0;
      n = strlen(s2);
      v65 = sub_481540((__int64)&v65, nullptr, n + 1, 1u);
      v66[0] = n + 1;
      memmove(v65, s2, n);
      *((_BYTE *)v65 + n) = 0;
      v56 = *a2;
      v57 = v66[0];
      v71 = 0;
      v69[0] = v56;
      v69[1] = 0;
      ptr = nullptr;
      if ( v66[0] )
      {
        ptr = sub_4814F0(v66[0]);
        *((_QWORD *)&v71 + 1) = v57;
        memcpy(ptr, v65, v57);
        *(_QWORD *)&v71 = v57;
      }
      v58 = v68[0];
      v72 = nullptr;
      v73 = 0;
      if ( v68[0] )
      {
        v72 = sub_4814F0(v68[0]);
        *((_QWORD *)&v73 + 1) = v58;
        memcpy(v72, src, v58);
        *(_QWORD *)&v73 = v58;
      }
      v74 = 0;
      v75 = nullptr;
      v76 = &v74;
      v77 = &v74;
      v78 = 0;
      v79 = nullptr;
      v81 = nullptr;
      v83 = 0;
      v80 = 0;
      v82 = 0;
      if ( v65 )
      {
        v66[0] = 0;
        j__free(v65);
      }
      if ( src )
      {
        v68[0] = 0;
        j__free(src);
      }
      sub_413AC0((__int64)a1, v14, v69, 0.0, a4, a5, a6, v54, v55, a9, a10);
      if ( v81 )
      {
        *(_QWORD *)&v82 = 0;
        j__free(v81);
      }
      if ( v79 )
      {
        *(_QWORD *)&v80 = 0;
        j__free(v79);
      }
      v59 = v75;
      if ( v75 )
      {
        do
        {
          v60 = v59;
          sub_40F970((_QWORD *)v59[3]);
          v61 = (void *)v59[5];
          v59 = (_QWORD *)v59[2];
          if ( v61 )
          {
            v60[6] = 0;
            j__free(v61);
          }
          operator delete(v60, 0x40u);
        }
        while ( v59 );
      }
      if ( v72 )
      {
        *(_QWORD *)&v73 = 0;
        j__free(v72);
      }
      if ( ptr )
      {
        *(_QWORD *)&v71 = 0;
        j__free(ptr);
      }
    }
  }
  if ( v15 )
  {
    v25 = 8LL * a1[134];
    v26 = v25 >> 3;
    if ( v25 >> 3 )
    {
      v27 = a1[128];
      v28 = a1[133];
      v29 = 0;
      v30 = (char *)a1[127];
      v31 = 8 * v27;
      v32 = v26 + v27;
      if ( a1[129] < v32 )
      {
        v62 = (char *)sub_481540((__int64)(a1 + 127), v30, v32, 8u);
        a1[127] = v62;
        v30 = v62;
        v29 = 8LL * a1[128] - v31;
      }
      v33 = &v30[v31];
      memmove(&v33[v25], v33, v29);
      v34 = 0;
      if ( v25 )
      {
        do
        {
          *(_QWORD *)&v33[v34] = *(_QWORD *)(v28 + v34);
          v34 += 8;
        }
        while ( v25 != v34 );
      }
      a1[128] += v26;
    }
    v35 = a1[137];
    v36 = 8 * v35;
    v37 = (8 * v35) >> 3;
    if ( v37 )
    {
      v38 = a1[131];
      v39 = a1[136];
      v40 = 0;
      v41 = (char *)a1[130];
      v42 = 8 * v38;
      v43 = v37 + v38;
      if ( a1[132] < v43 )
      {
        v63 = (char *)sub_481540((__int64)(a1 + 130), v41, v43, 8u);
        a1[130] = v63;
        v41 = v63;
        v40 = 8LL * a1[131] - v42;
      }
      v44 = &v41[v42];
      memmove(&v44[v36], v44, v40);
      v45 = 0;
      if ( v36 )
      {
        do
        {
          *(_QWORD *)&v44[v45] = *(_QWORD *)(v39 + v45);
          v45 += 8;
        }
        while ( v36 != v45 );
      }
      a1[131] += v37;
      v35 = a1[137];
    }
    if ( v35 )
    {
      v46 = 0;
      v47 = 0;
      do
      {
        ++v46;
        *(_QWORD *)(a1[136] + 8 * v47) = sub_481490(*(char **)(a1[136] + 8 * v47));
        v47 = v46;
      }
      while ( (unsigned __int64)v46 < a1[137] );
    }
  }
  v84 = off_4C2120;
  if ( v92 )
  {
    v93 = 0;
    j__free(v92);
  }
  if ( v90 )
  {
    v91 = 0;
    j__free(v90);
  }
  if ( v88 )
  {
    v89 = 0;
    j__free(v88);
  }
  v48 = (char *)v86;
  if ( v86 )
  {
    v49 = v87;
    if ( v87 )
    {
      v50 = 0;
      do
      {
        v51 = &v48[24 * v50];
        v52 = *(void **)v51;
        if ( *(_QWORD *)v51 )
        {
          *((_QWORD *)v51 + 1) = 0;
          j__free(v52);
          v48 = (char *)v86;
        }
        ++v50;
      }
      while ( v49 != v50 );
    }
    v87 = 0;
    j__free(v48);
  }
  return v94 - __readfsqword(0x28u);
}
// 4167CF: variable 'v16' is possibly undefined
// 4167CF: variable 'v17' is possibly undefined
// 416840: variable 'v22' is possibly undefined
// 416840: variable 'v23' is possibly undefined
// 416C74: variable 'v54' is possibly undefined
// 416C74: variable 'v55' is possibly undefined
// 4C2120: using guessed type __int64 (__fastcall *off_4C2120[2])();
