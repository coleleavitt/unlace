unsigned __int64 __fastcall sub_2C6F60(_QWORD *a1, _QWORD *a2, char a3)
{
  bool v4; // zf
  __int64 v5; // r13
  __int64 v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // rcx
  char v9; // cl
  int v10; // esi
  int v11; // ecx
  __int64 v12; // r14
  unsigned __int64 (__fastcall *v13)(__int64, __int64); // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // r13
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r14
  unsigned __int64 (__fastcall *v26)(__int64, __int64); // rcx
  __int64 v27; // rcx
  __m128i v28; // xmm0
  char v29; // cl
  int v30; // esi
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // r14
  unsigned __int64 (__fastcall *v35)(__int64, __int64); // rcx
  __int64 v36; // rcx
  __m128i v37; // xmm0
  char v38; // cl
  int v39; // esi
  int v40; // ecx
  __int64 v41; // rdi
  unsigned __int8 (*v42)(void); // rax
  __int64 v43; // rdi
  unsigned __int8 (*v44)(void); // rax
  __int64 v46; // r14
  __int64 v47; // r13
  __m128i v48; // xmm0
  __int64 v49; // rdx
  char v50; // dl
  int v51; // ecx
  int v52; // edx
  __int64 v53; // r12
  unsigned __int64 (__fastcall *v54)(__int64, __int64); // rdx
  __int64 v55; // r14
  __int64 v56; // rbp
  __int64 v57; // rax
  _QWORD *v58; // r13
  __int64 v59; // rbp
  __int64 v60; // r13
  __int64 v61; // r12
  __int64 v62; // r14
  unsigned __int64 (__fastcall *v63)(__int64, __int64); // r8
  __m128i v64; // xmm0
  char v65; // si
  int v66; // edi
  int v67; // esi
  __int64 v68; // rdi
  __int64 v69; // r14
  __int64 v70; // r13
  __int64 v71; // r12
  _QWORD *v72; // rbp
  unsigned __int64 v73; // [rsp+8h] [rbp-120h]
  __int64 v74; // [rsp+10h] [rbp-118h]
  __int64 v75; // [rsp+10h] [rbp-118h]
  __int64 v76; // [rsp+10h] [rbp-118h]
  unsigned __int64 v77; // [rsp+18h] [rbp-110h]
  __int64 *v78; // [rsp+18h] [rbp-110h]
  __int64 *v79; // [rsp+20h] [rbp-108h]
  __int64 v80; // [rsp+20h] [rbp-108h]
  __int64 *v81; // [rsp+28h] [rbp-100h]
  unsigned __int64 v82; // [rsp+28h] [rbp-100h]
  __int64 *v83; // [rsp+30h] [rbp-F8h]
  __int64 *i; // [rsp+30h] [rbp-F8h]
  __int64 v87; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v88; // [rsp+58h] [rbp-D0h]
  __m128i v89; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v90; // [rsp+80h] [rbp-A8h]
  char v91[8]; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v92; // [rsp+90h] [rbp-98h]
  unsigned __int64 v93; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v94; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v95; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v97; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v98; // [rsp+D0h] [rbp-58h]
  int v99; // [rsp+D8h] [rbp-50h]
  int v100; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v101; // [rsp+E8h] [rbp-40h]

  v4 = a1[14] == 0;
  v101 = __readfsqword(0x28u);
  v73 = a1[12];
  if ( !v4 )
  {
    v87 = 0;
    v88 = 0;
    sub_2C68E0(&v87, v73);
    v82 = 0;
    for ( i = a1 + 2; v82 < a1[1]; i += 3 )
    {
      switch_dbctx(*(int *)(a2[v82] + 8LL));
      v46 = *i;
      v47 = *i + 272 * i[1];
      if ( *i != v47 )
      {
        do
        {
          while ( 1 )
          {
            v53 = v87 + 264LL * *(_QWORD *)(v46 + 264);
            v54 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 8LL);
            if ( v54 != sub_2B1070 )
              break;
            v48 = _mm_loadu_si128((const __m128i *)(v53 + 8));
            v49 = *(_QWORD *)(v53 + 24);
            v93 = 0xFFFFFFFF00000000LL;
            v89 = v48;
            v90 = v49;
            v94 = 0;
            v95 = 0xFFFFFFFF00000000LL;
            v96 = 0;
            v97 = 0xFFFFFFFF00000000LL;
            v98 = 0;
            v92 = 0;
            sub_120EE0((__int64)v91, v53 + 32);
            v99 = *(_DWORD *)(v53 + 112);
            v100 = *(_DWORD *)(v53 + 120);
            *(__m128i *)(v53 + 8) = _mm_loadu_si128((const __m128i *)(v46 + 8));
            *(_DWORD *)(v53 + 24) = *(_DWORD *)(v46 + 24);
            sub_120EE0(v53 + 32, v46 + 32);
            *(_DWORD *)(v53 + 112) = *(_DWORD *)(v46 + 112);
            *(_DWORD *)(v53 + 120) = *(_DWORD *)(v46 + 120);
            *(__m128i *)(v46 + 8) = _mm_load_si128(&v89);
            *(_DWORD *)(v46 + 24) = v90;
            sub_120EE0(v46 + 32, (__int64)v91);
            v46 += 272;
            *(_DWORD *)(v46 - 160) = v99;
            *(_DWORD *)(v46 - 152) = v100;
            sub_1188E0((__int64)&v97);
            sub_1188E0((__int64)&v95);
            sub_1188E0((__int64)&v93);
            v50 = *(_BYTE *)(v53 + 128);
            *(_BYTE *)(v53 + 128) = *(_BYTE *)(v46 - 144);
            v51 = *(_DWORD *)(v46 - 16);
            *(_BYTE *)(v46 - 144) = v50;
            v52 = *(_DWORD *)(v53 + 256);
            *(_DWORD *)(v53 + 256) = v51;
            *(_DWORD *)(v46 - 16) = v52;
            if ( v47 == v46 )
              goto LABEL_51;
          }
          v54(v87 + 264LL * *(_QWORD *)(v46 + 264), v46);
          v46 += 272;
        }
        while ( v47 != v46 );
LABEL_51:
        v47 = *i;
      }
      if ( v47 )
      {
        v55 = i[1];
        if ( v55 )
        {
          v56 = 0;
          do
          {
            v57 = 17 * v56++;
            v58 = (_QWORD *)(16 * v57 + v47);
            *v58 = off_4B3EA0;
            sub_1188E0((__int64)(v58 + 28));
            sub_1188E0((__int64)(v58 + 26));
            sub_1188E0((__int64)(v58 + 24));
            sub_1188E0((__int64)(v58 + 12));
            sub_1188E0((__int64)(v58 + 10));
            sub_1188E0((__int64)(v58 + 8));
            v47 = *i;
          }
          while ( v55 != v56 );
        }
        i[1] = 0;
        qfree(v47);
        *i = 0;
        i[2] = 0;
      }
      v80 = a2[v82];
      sub_2C68E0((__int64 *)(v80 + 40), v73 - a1[14]);
      if ( v73 )
      {
        v59 = 0;
        v60 = 0;
        v76 = 0;
        do
        {
          if ( *(_DWORD *)(a1[11] + 4 * v60) )
          {
            v61 = v59 + v87;
            v62 = *(_QWORD *)(v80 + 40) + 264 * v76;
            v63 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 8LL);
            if ( v63 == sub_2B1070 )
            {
              v64 = _mm_loadu_si128((const __m128i *)(v62 + 8));
              v90 = *(_QWORD *)(v62 + 24);
              v93 = 0xFFFFFFFF00000000LL;
              v94 = 0;
              v95 = 0xFFFFFFFF00000000LL;
              v96 = 0;
              v97 = 0xFFFFFFFF00000000LL;
              v98 = 0;
              v89 = v64;
              v92 = 0;
              sub_120EE0((__int64)v91, v62 + 32);
              v99 = *(_DWORD *)(v62 + 112);
              v100 = *(_DWORD *)(v62 + 120);
              *(__m128i *)(v62 + 8) = _mm_loadu_si128((const __m128i *)(v61 + 8));
              *(_DWORD *)(v62 + 24) = *(_DWORD *)(v61 + 24);
              sub_120EE0(v62 + 32, v61 + 32);
              *(_DWORD *)(v62 + 112) = *(_DWORD *)(v61 + 112);
              *(_DWORD *)(v62 + 120) = *(_DWORD *)(v61 + 120);
              *(__m128i *)(v61 + 8) = _mm_load_si128(&v89);
              *(_DWORD *)(v61 + 24) = v90;
              sub_120EE0(v61 + 32, (__int64)v91);
              *(_DWORD *)(v61 + 112) = v99;
              *(_DWORD *)(v61 + 120) = v100;
              sub_1188E0((__int64)&v97);
              sub_1188E0((__int64)&v95);
              sub_1188E0((__int64)&v93);
              v65 = *(_BYTE *)(v62 + 128);
              *(_BYTE *)(v62 + 128) = *(_BYTE *)(v61 + 128);
              v66 = *(_DWORD *)(v61 + 256);
              *(_BYTE *)(v61 + 128) = v65;
              v67 = *(_DWORD *)(v62 + 256);
              *(_DWORD *)(v62 + 256) = v66;
              *(_DWORD *)(v61 + 256) = v67;
            }
            else
            {
              v63(*(_QWORD *)(v80 + 40) + 264 * v76, v59 + v87);
            }
            ++v76;
          }
          ++v60;
          v59 += 264;
        }
        while ( v60 != v73 );
      }
      else
      {
        v76 = 0;
      }
      if ( *(_QWORD *)(v80 + 48) != v76 )
      {
        if ( !under_debugger )
          sub_37DDE0(1962);
        BUG();
      }
      ++v82;
    }
    v68 = v87;
    if ( v87 )
    {
      v69 = v88;
      if ( (_QWORD)v88 )
      {
        v70 = 0;
        v71 = 0;
        do
        {
          v72 = (_QWORD *)(v68 + v70);
          ++v71;
          v70 += 264;
          *v72 = off_4B3EA0;
          sub_1188E0((__int64)(v72 + 28));
          sub_1188E0((__int64)(v72 + 26));
          sub_1188E0((__int64)(v72 + 24));
          sub_1188E0((__int64)(v72 + 12));
          sub_1188E0((__int64)(v72 + 10));
          sub_1188E0((__int64)(v72 + 8));
          v68 = v87;
        }
        while ( v69 != v71 );
      }
      *(_QWORD *)&v88 = 0;
      qfree(v68);
      if ( a3 )
        goto LABEL_17;
      return v101 - __readfsqword(0x28u);
    }
