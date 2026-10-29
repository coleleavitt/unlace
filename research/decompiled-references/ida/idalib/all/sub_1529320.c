__int64 __fastcall sub_1529320(const __m128i *a1, __int64 a2, __m128i a3)
{
  __int64 v4; // rbx
  unsigned __int16 v5; // bp
  char v6; // al
  __int64 v7; // rbp
  int v8; // r12d
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  bool v11; // zf
  int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned int *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  unsigned int v18; // r15d
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rcx
  int v22; // edx
  bool v23; // r9
  __int32 v24; // eax
  __int64 *v25; // rdi
  unsigned int v26; // r14d
  char v27; // al
  __int64 v28; // r9
  unsigned int *v29; // rax
  __int64 v30; // rdx
  void *v31; // r9
  unsigned __int64 v32; // rax
  _DWORD *v33; // rcx
  __int32 v34; // eax
  __int64 *v35; // rdi
  __int64 v36; // r14
  __int64 *v37; // rdi
  unsigned __int64 v38; // r14
  int v39; // eax
  __int32 v40; // eax
  __int64 *v41; // rdi
  int v42; // eax
  int v44; // edx
  size_t v45; // rax
  unsigned int *v46; // rdi
  size_t v47; // rdx
  __int32 v48; // eax
  __int64 *v49; // rdi
  unsigned __int16 v50; // r14
  char v51; // al
  __int64 v52; // r14
  unsigned int *v53; // rax
  size_t v54; // r15
  __int64 v55; // r14
  __int16 v56; // ax
  bool v57; // r15
  __int64 v58; // rdx
  __int64 *v59; // rdi
  __int64 v60; // rbx
  __int32 v61; // eax
  __int64 *v62; // rdi
  void *v63; // r9
  unsigned __int64 v64; // rax
  __int64 *v65; // rdi
  unsigned __int16 v66; // r15
  char v67; // al
  unsigned int *v68; // rax
  size_t v69; // r15
  unsigned __int64 v70; // rax
  unsigned int *v71; // [rsp+8h] [rbp-E0h]
  void *v72; // [rsp+8h] [rbp-E0h]
  void *v73; // [rsp+8h] [rbp-E0h]
  void *v74; // [rsp+18h] [rbp-D0h]
  void *v75; // [rsp+18h] [rbp-D0h]
  bool v76; // [rsp+20h] [rbp-C8h]
  int *m128i_i32; // [rsp+20h] [rbp-C8h]
  char v78; // [rsp+2Ch] [rbp-BCh]
  unsigned __int8 v79; // [rsp+2Ch] [rbp-BCh]
  int v80; // [rsp+2Ch] [rbp-BCh]
  unsigned __int16 s1c; // [rsp+30h] [rbp-B8h]
  void *s1; // [rsp+30h] [rbp-B8h]
  const char *s1a; // [rsp+30h] [rbp-B8h]
  _QWORD *s1b; // [rsp+30h] [rbp-B8h]
  __int64 v85; // [rsp+38h] [rbp-B0h]
  void *v86; // [rsp+40h] [rbp-A8h] BYREF
  signed __int64 v87; // [rsp+48h] [rbp-A0h]
  _BYTE v88[16]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int8 *v89; // [rsp+60h] [rbp-88h] BYREF
  __int64 v90; // [rsp+68h] [rbp-80h]
  bool v91; // [rsp+70h] [rbp-78h]
  char v92; // [rsp+71h] [rbp-77h]

  v4 = a1[1].m128i_i64[1];
  v5 = *(_WORD *)(v4 + 16);
  v6 = sub_141A630(v5);
  if ( v5 == 1 || v6 )
    v7 = 0;
  else
    v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_DWORD *)v4;
  v9 = 0;
  v10 = sub_15290A0((__int64 *)(*(_QWORD *)(a1[6].m128i_i64[0] + 248) + 2352LL), 16, 3u);
  v11 = *(_WORD *)(v4 + 40) == 5;
  *(_DWORD *)v10 = v8;
  *(_QWORD *)(v10 + 8) = v7;
  *(_QWORD *)(a2 + 8) = v10;
  if ( v11 )
    v9 = *(_QWORD *)(v4 + 32);
  v12 = *(_DWORD *)(v4 + 24);
  v13 = sub_15290A0((__int64 *)(*(_QWORD *)(a1[6].m128i_i64[0] + 248) + 2352LL), 16, 3u);
  *(_DWORD *)v13 = v12;
  *(_QWORD *)(v13 + 8) = v9;
  *(_QWORD *)(a2 + 16) = v13;
  v71 = *(unsigned int **)(v4 + 48);
  v74 = *(void **)(v4 + 56);
  v14 = *(unsigned int **)(v7 + 16);
  v15 = *v14;
  v92 = 0;
  v89 = (unsigned __int8 *)(v14 + 4);
  v90 = v15;
  LOBYTE(v86) = 1;
  if ( !(unsigned __int8)sub_B7E0A0((__int64)&v89, (char *)&v86, "unroll", 6)
    && !(unsigned __int8)sub_B7E0A0((__int64)&v89, (char *)&v86, "nounroll", 8)
    && !(unsigned __int8)sub_B7E0A0((__int64)&v89, (char *)&v86, "unroll_and_jam", 14) )
  {
    sub_B7E0A0((__int64)&v89, (char *)&v86, "nounroll_and_jam", 16);
  }
  if ( v92 )
  {
    LOBYTE(v16) = v91 && v74 == nullptr;
    v18 = v16;
    if ( (_BYTE)v16 )
    {
      v40 = a1[1].m128i_i32[1];
      v41 = (__int64 *)a1->m128i_i64[1];
      if ( !v40 )
        v40 = a1[1].m128i_i32[0];
      a1[2].m128i_i32[2] = v40;
      sub_14634E0(v41, a1[1].m128i_i32);
      v42 = *(_DWORD *)v4;
      *(_DWORD *)a2 = *(_DWORD *)v4;
      *(_DWORD *)(a2 + 4) = v42;
      return v18;
    }
  }
  if ( !v9 )
  {
    if ( *((_WORD *)v71 + 8) == 1 )
    {
      v76 = 0;
      v60 = 0;
      v79 = 1;
      goto LABEL_94;
    }
    goto LABEL_30;
  }
  v19 = *(__int64 **)(v9 + 16);
  v20 = *v19;
  v21 = v19 + 2;
  if ( (unsigned int)*v19 == 6 )
  {
    if ( *((_DWORD *)v19 + 4) == 1869770357 && *((_WORD *)v19 + 10) == 27756 )
    {
      v22 = 0;
      goto LABEL_14;
    }
LABEL_13:
    v22 = 1;
LABEL_14:
    v76 = v22 == 0;
    LOBYTE(v17) = 0;
    v18 = 0;
    goto LABEL_15;
  }
  switch ( (_DWORD)v20 )
  {
    case 0xE:
      if ( v19[2] == 0x615F6C6C6F726E75LL && *((_DWORD *)v19 + 6) == 1784636526 && *((_WORD *)v19 + 14) == 28001 )
      {
        v22 = 0;
        goto LABEL_14;
      }
      goto LABEL_13;
    case 0xA:
      if ( v19[2] != 0x7562697274736964LL || (v44 = 0, *((_WORD *)v21 + 4) != 25972) )
        v44 = 1;
      v76 = 0;
      LOBYTE(v17) = v44 == 0;
      v18 = 0;
      break;
    case 8:
      v76 = 0;
      LOBYTE(v17) = v19[2] == 0x656E696C65706970LL;
      v18 = v17;
      break;
    default:
      LOBYTE(v17) = 0;
      v76 = 0;
      v18 = 0;
      break;
  }
