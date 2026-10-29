void __fastcall sub_167A5C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  _BYTE *v8; // rdx
  char *v9; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r13
  __int32 v13; // ebp
  char *v14; // r12
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r12
  _QWORD *v18; // rdx
  _QWORD *v19; // r15
  __int64 v20; // rbp
  __int32 v21; // r13d
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  int v26; // esi
  __int64 *v27; // rdx
  __int64 v28; // rsi
  char v29; // dl
  char *v30; // rax
  char *v31; // rdx
  __m128i v32; // xmm0
  int v33; // ecx
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rbp
  __m128i *v37; // r13
  unsigned __int64 v38; // rax
  __int64 v39; // rbp
  _QWORD *v40; // rdx
  __m128i **v41; // rdx
  __int64 v42; // r13
  size_t v43; // r13
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  __int64 *v48; // r15
  unsigned __int64 v49; // rbp
  __int64 v50; // rax
  _QWORD *v51; // [rsp+20h] [rbp-368h]
  __int64 v52; // [rsp+20h] [rbp-368h]
  __int64 v54; // [rsp+30h] [rbp-358h]
  __int64 v55; // [rsp+40h] [rbp-348h]
  unsigned int v56; // [rsp+48h] [rbp-340h]
  unsigned __int8 v57; // [rsp+4Fh] [rbp-339h]
  __int64 v58; // [rsp+60h] [rbp-328h]
  int v59; // [rsp+68h] [rbp-320h]
  int v60; // [rsp+6Ch] [rbp-31Ch]
  char v61; // [rsp+7Eh] [rbp-30Ah] BYREF
  char v62; // [rsp+7Fh] [rbp-309h] BYREF
  __m128i v63; // [rsp+80h] [rbp-308h] BYREF
  unsigned int v64; // [rsp+90h] [rbp-2F8h]
  __m128i v65; // [rsp+A0h] [rbp-2E8h] BYREF
  unsigned int v66; // [rsp+B0h] [rbp-2D8h]
  void *v67; // [rsp+C0h] [rbp-2C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-2C0h] BYREF
  __int64 v69; // [rsp+D8h] [rbp-2B0h] BYREF
  unsigned int v70; // [rsp+E0h] [rbp-2A8h]
  int *v71; // [rsp+E8h] [rbp-2A0h]
  __int64 v72; // [rsp+F0h] [rbp-298h]
  int v73; // [rsp+F8h] [rbp-290h] BYREF
  char v74; // [rsp+FCh] [rbp-28Ch]
  __int16 v75; // [rsp+108h] [rbp-280h]
  __int64 v76; // [rsp+110h] [rbp-278h]
  char *v77; // [rsp+118h] [rbp-270h]
  __int64 v78; // [rsp+120h] [rbp-268h]
  char v79; // [rsp+128h] [rbp-260h] BYREF
  char *v80; // [rsp+138h] [rbp-250h]
  __int64 v81; // [rsp+140h] [rbp-248h]
  char v82; // [rsp+148h] [rbp-240h] BYREF
  __int64 v83; // [rsp+158h] [rbp-230h]
  __int64 v84; // [rsp+160h] [rbp-228h]
  __int64 v85; // [rsp+168h] [rbp-220h]
  _BYTE v86[128]; // [rsp+170h] [rbp-218h] BYREF
  void *ptr; // [rsp+1F0h] [rbp-198h] BYREF
  __int64 v88; // [rsp+1F8h] [rbp-190h]
  _BYTE v89[16]; // [rsp+200h] [rbp-188h] BYREF
  char v90; // [rsp+210h] [rbp-178h]
  _QWORD v91[2]; // [rsp+218h] [rbp-170h] BYREF
  char v92; // [rsp+228h] [rbp-160h] BYREF
  __int16 v93; // [rsp+238h] [rbp-150h]
  __int64 v94; // [rsp+240h] [rbp-148h]
  _QWORD v95[2]; // [rsp+248h] [rbp-140h] BYREF
  char v96; // [rsp+258h] [rbp-130h] BYREF
  _QWORD v97[2]; // [rsp+268h] [rbp-120h] BYREF
  char v98; // [rsp+278h] [rbp-110h] BYREF
  __int64 v99[3]; // [rsp+288h] [rbp-100h] BYREF
  _BYTE v100[112]; // [rsp+2A0h] [rbp-E8h] BYREF
  char v101; // [rsp+310h] [rbp-78h]
  unsigned __int8 v102; // [rsp+318h] [rbp-70h]
  __int64 v103; // [rsp+340h] [rbp-48h]

  v6 = *(_DWORD *)(a3 + 8);
  v55 = a2;
  if ( *(_BYTE *)(a1 + 289) )
    goto LABEL_17;
  v7 = 0x100000000LL;
  v8 = v89;
  ptr = v89;
  v88 = 0x100000000LL;
  if ( v6 )
  {
    a2 = a3;
    sub_A30B80((__int64)&ptr, a3);
  }
  v103 = *(_QWORD *)(a3 + 336);
  if ( (*(_BYTE *)(v55 + 29) & 1) != 0 && sub_1671280(v55, a2, (__int64)v8, v7, a5, a6) )
  {
LABEL_9:
    v9 = (char *)ptr;
    goto LABEL_10;
  }
  v9 = (char *)ptr;
  if ( BYTE4(v103) )
  {
    si128.m128i_i8[8] = 0;
    LOBYTE(v73) = 0;
    v67 = &si128.m128i_u64[1];
    v71 = &v73;
    v77 = &v79;
    v80 = &v82;
    v79 = 0;
    v10 = (char *)ptr + 320 * (unsigned int)v103;
    v82 = 0;
    v11 = v10[1];
    v12 = *v10;
    v51 = v10;
    LOBYTE(v70) = v70 & 0xF0;
    v75 &= 0xF000u;
    si128.m128i_i64[0] = 0;
    v72 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v86[120] = 0;
    v13 = *(_DWORD *)v10;
    sub_A302B0((__int64)&v67, (__int64)(v10 + 2));
    sub_A2FAD0((__int64)v86, (__int64)(v51 + 24));
    if ( v13 | (HIDWORD(v11) | (unsigned int)v11 | HIDWORD(v12)) & 0x7FFFFFFF && v72 )
    {
      v30 = (char *)ptr;
      v31 = (char *)ptr + 320 * (unsigned int)v88;
      if ( ptr == v31 )
      {
LABEL_50:
        v63.m128i_i64[1] = v11;
        v63.m128i_i32[1] = (v12 & 0xFFFFFFFF00000000LL) >> 32;
        v63.m128i_i32[0] = v13;
        v32 = _mm_load_si128(&v63);
        LOBYTE(v64) = v64 & 0xFC | 2;
        v65 = v32;
        v66 = v64;
        sub_1672C20(
          a1,
          v55,
          (__int64)&loc_2E926E,
          (__int64)&v62,
          (__int64)sub_16716D0,
          (__int64)&v61,
          v32.m128i_i64[0],
          v32.m128i_i64[1],
          v64);
        sub_A1FDC0((__int64)&v67);
        v9 = (char *)ptr;
        goto LABEL_10;
      }
      while ( *(_DWORD *)v30
           || (*((_DWORD *)v30 + 1) & 0x7FFFFFFF) != 0
           || (*((_DWORD *)v30 + 2) & 0x7FFFFFFF) != 0
           || (*((_DWORD *)v30 + 3) & 0x7FFFFFFF) != 0
           || !*((_QWORD *)v30 + 8) )
      {
        v30 += 320;
        if ( v31 == v30 )
          goto LABEL_50;
      }
    }
    sub_A1FDC0((__int64)&v67);
    goto LABEL_9;
  }