LABEL_16:
    if ( a3 )
    {
LABEL_17:
      v78 = nullptr;
      v19 = *a2;
      v81 = (__int64 *)(*a2 + 40LL);
      v75 = a2[1];
      v83 = (__int64 *)(v75 + 40);
      if ( a1[1] > 2u )
        v78 = (__int64 *)(a2[2] + 40LL);
      goto LABEL_19;
    }
    return v101 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v77 = 0;
    v79 = a1 + 2;
    do
    {
      switch_dbctx(*(int *)(a2[v77] + 8LL));
      v74 = a2[v77];
      sub_2C68E0((__int64 *)(v74 + 40), v73);
      v5 = *v79;
      v6 = *v79 + 272 * v79[1];
      if ( *v79 != v6 )
      {
        do
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(v74 + 40) + 264LL * *(_QWORD *)(v5 + 264);
            v13 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 8LL);
            if ( v13 != sub_2B1070 )
              break;
            v7 = _mm_loadu_si128((const __m128i *)(v12 + 8));
            v8 = *(_QWORD *)(v12 + 24);
            v93 = 0xFFFFFFFF00000000LL;
            v89 = v7;
            v90 = v8;
            v94 = 0;
            v95 = 0xFFFFFFFF00000000LL;
            v96 = 0;
            v97 = 0xFFFFFFFF00000000LL;
            v98 = 0;
            v92 = 0;
            sub_120EE0((__int64)v91, v12 + 32);
            v99 = *(_DWORD *)(v12 + 112);
            v100 = *(_DWORD *)(v12 + 120);
            *(__m128i *)(v12 + 8) = _mm_loadu_si128((const __m128i *)(v5 + 8));
            *(_DWORD *)(v12 + 24) = *(_DWORD *)(v5 + 24);
            sub_120EE0(v12 + 32, v5 + 32);
            *(_DWORD *)(v12 + 112) = *(_DWORD *)(v5 + 112);
            *(_DWORD *)(v12 + 120) = *(_DWORD *)(v5 + 120);
            *(__m128i *)(v5 + 8) = _mm_load_si128(&v89);
            *(_DWORD *)(v5 + 24) = v90;
            sub_120EE0(v5 + 32, (__int64)v91);
            v5 += 272;
            *(_DWORD *)(v5 - 160) = v99;
            *(_DWORD *)(v5 - 152) = v100;
            sub_1188E0((__int64)&v97);
            sub_1188E0((__int64)&v95);
            sub_1188E0((__int64)&v93);
            v9 = *(_BYTE *)(v12 + 128);
            *(_BYTE *)(v12 + 128) = *(_BYTE *)(v5 - 144);
            v10 = *(_DWORD *)(v5 - 16);
            *(_BYTE *)(v5 - 144) = v9;
            v11 = *(_DWORD *)(v12 + 256);
            *(_DWORD *)(v12 + 256) = v10;
            *(_DWORD *)(v5 - 16) = v11;
            if ( v5 == v6 )
              goto LABEL_9;
          }
          v14 = v5;
          v5 += 272;
          v13(v12, v14);
        }
        while ( v5 != v6 );
