__int64 __fastcall sub_FED770(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbp
  void ***v3; // r13
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  __int64 v8; // rcx
  int v9; // eax
  char *v10; // rbp
  char *v11; // rdi
  size_t v12; // rdx
  void *v13; // rbx
  void **v14; // rbx
  void **v15; // r12
  void **v16; // rdi
  void *v17; // rax
  void ***v18; // rsi
  int **v19; // r12
  void ***v20; // r13
  void **v21; // r14
  __int64 v22; // rax
  int *v23; // r8
  int *v24; // r12
  int *v25; // r13
  int *v26; // rdx
  __int64 v27; // r13
  char *v28; // r13
  char *v29; // r14
  char *v30; // rdi
  __int64 v31; // rcx
  int v32; // eax
  bool v33; // cc
  size_t v34; // rax
  char *v35; // rsi
  __int64 v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rbx
  size_t v39; // rax
  char **v40; // rax
  bool v42; // al
  __int64 v43; // rax
  __int64 v44; // rax
  void *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r13
  char *v48; // r13
  char *v49; // r14
  char *v50; // rdi
  void *v53; // [rsp+58h] [rbp-1B0h] BYREF
  __int64 v54; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v55; // [rsp+68h] [rbp-1A0h]
  unsigned int v56; // [rsp+70h] [rbp-198h]
  void *v57[4]; // [rsp+80h] [rbp-188h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-160h]
  int v60; // [rsp+B0h] [rbp-158h]
  void *s2[2]; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-138h]
  __m128i v63; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-118h] BYREF
  int v65; // [rsp+F8h] [rbp-110h]
  void **v66; // [rsp+110h] [rbp-F8h] BYREF
  void *v67; // [rsp+118h] [rbp-F0h]
  void *v68; // [rsp+120h] [rbp-E8h]
  __int64 v69; // [rsp+128h] [rbp-E0h]
  __int64 v70; // [rsp+130h] [rbp-D8h]
  __int64 v71; // [rsp+138h] [rbp-D0h]
  int v72; // [rsp+140h] [rbp-C8h]
  void **v73; // [rsp+150h] [rbp-B8h] BYREF
  __int16 v74; // [rsp+168h] [rbp-A0h]
  __int64 v75; // [rsp+170h] [rbp-98h]
  void **v76; // [rsp+190h] [rbp-78h] BYREF
  __int64 v77; // [rsp+1A8h] [rbp-60h] BYREF
  _BYTE v78[56]; // [rsp+1D0h] [rbp-38h] BYREF

  v2 = *a2;
  v3 = &v66;
  v4 = *(_QWORD *)(a1 + 72) + 144 * v2;
  sub_E35E20(&v66, "message");
  sub_FE9B40((__int64)&v58, *((_BYTE **)a2 + 5), *((_QWORD *)a2 + 6));
  LOWORD(v69) = 7;
  v70 = v58;
  v58 = 0;
  v71 = v59;
  v59 = 0;
  v72 = v60;
  v60 = 0;
  sub_E35E20(&v73, "ruleIndex");
  v74 = 3;
  v75 = v2;
  sub_E35E20(&v76, "ruleId");
  v63.m128i_i64[0] = (__int64)&v64;
  sub_FE8D80(&v63, *(_BYTE **)(v4 + 32), *(_QWORD *)(v4 + 32) + *(_QWORD *)(v4 + 40));
  sub_E35650((__int64)&v77, &v63);
  v54 = 0;
  v55 = 0;
  v56 = 0;
  do
  {
    while ( (unsigned __int8)sub_E3A630(&v54, (__int64)v3, &v53) )
    {
      v3 += 8;
      if ( v3 == (void ***)v78 )
        goto LABEL_20;
    }
    v57[0] = v53;
    v7 = 2 * v56;
    v8 = 3 * v56;
    v9 = v55 + 1;
    if ( 4 * ((int)v55 + 1) < (unsigned int)v8 )
    {
      v8 = v56 - HIDWORD(v55) - v9;
      if ( (unsigned int)v8 > v56 >> 3 )
        goto LABEL_6;
      v7 = v56;
    }
    sub_E3EDD0((__int64)&v54, v7, v56, v8, v5, v6);
    sub_E3A630(&v54, (__int64)v3, v57);
    v9 = v55 + 1;
LABEL_6:
    LODWORD(v55) = v9;
    sub_E35C20((void ***)s2, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
    v10 = (char *)v57[0];
    v11 = *((char **)v57[0] + 1);
    if ( s2[1] == (void *)-1LL )
    {
      v42 = v11 + 1 == nullptr;
      goto LABEL_51;
    }
    if ( s2[1] == (void *)-2LL )
    {
      v42 = v11 + 2 == nullptr;
LABEL_51:
      if ( v42 )
        goto LABEL_11;
LABEL_52:
      --HIDWORD(v55);
      goto LABEL_11;
    }
    v12 = *((_QWORD *)v57[0] + 2);
    if ( v62 != v12 || v12 && memcmp(v11, s2[1], v12) )
      goto LABEL_52;
LABEL_11:
    v13 = s2[0];
    if ( s2[0] )
    {
      if ( *(void **)s2[0] != (char *)s2[0] + 16 )
        operator delete(*(void **)s2[0]);
      operator delete(v13, 0x20u);
    }
    v14 = *v3;
    if ( *v3 )
    {
      v15 = (void **)operator new(0x20u);
      *v15 = v15 + 2;
      sub_FE8D80(v15, *v14, (__int64)v14[1] + (_QWORD)*v14);
      v16 = *(void ***)v10;
      *(_QWORD *)v10 = v15;
      if ( v16 )
      {
        sub_FE8D40(v16);
        v15 = *(void ***)v10;
      }
      v17 = v15[1];
      *((_QWORD *)v10 + 1) = *v15;
      *((_QWORD *)v10 + 2) = v17;
    }
    else
    {
      *(__m128i *)(v10 + 8) = _mm_loadu_si128((const __m128i *)(v3 + 1));
    }
    *((_WORD *)v10 + 12) = 0;
    v18 = v3 + 3;
    v3 += 8;
    sub_2205840(v10 + 24, v18);
  }
  while ( v3 != (void ***)v78 );
LABEL_20:
  v19 = (int **)a2;
  v20 = (void ***)v78;
  do
  {
    v20 -= 8;
    sub_2207560(v20 + 3);
    v21 = *v20;
    if ( *v20 )
    {
      if ( *v21 != v21 + 2 )
        operator delete(*v21);
      operator delete(v21, 0x20u);
    }
  }
  while ( v20 != &v66 );
  if ( (__int64 *)v63.m128i_i64[0] != &v64 )
    operator delete((void *)v63.m128i_i64[0]);
  sub_E395A0(&v58);
  v22 = a2[20];
  if ( (_DWORD)v22 )
  {
    v23 = *((int **)a2 + 9);
    v62 = 0;
    v24 = v23;
    *(_OWORD *)s2 = 0;
    v25 = &v23[3 * v22];
    do
    {
      v26 = v24;
      v24 += 3;
      sub_FEA4A0((__int64)&v63, a1, v26);
      sub_FE9C20((__int64 *)&v66, (__int64)&v63, &byte_22CD811, 0);
      sub_FE9150((char **)s2, (__int64 *)&v66);
      sub_E395A0((__int64 *)&v66);
      sub_E395A0(v63.m128i_i64);
    }
    while ( v25 != v24 );
    v19 = (int **)a2;
    v67 = s2[0];
    LOWORD(v66) = 8;
    v68 = s2[1];
    *(_OWORD *)s2 = 0;
    v69 = v62;
    v62 = 0;
    sub_E35E20((void ***)&v63, "locations");
    v27 = sub_220A4E0(&v54, &v63);
    sub_2207560(v27);
    sub_2205840(v27, &v66);
    if ( v63.m128i_i64[0] )
      sub_FE8D40((void **)v63.m128i_i64[0]);
    sub_2207560(&v66);
    v28 = (char *)s2[1];
    v29 = (char *)s2[0];
    if ( s2[1] != s2[0] )
    {
      do
      {
        v30 = v29;
        v29 += 40;
        sub_2207560(v30);
      }
      while ( v28 != v29 );
      v29 = (char *)s2[0];
    }
    if ( v29 )
      operator delete(v29);
  }
  v31 = *((unsigned int *)v19 + 48);
  if ( (_DWORD)v31 )
  {
    sub_FED660((__int64)&v58, a1, v19[23], v31);
    v63.m128i_i16[0] = 7;
    v43 = v58;
    v58 = 0;
    v63.m128i_i64[1] = v43;
    v44 = v59;
    v59 = 0;
    v64 = v44;
    LODWORD(v44) = v60;
    v60 = 0;
    v65 = v44;
    sub_2208690(s2, &v63, 1);
    LOWORD(v66) = 8;
    v67 = s2[0];
    v45 = s2[1];
    *(_OWORD *)s2 = 0;
    v68 = v45;
    v46 = v62;
    v62 = 0;
    v69 = v46;
    sub_E35E20((void ***)v57, "codeFlows");
    v47 = sub_220A4E0(&v54, v57);
    sub_2207560(v47);
    sub_2205840(v47, &v66);
    if ( v57[0] )
      sub_FE8D40((void **)v57[0]);
    sub_2207560(&v66);
    v48 = (char *)s2[1];
    v49 = (char *)s2[0];
    if ( s2[1] != s2[0] )
    {
      do
      {
        v50 = v49;
        v49 += 40;
        sub_2207560(v50);
      }
      while ( v48 != v49 );
      v49 = (char *)s2[0];
    }
    if ( v49 )
      operator delete(v49);
    sub_2207560(&v63);
    sub_E395A0(&v58);
  }
  if ( *((_BYTE *)v19 + 588) )
  {
    v32 = *((_DWORD *)v19 + 146);
    v33 = v32 <= 1;
    if ( v32 == 1 )
      goto LABEL_55;
LABEL_41:
    if ( v33 )
    {
      if ( !v32 )
      {
        v34 = j__strlen("none");
        v35 = "none";
        goto LABEL_45;
      }
    }
    else
    {
      if ( v32 == 2 )
      {
        v34 = j__strlen("warning");
        v35 = "warning";
        goto LABEL_45;
      }
      if ( v32 == 3 )
      {
        v34 = j__strlen("error");
        v35 = "error";
        goto LABEL_45;
      }
    }
    return sub_FEE010();
  }
  else
  {
    v32 = *(_DWORD *)(v4 + 132);
    v33 = v32 <= 1;
    if ( v32 != 1 )
      goto LABEL_41;
LABEL_55:
    v34 = j__strlen("note");
    v35 = "note";
LABEL_45:
    sub_E35AF0((__int64)&v66, (__int64)v35, v34);
    sub_E35E20((void ***)&v63, "level");
    v36 = sub_220A4E0(&v54, &v63);
    sub_2207560(v36);
    sub_2205840(v36, &v66);
    if ( v63.m128i_i64[0] )
      sub_FE8D40((void **)v63.m128i_i64[0]);
    sub_2207560(&v66);
    v37 = *(_QWORD *)(a1 + 56);
    if ( *(_WORD *)(v37 - 40) == 7 )
      v38 = v37 - 32;
    else
      v38 = 0;
    v39 = j__strlen("results");
    v40 = (char **)sub_2207DF0(v38, "results", v39);
    sub_FE9150(v40, &v54);
    return sub_E395A0(&v54);
  }
}

