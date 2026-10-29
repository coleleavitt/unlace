void __fastcall sub_667300(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int *v4; // r12
  __int64 v5; // r15
  unsigned int *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r14
  int v15; // eax
  unsigned __int64 v16; // r12
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm1
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  void (__fastcall ***v25)(_QWORD); // rdi
  __int64 v26; // rdi
  __int64 v27; // rax
  char v28; // [rsp+B8h] [rbp-460h]
  __int64 v29; // [rsp+C0h] [rbp-458h]
  char v30; // [rsp+CFh] [rbp-449h]
  unsigned int *v31; // [rsp+D0h] [rbp-448h]
  __int64 v32; // [rsp+D8h] [rbp-440h]
  __int64 v33; // [rsp+E0h] [rbp-438h]
  __int64 v34; // [rsp+E8h] [rbp-430h]
  __m128i v35; // [rsp+110h] [rbp-408h] BYREF
  __int64 v36; // [rsp+120h] [rbp-3F8h]
  __m128i v37; // [rsp+130h] [rbp-3E8h] BYREF
  __int64 v38; // [rsp+140h] [rbp-3D8h]
  __int64 v39[4]; // [rsp+150h] [rbp-3C8h] BYREF
  __int64 v40[4]; // [rsp+170h] [rbp-3A8h] BYREF
  __int64 v41; // [rsp+190h] [rbp-388h] BYREF
  char v42; // [rsp+1A0h] [rbp-378h]
  __int64 v43[4]; // [rsp+1B0h] [rbp-368h] BYREF
  __int64 v44[4]; // [rsp+1D0h] [rbp-348h] BYREF
  __m128i v45; // [rsp+1F0h] [rbp-328h] BYREF
  __int64 v46; // [rsp+200h] [rbp-318h]
  __int64 v47[4]; // [rsp+210h] [rbp-308h] BYREF
  __int64 v48[4]; // [rsp+230h] [rbp-2E8h] BYREF
  char *v49[2]; // [rsp+250h] [rbp-2C8h] BYREF
  char v50[16]; // [rsp+260h] [rbp-2B8h] BYREF
  __m128i v51; // [rsp+270h] [rbp-2A8h] BYREF
  __m128i v52; // [rsp+280h] [rbp-298h] BYREF
  __m128i v53; // [rsp+290h] [rbp-288h] BYREF
  __int64 v54; // [rsp+2A0h] [rbp-278h]
  __m128i v55; // [rsp+2B0h] [rbp-268h] BYREF
  __m128i v56; // [rsp+2C0h] [rbp-258h] BYREF
  __m128i v57; // [rsp+2D0h] [rbp-248h] BYREF
  __int64 v58; // [rsp+2E0h] [rbp-238h]
  void *ptr[3]; // [rsp+2F0h] [rbp-228h] BYREF
  char v60; // [rsp+308h] [rbp-210h] BYREF
  __m128i v61; // [rsp+328h] [rbp-1F0h] BYREF
  __m128i v62; // [rsp+338h] [rbp-1E0h] BYREF
  __m128i v63; // [rsp+348h] [rbp-1D0h] BYREF
  __int16 v64; // [rsp+358h] [rbp-1C0h]
  char v65; // [rsp+35Ah] [rbp-1BEh]
  _BYTE v66[24]; // [rsp+360h] [rbp-1B8h] BYREF
  _BYTE v67[32]; // [rsp+378h] [rbp-1A0h] BYREF
  __m128i v68; // [rsp+398h] [rbp-180h] BYREF
  __m128i v69; // [rsp+3A8h] [rbp-170h] BYREF
  __m128i v70; // [rsp+3B8h] [rbp-160h] BYREF
  __int16 v71; // [rsp+3C8h] [rbp-150h]
  char v72; // [rsp+3CAh] [rbp-14Eh]
  _BYTE v73[24]; // [rsp+3D0h] [rbp-148h] BYREF
  _BYTE v74[32]; // [rsp+3E8h] [rbp-130h] BYREF
  __m128i v75; // [rsp+408h] [rbp-110h]
  __m128i v76; // [rsp+418h] [rbp-100h]
  __m128i v77; // [rsp+428h] [rbp-F0h]
  __int16 v78; // [rsp+438h] [rbp-E0h]
  char v79; // [rsp+43Ah] [rbp-DEh]
  void *v80; // [rsp+440h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+448h] [rbp-D0h]
  _BYTE v82[192]; // [rsp+458h] [rbp-C0h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  if ( (v2 & 7) == 0 )
  {
    v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3 )
    {
      v4 = *(unsigned int **)(v3 + 16);
      v5 = *v4;
      v6 = v4 + 4;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
      v80 = v82;
      sub_11240B0(a2, &v80);
      v30 = sub_790090(a2);
      sub_CAE550(&v35, *(_QWORD *)(*a1 + 2152LL), *(unsigned int *)(a2 + 24), 1);
      v38 = 0;
      v37 = 0;
      v7 = sub_63DC30(a1, a2);
      if ( v7 )
      {
        v8 = sub_6BB140(*a1, a2);
        sub_AA92F0(v66, v7, *(_QWORD *)(*a1 + 2152LL), v8);
        v9 = _mm_load_si128((const __m128i *)v66);
        memset(v73, 0, sizeof(v73));
        v38 = *(_QWORD *)&v66[16];
        v37 = v9;
        memset(v66, 0, sizeof(v66));
        sub_646A80((__int64 *)v73);
        sub_646A80((__int64 *)v66);
      }
      sub_FD07E0(v39, a2);
      sub_FCD270(v40, a2);
      v28 = 0;
      v10 = a1[1];
      if ( *(_DWORD *)(a2 + 24) )
      {
        v15 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
        v28 = v15 != 3 && v15 != 0;
      }
      sub_766420(ptr, a2);
      sub_63E5A0((__int64)&v51, (__int64)a1, a2);
      v32 = v5;
      v31 = v6;
      v11 = sub_FC8E80(v10, v80, si128.m128i_i64[0]);
      *(_QWORD *)&v73[16] = 0;
      *(_QWORD *)&v73[8] = v12;
      v13 = v12;
      *(_QWORD *)v73 = v11;
      v14 = v11;
      sub_64F120((__int64)&v41, v10 + 160, (__m128i *)v73, (__int64 *)&v73[16]);
      v29 = v41;
      if ( *(_QWORD *)&v73[16] )
        (***(void (__fastcall ****)(_QWORD))&v73[16])(*(_QWORD *)&v73[16]);
      if ( v42 )
      {
        v16 = sub_63DDF0(v10, 392, 4);
        sub_644390((__int64)v43, v40);
        sub_644390((__int64)v44, v39);
        *(_QWORD *)v66 = v67;
        *(__m128i *)&v66[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
        if ( ptr[1] )
          sub_63DE60((__int64)v66, (unsigned __int8 **)ptr);
        v17 = _mm_loadu_si128(&v61);
        v71 = v64;
        v68 = v17;
        v18 = _mm_loadu_si128(&v62);
        v72 = v65;
        v69 = v18;
        v70 = _mm_loadu_si128(&v63);
        v19 = sub_FC8E80(v10, v31, v32);
        strcpy(v50, "public");
        v33 = v19;
        v34 = v20;
        v55 = _mm_load_si128(&v51);
        v21 = _mm_load_si128(&v52);
        v58 = v54;
        v56 = v21;
        v22 = _mm_load_si128(&v53);
        v46 = v36;
        v49[0] = v50;
        v57 = v22;
        v45 = _mm_load_si128(&v35);
        v49[1] = &byte_6;
        sub_644390((__int64)v48, v43);
        sub_644390((__int64)v47, v44);
        *(_QWORD *)v73 = v74;
        *(__m128i *)&v73[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
        if ( *(_QWORD *)&v66[8] )
          sub_63DE60((__int64)v73, (unsigned __int8 **)v66);
        v75 = _mm_loadu_si128(&v68);
        v23 = _mm_loadu_si128(&v69);
        v78 = v71;
        v76 = v23;
        v24 = _mm_loadu_si128(&v70);
        v79 = v72;
        v77 = v24;
        sub_644570(
          v16,
          2u,
          v14,
          v13,
          v33,
          v34,
          (__int128)_mm_load_si128(&v55),
          (__int128)_mm_load_si128(&v56),
          (__int128)_mm_load_si128(&v57),
          v58,
          (__int128)_mm_load_si128(&v45),
          v46,
          (__int64)v73,
          v30,
          v37.m128i_i64,
          v47,
          v48,
          v28,
          v49);
        if ( *(_BYTE **)v73 != v74 )
          free(*(void **)v73);
        sub_6441A0(v47);
        sub_6441A0(v48);
        std::string::_M_dispose();
        *(_DWORD *)(v16 + 368) = 2;
        *(_OWORD *)(v16 + 376) = 0;
        *(_QWORD *)v16 = &off_47D0018;
        if ( *(_BYTE **)v66 != v67 )
          free(*(void **)v66);
        sub_6441A0(v44);
        sub_6441A0(v43);
        v25 = *(void (__fastcall ****)(_QWORD))(v29 + 16);
        *(_QWORD *)(v29 + 16) = v16;
        if ( v25 )
          (**v25)(v25);
        v26 = *(_QWORD *)(v16 + 88);
        if ( v26 && (unsigned int)(*(_DWORD *)(v26 + 356) - 2) <= 0x13 && (v27 = sub_FC8C50(v26, 2)) != 0 )
          sub_FC8D50(v27, v16);
        else
          sub_64B900(v10 + 184, v16);
      }
      if ( ptr[0] != &v60 )
        free(ptr[0]);
      sub_6441A0(v40);
      sub_6441A0(v39);
      sub_646A80(v37.m128i_i64);
      if ( v80 != v82 )
        free(v80);
    }
  }
}

