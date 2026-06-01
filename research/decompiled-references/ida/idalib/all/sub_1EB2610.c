__int64 __fastcall sub_1EB2610(__int64 *a1, int a2, __int64 a3)
{
  int v3; // r12d
  size_t v5; // rax
  size_t v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  void **v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rax
  __m128i v13; // kr00_16
  _QWORD *v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rax
  const __m128i *v21; // r12
  bool v22; // r13
  __m128i v23; // kr10_16
  __m128i *v24; // rdi
  unsigned int v25; // edx
  __int64 v26; // rax
  int v27; // ebx
  __int64 i; // r12
  unsigned int v29; // ebx
  __int64 (*v30)(); // rax
  __m128i *v32; // r15
  signed __int64 v33; // rdx
  signed __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  __m128i *v37; // rax
  _BYTE *v38; // rsi
  signed __int64 v39; // rax
  int v40; // edx
  const __m128i *v41; // rdx
  void **v42; // rsi
  __m128i *v43; // rax
  __int32 v44; // ecx
  const __m128i *v45; // rcx
  void **v46; // rbx
  __m128 v47; // xmm0
  bool v48; // [rsp+8h] [rbp-330h]
  __m128i *v49; // [rsp+10h] [rbp-328h]
  unsigned __int64 v50; // [rsp+20h] [rbp-318h] BYREF
  void ***v51; // [rsp+28h] [rbp-310h]
  signed __int64 v52; // [rsp+30h] [rbp-308h]
  __int8 *v53; // [rsp+38h] [rbp-300h]
  __int64 v54; // [rsp+40h] [rbp-2F8h]
  int v55; // [rsp+48h] [rbp-2F0h]
  int v56; // [rsp+4Ch] [rbp-2ECh]
  bool v57; // [rsp+5Bh] [rbp-2DDh] BYREF
  unsigned int v58; // [rsp+5Ch] [rbp-2DCh] BYREF
  __m128i v59; // [rsp+60h] [rbp-2D8h] BYREF
  _BYTE v60[16]; // [rsp+70h] [rbp-2C8h] BYREF
  _QWORD v61[2]; // [rsp+80h] [rbp-2B8h] BYREF
  char v62; // [rsp+90h] [rbp-2A8h] BYREF
  void *v63[2]; // [rsp+A0h] [rbp-298h]
  __int8 *v64; // [rsp+B0h] [rbp-288h]
  __int64 v65; // [rsp+B8h] [rbp-280h]
  __m128i *v66; // [rsp+C0h] [rbp-278h]
  const __m128i *v67; // [rsp+C8h] [rbp-270h]
  char *v68; // [rsp+D0h] [rbp-268h]
  __int64 v69; // [rsp+D8h] [rbp-260h]
  char v70; // [rsp+E0h] [rbp-258h] BYREF
  char *v71; // [rsp+F0h] [rbp-248h]
  __int64 v72; // [rsp+F8h] [rbp-240h]
  char v73; // [rsp+100h] [rbp-238h] BYREF
  char *v74; // [rsp+110h] [rbp-228h]
  __int64 v75; // [rsp+118h] [rbp-220h]
  char v76; // [rsp+120h] [rbp-218h] BYREF
  int v77; // [rsp+138h] [rbp-200h] BYREF
  __int64 v78; // [rsp+140h] [rbp-1F8h]
  int *v79; // [rsp+148h] [rbp-1F0h]
  int *v80; // [rsp+150h] [rbp-1E8h]
  __int64 v81; // [rsp+158h] [rbp-1E0h]
  __int128 v82; // [rsp+160h] [rbp-1D8h]
  __int64 v83; // [rsp+170h] [rbp-1C8h]
  __int64 *v84; // [rsp+178h] [rbp-1C0h] BYREF
  __int64 v85; // [rsp+188h] [rbp-1B0h] BYREF
  char v86; // [rsp+198h] [rbp-1A0h]
  __int64 v87; // [rsp+19Ch] [rbp-19Ch]
  __int64 v88; // [rsp+1A8h] [rbp-190h]
  __int64 v89; // [rsp+1B0h] [rbp-188h]
  __int64 v90; // [rsp+1B8h] [rbp-180h]
  int v91; // [rsp+1C0h] [rbp-178h]
  _BYTE *v92; // [rsp+1C8h] [rbp-170h]
  __int64 v93; // [rsp+1D0h] [rbp-168h]
  _BYTE v94[280]; // [rsp+1D8h] [rbp-160h] BYREF
  __int16 v95; // [rsp+2F0h] [rbp-48h]
  char v96; // [rsp+2F2h] [rbp-46h]

  v56 = a2;
  v54 = a3;
  v5 = j__strlen("/");
  v61[0] = &v62;
  v51 = (void ***)v61;
  sub_1EA9D80(v61, "/", (__int64)&asc_2336F83[v5 + 2]);
  v68 = &v70;
  v71 = &v73;
  v74 = &v76;
  v79 = &v77;
  v80 = &v77;
  v82 = 0;
  v63[0] = nullptr;
  v63[1] = nullptr;
  v64 = nullptr;
  v65 = 0;
  v66 = nullptr;
  v67 = nullptr;
  v69 = 0;
  v70 = 0;
  v72 = 0;
  v73 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v81 = 0;
  v83 = 0;
  v84 = &v85;
  v6 = j__strlen("raw");
  sub_1EA9D80(&v84, "raw", (__int64)&aDarnRaw[v6 + 7]);
  v7 = (__int64 *)*a1;
  v86 &= 0xE0u;
  v87 = 0x28DE8000093A80LL;
  v92 = v94;
  v93 = 0x1000000000LL;
  v95 = -30585;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v96 = v96 & 0xE0 | 0x10;
  v8 = *v7;
  v91 = 0;
  memset(&v94[256], 0, 24);
  v58 = 1;
  v55 = v8;
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      sub_1EAC540((__m128i **)&v59, a1, &v58);
      v9 = *a1;
      v10 = (void **)v63[1];
      v11 = *(_QWORD *)(*a1 + 8LL * v58);
      LOBYTE(v3) = *(_QWORD *)(*a1 + 8LL * (v58 + 1)) != 0;
      v12 = v58 + 2;
      v58 += 3;
      v48 = *(_QWORD *)(v9 + 8 * v12) != 0;
      if ( v63[1] == v64 )
        break;
      v13 = v59;
      v14 = v63[1];
      *(_QWORD *)v63[1] = (char *)v63[1] + 16;
      sub_1EA9D80(v14, v13.m128i_i64[0], v13.m128i_i64[0] + v13.m128i_i64[1]);
      v15 = *((unsigned __int8 *)v10 + 36);
      *((_DWORD *)v10 + 8) = v11;
      v3 |= (2 * v48) | v15 & 0xFFFFFFFC;
      *((_BYTE *)v10 + 36) = v3;
      v63[1] = (char *)v63[1] + 40;
LABEL_4:
      if ( (_BYTE *)v59.m128i_i64[0] == v60 )
      {
        if ( !--v55 )
        {
LABEL_6:
          v7 = (__int64 *)*a1;
          v16 = v58 + 1;
          v17 = v58;
          goto LABEL_7;
        }
      }
      else
      {
        operator delete((void *)v59.m128i_i64[0]);
        if ( !--v55 )
          goto LABEL_6;
      }
    }
    v32 = (__m128i *)v63[0];
    v33 = (char *)v63[1] - (char *)v63[0];
    v34 = ((char *)v63[1] - (char *)v63[0]) >> 3;
    if ( 0xCCCCCCCCCCCCCCCDLL * v34 )
    {
      v35 = 0x999999999999999ALL * v34;
      v36 = -16;
      if ( 0xCCCCCCCCCCCCCCCDLL * v34 <= 0x999999999999999ALL * v34 && v35 <= 0x666666666666666LL )
      {
        if ( !v35 )
        {
          v50 = 40;
          v53 = nullptr;
          v49 = nullptr;
          goto LABEL_29;
        }
        v36 = 16 * v34;
      }
    }
    else
    {
      v36 = 40;
    }
    v52 = (char *)v63[1] - (char *)v63[0];
    v50 = v36;
    v37 = (__m128i *)operator new(v36);
    v33 = v52;
    v49 = v37;
    v53 = &v37->m128i_i8[v50];
    v50 = (unsigned __int64)&v37[2].m128i_u64[1];
