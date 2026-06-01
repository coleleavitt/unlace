void __fastcall sub_661310(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  const char *v3; // r13
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  char *v8; // r15
  __int64 v9; // rax
  char *v10; // rbp
  int v11; // eax
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r12
  char *v18; // rbx
  unsigned int *v19; // r13
  __int64 v20; // rax
  char v21; // al
  unsigned __int64 v22; // r13
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int128 v26; // kr00_16
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 *v29; // rdi
  __m128i v30; // xmm0
  __m128i v31; // xmm5
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // xmm6
  __int16 v36; // ax
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  unsigned __int64 v39; // r12
  __int64 v40; // rbx
  char *v41; // r12
  __int64 v42; // rax
  __int64 *v43; // rdi
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rsi
  _QWORD *v48; // rdx
  __int64 v49; // rax
  void (__fastcall ***v50)(_QWORD); // rdi
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rdi
  char *v55; // rdx
  char *v56; // r8
  unsigned int v57; // eax
  unsigned int v58; // edx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // [rsp+8h] [rbp-530h]
  _BYTE *v62; // [rsp+30h] [rbp-508h]
  bool v63; // [rsp+3Eh] [rbp-4FAh]
  char v64; // [rsp+3Fh] [rbp-4F9h]
  const char *v65; // [rsp+40h] [rbp-4F8h]
  __int64 v66; // [rsp+50h] [rbp-4E8h]
  __int64 v67; // [rsp+80h] [rbp-4B8h]
  double v68; // [rsp+90h] [rbp-4A8h]
  double v69; // [rsp+98h] [rbp-4A0h]
  __int64 v70; // [rsp+A0h] [rbp-498h]
  __int128 v71; // [rsp+A8h] [rbp-490h]
  __m128 v72; // [rsp+C0h] [rbp-478h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-468h]
  __int64 v74; // [rsp+D8h] [rbp-460h]
  _BYTE *v75; // [rsp+E0h] [rbp-458h]
  _BYTE *v76; // [rsp+E8h] [rbp-450h]
  _BYTE *v77; // [rsp+F0h] [rbp-448h]
  unsigned __int8 **v78; // [rsp+F8h] [rbp-440h]
  double v79[4]; // [rsp+100h] [rbp-438h] BYREF
  __int64 v80[4]; // [rsp+120h] [rbp-418h] BYREF
  __int64 v81[4]; // [rsp+140h] [rbp-3F8h] BYREF
  __int64 v82; // [rsp+160h] [rbp-3D8h] BYREF
  char v83; // [rsp+170h] [rbp-3C8h]
  __int64 v84[4]; // [rsp+180h] [rbp-3B8h] BYREF
  __int64 v85[4]; // [rsp+1A0h] [rbp-398h] BYREF
  __int64 v86[4]; // [rsp+1C0h] [rbp-378h] BYREF
  __int64 v87[4]; // [rsp+1E0h] [rbp-358h] BYREF
  __int64 v88[4]; // [rsp+200h] [rbp-338h] BYREF
  __int64 v89[4]; // [rsp+220h] [rbp-318h] BYREF
  void *v90; // [rsp+240h] [rbp-2F8h]
  __int64 v91; // [rsp+248h] [rbp-2F0h]
  char v92[16]; // [rsp+250h] [rbp-2E8h] BYREF
  __int128 v93; // [rsp+260h] [rbp-2D8h] BYREF
  __int128 v94; // [rsp+270h] [rbp-2C8h]
  __int128 v95; // [rsp+280h] [rbp-2B8h]
  __int64 v96; // [rsp+290h] [rbp-2A8h]
  void *ptr[3]; // [rsp+2A0h] [rbp-298h] BYREF
  char v98; // [rsp+2B8h] [rbp-280h] BYREF
  __m128i v99; // [rsp+2D8h] [rbp-260h] BYREF
  __m128i v100; // [rsp+2E8h] [rbp-250h] BYREF
  __m128i v101; // [rsp+2F8h] [rbp-240h] BYREF
  __int16 v102; // [rsp+308h] [rbp-230h]
  char v103; // [rsp+30Ah] [rbp-22Eh]
  void *v104; // [rsp+310h] [rbp-228h] BYREF
  __m128i v105; // [rsp+318h] [rbp-220h]
  _BYTE v106[32]; // [rsp+328h] [rbp-210h] BYREF
  __m128i v107; // [rsp+348h] [rbp-1F0h] BYREF
  __m128i v108; // [rsp+358h] [rbp-1E0h] BYREF
  __m128i v109; // [rsp+368h] [rbp-1D0h] BYREF
  __int16 v110; // [rsp+378h] [rbp-1C0h]
  char v111; // [rsp+37Ah] [rbp-1BEh]
  void *v112[3]; // [rsp+380h] [rbp-1B8h] BYREF
  _BYTE v113[32]; // [rsp+398h] [rbp-1A0h] BYREF
  __m128i v114; // [rsp+3B8h] [rbp-180h] BYREF
  __m128i v115; // [rsp+3C8h] [rbp-170h] BYREF
  __m128i v116; // [rsp+3D8h] [rbp-160h] BYREF
  __int16 v117; // [rsp+3E8h] [rbp-150h]
  char v118; // [rsp+3EAh] [rbp-14Eh]
  _BYTE v119[24]; // [rsp+3F0h] [rbp-148h] BYREF
  _BYTE v120[32]; // [rsp+408h] [rbp-130h] BYREF
  __m128i v121; // [rsp+428h] [rbp-110h] BYREF
  __m128i v122; // [rsp+438h] [rbp-100h] BYREF
  __m128i v123; // [rsp+448h] [rbp-F0h] BYREF
  __int16 v124; // [rsp+458h] [rbp-E0h]
  char v125; // [rsp+45Ah] [rbp-DEh]
  void *v126; // [rsp+460h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+468h] [rbp-D0h]
  _BYTE v128[192]; // [rsp+478h] [rbp-C0h] BYREF

  v2 = 0;
  v3 = &byte_3B9466E;
  v5 = a2;
  v6 = *(_QWORD *)(a2 + 40);
  if ( (v6 & 7) == 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v2 = v7;
    if ( v7 )
    {
      v19 = *(unsigned int **)(v7 + 16);
      v2 = *v19;
      v3 = (const char *)(v19 + 4);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v126 = v128;
  sub_11240B0(a2, &v126);
  sub_CAE550(v79, *(_QWORD *)(*a1 + 2152LL), *(unsigned int *)(a2 + 24), 1);
  v64 = sub_790090(a2);
  v8 = (char *)sub_6B37C0(*a1);
  if ( v8
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v20 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (a2 = v20) != 0)
    && (v21 = *(_BYTE *)(v20 + 74), (v21 & 4) != 0)
    && (v21 & 1) != 0
    && (v8 = (char *)sub_6B37C0(*a1)) != nullptr
    || (a2 = v5, (v8 = (char *)sub_6F4910(*a1, v5, 0)) != nullptr) )
  {
    v9 = sub_6BB140(*a1, a2);
    sub_AA92F0(v112, v8, *(_QWORD *)(*a1 + 2152LL), v9);
    v8 = (char *)v112[0];
    v10 = (char *)v112[1];
    memset(v119, 0, sizeof(v119));
    v62 = v112[2];
    memset(v112, 0, sizeof(v112));
    sub_646A80((__int64 *)v119);
    sub_646A80((__int64 *)v112);
  }
  else
  {
    v10 = nullptr;
    v62 = nullptr;
  }
  sub_FD6410(v80, v5);
  sub_FCD270(v81, v5);
  v63 = 0;
  v61 = a1[1];
  if ( *(_DWORD *)(v5 + 24) )
  {
    v11 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
    v63 = v11 != 3 && v11 != 0;
  }
  sub_766420(ptr, v5);
  v12 = (_QWORD *)(*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
    v12 = (_QWORD *)*v12;
  if ( v12 && (v13 = sub_79A2E0(v12)) != 0 && (*(_BYTE *)(v13 + 28) & 0x7F) != 0 )
  {
    sub_63E460((__int64)&v93, (__int64)a1, v13);
  }
  else
  {
    v96 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
  }
  v65 = v3;
  v14 = sub_FC8E80(v61, v126, si128.m128i_i64[0]);
  *(_QWORD *)&v119[16] = 0;
  *(_QWORD *)&v119[8] = v15;
  v16 = v15;
  *(_QWORD *)v119 = v14;
  v17 = v14;
  sub_64F120((__int64)&v82, v61 + 160, (__m128i *)v119, (__int64 *)&v119[16]);
  v66 = v82;
  if ( *(_QWORD *)&v119[16] )
    (***(void (__fastcall ****)(_QWORD))&v119[16])(*(_QWORD *)&v119[16]);
  if ( v83 )
  {
    v22 = sub_63DDF0(v61, 392, 4);
    sub_644390((__int64)v84, v81);
    sub_644390((__int64)v85, v80);
    v76 = v106;
    v104 = v106;
    v105 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( ptr[1] )
      sub_63DE60((__int64)&v104, (unsigned __int8 **)ptr);
    v23 = _mm_loadu_si128(&v99);
    v110 = v102;
    v107 = v23;
    v24 = _mm_loadu_si128(&v100);
    v111 = v103;
    v108 = v24;
    v109 = _mm_loadu_si128(&v101);
    v73 = sub_FC8E80(v61, v65, v2);
    v74 = v25;
    v70 = v93;
    v72 = _mm_loadh_ps(v79);
    v67 = *((_QWORD *)&v93 + 1);
    v26 = v94;
    v71 = v95;
    v69 = v79[1];
    v68 = v79[2];
    sub_644390((__int64)v87, v84);
    sub_644390((__int64)v86, v85);
    v78 = (unsigned __int8 **)v112;
    v75 = v113;
    v112[0] = v113;
    *(__m128i *)&v112[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( v105.m128i_i64[0] )
      sub_63DE60((__int64)v78, (unsigned __int8 **)&v104);
    strcpy(v92, "public");
    v27 = _mm_loadu_si128(&v107);
    v90 = v92;
    v117 = v110;
    v114 = v27;
    v28 = _mm_loadu_si128(&v108);
    v118 = v111;
    v115 = v28;
    v116 = _mm_loadu_si128(&v109);
    v91 = 6;
    sub_644390((__int64)v89, v87);
    v29 = v88;
    sub_644390((__int64)v88, v86);
    v77 = v120;
    *(_QWORD *)v119 = v120;
    *(__m128i *)&v119[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( v112[1] )
    {
      v29 = (__int64 *)v119;
      sub_63DE60((__int64)v119, v78);
    }
    v30 = _mm_loadu_si128(&v114);
    v31 = _mm_load_si128((const __m128i *)&v72);
    v124 = v117;
    v121 = v30;
    v32 = _mm_loadu_si128(&v115);
    v125 = v118;
    v122 = v32;
    v123 = _mm_loadu_si128(&v116);
    *(_QWORD *)v22 = &off_49F4B08;
    v33 = v73;
    *(_QWORD *)(v22 + 8) = v17;
    *(_QWORD *)(v22 + 24) = v33;
    v34 = v74;
    *(_QWORD *)(v22 + 16) = v16;
    *(_QWORD *)(v22 + 32) = v34;
    *(__m128i *)(v22 + 88) = v31;
    *(_QWORD *)(v22 + 40) = v70;
    *(_QWORD *)(v22 + 48) = v67;
    *(_OWORD *)(v22 + 56) = v26;
    *(_OWORD *)(v22 + 72) = v71;
    v35 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    *(double *)(v22 + 104) = v69;
    *(__m128i *)(v22 + 128) = v35;
    *(double *)(v22 + 112) = v68;
    *(_QWORD *)(v22 + 120) = v22 + 144;
    if ( *(_QWORD *)&v119[8] )
    {
      v29 = (__int64 *)(v22 + 120);
      sub_63DE60(v22 + 120, (unsigned __int8 **)v119);
    }
    v36 = v124;
    *(__m128i *)(v22 + 176) = _mm_loadu_si128(&v121);
    v37 = _mm_loadu_si128(&v122);
    *(_WORD *)(v22 + 224) = v36;
    LOBYTE(v36) = v125;
    *(__m128i *)(v22 + 192) = v37;
    v38 = _mm_loadu_si128(&v123);
    *(_BYTE *)(v22 + 226) = v36;
    *(__m128i *)(v22 + 208) = v38;
    *(_BYTE *)(v22 + 232) = v64;
    *(_QWORD *)(v22 + 256) = 0;
    *(_OWORD *)(v22 + 240) = 0;
    v39 = v10 - v8;
    if ( v10 == v8 )
    {
      v40 = 0;
    }
    else
    {
      if ( v39 > 0x7FFFFFFFFFFFFFD0LL )
        sub_555886(v29);
      v40 = operator new(v10 - v8);
    }
    *(_QWORD *)(v22 + 256) = v40 + v39;
    *(__m128i *)(v22 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)v40);
    if ( v10 != v8 )
    {
      v41 = v8;
      do
      {
        v42 = v40 + 16;
        v43 = (__int64 *)v40;
        v41 += 80;
        v40 += 80;
        *(_QWORD *)(v40 - 80) = v42;
        sub_63E170(v43, *((_BYTE **)v41 - 10), *((_QWORD *)v41 - 10) + *((_QWORD *)v41 - 9));
        v44 = *((_QWORD *)v41 - 4);
        *(__m128i *)(v40 - 48) = _mm_loadu_si128((const __m128i *)v41 - 3);
        v45 = _mm_loadu_si128((const __m128i *)(v41 - 24));
        *(_QWORD *)(v40 - 32) = v44;
        v46 = *((_QWORD *)v41 - 1);
        *(__m128i *)(v40 - 24) = v45;
        *(_QWORD *)(v40 - 8) = v46;
      }
      while ( v10 != v41 );
      *(_QWORD *)(v22 + 248) = v40;
    }
    sub_644390(v22 + 264, v88);
    v47 = (__int64)v89;
    sub_644390(v22 + 288, v89);
    v48 = (_QWORD *)(v22 + 336);
    *(_QWORD *)(v22 + 320) = v22 + 336;
    *(_BYTE *)(v22 + 312) = v63;
    if ( v90 == v92 )
    {
      v49 = v91;
      v47 = v91 + 1;
      if ( (unsigned int)(v91 + 1) >= 8 )
      {
        *v48 = *(_QWORD *)v92;
        *(_QWORD *)((char *)v48 + (unsigned int)v47 - 8) = *(_QWORD *)&v92[(unsigned int)v47 - 8];
        v54 = (v22 + 344) & 0xFFFFFFFFFFFFFFF8LL;
        v55 = (char *)v48 - v54;
        v56 = (char *)(v92 - v55);
        if ( (((_DWORD)v47 + (_DWORD)v55) & 0xFFFFFFF8) >= 8 )
        {
          v57 = (v47 + (_DWORD)v55) & 0xFFFFFFF8;
          v58 = 0;
          do
          {
            v59 = v58;
            v58 += 8;
            v47 = *(_QWORD *)&v56[v59];
            *(_QWORD *)(v54 + v59) = v47;
          }
          while ( v58 < v57 );
        }
        v49 = v91;
      }
      else if ( (v47 & 4) != 0 )
      {
        *(_DWORD *)v48 = *(_DWORD *)v92;
        v60 = (unsigned int)v47;
        v47 = *(unsigned int *)&v92[(unsigned int)v47 - 4];
        *(_DWORD *)((char *)v48 + v60 - 4) = v47;
        v49 = v91;
      }
      else if ( (_DWORD)v91 != -1 )
      {
        *(_BYTE *)v48 = v92[0];
        v49 = v91;
        if ( (v47 & 2) != 0 )
        {
          v53 = (unsigned int)v47;
          v47 = *(unsigned __int16 *)&v92[(unsigned int)v47 - 2];
          *(_WORD *)((char *)v48 + v53 - 2) = v47;
          v49 = v91;
        }
      }
    }
    else
    {
      *(_QWORD *)(v22 + 320) = v90;
      *(_QWORD *)(v22 + 336) = *(_QWORD *)v92;
      v49 = v91;
    }
    *(_QWORD *)(v22 + 328) = v49;
    *(_QWORD *)(v22 + 360) = 0;
    *(_QWORD *)(v22 + 352) = 0x1400000014LL;
    v90 = v92;
    v91 = 0;
    v92[0] = 0;
    if ( *(_BYTE **)v119 != v77 )
      free(*(void **)v119);
    sub_6441A0(v88);
    sub_6441A0(v89);
    if ( v90 != v92 )
    {
      v47 = *(_QWORD *)v92 + 1LL;
      operator delete(v90, *(_QWORD *)v92 + 1LL);
    }
    *(_DWORD *)(v22 + 368) = 20;
    *(_OWORD *)(v22 + 376) = 0;
    *(_QWORD *)v22 = &off_4992FF0;
    if ( v112[0] != v75 )
      free(v112[0]);
    sub_6441A0(v86);
    sub_6441A0(v87);
    *(_QWORD *)v22 = &off_49F4BA0;
    if ( v104 != v76 )
      free(v104);
    sub_6441A0(v85);
    sub_6441A0(v84);
    v50 = *(void (__fastcall ****)(_QWORD))(v66 + 16);
    *(_QWORD *)(v66 + 16) = v22;
    if ( v50 )
      (**v50)(v50);
    v51 = *(_QWORD *)(v22 + 88);
    if ( v51 && (unsigned int)(*(_DWORD *)(v51 + 356) - 2) <= 0x13 && (v52 = sub_FC8C50(v51, v47)) != 0 )
      sub_FC8D50(v52, v22);
    else
      sub_64B900(v61 + 184, v22);
  }
  if ( ptr[0] != &v98 )
    free(ptr[0]);
  v18 = v8;
  sub_6441A0(v81);
  sub_6441A0(v80);
  if ( v10 != v8 )
  {
    do
    {
      if ( *(char **)v18 != v18 + 16 )
        operator delete(*(void **)v18, *((_QWORD *)v18 + 2) + 1LL);
      v18 += 80;
    }
    while ( v10 != v18 );
  }
  if ( v8 )
    operator delete(v8, v62 - v8);
  if ( v126 != v128 )
    free(v126);
}