LABEL_10:
  v14 = &v9[320 * (unsigned int)v88];
  if ( v14 != v9 )
  {
    do
    {
      while ( 1 )
      {
        v14 -= 320;
        if ( v14[312] )
          break;
        sub_A09D30((__int64)(v14 + 16));
        if ( v14 == v9 )
          goto LABEL_13;
      }
      sub_A09CE0((__int64)(v14 + 192));
      sub_A09D30((__int64)(v14 + 16));
    }
    while ( v14 != v9 );
LABEL_13:
    v9 = (char *)ptr;
  }
  if ( v9 != v89 )
    free(v9);
  v6 = *(_DWORD *)(a3 + 8);
LABEL_17:
  v88 = 0;
  v89[0] = 0;
  v15 = *(_QWORD *)(a3 + 336);
  v91[1] = 0;
  v92 = 0;
  v96 = 0;
  v94 = 0;
  v16 = v15;
  v95[1] = 0;
  ptr = v89;
  if ( !BYTE4(v15) )
    v16 = v6;
  v91[0] = &v92;
  v95[0] = &v96;
  v56 = v16;
  v90 &= 0xF0u;
  v93 &= 0xF000u;
  v97[0] = &v98;
  v97[1] = 0;
  v98 = 0;
  memset(v99, 0, sizeof(v99));
  v102 = 0;
  if ( v6 )
  {
    v17 = 0;
    v54 = v6 - 1;
    v58 = 320LL * v16;
    while ( 1 )
    {
      v18 = (_QWORD *)(*(_QWORD *)a3 + 320 * v17);
      v19 = v18;
      v20 = *v18;
      v21 = *(_DWORD *)v18;
      v52 = v18[1];
      sub_9EE8A0((__int64)&ptr, (__int64)(v18 + 2));
      v90 = v19[6] & 0xF | v90 & 0xF0;
      sub_9EE8A0((__int64)v91, (__int64)(v19 + 7));
      v93 = v19[11] & 0xFFF | v93 & 0xF000;
      v94 = v19[12];
      sub_9EE8A0((__int64)v95, (__int64)(v19 + 13));
      sub_9EE8A0((__int64)v97, (__int64)(v19 + 17));
      sub_A2FF50(v99, v19 + 21);
      if ( v102 )
        break;
      v24 = *((unsigned __int8 *)v19 + 312);
      if ( !(_BYTE)v24 )
        goto LABEL_24;
      v57 = *((_BYTE *)v19 + 312);
      sub_A11C70((__int64)v100, (__int64)(v19 + 24));
      v29 = *((_BYTE *)v19 + 304);
      v24 = v57;
      v102 = 1;
      v101 = v29 & 0x7F | v101 & 0x80;
      v25 = *(unsigned __int8 *)(a1 + 289);
      if ( v56 == (_DWORD)v17 )
      {
LABEL_36:
        LOBYTE(v25) = v25 ^ 1;
        v26 = 0;
        goto LABEL_29;
      }
LABEL_25:
      v26 = 0;
      if ( (_BYTE)v25 )
      {
        LOBYTE(v25) = 0;
      }
      else if ( !v21 )
      {
        v26 = v25;
        if ( ((HIDWORD(v52) | (unsigned int)v52 | HIDWORD(v20)) & 0x7FFFFFFF) == 0 )
        {
          v26 = 1;
          v27 = (__int64 *)(*(_QWORD *)a3 + v58);
          v20 = *v27;
          v21 = *(_DWORD *)v27;
          v52 = v27[1];
        }
      }
LABEL_29:
      v28 = (unsigned int)(2 * v26);
      v63.m128i_i32[1] = (v20 & 0xFFFFFFFF00000000LL) >> 32;
      v63.m128i_i64[1] = v52;
      v63.m128i_i32[0] = v21;
      v65 = _mm_load_si128(&v63);
      LOBYTE(v64) = v28 | v25 & 1 | v64 & 0xFC;
      v66 = v64;
      if ( (_BYTE)v24 && (v101 & 4) != 0 && !sub_159D190(v55, v28, v25 & 1, v24, v22, v23) )
      {
        v33 = v59;
        v67 = nullptr;
        v34 = v60;
        si128 = 0u;
        BYTE1(v33) = BYTE1(v59) & 0xFC;
        BYTE1(v34) = BYTE1(v60) & 0xFC;
        v59 = v33;
        v70 = v70 & 0xFF000000 | 0x101A4;
        v35 = BYTE1(v33) & 1;
        v36 = *(_QWORD *)(v55 + 48);
        v60 = v34;
        v69 = 0;
        HIBYTE(v70) = (2 * ((v34 & 0x200) != 0)) | v35 | HIBYTE(v70) & 0xFC;
        v37 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v35, v22, v23);
        sub_B13E30(v37, *(_QWORD *)(a1 + 248), (const __m128i *)&v67);
        v38 = sub_A71A30(*(_QWORD *)(a1 + 248), (__int64)v37, v36, v36);
        v73 = 0;
        v39 = v38;
        v74 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v67 = &v69;
        v40 = (_QWORD *)(*(_QWORD *)(v55 + 56) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v55 + 56) & 4) != 0 )
          v40 = (_QWORD *)v40[4];
        sub_1EA6360(&v67, *v40, v40 + 1);
        sub_1EA6140(&v67, v39, 8, 8);
        *v41 = v37;
        v42 = si128.m128i_i64[0];
        *(_QWORD *)(v55 + 48) = v39;
        v43 = v42 - si128.m128i_i64[1];
        v47 = sub_A81BC0(*(_QWORD **)(a1 + 248), v39, v43, v44, v45, v46);
        v48 = (__int64 *)v67;
        v49 = (unsigned __int64)v47;
        memcpy(v47 + 1, (char *)v67 + si128.m128i_i64[1], v43);
        v50 = *(_QWORD *)(v55 + 56);
        if ( (v50 & 4) != 0 )
          *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v49;
        else
          *(_QWORD *)(v55 + 56) = v49 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v48 != &v69 && v48 )
          operator delete[](v48);
      }
      sub_1675F20(a1, v55 & 0xFFFFFFFFFFFFFFFBLL, (__int64)&ptr, v24, v22, v23, (__int128)_mm_load_si128(&v65), v66);
      if ( v54 == v17 )
      {
        if ( v102 )
          sub_A09CE0((__int64)v100);
        goto LABEL_41;
      }
      ++v17;
    }
    if ( *((_BYTE *)v19 + 312) )
    {
      sub_A2F670((__int64)v100, (__int64)(v19 + 24));
      v24 = v102;
      v101 = v19[38] & 0x7F | v101 & 0x80;
    }
    else
    {
      v102 = 0;
      sub_A09CE0((__int64)v100);
      v24 = v102;
    }
LABEL_24:
    v25 = *(unsigned __int8 *)(a1 + 289);
    if ( v56 == (_DWORD)v17 )
      goto LABEL_36;
    goto LABEL_25;
  }
LABEL_41:
  sub_A09D30((__int64)&ptr);
}
