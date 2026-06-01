int __fastcall sub_1229630(__int64 *a1, unsigned __int64 *a2, signed __int64 *a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  const __m128i *i; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int32 v8; // r11d
  __m128i *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r10
  __m128i *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __m128i *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r8
  __m128i *v18; // rax
  __int64 v19; // r15
  __int64 v20; // r15
  __m128i *v21; // rdi
  signed __int64 v22; // rax
  int v23; // r13d
  int v24; // r11d
  size_t v25; // rcx
  void *v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  void *v29; // rsi
  __int64 v30; // rsi
  void *v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  void *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbp
  _QWORD *v41; // r12
  char v42; // al
  void *v43; // r10
  size_t v44; // r8
  size_t v45; // rdx
  unsigned __int64 v47; // [rsp+10h] [rbp-208h]
  unsigned __int64 v48; // [rsp+10h] [rbp-208h]
  int v49; // [rsp+18h] [rbp-200h]
  __int64 v50; // [rsp+20h] [rbp-1F8h]
  size_t v51; // [rsp+20h] [rbp-1F8h]
  __int64 v52; // [rsp+28h] [rbp-1F0h]
  int v53; // [rsp+28h] [rbp-1F0h]
  size_t v54; // [rsp+28h] [rbp-1F0h]
  unsigned int v55; // [rsp+30h] [rbp-1E8h]
  const void *v56; // [rsp+30h] [rbp-1E8h]
  int v57; // [rsp+30h] [rbp-1E8h]
  unsigned int v58; // [rsp+38h] [rbp-1E0h]
  void *v59; // [rsp+38h] [rbp-1E0h]
  __int64 v62; // [rsp+50h] [rbp-1C8h]
  size_t v63; // [rsp+50h] [rbp-1C8h]
  __int64 v64; // [rsp+58h] [rbp-1C0h]
  __int64 v66; // [rsp+78h] [rbp-1A0h] BYREF
  void *v67; // [rsp+80h] [rbp-198h] BYREF
  __int64 v68; // [rsp+88h] [rbp-190h]
  __m128i v69; // [rsp+90h] [rbp-188h] BYREF
  unsigned __int64 v70; // [rsp+A0h] [rbp-178h]
  int v71; // [rsp+A8h] [rbp-170h]
  void *v72; // [rsp+B0h] [rbp-168h]
  __int64 v73; // [rsp+B8h] [rbp-160h]
  __m128i v74; // [rsp+C0h] [rbp-158h] BYREF
  void *v75; // [rsp+D0h] [rbp-148h]
  __int64 v76; // [rsp+D8h] [rbp-140h]
  __m128i v77; // [rsp+E0h] [rbp-138h] BYREF
  void *v78; // [rsp+F0h] [rbp-128h]
  size_t v79; // [rsp+F8h] [rbp-120h]
  __m128i v80; // [rsp+100h] [rbp-118h] BYREF
  void *v81; // [rsp+110h] [rbp-108h]
  size_t v82; // [rsp+118h] [rbp-100h]
  __m128i v83; // [rsp+120h] [rbp-F8h] BYREF
  __m128i v84; // [rsp+130h] [rbp-E8h] BYREF
  __m128i v85; // [rsp+140h] [rbp-D8h] BYREF
  unsigned __int64 v86; // [rsp+150h] [rbp-C8h]
  __int32 v87; // [rsp+158h] [rbp-C0h]
  void *v88; // [rsp+160h] [rbp-B8h]
  __int64 v89; // [rsp+168h] [rbp-B0h]
  __m128i v90; // [rsp+170h] [rbp-A8h] BYREF
  void *v91; // [rsp+180h] [rbp-98h]
  __int64 v92; // [rsp+188h] [rbp-90h]
  __m128i v93; // [rsp+190h] [rbp-88h] BYREF
  void *v94; // [rsp+1A0h] [rbp-78h]
  __int64 v95; // [rsp+1A8h] [rbp-70h]
  __m128i v96; // [rsp+1B0h] [rbp-68h] BYREF
  void *v97; // [rsp+1C0h] [rbp-58h]
  __int64 v98; // [rsp+1C8h] [rbp-50h]
  _OWORD v99[4]; // [rsp+1D0h] [rbp-48h] BYREF

  v3 = *a1;
  v4 = *a2;
  v62 = *a1;
  if ( (__int64)(*a1 - *a2) > 176 )
  {
    v64 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v3 - v4) >> 4);
    v50 = (v64 - 2) / 2;
    for ( i = (const __m128i *)(v3 - 176 * v50 - 160); ; i += 11 )
    {
      v21 = (__m128i *)i[-1].m128i_i64[0];
      v67 = &v69;
      if ( i == v21 )
      {
        v21 = &v69;
        v69 = _mm_loadu_si128(i);
      }
      else
      {
        v6 = i->m128i_i64[0];
        v67 = v21;
        v69.m128i_i64[0] = v6;
      }
      v7 = i[-1].m128i_i64[1];
      v8 = i[1].m128i_i32[2];
      i[-1].m128i_i64[0] = (__int64)i;
      v9 = (__m128i *)i[2].m128i_i64[0];
      i[-1].m128i_i64[1] = 0;
      v52 = v7;
      v68 = v7;
      LODWORD(v7) = i[1].m128i_i32[0];
      i->m128i_i8[0] = 0;
      v55 = v7;
      LODWORD(v70) = v7;
      LODWORD(v7) = i[1].m128i_i32[1];
      v71 = v8;
      v58 = v7;
      HIDWORD(v70) = v7;
      v72 = &v74;
      if ( v9 == &i[3] )
      {
        v9 = &v74;
        v74 = _mm_loadu_si128(i + 3);
      }
      else
      {
        v10 = i[3].m128i_i64[0];
        v72 = v9;
        v74.m128i_i64[0] = v10;
      }
      v11 = i[2].m128i_i64[1];
      v12 = (__m128i *)i[4].m128i_i64[0];
      i[2].m128i_i64[0] = (__int64)i[3].m128i_i64;
      i[2].m128i_i64[1] = 0;
      v73 = v11;
      i[3].m128i_i8[0] = 0;
      v75 = &v77;
      if ( v12 == &i[5] )
      {
        v12 = &v77;
        v77 = _mm_loadu_si128(i + 5);
      }
      else
      {
        v13 = i[5].m128i_i64[0];
        v75 = v12;
        v77.m128i_i64[0] = v13;
      }
      v14 = i[4].m128i_i64[1];
      v15 = (__m128i *)i[6].m128i_i64[0];
      i[4].m128i_i64[0] = (__int64)i[5].m128i_i64;
      i[4].m128i_i64[1] = 0;
      v76 = v14;
      v78 = &v80;
      i[5].m128i_i8[0] = 0;
      if ( v15 == &i[7] )
      {
        v15 = &v80;
        v80 = _mm_loadu_si128(i + 7);
      }
      else
      {
        v16 = i[7].m128i_i64[0];
        v78 = v15;
        v80.m128i_i64[0] = v16;
      }
      v17 = i[6].m128i_i64[1];
      i[6].m128i_i64[0] = (__int64)i[7].m128i_i64;
      v18 = (__m128i *)i[8].m128i_i64[0];
      i[6].m128i_i64[1] = 0;
      v79 = v17;
      i[7].m128i_i8[0] = 0;
      v81 = &v83;
      if ( v18 == &i[9] )
      {
        v18 = &v83;
        v83 = _mm_loadu_si128(i + 9);
      }
      else
      {
        v19 = i[9].m128i_i64[0];
        v81 = v18;
        v83.m128i_i64[0] = v19;
      }
      i[8].m128i_i64[0] = (__int64)i[9].m128i_i64;
      v20 = i[8].m128i_i64[1];
      i[9].m128i_i8[0] = 0;
      i[8].m128i_i64[1] = 0;
      v84.m128i_i64[0] = (__int64)&v85;
      if ( v21 == &v69 )
      {
        v85 = _mm_load_si128(&v69);
      }
      else
      {
        v84.m128i_i64[0] = (__int64)v21;
        v85.m128i_i64[0] = v69.m128i_i64[0];
      }
      v69.m128i_i8[0] = 0;
      v68 = 0;
      v84.m128i_i64[1] = v52;
      v87 = v8;
      v67 = &v69;
      v86 = __PAIR64__(v58, v55);
      v88 = &v90;
      if ( v9 == &v74 )
      {
        v90 = _mm_load_si128(&v74);
      }
      else
      {
        v88 = v9;
        v90.m128i_i64[0] = v74.m128i_i64[0];
      }
      v89 = v11;
      v73 = 0;
      v72 = &v74;
      v74.m128i_i8[0] = 0;
      v91 = &v93;
      if ( v12 == &v77 )
      {
        v93 = _mm_load_si128(&v77);
      }
      else
      {
        v91 = v12;
        v93.m128i_i64[0] = v77.m128i_i64[0];
      }
      v92 = v14;
      v75 = &v77;
      v76 = 0;
      v77.m128i_i8[0] = 0;
      v94 = &v96;
      if ( v15 == &v80 )
      {
        v96 = _mm_load_si128(&v80);
      }
      else
      {
        v94 = v15;
        v96.m128i_i64[0] = v80.m128i_i64[0];
      }
      v95 = v17;
      v97 = v99;
      v78 = &v80;
      v79 = 0;
      v80.m128i_i8[0] = 0;
      if ( v18 == &v83 )
      {
        v99[0] = _mm_load_si128(&v83);
      }
      else
      {
        v97 = v18;
        *(_QWORD *)&v99[0] = v83.m128i_i64[0];
      }
      v81 = &v83;
      v98 = v20;
      v82 = 0;
      v66 = v62;
      v83.m128i_i8[0] = 0;
      sub_1214A90(&v66, v50, v64, &v84);
      if ( v97 != v99 )
        operator delete(v97);
      if ( v94 != &v96 )
        operator delete(v94);
      if ( v91 != &v93 )
        operator delete(v91);
      if ( v88 != &v90 )
        operator delete(v88);
      if ( (__m128i *)v84.m128i_i64[0] != &v85 )
        operator delete((void *)v84.m128i_i64[0]);
      if ( !v50 )
        break;
      --v50;
      if ( v81 != &v83 )
        operator delete(v81);
      if ( v78 != &v80 )
        operator delete(v78);
      if ( v75 != &v77 )
        operator delete(v75);
      if ( v72 != &v74 )
        operator delete(v72);
      if ( v67 != &v69 )
        operator delete(v67);
    }
    if ( v81 != &v83 )
      operator delete(v81);
    sub_1213F50((__int64)&v67);
    v4 = *a2;
  }
  v22 = *a3;
  v47 = *a3;
  if ( v4 > *a3 )
  {
    while ( 1 )
    {
      v4 -= 176LL;
      v40 = *a1;
      v41 = (_QWORD *)(*a1 - 176);
      v42 = sub_1213FB0(
              v4,
              *(_DWORD *)(*a1 - 144),
              *(_DWORD *)(*a1 - 140),
              *(_DWORD *)(*a1 - 136),
              *(const void **)(*a1 - 64),
              *(_QWORD *)(*a1 - 56));
      v43 = *(void **)(v4 + 112);
      if ( v42 )
      {
        v23 = *(_DWORD *)(v4 + 40);
        v24 = *(_DWORD *)(v4 + 32);
        v25 = *(_QWORD *)(v4 + 152);
        v51 = *(_QWORD *)(v4 + 120);
        v49 = *(_DWORD *)(v4 + 36);
LABEL_61:
        v26 = *(void **)v4;
        v27 = *a2;
        v67 = &v69;
        if ( v26 == (void *)(v4 + 16) )
        {
          v69 = _mm_loadu_si128((const __m128i *)(v4 + 16));
        }
        else
        {
          v67 = v26;
          v69.m128i_i64[0] = *(_QWORD *)(v4 + 16);
        }
        v28 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)v4 = v4 + 16;
        *(_QWORD *)(v4 + 8) = 0;
        v68 = v28;
        v29 = *(void **)(v4 + 48);
        HIDWORD(v70) = v49;
        v72 = &v74;
        *(_BYTE *)(v4 + 16) = 0;
        LODWORD(v70) = v24;
        v71 = v23;
        if ( (void *)(v4 + 64) == v29 )
        {
          v74 = _mm_loadu_si128((const __m128i *)(v4 + 64));
        }
        else
        {
          v72 = v29;
          v74.m128i_i64[0] = *(_QWORD *)(v4 + 64);
        }
        v30 = *(_QWORD *)(v4 + 56);
        *(_QWORD *)(v4 + 48) = v4 + 64;
        v75 = &v77;
        v73 = v30;
        v31 = *(void **)(v4 + 80);
        *(_QWORD *)(v4 + 56) = 0;
        *(_BYTE *)(v4 + 64) = 0;
        if ( (void *)(v4 + 96) == v31 )
        {
          v77 = _mm_loadu_si128((const __m128i *)(v4 + 96));
        }
        else
        {
          v75 = v31;
          v77.m128i_i64[0] = *(_QWORD *)(v4 + 96);
        }
        v32 = *(_QWORD *)(v4 + 88);
        *(_QWORD *)(v4 + 80) = v4 + 96;
        v78 = &v80;
        v76 = v32;
        *(_QWORD *)(v4 + 88) = 0;
        *(_BYTE *)(v4 + 96) = 0;
        if ( (void *)(v4 + 128) == v43 )
        {
          v80 = _mm_loadu_si128((const __m128i *)(v4 + 128));
        }
        else
        {
          v33 = *(_QWORD *)(v4 + 128);
          v78 = v43;
          v80.m128i_i64[0] = v33;
        }
        *(_QWORD *)(v4 + 112) = v4 + 128;
        v81 = &v83;
        v79 = v51;
        v34 = *(void **)(v4 + 144);
        *(_QWORD *)(v4 + 120) = 0;
        *(_BYTE *)(v4 + 128) = 0;
        if ( v34 == (void *)(v4 + 160) )
        {
          v83 = _mm_loadu_si128((const __m128i *)(v4 + 160));
        }
        else
        {
          v81 = v34;
          v83.m128i_i64[0] = *(_QWORD *)(v4 + 160);
        }
        *(_QWORD *)(v4 + 144) = v4 + 160;
        *(_QWORD *)(v4 + 152) = 0;
        *(_BYTE *)(v4 + 160) = 0;
        v48 = v27;
        v82 = v25;
        sub_A0AAD0(v4, v41);
        *(_DWORD *)(v4 + 32) = *(_DWORD *)(v40 - 144);
        *(_DWORD *)(v4 + 36) = *(_DWORD *)(v40 - 140);
        *(_DWORD *)(v4 + 40) = *(_DWORD *)(v40 - 136);
        sub_A0AAD0(v4 + 48, v41 + 6);
        sub_A0AAD0(v4 + 80, v41 + 10);
        sub_A0AAD0(v4 + 112, v41 + 14);
        sub_A0AAD0(v4 + 144, v41 + 18);
        v84.m128i_i64[0] = (__int64)&v85;
        if ( v67 == &v69 )
        {
          v85 = _mm_load_si128(&v69);
        }
        else
        {
          v84.m128i_i64[0] = (__int64)v67;
          v85.m128i_i64[0] = v69.m128i_i64[0];
        }
        v35 = v68;
        v68 = 0;
        v69.m128i_i8[0] = 0;
        v84.m128i_i64[1] = v35;
        v67 = &v69;
        v86 = v70;
        v87 = v71;
        v88 = &v90;
        if ( v72 == &v74 )
        {
          v90 = _mm_load_si128(&v74);
        }
        else
        {
          v88 = v72;
          v90.m128i_i64[0] = v74.m128i_i64[0];
        }
        v36 = v73;
        v73 = 0;
        v74.m128i_i8[0] = 0;
        v89 = v36;
        v72 = &v74;
        v91 = &v93;
        if ( v75 == &v77 )
        {
          v93 = _mm_load_si128(&v77);
        }
        else
        {
          v91 = v75;
          v93.m128i_i64[0] = v77.m128i_i64[0];
        }
        v37 = v76;
        v76 = 0;
        v77.m128i_i8[0] = 0;
        v92 = v37;
        v75 = &v77;
        v94 = &v96;
        if ( v78 == &v80 )
        {
          v96 = _mm_load_si128(&v80);
        }
        else
        {
          v94 = v78;
          v96.m128i_i64[0] = v80.m128i_i64[0];
        }
        v38 = v79;
        v79 = 0;
        v80.m128i_i8[0] = 0;
        v95 = v38;
        v78 = &v80;
        v97 = v99;
        if ( v81 == &v83 )
        {
          v99[0] = _mm_load_si128(&v83);
        }
        else
        {
          v97 = v81;
          *(_QWORD *)&v99[0] = v83.m128i_i64[0];
        }
        v66 = v40;
        v39 = v82;
        v82 = 0;
        v83.m128i_i8[0] = 0;
        v98 = v39;
        v81 = &v83;
        sub_1214A90(&v66, 0, 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v40 - v48) >> 4), &v84);
        if ( v97 != v99 )
          operator delete(v97);
        if ( v94 != &v96 )
          operator delete(v94);
        if ( v91 != &v93 )
          operator delete(v91);
        if ( v88 != &v90 )
          operator delete(v88);
        if ( (__m128i *)v84.m128i_i64[0] != &v85 )
          operator delete((void *)v84.m128i_i64[0]);
        if ( v81 != &v83 )
          operator delete(v81);
        if ( v78 != &v80 )
          operator delete(v78);
        if ( v75 != &v77 )
          operator delete(v75);
        if ( v72 != &v74 )
          operator delete(v72);
        if ( v67 != &v69 )
          operator delete(v67);
        v22 = *a3;
        v47 = *a3;
        goto LABEL_102;
      }
      v23 = *(_DWORD *)(v4 + 40);
      v56 = *(const void **)(v4 + 112);
      v53 = *(_DWORD *)(v4 + 32);
      v51 = *(_QWORD *)(v4 + 120);
      v49 = *(_DWORD *)(v4 + 36);
      LODWORD(v22) = sub_1213FB0((__int64)v41, v53, v49, v23, v56, v51);
      if ( (_BYTE)v22 )
        goto LABEL_102;
      v25 = *(_QWORD *)(v4 + 152);
      v44 = *(_QWORD *)(v40 - 24);
      v24 = v53;
      v43 = (void *)v56;
      v45 = v44;
      if ( v25 <= v44 )
        v45 = *(_QWORD *)(v4 + 152);
      if ( v45 )
      {
        v63 = *(_QWORD *)(v4 + 152);
        v59 = (void *)v56;
        v57 = v53;
        v54 = *(_QWORD *)(v40 - 24);
        LODWORD(v22) = memcmp(*(const void **)(v4 + 144), *(const void **)(v40 - 32), v45);
        v44 = v54;
        v24 = v57;
        v43 = v59;
        v25 = v63;
        if ( (_DWORD)v22 )
          goto LABEL_109;
      }
      v22 = v25 - v44;
      if ( (__int64)(v25 - v44) > 0x7FFFFFFF )
      {
LABEL_102:
        if ( v4 <= v47 )
          return v22;
      }
      else
      {
        if ( v22 < (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_61;
LABEL_109:
        if ( (int)v22 < 0 )
          goto LABEL_61;
        if ( v4 <= v47 )
          return v22;
      }
    }
  }
  return v22;
}
