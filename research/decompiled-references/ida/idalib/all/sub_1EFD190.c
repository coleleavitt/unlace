__int64 __fastcall sub_1EFD190(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int128 a10,
        int a11,
        unsigned int a12)
{
  unsigned int v13; // eax
  unsigned int v14; // r15d
  __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i v23; // rax
  __m128i *v24; // rbp
  __m128i v25; // xmm2
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v29; // rsi
  int v30; // edx
  int v31; // ecx
  __int64 v32; // rsi
  _BYTE *v33; // rsi
  signed __int64 v34; // rdx
  bool v35; // r15
  unsigned int v36; // eax
  __int64 v37; // rsi
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __m128i *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  size_t v46; // rax
  __m128i v47; // [rsp+0h] [rbp-270h]
  unsigned int v48; // [rsp+3Ch] [rbp-234h]
  __int64 v51; // [rsp+58h] [rbp-218h]
  __int32 v52; // [rsp+60h] [rbp-210h]
  __int64 v53; // [rsp+70h] [rbp-200h] BYREF
  _QWORD v54[4]; // [rsp+78h] [rbp-1F8h] BYREF
  void *v55; // [rsp+98h] [rbp-1D8h] BYREF
  signed __int64 v56; // [rsp+A0h] [rbp-1D0h]
  _BYTE v57[16]; // [rsp+A8h] [rbp-1C8h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-1B8h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-1B0h]
  __int64 v60; // [rsp+C8h] [rbp-1A8h]
  __int64 v61; // [rsp+D0h] [rbp-1A0h]
  __m128i v62; // [rsp+D8h] [rbp-198h] BYREF
  __m128i v63; // [rsp+E8h] [rbp-188h] BYREF
  __int64 v64; // [rsp+F8h] [rbp-178h]
  __int128 v65; // [rsp+100h] [rbp-170h] BYREF
  __int64 v66; // [rsp+110h] [rbp-160h]
  _QWORD v67[2]; // [rsp+118h] [rbp-158h] BYREF
  __int64 v68; // [rsp+128h] [rbp-148h] BYREF
  __int64 v69; // [rsp+228h] [rbp-48h]

  v48 = a4;
  v52 = a5;
  v55 = v57;
  v56 = 0;
  v57[0] = 0;
  v47 = _mm_loadu_si128((const __m128i *)&a10);
  v13 = sub_1FDEDB0(
          a1 + 160,
          a2,
          a3,
          a4,
          a5,
          a6,
          *(unsigned int *)(a1 + 36),
          a8,
          a9,
          v47.m128i_i64[0],
          v47.m128i_i64[1],
          a11,
          sub_1EBF630,
          &v53,
          &v55);
  v14 = v13;
  switch ( v13 )
  {
    case 2u:
      if ( (a12 & 1) != 0 )
        goto LABEL_12;
      v29 = *(_QWORD *)(a1 + 104);
      v30 = *(_DWORD *)(a1 + 504);
      v31 = 909;
LABEL_17:
      sub_FC70B0((__int64)&v62, v29, v30, v31);
      v32 = (1LL << v48) & 0x23;
      if ( ((1LL << v48) & 0x23) != 0 )
      {
        v32 = 1;
      }
      else if ( ((1LL << v48) & 4) == 0 )
      {
        v32 = 2;
      }
      v14 = 1;
      sub_AE9DF0((unsigned __int8 **)&v62, v32, 3u);
      sub_AEC220((unsigned __int8 **)&v62, a2, a3);
      sub_AE9DF0((unsigned __int8 **)&v62, v56 != 0, 2u);
      sub_AEC220((unsigned __int8 **)&v62, v55, v56);
      sub_AEA040((__int64)&v62);
      goto LABEL_12;
    case 3u:
      if ( (a12 & 2) != 0 )
        goto LABEL_12;
      v29 = *(_QWORD *)(a1 + 104);
      v30 = *(_DWORD *)(a1 + 504);
      v31 = 910;
      goto LABEL_17;
    case 0u:
      sub_FC70B0((__int64)&v62, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 946);
      sub_AEC220((unsigned __int8 **)&v62, *(_BYTE **)(v53 + 40), *(_QWORD *)(v53 + 48));
      sub_AEC220((unsigned __int8 **)&v62, *(_BYTE **)(v53 + 8), *(_QWORD *)(v53 + 16));
      sub_AE9DF0((unsigned __int8 **)&v62, a6 != 0, 2u);
      if ( a6 )
      {
        v33 = *(_BYTE **)(a6 + 40);
        v34 = *(_QWORD *)(a6 + 48);
      }
      else
      {
        v33 = nullptr;
        v34 = 0;
      }
      sub_AEC220((unsigned __int8 **)&v62, v33, v34);
      sub_AEA040((__int64)&v62);
      goto LABEL_12;
  }
  v15 = v53;
  v16 = *(_QWORD *)(a1 + 96);
  v17 = *(_QWORD *)(v53 + 416);
  v51 = v53 + 464;
  v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 24LL);
  sub_2231100(&v58, v17);
  v23.m128i_i64[0] = v18(v16, v17, v19, v20, v21, v22, v58, v59, v60, v61);
  v24 = &v62;
  v62 = v23;
  v25 = _mm_load_si128(&v62);
  v64 = 0x200000000LL;
  v65 = 0;
  v67[0] = &v68;
  v67[1] = 0x800000000LL;
  v66 = 0;
  v69 = 0;
  v63 = 0u;
  *(__m128i *)(v15 + 464) = v25;
  *(__m128i *)(v15 + 480) = _mm_load_si128(&v63);
  v23.m128i_i32[0] = v64;
  *(_DWORD *)(v15 + 500) = 2;
  *(_DWORD *)(v15 + 496) = v23.m128i_i32[0];
  v23.m128i_i64[0] = *(_QWORD *)(v15 + 504);
  *(_QWORD *)(v15 + 504) = 0;
  v54[0] = v23.m128i_i64[0];
  v23.m128i_i64[0] = *(_QWORD *)(v15 + 512);
  *(_QWORD *)(v15 + 512) = 0;
  v54[1] = v23.m128i_i64[0];
  v23.m128i_i64[0] = *(_QWORD *)(v15 + 520);
  *(_QWORD *)(v15 + 520) = 0;
  v54[2] = v23.m128i_i64[0];
  sub_A0AD20((__int64)v54);
  sub_1EC2EC0(v15 + 528, (__int64)v67);
  *(_QWORD *)(v15 + 800) = v69;
  sub_A0AEB0((__int64)v67);
  sub_A0AD20((__int64)&v65);
  *(_QWORD *)(v15 + 424) = 8LL
                         * (*(_QWORD *)(*(_QWORD *)(v15 + 416) + 16LL) - *(_QWORD *)(*(_QWORD *)(v15 + 416) + 8LL));
  sub_1EB0230((std::_V2 *)&v58, v15 + 464);
  if ( v58 )
  {
    sub_FC70B0((__int64)&v62, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 903);
    v26 = (1LL << v48) & 0x23;
    if ( ((1LL << v48) & 0x23) != 0 )
    {
      v26 = 1;
    }
    else if ( ((1LL << v48) & 4) == 0 )
    {
      v26 = 2;
    }
    sub_AE9DF0((unsigned __int8 **)&v62, v26, 3u);
    sub_AEC220((unsigned __int8 **)&v62, a2, a3);
    sub_FC6B40((unsigned __int8 **)&v62, &v58);
    sub_AEA040((__int64)&v62);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
    v14 = 1;
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 32LL))(*(_QWORD *)(a1 + 288));
    goto LABEL_11;
  }
  v35 = 0;
  while ( 1 )
  {
    sub_1EAFE10((__int64)&v58, v51);
    if ( (v59 & 1) != 0 )
    {
      v44 = v58;
      v58 = 0;
      v62.m128i_i64[0] = v44;
LABEL_53:
      sub_1EBF0A0(a1, &v62);
      if ( v62.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v62.m128i_i64[0] + 8LL))(v62.m128i_i64[0]);
      goto LABEL_55;
    }
    if ( (unsigned int)v58 <= 3 && ((1LL << v58) & 0xB) != 0 )
    {
      v46 = j__strlen("invalid record at top-level of AST file");
      sub_1EAD680(a1, "invalid record at top-level of AST file", v46);
LABEL_55:
      v14 = 1;
      goto LABEL_35;
    }
    if ( HIDWORD(v58) == 8 )
    {
      if ( !v35 )
      {
        v14 = 4;
        if ( (a12 & 4) == 0 )
        {
          sub_FC70B0((__int64)&v62, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 916);
          v37 = (1LL << v48) & 0x23;
          if ( ((1LL << v48) & 0x23) != 0 )
          {
            v37 = 1;
          }
          else if ( ((1LL << v48) & 4) == 0 )
          {
            v37 = 2;
          }
          v14 = 4;
          sub_AE9DF0((unsigned __int8 **)&v62, v37, 3u);
          sub_AEC220((unsigned __int8 **)&v62, a2, a3);
          sub_AEA040((__int64)&v62);
        }
        goto LABEL_35;
      }
      v62.m128i_i64[1] = a6;
      v62.m128i_i64[0] = v53;
      v38 = *(_QWORD *)a7;
      v39 = *(unsigned int *)(a7 + 12);
      v63.m128i_i32[0] = v52;
      v40 = *(unsigned int *)(a7 + 8);
      v41 = v40 + 1;
      v42 = (__m128i *)(v38 + 24 * v40);
      if ( v41 > v39 )
      {
        v45 = a7 + 16;
        if ( v38 > (unsigned __int64)&v62 )
        {
          sub_2237220(a7, v45, v41, 24);
          v42 = (__m128i *)(*(_QWORD *)a7 + 24LL * *(unsigned int *)(a7 + 8));
        }
        else
        {
          if ( v42 > &v62 )
          {
            sub_2237220(a7, v45, v41, 24);
            v24 = (__m128i *)((char *)&v62 + *(_QWORD *)a7 - v38);
          }
          else
          {
            sub_2237220(a7, v45, v41, 24);
          }
          v42 = (__m128i *)(*(_QWORD *)a7 + 24LL * *(unsigned int *)(a7 + 8));
        }
      }
      v14 = 0;
      *v42 = _mm_loadu_si128(v24);
      v42[1].m128i_i64[0] = v24[1].m128i_i64[0];
      ++*(_DWORD *)(a7 + 8);
      sub_A0B030(&v58);
      v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 32LL))(*(_QWORD *)(a1 + 288));
      sub_1FD8D80(v43, a2, a3);
      goto LABEL_12;
    }
    if ( HIDWORD(v58) == 15 )
      break;
    sub_A0BAF0(v62.m128i_i64, v51);
    if ( v62.m128i_i64[0] )
      goto LABEL_53;
LABEL_39:
    sub_A0B030(&v58);
  }
  v36 = sub_1EFB590(a1, v15, a7, a6, a12);
  switch ( v36 )
  {
    case 0u:
      if ( v48 != 5 && v48 > 1 )
        goto LABEL_56;
      if ( *(_QWORD *)(v15 + 48) )
      {
        v35 = v48 == 5 || v48 <= 1;
        goto LABEL_39;
      }
      if ( v48 )
      {
        v14 = 1;
LABEL_66:
        sub_FC70B0((__int64)&v62, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 931);
        sub_AEC220((unsigned __int8 **)&v62, a2, a3);
        sub_AEA040((__int64)&v62);
      }
      else
      {
        v14 = 3;
        if ( (a12 & 2) == 0 )
          goto LABEL_66;
      }
LABEL_35:
      sub_A0B030(&v58);
      v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 32LL))(*(_QWORD *)(a1 + 288));
LABEL_11:
      sub_1FD8B80(v27, a2, a3);
LABEL_12:
      if ( v55 != v57 )
        operator delete(v55);
      return v14;
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
      v14 = v36;
      goto LABEL_35;
    default:
LABEL_56:
      v35 = 1;
      goto LABEL_39;
  }
}