LABEL_15:
  v89 = (unsigned __int8 *)v21;
  v78 = v17;
  v90 = (unsigned int)v20;
  v92 = 0;
  LOBYTE(v86) = 1;
  sub_B7E0A0((__int64)&v89, (char *)&v86, "vectorize", 9);
  LOBYTE(v86) = 1;
  sub_B7E0A0((__int64)&v89, (char *)&v86, "interleave", 10);
  LOBYTE(v86) = 1;
  sub_B7E0A0((__int64)&v89, (char *)&v86, "vectorize_predicate", 19);
  v23 = v78;
  if ( v92 && v91 )
  {
    if ( v76 )
      goto LABEL_18;
    v79 = v78 ^ 1;
    if ( *((_WORD *)v71 + 8) == 1 )
    {
      v76 = v91;
      v60 = 0;
      goto LABEL_94;
    }
LABEL_107:
    v85 = 0;
    goto LABEL_20;
  }
  if ( !v76 )
  {
    v79 = v78 ^ 1;
    if ( *((_WORD *)v71 + 8) == 1 )
    {
      v76 = v23;
      v60 = 0;
      goto LABEL_94;
    }
    if ( v23 )
      goto LABEL_107;
    v45 = j__strlen("vectorize_width");
    v46 = *(unsigned int **)(v9 + 16);
    v47 = *v46;
    if ( v47 == v45 && (!*v46 || !memcmp(v46 + 4, "vectorize_width", v47)) )
    {
      sub_14368B0(a1->m128i_i64[1], (char *)v71, (unsigned int)v74, 0, 0, 0);
      v48 = a1[1].m128i_i32[1];
      v49 = (__int64 *)a1->m128i_i64[1];
      if ( !v48 )
        v48 = a1[1].m128i_i32[0];
      a1[2].m128i_i32[2] = v48;
      m128i_i32 = a1[1].m128i_i32;
      sub_14634E0(v49, a1[1].m128i_i32);
      v50 = *((_WORD *)v71 + 8);
      v80 = *v71;
      v51 = sub_141A630(v50);
      if ( v50 == 1 || v51 || (v52 = *((_QWORD *)v71 + 1)) == 0 )
      {
        v52 = 0;
        v54 = j__strlen(&byte_22F0C30);
        s1a = &byte_22F0C30;
      }
      else
      {
        v53 = *(unsigned int **)(v52 + 16);
        v54 = *v53;
        s1a = (const char *)(v53 + 4);
      }
      if ( v54 == j__strlen("scalable") )
      {
        if ( !v54 || !memcmp(s1a, "scalable", v54) )
          goto LABEL_110;
        if ( v54 != j__strlen("fixed") )
          goto LABEL_71;
      }
      else
      {
        if ( v54 != j__strlen("fixed") )
        {
LABEL_71:
          v55 = sub_14C4CD0(a1, a3);
          if ( v55 == 1 )
          {
            if ( a1[2].m128i_i16[0] == 66 )
              goto LABEL_120;
            sub_1564820(&v89, a1, *v71, 2052);
            sub_AEA040((__int64)&v89);
          }
          v56 = a1[2].m128i_i16[0];
          if ( v56 != 66 )
          {
            v57 = v55 == 1;
            goto LABEL_74;
          }
LABEL_120:
          sub_14634E0((__int64 *)a1->m128i_i64[1], m128i_i32);
          v66 = a1[2].m128i_u16[0];
          v67 = sub_141A630(v66);
          if ( v66 == 1 || v67 )
            BUG();
          s1b = (_QWORD *)a1[1].m128i_i64[1];
          v68 = (unsigned int *)s1b[2];
          v69 = *v68;
          v75 = v68 + 4;
          if ( j__strlen("scalable") == v69 )
          {
            if ( !v69 || !memcmp(v75, "scalable", v69) )
              goto LABEL_131;
            if ( v69 != j__strlen("fixed") )
            {
LABEL_127:
              v57 = 1;
              sub_1564820(&v89, a1, a1[1].m128i_u32[0], 1865);
              sub_AEA040((__int64)&v89);
LABEL_128:
              sub_14634E0((__int64 *)a1->m128i_i64[1], m128i_i32);
              v56 = a1[2].m128i_i16[0];
LABEL_74:
              v58 = a1[1].m128i_u32[0];
              if ( v56 != 1 )
              {
                sub_1564820(&v89, a1, v58, 2202);
                sub_1528E60(&v86, *(_QWORD *)(v4 + 8), *(_WORD *)(v4 + 16), *(_QWORD *)(v4 + 32), *(_WORD *)(v4 + 40));
                sub_AEC220(&v89, v86, v87);
                if ( v86 != v88 )
                  operator delete(v86);
                sub_AEA040((__int64)&v89);
                while ( a1[2].m128i_i16[0] != 1 )
                  sub_149F520((__int64)a1, 0);
                LODWORD(v58) = a1[1].m128i_i32[0];
              }
              v59 = (__int64 *)a1->m128i_i64[1];
              a1[2].m128i_i32[2] = v58;
              sub_14634E0(v59, m128i_i32);
              if ( v57 )
                return 0;
              v38 = v55 & 0xFFFFFFFFFFFFFFFELL;
              if ( (unsigned __int8)sub_1915F50(a1[6].m128i_i64[0], v38, *v71, 0) )
                return 0;
LABEL_35:
              *(_QWORD *)(a2 + 32) = v38;
              v33 = (_DWORD *)a2;
LABEL_36:
              v18 = 1;
              v39 = *(_DWORD *)(*(_QWORD *)(v4 + 48) + 24LL * *(_QWORD *)(v4 + 56) - 24);
              *v33 = *(_DWORD *)v4;
              v33[1] = v39;
              return v18;
            }
          }
          else
          {
            if ( v69 != j__strlen("fixed") )
              goto LABEL_127;
            if ( !v69 )
              goto LABEL_131;
          }
          if ( memcmp(v75, "fixed", v69) )
            goto LABEL_127;
LABEL_131:
          v70 = sub_15290A0((__int64 *)(*(_QWORD *)(a1[6].m128i_i64[0] + 248) + 2352LL), 16, 3u);
          v57 = v55 == 1;
          *(_DWORD *)v70 = v80;
          *(_QWORD *)(v70 + 8) = s1b;
          *(_QWORD *)(a2 + 24) = v70;
          goto LABEL_128;
        }
        if ( !v54 )
        {
LABEL_110:
          sub_14634E0((__int64 *)a1->m128i_i64[1], m128i_i32);
          if ( (unsigned __int64)v74 > 2 )
          {
            sub_1564820(&v89, a1, a1[1].m128i_u32[0], 2202);
            sub_1528E60(&v86, *(_QWORD *)(v4 + 8), *(_WORD *)(v4 + 16), *(_QWORD *)(v4 + 32), *(_WORD *)(v4 + 40));
            sub_AEC220(&v89, v86, v87);
            if ( v86 != v88 )
              operator delete(v86);
            sub_AEA040((__int64)&v89);
            while ( a1[2].m128i_i16[0] != 1 )
              sub_149F520((__int64)a1, 0);
          }
          v64 = sub_15290A0((__int64 *)(*(_QWORD *)(a1[6].m128i_i64[0] + 248) + 2352LL), 16, 3u);
          *(_QWORD *)(v64 + 8) = v52;
          *(_DWORD *)v64 = v80;
          *(_QWORD *)(a2 + 24) = v64;
          v65 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v65, m128i_i32);
          v33 = (_DWORD *)a2;
          goto LABEL_36;
        }
      }
      if ( memcmp(s1a, "fixed", v54) )
        goto LABEL_71;
      goto LABEL_110;
    }
