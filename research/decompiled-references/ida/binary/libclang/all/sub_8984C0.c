__int64 __fastcall sub_8984C0(unsigned __int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v7; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i si128; // xmm0
  int v14; // ecx
  char v15; // dl
  __m128i v16; // xmm0
  unsigned int v17; // eax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rsi
  void *v21; // rdi
  unsigned int v22; // ebx
  char *v23; // rbp
  char *v24; // r13
  _QWORD **v25; // rbp
  _QWORD **v26; // r13
  __m128i v27; // xmm0
  __int64 v28; // rax
  unsigned int *v29; // r14
  unsigned int v30; // ebx
  unsigned int v31; // eax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned int v34; // r8d
  unsigned __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rsi
  __m128i v40; // rax
  void *v41; // rax
  _QWORD *v42; // rbp
  void *v43; // rdx
  __int64 v44; // r13
  __int64 v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  _QWORD *v48; // rdx
  char *v49; // rbx
  __int64 v50; // rdi
  const __m128i *v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  __m128i *v54; // rcx
  __m128i *v55; // rax
  const __m128i *v56; // rax
  char *v57; // r14
  void *v58; // rax
  __int64 v59; // rax
  char *i; // r14
  signed __int64 v61; // rax
  __int64 (__fastcall ***v62)(); // [rsp+8h] [rbp-570h] BYREF
  __m128 v63; // [rsp+10h] [rbp-568h] BYREF
  __int64 v64; // [rsp+20h] [rbp-558h]
  _OWORD *v65; // [rsp+28h] [rbp-550h]
  unsigned __int64 v66; // [rsp+30h] [rbp-548h]
  __int64 v67; // [rsp+38h] [rbp-540h]
  unsigned int v68; // [rsp+40h] [rbp-538h]
  unsigned int v69; // [rsp+44h] [rbp-534h]
  __int64 v70; // [rsp+48h] [rbp-530h] BYREF
  __int16 v71; // [rsp+50h] [rbp-528h] BYREF
  __int64 v72; // [rsp+58h] [rbp-520h]
  __m128i v73; // [rsp+60h] [rbp-518h] BYREF
  __m128i v74; // [rsp+70h] [rbp-508h] BYREF
  _QWORD *v75; // [rsp+80h] [rbp-4F8h]
  __int64 v76; // [rsp+88h] [rbp-4F0h]
  void *v77[2]; // [rsp+E0h] [rbp-498h] BYREF
  __int64 v78; // [rsp+F0h] [rbp-488h]
  _QWORD v79[2]; // [rsp+F8h] [rbp-480h] BYREF
  __int64 v80; // [rsp+108h] [rbp-470h]
  void *ptr; // [rsp+110h] [rbp-468h]
  __int64 v82; // [rsp+118h] [rbp-460h]
  _BYTE v83[64]; // [rsp+120h] [rbp-458h] BYREF
  __int16 v84; // [rsp+160h] [rbp-418h]
  __int64 (__fastcall **v85)(); // [rsp+170h] [rbp-408h] BYREF
  char v86; // [rsp+178h] [rbp-400h]
  __int64 v87; // [rsp+180h] [rbp-3F8h]
  __int16 *v88; // [rsp+188h] [rbp-3F0h]
  unsigned int *v89; // [rsp+190h] [rbp-3E8h]
  __int64 v90; // [rsp+198h] [rbp-3E0h]
  int v91; // [rsp+1A0h] [rbp-3D8h]
  char v92; // [rsp+1A4h] [rbp-3D4h]
  _OWORD v93[3]; // [rsp+1A8h] [rbp-3D0h] BYREF
  __int64 v94; // [rsp+1D8h] [rbp-3A0h]
  __int64 v95; // [rsp+1E0h] [rbp-398h]
  __int64 v96; // [rsp+1E8h] [rbp-390h]
  int v97; // [rsp+1F8h] [rbp-380h] BYREF
  __int64 v98; // [rsp+200h] [rbp-378h]
  int *v99; // [rsp+208h] [rbp-370h]
  int *v100; // [rsp+210h] [rbp-368h]
  __int64 v101; // [rsp+218h] [rbp-360h]
  int v102; // [rsp+228h] [rbp-350h] BYREF
  __int64 v103; // [rsp+230h] [rbp-348h]
  int *v104; // [rsp+238h] [rbp-340h]
  int *v105; // [rsp+240h] [rbp-338h]
  __int64 v106; // [rsp+248h] [rbp-330h]
  __int64 v107; // [rsp+250h] [rbp-328h]
  int v108; // [rsp+258h] [rbp-320h]
  _DWORD *v109; // [rsp+260h] [rbp-318h]
  __int64 v110; // [rsp+268h] [rbp-310h]
  _DWORD v111[4]; // [rsp+270h] [rbp-308h] BYREF
  __int64 v112; // [rsp+280h] [rbp-2F8h]
  __int64 v113; // [rsp+288h] [rbp-2F0h]
  int v114; // [rsp+290h] [rbp-2E8h]
  __int64 v115; // [rsp+298h] [rbp-2E0h]
  char v116; // [rsp+2A0h] [rbp-2D8h]
  void *dest; // [rsp+2A8h] [rbp-2D0h]
  __int64 v118; // [rsp+2B0h] [rbp-2C8h]
  _BYTE v119[512]; // [rsp+2B8h] [rbp-2C0h] BYREF
  __m128i v120; // [rsp+4B8h] [rbp-C0h] BYREF
  int v121; // [rsp+4C8h] [rbp-B0h]
  __int128 v122; // [rsp+4D0h] [rbp-A8h]
  __int64 v123; // [rsp+4E0h] [rbp-98h]
  unsigned int v124; // [rsp+4E8h] [rbp-90h]
  int v125; // [rsp+4F8h] [rbp-80h] BYREF
  void *v126; // [rsp+500h] [rbp-78h]
  int *v127; // [rsp+508h] [rbp-70h]
  int *v128; // [rsp+510h] [rbp-68h]
  __int64 v129; // [rsp+518h] [rbp-60h]
  __int64 v130; // [rsp+520h] [rbp-58h]
  __int64 v131; // [rsp+528h] [rbp-50h]
  int v132; // [rsp+530h] [rbp-48h]
  unsigned int v133; // [rsp+534h] [rbp-44h]

  v7 = 2;
  v66 = a1;
  v62 = &v85;
  v70 = a4;
  v77[0] = &v70;
  v63 = _mm_loadh_ps((const double *)&v62);
  v11 = sub_25E8DD0("EvaluateAsInitializer", 0x15u);
  v72 = a5;
  v64 = v11;
  v12 = *(_QWORD *)(a3 + 2160);
  v71 = 0;
  si128 = _mm_load_si128((const __m128i *)&v63);
  if ( a6 )
  {
    v7 = 0;
    if ( (*(_BYTE *)(v12 + 1) & 8) == 0 )
      v7 = 2 * ((*(_BYTE *)v12 & 8) == 0);
  }
  v93[0] = si128;
  v88 = &v71;
  v14 = *(_DWORD *)(v12 + 136);
  v15 = *(_BYTE *)(v12 + 140);
  memset(&v93[1], 0, 32);
  v91 = v14;
  v92 = v15 & 1;
  v99 = &v97;
  v100 = &v97;
  v104 = &v102;
  v105 = &v102;
  v109 = v111;
  v86 = 0;
  v110 = 0x200000001LL;
  v85 = &off_47DA958;
  v87 = a3;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 1;
  v111[0] = 1;
  v111[2] = 1;
  v114 = 0;
  v112 = 0;
  v90 = 0x200000001LL;
  v65 = v93;
  v89 = (unsigned int *)v93;
  v118 = 0x1000000000LL;
  v63.m128_u64[0] = (unsigned __int64)v119;
  dest = v119;
  v113 = 0;
  v115 = 0;
  v116 = 0;
  sub_69F1C0((__int64)&v120, 0, 0, 0);
  v133 = v7;
  v127 = &v125;
  v128 = &v125;
  v122 = 0;
  v121 = 0;
  v124 = 0;
  v123 = 0;
  v125 = 0;
  v126 = nullptr;
  v129 = 0;
  v130 = 0;
  v131 = -1;
  v132 = 0;
  sub_69F1C0((__int64)v77, v70, 0, 0);
  v16 = _mm_load_si128((const __m128i *)v77);
  v121 = 1;
  *(_QWORD *)&v122 = a2;
  v120 = v16;
  v17 = *(_DWORD *)(v70 + 24);
  v18 = *(_QWORD *)(v70 + 48);
  v86 = a6;
  v68 = v17;
  v67 = v18;
  if ( !v92 )
  {
    LOBYTE(v79[0]) |= 1u;
    v82 = 0x800000000LL;
    v77[0] = nullptr;
    v77[1] = nullptr;
    v78 = 0;
    v80 = 0;
    ptr = v83;
    HIBYTE(v84) = 0;
    sub_69F1C0((__int64)&v73, v70, 0, 0);
    v27 = _mm_load_si128(&v73);
    LOBYTE(v84) = v84 & 0xFD;
    v78 = 0;
    *(__m128i *)v77 = v27;
    v74 = v27;
    v28 = sub_69F240(v74.m128i_i64);
    v29 = v89;
    v84 &= 0xFEu;
    v75 = (_QWORD *)v28;
    v30 = v118;
    LODWORD(v79[0]) = 0;
    v79[1] = 0;
    v80 = v28;
    LODWORD(v82) = 0;
    v31 = v89[52];
    v32 = v89[48];
    v33 = v89[49];
    v34 = v31 + 1;
    v89[52] = v31 + 1;
    if ( v33 < v32 + 1 )
    {
      v69 = v31 + 1;
      sub_25D6060(v29 + 46, v29 + 50, v32 + 1, 4);
      v32 = v29[48];
      v34 = v69;
    }
    *(_DWORD *)(*((_QWORD *)v29 + 23) + 4 * v32) = v34;
    v35 = v66;
    ++v29[48];
    v36 = (__int64)v62;
    v20 = (__int64)v62;
    if ( !(unsigned __int8)sub_88A010((__int64)a2, (__int64)v62, (const __m128i *)v77, v35, 1) || (_BYTE)v71 )
    {
      if ( v30 != -1 )
      {
        v20 = 0;
        sub_8941C0((__int64)v62, 0, v30);
      }
      --v89[48];
      v21 = ptr;
      if ( ptr != v83 )
        free(ptr);
      goto LABEL_6;
    }
    if ( v30 != -1 )
      sub_8941C0(v36, 0, v30);
    --v89[48];
    v49 = (char *)dest;
    v50 = 32LL * (unsigned int)v118;
    v51 = (const __m128i *)((char *)dest + v50);
    v52 = v50 >> 7;
    v53 = v50 >> 5;
    if ( v50 >> 7 )
    {
      v54 = (__m128i *)dest;
      v55 = (__m128i *)((char *)dest + 128 * v52);
      while ( (v54->m128i_i8[0] & 6) != 0 )
      {
        if ( (v54[2].m128i_i8[0] & 6) == 0 )
        {
          v54 += 2;
          goto LABEL_58;
        }
        if ( (v54[4].m128i_i8[0] & 6) == 0 )
        {
          v54 += 4;
          goto LABEL_58;
        }
        if ( (v54[6].m128i_i8[0] & 6) == 0 )
        {
          v54 += 6;
          goto LABEL_58;
        }
        v54 += 8;
        if ( v54 == v55 )
        {
          v61 = (char *)v51 - (char *)v54;
          if ( (char *)v51 - (char *)v54 == 64 )
            goto LABEL_85;
          if ( v61 == 96 )
            goto LABEL_83;
          if ( v61 == 32 )
            goto LABEL_87;
          goto LABEL_82;
        }
      }
      goto LABEL_58;
    }
    v54 = (__m128i *)dest;
    if ( v50 != 64 )
    {
      if ( v50 != 96 )
      {
        if ( v50 != 32 )
        {
          LODWORD(v53) = 0;
          goto LABEL_65;
        }
LABEL_87:
        v52 = v50 >> 5;
        if ( (v54->m128i_i8[0] & 6) != 0 )
          goto LABEL_65;
LABEL_58:
        if ( v51 != v54 )
        {
          v56 = v54 + 2;
          if ( v51 == &v54[2] )
          {
            v53 = ((char *)v54 - (_BYTE *)dest) >> 5;
            v52 = (unsigned int)v53;
            goto LABEL_65;
          }
          do
          {
            if ( (v56->m128i_i8[0] & 6) != 0 )
            {
              v54 += 2;
              v54[-2] = _mm_loadu_si128(v56);
              v54[-1] = _mm_loadu_si128(v56 + 1);
            }
            v56 += 2;
          }
          while ( v51 != v56 );
          v49 = (char *)dest;
          v57 = (char *)((_BYTE *)dest + 32 * (unsigned int)v118 - (_BYTE *)v51);
          if ( (__int64)v57 > 32 )
          {
            v58 = memmove(v54, v51, (_BYTE *)dest + 32 * (unsigned int)v118 - (_BYTE *)v51);
            v49 = (char *)dest;
            v53 = (&v57[(_QWORD)v58] - (char *)dest) >> 5;
            v52 = (unsigned int)v53;
LABEL_65:
            v59 = 32 * v52;
            LODWORD(v118) = v53;
            for ( i = &v49[v59]; i != v49; *(_BYTE *)v88 = 1 )
            {
              while ( !(unsigned int)sub_B19900(*((_QWORD *)v49 + 3)) )
              {
                v49 += 32;
                if ( i == v49 )
                  goto LABEL_70;
              }
              v49 += 32;
            }
LABEL_70:
            LODWORD(v118) = 0;
            if ( ptr != v83 )
              free(ptr);
            v20 = v68;
            v21 = v62;
            v22 = sub_849950((__int64)v62, v68, v67, a2, 0);
            if ( !(_BYTE)v22 )
              goto LABEL_6;
            if ( v129 )
            {
              v21 = v62;
              sub_824030((__int64)v62);
            }
            goto LABEL_7;
          }
          if ( v57 == (char *)&qword_20 )
          {
            *v54 = _mm_loadu_si128(v51);
            v54[1] = _mm_loadu_si128(v51 + 1);
            v49 = (char *)dest;
            LODWORD(v53) = ((char *)&v54[2] - (_BYTE *)dest) >> 5;
            v52 = (unsigned int)v53;
            goto LABEL_65;
          }
          v51 = (const __m128i *)&v57[(_QWORD)v54];
        }
LABEL_82:
        v53 = ((char *)v51 - v49) >> 5;
        v52 = (unsigned int)v53;
        goto LABEL_65;
      }
LABEL_83:
      if ( (v54->m128i_i8[0] & 6) == 0 )
        goto LABEL_58;
      v54 += 2;
    }
LABEL_85:
    if ( (v54->m128i_i8[0] & 6) == 0 )
      goto LABEL_58;
    v54 += 2;
    goto LABEL_87;
  }
  v19 = sub_6B4C60(a3);
  v20 = (__int64)v62;
  v21 = (void *)v19;
  v22 = sub_8CA260(v19, v62, v70, a2);
  if ( !(_BYTE)v22 )
  {
LABEL_6:
    v22 = 0;
    goto LABEL_7;
  }
  v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v37 + 16) != 13 || ((*(_WORD *)(v37 + 18) >> 3) & 0x1FF) != 0x1B2 )
  {
    v21 = nullptr;
    v77[0] = v79;
    v77[1] = byte_8;
    LODWORD(v78) = 0;
    BYTE4(v78) = 1;
    v20 = (__int64)v62;
    v22 = sub_849100(0, (__int64)v62, v68, v67, a2, 0, 0, (__int64)v77);
    if ( !BYTE4(v78) )
    {
      v21 = v77[0];
      free(v77[0]);
    }
  }