LABEL_9:
        v6 = *v79;
      }
      if ( v6 )
      {
        v15 = v79[1];
        if ( v15 )
        {
          v16 = 0;
          do
          {
            v17 = 17 * v16++;
            v18 = (_QWORD *)(16 * v17 + v6);
            *v18 = off_4B3EA0;
            sub_1188E0((__int64)(v18 + 28));
            sub_1188E0((__int64)(v18 + 26));
            sub_1188E0((__int64)(v18 + 24));
            sub_1188E0((__int64)(v18 + 12));
            sub_1188E0((__int64)(v18 + 10));
            sub_1188E0((__int64)(v18 + 8));
            v6 = *v79;
          }
          while ( v15 != v16 );
        }
        v79[1] = 0;
        qfree(v6);
        *v79 = 0;
        v79[2] = 0;
      }
      ++v77;
      v79 += 3;
    }
    while ( v77 < a1[1] );
    goto LABEL_16;
  }
  if ( !a3 )
    return v101 - __readfsqword(0x28u);
  v78 = nullptr;
  v19 = *a2;
  v75 = a2[1];
  v81 = (__int64 *)(*a2 + 40LL);
  v83 = (__int64 *)(v75 + 40);
LABEL_19:
  v20 = *(_QWORD *)(v19 + 48);
  if ( !v20 )
    goto LABEL_41;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  do
  {
    v41 = v21 + *(_QWORD *)(v19 + 40);
    v42 = **(unsigned __int8 (***)(void))v41;
    if ( (char *)v42 == (char *)sub_2AA440 )
    {
      if ( *(_DWORD *)(v41 + 120) != *(_DWORD *)(v41 + 248) || (unsigned int)sub_1332E0(v41 + 8, v41 + 136) )
        goto LABEL_21;
    }
    else if ( v42() )
    {
      goto LABEL_21;
    }
    v43 = v21 + *(_QWORD *)(v75 + 40);
    v44 = **(unsigned __int8 (***)(void))v43;
    if ( (char *)v44 == (char *)sub_2AA440 )
    {
      if ( *(_DWORD *)(v43 + 120) == *(_DWORD *)(v43 + 248) && !(unsigned int)sub_1332E0(v43 + 8, v43 + 136) )
        goto LABEL_29;
    }
    else if ( !v44() )
    {
      goto LABEL_29;
    }
LABEL_21:
    if ( v20 < v22 )
    {
      v23 = *(_QWORD *)(v19 + 40);
      v24 = v23 + v21;
      v25 = v23 + 264 * v20;
      v26 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 8LL);
      if ( v26 == sub_2B1070 )
      {
        v27 = *(_QWORD *)(v25 + 24);
        v28 = _mm_loadu_si128((const __m128i *)(v25 + 8));
        v94 = 0;
        v90 = v27;
        v93 = 0xFFFFFFFF00000000LL;
        v95 = 0xFFFFFFFF00000000LL;
        v96 = 0;
        v97 = 0xFFFFFFFF00000000LL;
        v98 = 0;
        v89 = v28;
        v92 = 0;
        sub_120EE0((__int64)v91, v25 + 32);
        v99 = *(_DWORD *)(v25 + 112);
        v100 = *(_DWORD *)(v25 + 120);
        *(__m128i *)(v25 + 8) = _mm_loadu_si128((const __m128i *)(v24 + 8));
        *(_DWORD *)(v25 + 24) = *(_DWORD *)(v24 + 24);
        sub_120EE0(v25 + 32, v24 + 32);
        *(_DWORD *)(v25 + 112) = *(_DWORD *)(v24 + 112);
        *(_DWORD *)(v25 + 120) = *(_DWORD *)(v24 + 120);
        *(__m128i *)(v24 + 8) = _mm_load_si128(&v89);
        *(_DWORD *)(v24 + 24) = v90;
        sub_120EE0(v24 + 32, (__int64)v91);
        *(_DWORD *)(v24 + 112) = v99;
        *(_DWORD *)(v24 + 120) = v100;
        sub_1188E0((__int64)&v97);
        sub_1188E0((__int64)&v95);
        sub_1188E0((__int64)&v93);
        v29 = *(_BYTE *)(v25 + 128);
        *(_BYTE *)(v25 + 128) = *(_BYTE *)(v24 + 128);
        v30 = *(_DWORD *)(v24 + 256);
        *(_BYTE *)(v24 + 128) = v29;
        v31 = *(_DWORD *)(v25 + 256);
        *(_DWORD *)(v25 + 256) = v30;
        *(_DWORD *)(v24 + 256) = v31;
      }
      else
      {
        v26(v25, v24);
      }
      v32 = *(_QWORD *)(v75 + 40);
      v33 = v32 + 264 * v20;
      v34 = v32 + v21;
      v35 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 8LL);
      if ( v35 == sub_2B1070 )
      {
        v36 = *(_QWORD *)(v33 + 24);
        v37 = _mm_loadu_si128((const __m128i *)(v33 + 8));
        v94 = 0;
        v90 = v36;
        v93 = 0xFFFFFFFF00000000LL;
        v95 = 0xFFFFFFFF00000000LL;
        v96 = 0;
        v97 = 0xFFFFFFFF00000000LL;
        v98 = 0;
        v89 = v37;
        v92 = 0;
        sub_120EE0((__int64)v91, v33 + 32);
        v99 = *(_DWORD *)(v33 + 112);
        v100 = *(_DWORD *)(v33 + 120);
        *(__m128i *)(v33 + 8) = _mm_loadu_si128((const __m128i *)(v34 + 8));
        *(_DWORD *)(v33 + 24) = *(_DWORD *)(v34 + 24);
        sub_120EE0(v33 + 32, v34 + 32);
        *(_DWORD *)(v33 + 112) = *(_DWORD *)(v34 + 112);
        *(_DWORD *)(v33 + 120) = *(_DWORD *)(v34 + 120);
        *(__m128i *)(v34 + 8) = _mm_load_si128(&v89);
        *(_DWORD *)(v34 + 24) = v90;
        sub_120EE0(v34 + 32, (__int64)v91);
        *(_DWORD *)(v34 + 112) = v99;
        *(_DWORD *)(v34 + 120) = v100;
        sub_1188E0((__int64)&v97);
        sub_1188E0((__int64)&v95);
        sub_1188E0((__int64)&v93);
        v38 = *(_BYTE *)(v33 + 128);
        *(_BYTE *)(v33 + 128) = *(_BYTE *)(v34 + 128);
        v39 = *(_DWORD *)(v34 + 256);
        *(_BYTE *)(v34 + 128) = v38;
        v40 = *(_DWORD *)(v33 + 256);
        *(_DWORD *)(v33 + 256) = v39;
        *(_DWORD *)(v34 + 256) = v40;
      }
      else
      {
        v35(v33, v34);
      }
      if ( v78 )
        (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*v78 + 264 * v20) + 8LL))(
          *v78 + 264 * v20,
          v21 + *v78);
    }
    ++v20;
LABEL_29:
    ++v22;
    v21 += 264;
  }
  while ( v22 < *(_QWORD *)(v19 + 48) );
  v19 = *a2;
LABEL_41:
  switch_dbctx(*(int *)(v19 + 8));
  sub_2C68E0(v81, v20);
  switch_dbctx(*(int *)(a2[1] + 8LL));
  sub_2C68E0(v83, v20);
  if ( !v78 )
    return v101 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(a2[2] + 8LL));
  return sub_2C68E0(v78, v20);
}