LABEL_30:
    sub_14368B0(a1->m128i_i64[1], (char *)v71, (unsigned int)v74, 0, 0, 0);
    v34 = a1[1].m128i_i32[1];
    v35 = (__int64 *)a1->m128i_i64[1];
    if ( !v34 )
      v34 = a1[1].m128i_i32[0];
    a1[2].m128i_i32[2] = v34;
    sub_14634E0(v35, a1[1].m128i_i32);
    v36 = sub_14C4CD0(a1, a3);
    if ( a1[2].m128i_i16[0] != 1 )
    {
      sub_1564820(&v89, a1, a1[1].m128i_u32[0], 2202);
      sub_1528E60(&v86, *(_QWORD *)(v4 + 8), *(_WORD *)(v4 + 16), *(_QWORD *)(v4 + 32), *(_WORD *)(v4 + 40));
      sub_AEC220(&v89, v86, v87);
      if ( v86 != v88 )
        operator delete(v86);
      sub_AEA040((__int64)&v89);
      while ( a1[2].m128i_i16[0] != 1 )
        sub_149F520((__int64)a1, 0);
    }
    v37 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v37, a1[1].m128i_i32);
    if ( v36 == 1 )
      return 0;
    v38 = v36 & 0xFFFFFFFFFFFFFFFELL;
    if ( (unsigned __int8)sub_1915F50(a1[6].m128i_i64[0], v38, *v71, 1) )
      return 0;
    goto LABEL_35;
  }
