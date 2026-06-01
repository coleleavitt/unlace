void __fastcall sub_1676EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  char *v7; // rbx
  char *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r12
  __int32 v11; // r14d
  char *v12; // rbp
  __int64 v13; // rax
  int v14; // r14d
  __int64 *v16; // rbx
  __int64 v17; // rbp
  __int32 v18; // r12d
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // bl
  char v23; // r11
  __int64 *v24; // rax
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __int64 v27; // r8
  __int64 v28; // rdi
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 *v38; // rdx
  __int64 *v39; // r10
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  char *v49; // rax
  char *v50; // rdx
  __m128i v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  int v64; // ecx
  int v65; // edx
  __m128i *v66; // rbp
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // [rsp+20h] [rbp-298h]
  __int64 v72; // [rsp+28h] [rbp-290h]
  __m128i *v73; // [rsp+28h] [rbp-290h]
  char v74; // [rsp+28h] [rbp-290h]
  char v75; // [rsp+28h] [rbp-290h]
  __int64 v76; // [rsp+28h] [rbp-290h]
  char v77; // [rsp+28h] [rbp-290h]
  __int64 v78; // [rsp+30h] [rbp-288h]
  int v80; // [rsp+44h] [rbp-274h]
  int v81; // [rsp+58h] [rbp-260h]
  __int32 v82; // [rsp+5Ch] [rbp-25Ch]
  int v83; // [rsp+68h] [rbp-250h]
  int v84; // [rsp+6Ch] [rbp-24Ch]
  char v85; // [rsp+70h] [rbp-248h]
  __int64 *v86; // [rsp+70h] [rbp-248h]
  char v87; // [rsp+78h] [rbp-240h]
  char v88; // [rsp+78h] [rbp-240h]
  __int32 v89; // [rsp+7Ch] [rbp-23Ch]
  __int64 v90; // [rsp+80h] [rbp-238h]
  int v91; // [rsp+88h] [rbp-230h]
  int v92; // [rsp+8Ch] [rbp-22Ch]
  __m128i v93; // [rsp+90h] [rbp-228h] BYREF
  unsigned int v94; // [rsp+A0h] [rbp-218h]
  __m128i v95; // [rsp+B0h] [rbp-208h] BYREF
  unsigned int v96; // [rsp+C0h] [rbp-1F8h]
  __m128i v97; // [rsp+D0h] [rbp-1E8h] BYREF
  unsigned int v98; // [rsp+E0h] [rbp-1D8h]
  __m128i v99; // [rsp+F0h] [rbp-1C8h]
  unsigned int v100; // [rsp+100h] [rbp-1B8h]
  __m128i v101; // [rsp+110h] [rbp-1A8h] BYREF
  __int128 v102; // [rsp+120h] [rbp-198h] BYREF
  unsigned int v103; // [rsp+130h] [rbp-188h]
  char *v104; // [rsp+138h] [rbp-180h] BYREF
  __int64 v105; // [rsp+140h] [rbp-178h]
  char v106; // [rsp+148h] [rbp-170h] BYREF
  _BYTE v107[40]; // [rsp+158h] [rbp-160h] BYREF
  _BYTE v108[40]; // [rsp+180h] [rbp-138h] BYREF
  __int64 v109; // [rsp+1A8h] [rbp-110h]
  void *ptr; // [rsp+1B0h] [rbp-108h] BYREF
  __int64 v111; // [rsp+1B8h] [rbp-100h]
  _BYTE v112[16]; // [rsp+1C0h] [rbp-F8h] BYREF
  char v113; // [rsp+1D0h] [rbp-E8h]
  _QWORD v114[2]; // [rsp+1D8h] [rbp-E0h] BYREF
  char v115; // [rsp+1E8h] [rbp-D0h] BYREF
  _BYTE v116[40]; // [rsp+1F8h] [rbp-C0h] BYREF
  _BYTE v117[40]; // [rsp+220h] [rbp-98h] BYREF
  __int64 v118; // [rsp+248h] [rbp-70h]
  __int64 v119; // [rsp+270h] [rbp-48h]

  v6 = *(unsigned int *)(a3 + 8);
  v78 = a2;
  v80 = *(_DWORD *)(a3 + 8);
  if ( *(_BYTE *)(a1 + 289) )
    goto LABEL_16;
  ptr = v112;
  v111 = 0x100000000LL;
  if ( (_DWORD)v6 )
  {
    a2 = a3;
    sub_A2F4C0((__int64)&ptr, a3);
  }
  v119 = *(_QWORD *)(a3 + 192);
  if ( (*(_BYTE *)(v78 + 29) & 1) != 0 && sub_1671280(v78, a2, a3, v6, a5, a6) )
  {
LABEL_9:
    v7 = (char *)ptr;
    goto LABEL_10;
  }
  v7 = (char *)ptr;
  if ( BYTE4(v119) )
  {
    LOBYTE(v103) = v103 & 0xF0;
    v101 = (__m128i)(unsigned __int64)&v102;
    v104 = &v106;
    LOBYTE(v102) = 0;
    v106 = 0;
    v8 = (char *)ptr + 176 * (unsigned int)v119;
    v107[32] = 0;
    v108[32] = 0;
    v105 = 0;
    BYTE4(v109) = 0;
    v9 = *((_QWORD *)v8 + 1);
    v10 = *(_QWORD *)v8;
    v11 = *(_DWORD *)v8;
    sub_9EE8A0((__int64)&v101, (__int64)(v8 + 16));
    LOBYTE(v103) = v8[48] & 0xF | v103 & 0xF0;
    sub_9EE8A0((__int64)&v104, (__int64)(v8 + 56));
    sub_A21AD0((__int64)v107, (__int64)(v8 + 88));
    sub_A21AD0((__int64)v108, (__int64)(v8 + 128));
    v109 = *((_QWORD *)v8 + 21);
    if ( v11 | (HIDWORD(v9) | (unsigned int)v9 | HIDWORD(v10)) & 0x7FFFFFFF && v105 )
    {
      v49 = (char *)ptr;
      v50 = (char *)ptr + 176 * (unsigned int)v111;
      if ( ptr == v50 )
      {
LABEL_65:
        v97.m128i_i64[1] = v9;
        v97.m128i_i32[1] = (v10 & 0xFFFFFFFF00000000LL) >> 32;
        v97.m128i_i32[0] = v11;
        v51 = _mm_load_si128(&v97);
        LOBYTE(v98) = v98 & 0xFC | 2;
        v99 = v51;
        v100 = v98;
        sub_1672C20(
          a1,
          v78,
          (__int64)&loc_2E926E,
          (__int64)&v95,
          (__int64)sub_16716D0,
          (__int64)&v93,
          v51.m128i_i64[0],
          v51.m128i_i64[1],
          v98);
        sub_A09C70((__int64)&v101);
        v7 = (char *)ptr;
        goto LABEL_10;
      }
      while ( *(_DWORD *)v49
           || (*((_DWORD *)v49 + 1) & 0x7FFFFFFF) != 0
           || (*((_DWORD *)v49 + 2) & 0x7FFFFFFF) != 0
           || (*((_DWORD *)v49 + 3) & 0x7FFFFFFF) != 0
           || !*((_QWORD *)v49 + 8) )
      {
        v49 += 176;
        if ( v50 == v49 )
          goto LABEL_65;
      }
    }
    sub_A09C70((__int64)&v101);
    goto LABEL_9;
  }