LABEL_29:
    v38 = (_BYTE *)v59.m128i_i64[0];
    v52 = (signed __int64)v49->m128i_i64 + v33;
    *(__int64 *)((char *)v49->m128i_i64 + v33) = (__int64)v49[1].m128i_i64 + v33;
    sub_1EA9D80((__int64 *)((char *)v49->m128i_i64 + v33), v38, (__int64)&v38[v59.m128i_i64[1]]);
    v39 = v52;
    v40 = *(unsigned __int8 *)(v52 + 36);
    *(_DWORD *)(v52 + 32) = v11;
    v3 |= v40 & 0xFFFFFFFC;
    *(_BYTE *)(v39 + 36) = v3 | (2 * v48);
    if ( v10 != (void **)v32 )
    {
      v41 = v32 + 1;
      v42 = (void **)v32;
      v43 = v49;
      do
      {
        v43->m128i_i64[0] = (__int64)v43[1].m128i_i64;
        v45 = (const __m128i *)v41[-1].m128i_i64[0];
        if ( v45 == v41 )
        {
          v43[1] = _mm_loadu_si128(v41);
        }
        else
        {
          v43->m128i_i64[0] = (__int64)v45;
          v43[1].m128i_i64[0] = v41->m128i_i64[0];
        }
        v42 += 5;
        v43 = (__m128i *)((char *)v43 + 40);
        v43[-2].m128i_i64[0] = v41[-1].m128i_i64[1];
        v44 = v41[1].m128i_i32[0];
        v41[-1].m128i_i64[0] = (__int64)v41;
        v41 = (const __m128i *)((char *)v41 + 40);
        v41[-3].m128i_i64[0] = 0;
        v41[-3].m128i_i8[8] = 0;
        v43[-1].m128i_i32[2] = v44;
        LOBYTE(v44) = *((_BYTE *)v42 - 4) & 1 | v43[-1].m128i_i8[12] & 0xFE;
        v43[-1].m128i_i8[12] = v44;
        v43[-1].m128i_i8[12] = *((_BYTE *)v42 - 4) & 2 | v44 & 0xFD;
      }
      while ( v10 != v42 );
      v46 = (void **)v32;
      v50 = (unsigned __int64)&v49[5]
          + 40
          * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)(v10 - 5) - (char *)v32) >> 3)) & 0x1FFFFFFFFFFFFFFFLL);
      do
      {
        while ( *v46 != v46 + 2 )
        {
          operator delete(*v46);
          v46 += 5;
          if ( v10 == v46 )
            goto LABEL_38;
        }
        v46 += 5;
      }
      while ( v10 != v46 );
    }