LABEL_18:
  if ( *((_WORD *)v71 + 8) == 1 )
  {
    v79 = 0;
    v60 = 1;
LABEL_94:
    v61 = a1[1].m128i_i32[1];
    v62 = (__int64 *)a1->m128i_i64[1];
    if ( !v61 )
      v61 = a1[1].m128i_i32[0];
    v18 = 0;
    a1[2].m128i_i32[2] = v61;
    sub_14634E0(v62, a1[1].m128i_i32);
    sub_1564820(&v89, a1, *v71, 1866);
    sub_1520C80(&v89, v76);
    sub_1520C80(&v89, v60);
    sub_1520C80(&v89, v79);
    sub_AEA040((__int64)&v89);
    return v18;
  }
  v85 = 1;
  v79 = 0;
LABEL_20:
  v24 = a1[1].m128i_i32[1];
  v25 = (__int64 *)a1->m128i_i64[1];
  if ( !v24 )
    v24 = a1[1].m128i_i32[0];
  a1[2].m128i_i32[2] = v24;
  sub_14634E0(v25, a1[1].m128i_i32);
  v26 = *v71;
  s1c = *((_WORD *)v71 + 8);
  v27 = sub_141A630(s1c);
  if ( s1c != 1 && !v27 )
  {
    v28 = *((_QWORD *)v71 + 1);
    if ( v28 )
    {
      v29 = *(unsigned int **)(v28 + 16);
      s1 = *((void **)v71 + 1);
      v30 = *v29;
      v92 = 0;
      v89 = (unsigned __int8 *)(v29 + 4);
      v90 = v30;
      LOBYTE(v86) = 1;
      sub_B7E0A0((__int64)&v89, (char *)&v86, "disable", 7);
      LOBYTE(v86) = v18 ^ 1;
      sub_B7E0A0((__int64)&v89, (char *)&v86, "enable", 6);
      LOBYTE(v86) = v76;
      sub_B7E0A0((__int64)&v89, (char *)&v86, "full", 4);
      LOBYTE(v86) = v79;
      sub_B7E0A0((__int64)&v89, (char *)&v86, "assume_safety", 13);
      v31 = s1;
      if ( v92 && v91 )
      {
        if ( (unsigned __int64)v74 > 2 )
        {
          sub_1564820(&v89, a1, a1[1].m128i_u32[0], 2202);
          sub_1528E60(&v86, *(_QWORD *)(v4 + 8), *(_WORD *)(v4 + 16), *(_QWORD *)(v4 + 32), *(_WORD *)(v4 + 40));
          sub_AEC220(&v89, v86, v87);
          v63 = s1;
          if ( v86 != v88 )
          {
            operator delete(v86);
            v63 = s1;
          }
          v73 = v63;
          sub_AEA040((__int64)&v89);
          v31 = v73;
        }
        v72 = v31;
        v32 = sub_15290A0((__int64 *)(*(_QWORD *)(a1[6].m128i_i64[0] + 248) + 2352LL), 16, 3u);
        v33 = (_DWORD *)a2;
        *(_DWORD *)v32 = v26;
        *(_QWORD *)(v32 + 8) = v72;
        *(_QWORD *)(a2 + 24) = v32;
        goto LABEL_36;
      }
      v26 = *v71;
    }
  }
  if ( (_BYTE)v18 )
  {
    sub_1564820(&v89, a1, v26, 1871);
    v18 = 0;
  }
  else
  {
    sub_1564820(&v89, a1, v26, 1863);
    sub_1520C80(&v89, v85);
    sub_1520C80(&v89, v79);
  }
  sub_AEA040((__int64)&v89);
  return v18;
}
