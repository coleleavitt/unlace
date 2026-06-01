unsigned __int64 __fastcall sub_1E42AE0(
        __int64 *a1,
        __int64 a2,
        char a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128i a11)
{
  int v13; // ecx
  void *v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // r15d
  __int64 *v32; // rdi
  __int64 v33; // rcx
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // rdi
  unsigned __int64 *v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // r14
  void *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // r9
  unsigned __int64 (__fastcall *v51)(__int64); // rax
  __int32 v52; // ecx
  __int32 v53; // r8d
  int v54; // esi
  int v55; // edx
  __int64 v56; // r14
  unsigned __int64 v57; // rdx
  unsigned __int8 v58; // cl
  void **v59; // rdx
  int v60; // r9d
  __int64 v61; // rcx
  int v62; // r9d
  int v63; // eax
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  int v69; // r13d
  __int64 v70; // rax
  __int64 v71; // [rsp+8h] [rbp-140h]
  int v72; // [rsp+8h] [rbp-140h]
  int v73; // [rsp+8h] [rbp-140h]
  int v74; // [rsp+10h] [rbp-138h]
  __int32 v75; // [rsp+10h] [rbp-138h]
  __int32 v76; // [rsp+18h] [rbp-130h]
  char v77; // [rsp+2Eh] [rbp-11Ah] BYREF
  char v78; // [rsp+2Fh] [rbp-119h] BYREF
  __m128i v79; // [rsp+30h] [rbp-118h] BYREF
  __int64 v80; // [rsp+40h] [rbp-108h]
  __m128i v81; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v82; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v83[24]; // [rsp+68h] [rbp-E0h] BYREF
  void *v84[2]; // [rsp+80h] [rbp-C8h] BYREF
  void *v85[2]; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v86; // [rsp+A0h] [rbp-A8h]

  v13 = *(_DWORD *)(a2 + 64);
  v14 = *(void **)(a2 + 80);
  v15 = *a1;
  v16 = *(_QWORD *)(a2 + 72);
  if ( v13 && !a3 )
  {
    v81.m128i_i64[1] = 0x200000000LL;
    v81.m128i_i64[0] = (__int64)&v82;
    sub_1E4CA00(v15, v16);
    v46 = *a1;
    v47 = *(void **)(a2 + 40);
    LODWORD(v84[1]) = *(_DWORD *)(a2 + 24);
    v84[0] = v47;
    sub_B85890(v85, (__int64)v47);
    sub_1E4CA40(v46, v84, &v81);
    v48 = *(_QWORD *)a2;
    v77 = 1;
    v49 = *a1;
    v50 = a1[4];
    v78 = 0;
    v51 = *(unsigned __int64 (__fastcall **)(__int64))(v48 + 16);
    v79.m128i_i32[0] = 0;
    v52 = v81.m128i_i32[0];
    v53 = v81.m128i_i32[2];
    if ( v51 == sub_B708B0 )
    {
      v54 = *(_DWORD *)(a2 + 56);
      if ( !v54 )
        v54 = *(_DWORD *)(a2 + 24);
      v55 = v54;
    }
    else
    {
      v76 = v81.m128i_i32[2];
      v75 = v81.m128i_i32[0];
      v73 = v50;
      v68 = v51(a2);
      v53 = v76;
      v52 = v75;
      v55 = v68;
      LODWORD(v50) = v73;
    }
    v20 = 0;
    if ( (unsigned __int8)sub_1E54D70(
                            v49,
                            *(_DWORD *)(a2 + 64),
                            v55,
                            v52,
                            v53,
                            v50,
                            (__int64)&v77,
                            (__int64)&v78,
                            (__int64)&v79) )
      goto LABEL_48;
    v56 = *a1;
    if ( !v77 )
    {
      v69 = *(_DWORD *)(v56 + 12632);
      *(_DWORD *)(v56 + 12632) = 0;
      v70 = sub_1E42AE0(a1, a2, 1);
      *(_DWORD *)(v56 + 12632) = v69;
      v20 = v70;
      goto LABEL_48;
    }
    v57 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v57 = *(_QWORD *)v57;
    v58 = *(_BYTE *)(v57 + 8) & 0x7F;
    if ( v58 <= 0x12u )
    {
      if ( ((1LL << v58) & 0x40182) == 0 )
        goto LABEL_33;
    }
    else if ( ((v58 + 94) & 0x7Fu) > 5 )
    {
LABEL_33:
      v59 = v85;
      v60 = 0;
      v84[1] = (void *)0x800000000LL;
      v61 = 0;
      v84[0] = v85;
      if ( v79.m128i_i32[0] == 1 )
      {
LABEL_44:
        v20 = sub_183D840(v56, a2, v59, v61);
        if ( sub_1DFEFF0(a2) )
          sub_1DC20B0(*(_QWORD *)(*a1 + 11280), a2, v20, v67);
      }
      else
      {
        while ( 1 )
        {
          v62 = v60 + 1;
          v63 = *(_DWORD *)(v56 + 12632);
          *(_DWORD *)(v56 + 12632) = v62;
          v72 = v62;
          v74 = v63;
          v64 = sub_1E42AE0(a1, a2, 1);
          v60 = v72;
          v20 = v64;
          if ( !v64 )
            break;
          v65 = LODWORD(v84[1]) + 1LL;
          if ( v65 > HIDWORD(v84[1]) )
          {
            sub_2237220(v84, v85, v65, 8);
            v60 = v72;
            *((_QWORD *)v84[0] + LODWORD(v84[1])) = v20;
            v61 = (unsigned int)++LODWORD(v84[1]);
            *(_DWORD *)(v56 + 12632) = v74;
            if ( v79.m128i_i32[0] - 1 == v72 )
            {
LABEL_43:
              v56 = *a1;
              v59 = (void **)v84[0];
              goto LABEL_44;
            }
          }
          else
          {
            *((_QWORD *)v84[0] + LODWORD(v84[1])) = v64;
            v61 = (unsigned int)++LODWORD(v84[1]);
            *(_DWORD *)(v56 + 12632) = v74;
            if ( v79.m128i_i32[0] - 1 == v72 )
              goto LABEL_43;
          }
          v56 = *a1;
        }
        *(_DWORD *)(v56 + 12632) = v74;
      }
      if ( v84[0] != v85 )
        free(v84[0]);
LABEL_48:
      v39 = (void *)v81.m128i_i64[0];
      if ( (__int64 *)v81.m128i_i64[0] == &v82 )
        return v20;
      goto LABEL_12;
    }
    if ( (unsigned int)(v79.m128i_i32[0] - 1) > 1 )
    {
      v20 = 0;
      sub_168B9F0((__int64)v84, (__int64 *)(v56 + 8), *(_DWORD *)(a2 + 64), 0x151Eu, 0);
      sub_15F7200(v84);
      goto LABEL_48;
    }
    goto LABEL_33;
  }
  v17 = *(_DWORD *)(a2 + 60);
  v18 = sub_1DEB190(v15, v16, v14, a1[4]);
  v20 = v18;
  if ( !v18 )
    return v20;
  *(_OWORD *)v84 = 0;
  *(_OWORD *)v85 = 0;
  v86 = 0;
  sub_15AB8B0((__int64)v84, v18, v19);
  v21 = a1[4];
  v22 = *(_QWORD *)(a2 + 40);
  v23 = *a1;
  v81.m128i_i32[2] = *(_DWORD *)(a2 + 24);
  v71 = v21;
  v81.m128i_i64[0] = v22;
  sub_B85890(&v82, v22);
  v24 = v23;
  sub_1DD8EB0(&v79, v23, &v81, v71, v25, v26, (__m128)0LL, a5);
  if ( *(_DWORD *)(a2 + 64) && (v31 = 0, *(_DWORD *)(*a1 + 12632)) )
  {
    v30 = *(unsigned __int8 *)(a2 + 29);
    if ( (v30 & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    v30 = *(unsigned __int8 *)(a2 + 29);
    v31 = *(_DWORD *)(a2 + 64);
    if ( (v30 & 1) == 0 )
      goto LABEL_6;
  }
  v41 = sub_B8C3D0(a2, v24, v30, v27, v28, v29);
  v42 = *v41;
  v43 = *v41 + 8LL * *((unsigned int *)v41 + 2);
  if ( *v41 < v43 )
  {
    v66 = *v41;
    while ( *(_WORD *)(*(_QWORD *)v66 + 36LL) != 391 )
    {
      v66 += 8LL;
      if ( v43 == v66 )
        goto LABEL_22;
    }
  }
  else
  {
    if ( v42 == v43 )
    {
LABEL_22:
      LOBYTE(v30) = *(_BYTE *)(a2 + 29);
      goto LABEL_6;
    }
    if ( *(_WORD *)(*(_QWORD *)v43 + 36LL) != 391 )
    {
      v44 = v43 + 8;
      do
      {
        v45 = v44;
        if ( v42 == v44 )
          goto LABEL_22;
        v44 += 8LL;
      }
      while ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 391 );
    }
  }
  LOBYTE(v30) = *(_BYTE *)(a2 + 29);
LABEL_6:
  v32 = (__int64 *)*a1;
  v33 = *(unsigned int *)(a2 + 56);
  v81.m128i_i64[1] = (__int64)v83;
  v82 = 0x200000000LL;
  v81.m128i_i64[0] = 0;
  v20 = (unsigned __int64)sub_185AD60(
                            v32,
                            nullptr,
                            ((unsigned __int8)v30 >> 5) & 3,
                            v33,
                            1,
                            v17,
                            (__int64)v84,
                            (const __m128i)0LL,
                            v79.m128i_i64[0],
                            v79.m128i_i32[2],
                            v80,
                            v31,
                            (char)&v81);
  if ( (_BYTE *)v81.m128i_i64[1] != v83 )
    free((void *)v81.m128i_i64[1]);
  if ( v20 )
  {
    sub_1E40A90(*a1, (__int64 *)a1[4], a2, v20, 0, nullptr, (__m128)0LL, a5, a6, a7, v34, v35, a10, a11);
    sub_A96260(*(_QWORD *)(*a1 + 248), v20, a2, v36, v37, v38);
  }
  if ( HIDWORD(v85[1]) )
  {
    v39 = v85[0];
LABEL_12:
    free(v39);
  }
  return v20;
}
