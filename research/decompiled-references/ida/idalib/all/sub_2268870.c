__int64 __fastcall sub_2268870(__int64 a1, __int64 a2, const char **a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  _BYTE *v10; // r13
  int v12; // edx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r15
  __int32 v16; // edx
  __int64 v17; // rax
  __int64 v18; // rsi
  void (__fastcall *v19)(__int64, __int64, __m128i *, __int64); // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  int v23; // eax
  void *v24; // rdx
  void *v25; // r8
  __int64 v26; // rsi
  void (__fastcall *v27)(std::_V2 **, __int64, void **, __m128i *); // rax
  std::_V2 *v28; // rdi
  __m128i v29; // xmm0
  int v30; // edx
  char v31; // al
  __int32 v32; // r13d
  __int64 v33; // rax
  volatile signed __int32 *v34; // rdi
  __int64 v35; // rsi
  void (__fastcall *v36)(__int128 *, __int64, void **, __m128i *); // rax
  __int64 v37; // rax
  volatile signed __int32 *v38; // rdi
  __m128 *v39; // r13
  void *v40; // rax
  __int32 v41; // eax
  __int64 v42; // rdx
  volatile signed __int32 *v43; // rdi
  __m128i v44; // xmm0
  __m128i *v45; // r13
  __m128i *v46; // rax
  __m128i *v47; // rdi
  __int64 *v48; // rdx
  std::_V2 *v49; // rsi
  volatile signed __int32 *v50; // rcx
  __int64 v51; // r13
  __int64 v52; // rax
  int v53; // eax
  volatile signed __int32 *v54; // rdx
  volatile signed __int32 *v55; // rcx
  __int64 *v56; // rdi
  char v57; // al
  volatile signed __int32 *v58; // rdx
  volatile signed __int32 *v59; // rcx
  volatile signed __int32 *v60; // rdx
  volatile signed __int32 *v61; // rdi
  __m128i v62; // xmm0
  int v63; // edi
  _QWORD *v64; // rax
  __int64 v65; // rsi
  volatile signed __int32 *v66; // rbp
  _QWORD *v67; // r13
  __int64 v68; // rsi
  std::_V2 **v69; // rcx
  volatile signed __int32 *v70; // rdx
  __int64 v71; // r8
  _QWORD *v72; // rax
  __int64 v73; // rsi
  __m128i v74; // xmm0
  int v75; // eax
  std::_V2 *v76; // rcx
  __int64 *v77; // rsi
  __int64 v78; // rdx
  volatile signed __int32 *v79; // rdi
  char *v80; // r13
  char *v81; // rbp
  volatile signed __int32 *v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rax
  std::_V2 **v85; // rax
  char v86; // al
  int v87; // [rsp+10h] [rbp-3D8h]
  std::_V2 **v88; // [rsp+18h] [rbp-3D0h] BYREF
  __int64 v89; // [rsp+20h] [rbp-3C8h]
  std::_V2 **v90; // [rsp+28h] [rbp-3C0h]
  volatile signed __int32 *v91; // [rsp+30h] [rbp-3B8h]
  volatile signed __int32 *v92; // [rsp+38h] [rbp-3B0h]
  __m128i v93; // [rsp+40h] [rbp-3A8h] BYREF
  __m128i v94; // [rsp+50h] [rbp-398h] BYREF
  __m128i v95; // [rsp+60h] [rbp-388h] BYREF
  __int128 v96; // [rsp+70h] [rbp-378h] BYREF
  std::_V2 **v97; // [rsp+80h] [rbp-368h] BYREF
  volatile signed __int32 *v98; // [rsp+88h] [rbp-360h]
  std::_V2 *v99[2]; // [rsp+90h] [rbp-358h] BYREF
  __m128i v100; // [rsp+A0h] [rbp-348h] BYREF
  void *v101[2]; // [rsp+B0h] [rbp-338h] BYREF
  __m128i v102; // [rsp+C0h] [rbp-328h] BYREF
  __int16 v103; // [rsp+D0h] [rbp-318h]
  __m128i v104; // [rsp+E0h] [rbp-308h] BYREF
  _WORD v105[28]; // [rsp+F0h] [rbp-2F8h] BYREF
  int v106; // [rsp+128h] [rbp-2C0h]
  char v107; // [rsp+138h] [rbp-2B0h]
  void *ptr; // [rsp+140h] [rbp-2A8h] BYREF
  __m128i si128; // [rsp+148h] [rbp-2A0h]
  _BYTE v110[264]; // [rsp+158h] [rbp-290h] BYREF
  _QWORD v111[34]; // [rsp+260h] [rbp-188h] BYREF
  __int64 v112; // [rsp+370h] [rbp-78h]
  void *v113; // [rsp+378h] [rbp-70h]
  void *v114; // [rsp+380h] [rbp-68h]
  char v115; // [rsp+3A0h] [rbp-48h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v110;
  sub_22538C0(a3, (__int64)&ptr);
  v8 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a2 + 112LL))(a2, &ptr);
  *(_DWORD *)a4 = v8;
  *(_QWORD *)(a4 + 8) = v9;
  if ( v8 )
  {
    v10 = ptr;
    *(_OWORD *)a1 = 0;
    goto LABEL_3;
  }
  sub_22668A0((__int64)v111, a2, ptr, si128.m128i_i64[0]);
  if ( (v115 & 1) == 0 )
  {
    v101[0] = ptr;
    v103 = 261;
    v101[1] = (void *)si128.m128i_i64[0];
    sub_2265A10(&v104, a2, (_QWORD **)v101, (__int64)a3, v111);
    if ( (v107 & 1) != 0 )
    {
      v15 = v104.m128i_i64[1];
      v16 = v104.m128i_i32[0];
      if ( *(_DWORD *)(a2 + 120) == 2
        || v112 && *(_DWORD *)(v112 + 8) != 1
        || (LODWORD(v88) = v104.m128i_i32[0],
            v17 = std::_V2::generic_category((std::_V2 *)&v104),
            v16 = (int)v88,
            v17 != v15)
        || (_DWORD)v88 != 2 )
      {
        *(_DWORD *)a4 = v16;
        *(_QWORD *)(a4 + 8) = v15;
        *(_OWORD *)a1 = 0;
        goto LABEL_19;
      }
      (*(void (__fastcall **)(__int64, _QWORD, const char **, __int64))(**(_QWORD **)(a2 + 72) + 64LL))(
        a1,
        *(_QWORD *)(a2 + 72),
        a3,
        a4);
      goto LABEL_40;
    }
    if ( v106 != 3 )
    {
      v20 = std::_V2::generic_category((std::_V2 *)&v104);
      *(_DWORD *)a4 = 20;
      *(_QWORD *)(a4 + 8) = v20;
      *(_OWORD *)a1 = 0;
      goto LABEL_24;
    }
    v94.m128i_i32[0] = 0;
    v93 = 0;
    v21 = std::_V2::system_category((std::_V2 *)&v104);
    v22 = v112;
    v89 = v21;
    v94.m128i_i64[1] = v21;
    v23 = *(_DWORD *)(v112 + 8);
    if ( v23 == 1 )
    {
      v24 = v113;
      v25 = v114;
    }
    else
    {
      v24 = *(void **)(v112 + 48);
      v25 = *(void **)(v112 + 56);
      if ( v23 != 2 )
      {
        v90 = *(std::_V2 ***)(v112 + 56);
        v39 = (__m128 *)operator new(0x70u);
        v39->m128_u64[1] = 0x100000001LL;
        v39[2].m128_u64[0] = 0;
        v39[2].m128_i8[8] = 0;
        v39->m128_u64[0] = (unsigned __int64)off_2C761A0;
        v103 = 261;
        v40 = ptr;
        v39[3].m128_i32[2] = 9;
        v101[0] = v40;
        v101[1] = (void *)si128.m128i_i64[0];
        v39[1].m128_u64[1] = (unsigned __int64)&v39[2].m128_u64[1];
        v39[1].m128_u64[0] = (unsigned __int64)&off_2BEB9F0;
        sub_2253560((__m128 *)v39[4].m128_u64, (_QWORD **)v101);
        v88 = v90;
        v39[6] = _mm_loadh_ps((const double *)&v88);
        v41 = sub_2264620((__int64)&v39[1], 1);
        v99[1] = (std::_V2 *)v39;
        v94.m128i_i32[0] = v41;
        v99[0] = (std::_V2 *)&v39[1];
        v94.m128i_i64[1] = v42;
        v88 = v99;
        sub_225E2F0((__int64 *)v101, (__int64 *)v99);
        v43 = (volatile signed __int32 *)v93.m128i_i64[1];
        v44 = _mm_load_si128((const __m128i *)v101);
        *(_OWORD *)v101 = 0;
        v93 = v44;
        if ( v43 )
        {
          sub_4343A0(v43);
          if ( v101[1] )
            sub_4343A0((volatile signed __int32 *)v101[1]);
        }
        v28 = v99[1];
        if ( v99[1] )
          sub_4343A0((volatile signed __int32 *)v99[1]);
LABEL_34:
        v32 = v94.m128i_i32[0];
        if ( v94.m128i_i32[0] )
        {
          v33 = std::_V2::generic_category(v28);
          v34 = (volatile signed __int32 *)v93.m128i_i64[1];
          if ( v94.m128i_i64[1] != v33 || v32 != 2 )
          {
            *(__m128i *)a4 = _mm_load_si128(&v94);
            *(_QWORD *)a1 = 0;
            *(_QWORD *)(a1 + 8) = 0;
LABEL_38:
            if ( v34 )
              sub_4343A0(v34);
LABEL_40:
            if ( (v107 & 1) != 0 )
              goto LABEL_19;
LABEL_24:
            if ( (_WORD *)v104.m128i_i64[0] != v105 )
              operator delete((void *)v104.m128i_i64[0]);
            goto LABEL_19;
          }
          v93 = 0;
          if ( v34 )
            sub_4343A0(v34);
        }
        if ( *(_DWORD *)(a2 + 120) == 2 )
        {
          v84 = v93.m128i_i64[0];
          *(__m128i *)a4 = _mm_load_si128(&v94);
          *(_OWORD *)a1 = __PAIR128__(v93.m128i_u64[1], v84);
          goto LABEL_40;
        }
        v35 = *(_QWORD *)(a2 + 72);
        v95.m128i_i32[0] = 0;
        v95.m128i_i64[1] = v89;
        v36 = *(void (__fastcall **)(__int128 *, __int64, void **, __m128i *))(*(_QWORD *)v35 + 64LL);
        v101[0] = ptr;
        v103 = 261;
        v101[1] = (void *)si128.m128i_i64[0];
        v36(&v96, v35, v101, &v95);
        LODWORD(v89) = v95.m128i_i32[0];
        if ( v95.m128i_i32[0] )
        {
          v37 = std::_V2::generic_category((std::_V2 *)&v96);
          v38 = *((volatile signed __int32 **)&v96 + 1);
          if ( v95.m128i_i64[1] != v37 || (_DWORD)v89 != 2 )
          {
            *(__m128i *)a4 = _mm_load_si128(&v95);
            *(_QWORD *)a1 = 0;
            *(_QWORD *)(a1 + 8) = 0;
LABEL_50:
            if ( v38 )
              sub_4343A0(v38);
            v34 = (volatile signed __int32 *)v93.m128i_i64[1];
            goto LABEL_38;
          }
          v96 = 0;
          if ( v38 )
            sub_4343A0(v38);
        }
        v63 = *(_DWORD *)(a2 + 120);
        v101[0] = &v102;
        v101[1] = (void *)0x200000000LL;
        if ( v63 )
        {
          sub_2268020((__int64)v101, v93.m128i_i8);
          sub_2268020((__int64)v101, (char *)&v96);
        }
        else
        {
          sub_2268020((__int64)v101, (char *)&v96);
          sub_2268020((__int64)v101, v93.m128i_i8);
        }
        v64 = (_QWORD *)operator new(0xF8u);
        v65 = LODWORD(v101[1]);
        v66 = (volatile signed __int32 *)v101[0];
        v67 = v64;
        v64[1] = 0x100000001LL;
        v68 = 4 * v65;
        v69 = (std::_V2 **)(v64 + 2);
        *v64 = off_2BEBB58;
        v70 = &v66[v68];
        v64[3] = v64 + 5;
        v71 = (v68 * 4) >> 4;
        v64[2] = &off_2BEB860;
        v72 = v64 + 10;
        v67[4] = 0;
        *((_BYTE *)v67 + 40) = 0;
        *((_DWORD *)v67 + 14) = 9;
        v67[8] = v72;
        v67[9] = 0x800000000LL;
        if ( (unsigned __int64)v68 > 32 )
        {
          v91 = &v66[v68];
          v90 = v69;
          v89 = (v68 * 4) >> 4;
          sub_2267EB0((__int64)(v67 + 8), (v68 * 4) >> 4);
          v70 = v91;
          v69 = v90;
          LODWORD(v71) = v89;
          v72 = (_QWORD *)(v67[8] + 16LL * *((unsigned int *)v67 + 18));
        }
        if ( v66 != v70 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              *v72 = *(_QWORD *)v66;
              v73 = *((_QWORD *)v66 + 1);
              v72[1] = v73;
              if ( v73 )
                _InterlockedAdd((volatile signed __int32 *)(v73 + 8), 1u);
              v66 += 4;
              v72 += 2;
            }
            while ( v70 != v66 );
          }
          else
          {
            do
            {
              *v72 = *(_QWORD *)v66;
              v83 = *((_QWORD *)v66 + 1);
              v72[1] = v83;
              if ( v83 )
                ++*(_DWORD *)(v83 + 8);
              v66 += 4;
              v72 += 2;
            }
            while ( v70 != v66 );
          }
        }
        *((_DWORD *)v67 + 18) += v71;
        v74 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
        v67[26] = 0;
        v67[27] = 0;
        v67[28] = 0;
        *(__m128i *)(v67 + 29) = v74;
        v89 = (__int64)v69;
        v75 = sub_22680F0((__int64)v69, 1);
        v76 = (std::_V2 *)v89;
        v77 = (__int64 *)v88;
        *(_DWORD *)a4 = v75;
        *(_QWORD *)(a4 + 8) = v78;
        v99[0] = v76;
        v99[1] = (std::_V2 *)v67;
        sub_225E2F0((__int64 *)&v97, v77);
        if ( v99[1] )
          sub_4343A0((volatile signed __int32 *)v99[1]);
        v79 = v98;
        if ( *(_DWORD *)a4 )
        {
          *(_OWORD *)a1 = 0;
          if ( v79 )
            sub_4343A0(v79);
        }
        else
        {
          v85 = v97;
          *(_QWORD *)(a1 + 8) = v98;
          *(_QWORD *)a1 = v85;
        }
        v80 = (char *)v101[0];
        v81 = (char *)v101[0] + 16 * LODWORD(v101[1]);
        while ( v80 != v81 )
        {
          while ( 1 )
          {
            v81 -= 16;
            v82 = *((volatile signed __int32 **)v81 + 1);
            if ( !v82 )
              break;
            sub_4343A0(v82);
            if ( v80 == v81 )
              goto LABEL_102;
          }
        }
LABEL_102:
        if ( v101[0] != &v102 )
          free(v101[0]);
        v38 = *((volatile signed __int32 **)&v96 + 1);
        goto LABEL_50;
      }
    }
    v26 = *(_QWORD *)(a2 + 72);
    v27 = *(void (__fastcall **)(std::_V2 **, __int64, void **, __m128i *))(*(_QWORD *)v26 + 64LL);
    v103 = 261;
    v101[0] = v24;
    v88 = v99;
    v101[1] = v25;
    v27(v99, v26, v101, &v94);
    v28 = (std::_V2 *)v93.m128i_i64[1];
    v29 = _mm_load_si128((const __m128i *)v99);
    *(_OWORD *)v99 = 0;
    v93 = v29;
    if ( v28 )
    {
      sub_4343A0((volatile signed __int32 *)v28);
      v28 = v99[1];
      if ( v99[1] )
        sub_4343A0((volatile signed __int32 *)v99[1]);
    }
    v30 = *(_DWORD *)(v22 + 80);
    v31 = *(_BYTE *)(a2 + 114);
    if ( v30 )
      v31 = v30 == 1;
    if ( !v31 )
    {
      v45 = (__m128i *)(v88 + 2);
      v99[0] = (std::_V2 *)(v88 + 2);
      sub_2259A00(v88, ptr, (__int64)ptr + si128.m128i_i64[0]);
      v46 = (__m128i *)operator new(0x78u);
      v47 = (__m128i *)v99[0];
      v48 = (__int64 *)v46;
      v46->m128i_i64[1] = 0x100000001LL;
      v46->m128i_i64[0] = (__int64)off_2BEBB90;
      v90 = (std::_V2 **)&v46[1];
      v101[0] = &v102;
      if ( v47 == v45 )
      {
        v47 = &v102;
        v102 = _mm_load_si128(&v100);
      }
      else
      {
        v101[0] = v47;
        v102.m128i_i64[0] = v100.m128i_i64[0];
      }
      v49 = v99[1];
      v100.m128i_i8[0] = 0;
      v50 = (volatile signed __int32 *)v93.m128i_i64[1];
      v51 = v93.m128i_i64[0];
      v99[1] = nullptr;
      v101[1] = v49;
      v99[0] = (std::_V2 *)(v88 + 2);
      if ( v93.m128i_i64[1] )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v93.m128i_i64[1] + 8), 1u);
        else
          ++*(_DWORD *)(v93.m128i_i64[1] + 8);
        v47 = (__m128i *)v101[0];
        v49 = (std::_V2 *)v101[1];
      }
      v46[2].m128i_i8[8] = 0;
      v46[1].m128i_i64[1] = (__int64)&v46[2].m128i_i64[1];
      v46[1].m128i_i64[0] = (__int64)&off_2BEBA18;
      v46[2].m128i_i64[0] = 0;
      v46[3].m128i_i32[2] = 9;
      v46[4].m128i_i64[0] = (__int64)v46[5].m128i_i64;
      if ( v47 == &v102 )
      {
        v47 = v46 + 5;
        v46[5] = _mm_load_si128(&v102);
      }
      else
      {
        v52 = v102.m128i_i64[0];
        v48[8] = (__int64)v47;
        v48[10] = v52;
      }
      v48[9] = (__int64)v49;
      v92 = v50;
      v91 = (volatile signed __int32 *)v48;
      v101[0] = &v102;
      v101[1] = nullptr;
      v102.m128i_i8[0] = 0;
      v53 = sub_2259FA0((__int64)v47, (__int64)v49);
      v54 = v91;
      v55 = v92;
      *((_DWORD *)v91 + 24) = v53;
      v56 = (__int64 *)(v54 + 26);
      *((_QWORD *)v54 + 13) = v51;
      *((_QWORD *)v54 + 14) = v55;
      if ( v55 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v55 + 2, 1u);
        else
          ++*((_DWORD *)v55 + 2);
        v92 = v55;
        v91 = v54;
        v97 = nullptr;
        v98 = nullptr;
        v57 = sub_225AAE0(v56, (__int64 *)&v97);
        v58 = v91;
        v59 = v92;
        if ( !v57 )
        {
          sub_22648C0((__int64)v90);
          v58 = v91;
          v59 = v92;
        }
        v91 = v58;
        sub_4343A0(v59);
        v60 = v91;
      }
      else
      {
        v91 = v54;
        v97 = nullptr;
        v98 = nullptr;
        v86 = sub_225AAE0(v56, (__int64 *)&v97);
        v60 = v91;
        if ( !v86 )
        {
          sub_22648C0((__int64)v90);
          v60 = v91;
        }
      }
      if ( v101[0] != &v102 )
      {
        v91 = v60;
        operator delete(v101[0]);
        v60 = v91;
      }
      v98 = v60;
      v97 = v90;
      sub_225E2F0((__int64 *)v101, (__int64 *)&v97);
      v61 = (volatile signed __int32 *)v93.m128i_i64[1];
      v62 = _mm_load_si128((const __m128i *)v101);
      *(_OWORD *)v101 = 0;
      v93 = v62;
      if ( v61 )
      {
        sub_4343A0(v61);
        if ( v101[1] )
          sub_4343A0((volatile signed __int32 *)v101[1]);
      }
      if ( v98 )
        sub_4343A0(v98);
      v28 = v99[0];
      if ( (std::_V2 **)v99[0] != v88 + 2 )
        operator delete(v99[0]);
    }
    goto LABEL_34;
  }
  v12 = v111[0];
  v13 = v111[1];
  v10 = ptr;
  if ( *(_DWORD *)(a2 + 120) == 2
    || (v87 = v111[0], v14 = std::_V2::generic_category((std::_V2 *)v111), v12 = v87, v14 != v13)
    || v87 != 2 )
  {
    *(_DWORD *)a4 = v12;
    *(_QWORD *)(a4 + 8) = v13;
    *(_OWORD *)a1 = 0;
    goto LABEL_3;
  }
  v18 = *(_QWORD *)(a2 + 72);
  v19 = *(void (__fastcall **)(__int64, __int64, __m128i *, __int64))(*(_QWORD *)v18 + 64LL);
  v104.m128i_i64[1] = si128.m128i_i64[0];
  v105[8] = 261;
  v104.m128i_i64[0] = (__int64)v10;
  v19(a1, v18, &v104, a4);
LABEL_19:
  if ( (v115 & 1) == 0 )
    sub_225BE70((__int64)v111);
  v10 = ptr;
LABEL_3:
  if ( v10 != v110 )
    free(v10);
  return a1;
}