LABEL_7:
  v23 = (char *)dest;
  v85 = &off_47DA958;
  v24 = (char *)dest + 32 * (unsigned int)v118;
  if ( dest != v24 )
  {
    do
    {
      v21 = *((void **)v23 + 3);
      if ( (unsigned int)sub_B19900(v21) )
      {
        *(_BYTE *)v88 = 1;
        if ( v133 <= 2 && !HIWORD(v132) )
          break;
      }
      v23 += 32;
    }
    while ( v24 != v23 );
  }
  v25 = (_QWORD **)v126;
  LODWORD(v118) = 0;
  if ( v126 )
  {
    while ( 1 )
    {
      sub_822210(v25[3]);
      v26 = (_QWORD **)v25[2];
      if ( *((_DWORD *)v25 + 10) > 1u )
        sub_69F740((__int64)(v25 + 5));
      v20 = 104;
      v21 = v25;
      operator delete(v25, 0x68u);
      if ( !v26 )
        break;
      v25 = v26;
    }
  }
  if ( !v124 )
  {
    v38 = 0;
    goto LABEL_32;
  }
  v40.m128i_i64[0] = sub_69F620(v21, v20);
  v75 = nullptr;
  v74 = v40;
  v76 = 0;
  v41 = (void *)sub_69F630(v21, v20);
  v42 = *((_QWORD **)&v122 + 1);
  v78 = 0;
  v77[0] = v41;
  v77[1] = v43;
  v79[0] = 0;
  v44 = *((_QWORD *)&v122 + 1) + 40LL * v124;
  if ( *((_QWORD *)&v122 + 1) != v44 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v42, &v74) )
      {
        v45 = v42[3];
        if ( v45 == v76 )
        {
          v46 = (_QWORD *)v42[2];
          v47 = &v46[v45];
          v48 = v75;
          if ( v46 == v47 )
            goto LABEL_40;
          while ( *v46 == *v48 )
          {
            ++v46;
            ++v48;
            if ( v47 == v46 )
              goto LABEL_40;
          }
        }
      }
      sub_69F550(v42, v77);
LABEL_40:
      v42 += 5;
      if ( (_QWORD *)v44 == v42 )
      {
        v38 = 40LL * v124;
        goto LABEL_32;
      }
    }
  }
  v38 = 0;
LABEL_32:
  operator delete();
  if ( dest != (void *)v63.m128_u64[0] )
    free(dest);
  sub_822100((__int64)v65);
  sub_A2CAF0(v62, v38);
  if ( v64 )
    sub_25EA250(v64);
  return v22;
}