LABEL_10:
  v12 = &v7[176 * (unsigned int)v111];
  if ( v12 != v7 )
  {
    do
    {
      v12 -= 176;
      sub_A09C70((__int64)(v12 + 16));
    }
    while ( v12 != v7 );
    v7 = (char *)ptr;
  }
  if ( v7 != v112 )
    free(v7);
  v80 = *(_DWORD *)(a3 + 8);
LABEL_16:
  v111 = 0;
  v112[0] = 0;
  v13 = *(_QWORD *)(a3 + 192);
  v115 = 0;
  v114[1] = 0;
  v116[32] = 0;
  v117[32] = 0;
  BYTE4(v118) = 0;
  if ( !BYTE4(v13) )
    LODWORD(v13) = v80;
  v113 &= 0xF0u;
  v81 = v13;
  ptr = v112;
  v114[0] = &v115;
  if ( v80 )
  {
    v71 = 0;
    v14 = 0;
    v90 = 176LL * (unsigned int)v13;
    while ( 1 )
    {
      v16 = (__int64 *)(*(_QWORD *)a3 + v71);
      v17 = *v16;
      v18 = *(_DWORD *)v16;
      v72 = v16[1];
      sub_9EE8A0((__int64)&ptr, (__int64)(v16 + 2));
      v113 = v16[6] & 0xF | v113 & 0xF0;
      sub_9EE8A0((__int64)v114, (__int64)(v16 + 7));
      sub_A21AD0((__int64)v116, (__int64)(v16 + 11));
      sub_A21AD0((__int64)v117, (__int64)(v16 + 16));
      v20 = v72;
      v21 = v16[21];
      v22 = *(_BYTE *)(a1 + 289);
      v118 = v21;
      if ( v81 == v14 )
      {
        v22 ^= 1u;
        v23 = 0;
      }
      else
      {
        v23 = 0;
        if ( v22 )
        {
          v22 = 0;
        }
        else if ( !v18 )
        {
          v23 = v22;
          if ( ((HIDWORD(v72) | (unsigned int)v72 | HIDWORD(v17)) & 0x7FFFFFFF) == 0 )
          {
            v23 = 1;
            v24 = (__int64 *)(*(_QWORD *)a3 + v90);
            v17 = *v24;
            v20 = v24[1];
            v18 = *(_DWORD *)v24;
          }
        }
      }
      v93.m128i_i64[1] = v20;
      v25 = v22 & 1;
      LODWORD(v17) = v118;
      v93.m128i_i64[0] = __PAIR64__(HIDWORD(v17), v18);
      v26 = _mm_load_si128(&v93);
      v95 = v26;
      LOBYTE(v94) = (2 * v23) | v25 | v94 & 0xFC;
      v27 = v94;
      v96 = v94;
      if ( !BYTE4(v118) )
        goto LABEL_26;
      v97 = v26;
      v98 = v94;
      v99 = v26;
      v100 = v94;
      if ( (v94 & 1) != 0 )
        break;
      v28 = *(_QWORD *)(a1 + 248);
      if ( (_DWORD)v118 )
      {
        if ( (_DWORD)v118 == 1 )
        {
          v82 = 0;
        }
        else
        {
          v29 = 1;
          if ( (_DWORD)v118 != 2 )
            v29 = v82;
          v82 = v29;
        }
        v30 = v83;
        v31 = v84;
        v85 = v23;
        BYTE1(v30) = BYTE1(v83) & 0xFC;
        v87 = (v94 & 2) != 0;
        BYTE1(v31) = BYTE1(v84) & 0xFC;
        v83 = v30;
        v103 = v103 & 0xFF000000 | 0x110170;
        v84 = v31;
        v101 = 0;
        v102 = 0;
        HIBYTE(v103) = (2 * ((v31 & 0x200) != 0)) | BYTE1(v30) & 1 | HIBYTE(v103) & 0xFC;
        v73 = (__m128i *)sub_1673960((__int64 *)(v28 + 2352), 48, 3u);
        sub_B19B10(v73, *(_QWORD *)(a1 + 248), &v101, v82);
        v32 = sub_B35EA0(*(_QWORD *)(a1 + 248), v99.m128i_i64[0], v99.m128i_i64[1], (__int64)v73, v87, 0);
        sub_B8CC60(v78, v32, v33, v34, v35, v36);
        v23 = v85;
      }
      else
      {
        v75 = v23;
        v44 = sub_B35E00(v28, v99.m128i_i64[0], v99.m128i_i64[1], 373, (v94 & 2) != 0, 0);
        sub_B8CC60(v78, v44, v45, v46, v47, v48);
        v23 = v75;
      }
LABEL_26:
      v95.m128i_i32[0] = v18;
      ++v14;
      LOBYTE(v96) = (2 * v23) | v22 & 1 | v96 & 0xFC;
      sub_1674810(a1, v78, (__int64)&ptr, v25, v27, v19, (__int128)_mm_load_si128(&v95), v96);
      v71 += 176;
      if ( v14 == v80 )
        goto LABEL_27;
    }
    v74 = v23;
    v37 = (_QWORD *)sub_9C8850(v78);
    v39 = v38;
    v40 = v37;
    v41 = ((char *)v39 - (char *)v37) >> 5;
    v42 = v39 - v37;
    if ( v41 > 0 )
    {
      if ( *(_WORD *)(*v37 + 36LL) != 373 )
      {
        if ( *(_WORD *)(v37[1] + 36LL) == 373 )
        {
          v39 = v37 + 1;
        }
        else if ( *(_WORD *)(v37[2] + 36LL) == 373 )
        {
          v39 = v37 + 2;
        }
        else
        {
          v43 = &v37[4 * v41];
          if ( *(_WORD *)(v37[3] + 36LL) == 373 )
          {
            v39 = v37 + 3;
          }
          else
          {
            while ( 1 )
            {
              v37 = v40 + 4;
              if ( v43 == v40 + 4 )
              {
                v42 = v39 - v37;
                goto LABEL_50;
              }
              if ( *(_WORD *)(v40[4] + 36LL) == 373 )
                goto LABEL_67;
              if ( *(_WORD *)(v40[5] + 36LL) == 373 )
              {
                v39 = v40 + 5;
                goto LABEL_68;
              }
              if ( *(_WORD *)(v40[6] + 36LL) == 373 )
              {
                v39 = v40 + 6;
                goto LABEL_68;
              }
              if ( *(_WORD *)(v40[7] + 36LL) == 373 )
                break;
              v40 += 4;
            }
            v39 = v40 + 7;
          }
        }
        goto LABEL_68;
      }
      goto LABEL_67;
    }
LABEL_50:
    if ( v42 != 2 )
    {
      if ( v42 != 3 )
      {
        if ( v42 != 1 )
        {
LABEL_68:
          v86 = v39;
          v52 = sub_9C88C0(v78);
          v23 = v74;
          if ( (__int64 *)v52 != v86 )
          {
            v53 = v99.m128i_i64[0];
            v88 = v74;
            v76 = sub_B35EA0(*(_QWORD *)(a1 + 248), v99.m128i_i64[0], v99.m128i_i64[1], *v86, 1, 0);
            v58 = sub_B8C3D0(v78, v53, v54, v55, v56, v57);
            sub_1672BE0((__int64)v58, (__int64)v86);
            sub_B8CC60(v78, v76, v59, v60, v61, v62);
            v23 = v88;
          }
          if ( (_DWORD)v17 )
          {
            if ( (_DWORD)v17 == 1 )
            {
              v89 = 0;
            }
            else
            {
              v63 = 1;
              if ( (_DWORD)v17 != 2 )
                v63 = v89;
              v89 = v63;
            }
            v64 = v91;
            v65 = v92;
            v101 = 0;
            BYTE1(v64) = BYTE1(v91) & 0xFC;
            v77 = v23;
            BYTE1(v65) = BYTE1(v92) & 0xFC;
            v91 = v64;
            v103 = v103 & 0xFF000000 | 0x110170;
            v92 = v65;
            v102 = 0;
            HIBYTE(v103) = (2 * ((v65 & 0x200) != 0)) | BYTE1(v64) & 1 | HIBYTE(v103) & 0xFC;
            v66 = (__m128i *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
            sub_B19B10(v66, *(_QWORD *)(a1 + 248), &v101, v89);
            sub_B8CC60(v78, (__int64)v66, v67, v68, v69, v70);
            v23 = v77;
          }
          goto LABEL_26;
        }
LABEL_53:
        if ( *(_WORD *)(*v37 + 36LL) == 373 )
          v39 = v37;
        goto LABEL_68;
      }
      if ( *(_WORD *)(*v37 + 36LL) == 373 )
      {
LABEL_67:
        v39 = v37;
        goto LABEL_68;
      }
      ++v37;
    }
    if ( *(_WORD *)(*v37 + 36LL) != 373 )
    {
      ++v37;
      goto LABEL_53;
    }
    goto LABEL_67;
  }
LABEL_27:
  sub_A09C70((__int64)&ptr);
}