LABEL_38:
    if ( v32 )
      operator delete(v32);
    v47 = _mm_loadh_ps((const double *)&v50);
    v64 = v53;
    *(__m128 *)v63 = v47;
    goto LABEL_4;
  }
  v17 = 1;
  v16 = 2;
LABEL_7:
  v18 = v7[v17];
  v58 = v16;
  v19 = v18;
  if ( (_DWORD)v18 )
  {
    do
    {
      while ( 1 )
      {
        sub_1EAC540((__m128i **)&v59, a1, &v58);
        v20 = v58;
        v21 = v66;
        ++v58;
        v22 = *(_QWORD *)(*a1 + 8 * v20) != 0;
        v57 = v22;
        if ( v66 == v67 )
        {
          sub_1EB1750(v51 + 7, v66, (__int64)&v59, &v57);
        }
        else
        {
          v23 = v59;
          v24 = v66;
          v66->m128i_i64[0] = (__int64)v66[1].m128i_i64;
          sub_1EA9D80(v24, v23.m128i_i64[0], v23.m128i_i64[0] + v23.m128i_i64[1]);
          v21[2].m128i_i8[0] = v22;
          v66 = (__m128i *)((char *)v66 + 40);
        }
        if ( (_BYTE *)v59.m128i_i64[0] == v60 )
          break;
        operator delete((void *)v59.m128i_i64[0]);
        if ( !--v19 )
          goto LABEL_12;
      }
      --v19;
    }
    while ( v19 );
LABEL_12:
    v16 = v58;
    v7 = (__int64 *)*a1;
  }
  v25 = v16 + 1;
  v26 = v7[v16];
  v58 = v25;
  v27 = v26;
  for ( i = (__int64)(v51 + 75); v27; --v27 )
  {
    while ( 1 )
    {
      sub_1EAC540((__m128i **)&v59, a1, &v58);
      sub_A82C60(i, &v59);
      if ( (_BYTE *)v59.m128i_i64[0] == v60 )
        break;
      operator delete((void *)v59.m128i_i64[0]);
      if ( !--v27 )
        goto LABEL_16;
    }
  }
LABEL_16:
  v29 = 0;
  v30 = *(__int64 (**)())(*(_QWORD *)v54 + 80LL);
  if ( v30 != sub_12E86F0 )
    v29 = ((__int64 (__fastcall *)(__int64, void ***, _QWORD))v30)(v54, v51, (unsigned __int8)v56);
  sub_1EAF0A0((__int64)v51);
  return v29;
}
