__int64 __fastcall sub_1F1C3F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v18; // rcx
  __m128i v19; // xmm0
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  __m128i v22; // xmm3
  __int64 v23; // rdi
  __m128i v24; // xmm0
  __m128i v25; // xmm2
  __m128i v26; // xmm1
  __m128i v27; // xmm3
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  __m128i v30; // xmm0
  __m128i v31; // xmm2
  __m128i v32; // xmm1
  __m128i v33; // xmm3
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __m128i v47; // xmm0
  __m128i v48; // xmm2
  __m128i v49; // xmm1
  __m128i v50; // xmm3
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __m128i v55; // xmm2
  __m128i v56; // xmm1
  __m128i v57; // xmm3
  _QWORD *v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __m128i v62; // xmm0
  __m128i v63; // xmm2
  __m128i v64; // xmm1
  __m128i v65; // xmm3
  _QWORD *v66; // rdi
  __m128i v67; // xmm0
  __m128i v68; // xmm2
  __m128i v69; // xmm1
  __m128i v70; // xmm3
  __int64 v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rsi
  unsigned __int64 v76; // rax
  __m128i si128; // xmm0
  __int64 v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  _OWORD v86[2]; // [rsp+0h] [rbp-28h] BYREF

  v7 = *a1;
  v8 = *(unsigned int *)(*a1 + 24);
  v9 = *(_QWORD *)(*a1 + 32);
  v10 = *(_QWORD *)(v9 + 8 * v8);
  v11 = (unsigned int)(v8 + 1);
  *(_DWORD *)(v7 + 24) = v11;
  v12 = v8;
  switch ( (int)v10 )
  {
    case 0:
      v85 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v85;
      v14 = sub_EBF000((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v85, v11, a6);
      break;
    case 1:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 1;
      break;
    case 2:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 2;
      break;
    case 4:
      v84 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v84;
      v14 = sub_EBFDC0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v84, v11, a6);
      break;
    case 5:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 5;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 6:
      v83 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v83;
      v14 = sub_EBFD40((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v83, v11, a6);
      break;
    case 7:
      v82 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v82;
      v14 = sub_EC05F0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v82, v11, a6);
      break;
    case 8:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 8;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 10:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 10;
      *(_QWORD *)(v14 + 16) = 2;
      break;
    case 11:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 11;
      *(_QWORD *)(v14 + 16) = 3;
      break;
    case 12:
      v14 = (__int64)sub_EBF4F0((_QWORD *)a1[1], v8, v7, v8, v11, a6);
      break;
    case 14:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 14;
      break;
    case 15:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 15;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 16:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 16;
      break;
    case 17:
      v81 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v81;
      v14 = sub_EBEF90((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v81, v11, a6);
      break;
    case 18:
      v80 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v80;
      v14 = sub_EBFBD0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v80, v11, a6);
      break;
    case 19:
      v79 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v79;
      v14 = sub_EBFB60((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v79, v11, a6);
      break;
    case 20:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 20;
      *(_QWORD *)(v14 + 16) = 4;
      break;
    case 21:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 32, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 21;
      *(_QWORD *)(v14 + 16) = 4;
      *(_QWORD *)(v14 + 24) = 4;
      break;
    case 22:
      v78 = *(_QWORD *)(v9 + 8LL * (unsigned int)v11);
      *(_DWORD *)(v7 + 24) = v12 + 3;
      v14 = sub_EC0560((_QWORD *)a1[1], v78, *(_QWORD *)(v9 + 8LL * (unsigned int)(v12 + 2)), v12, v11, a6);
      break;
    case 23:
      v14 = (__int64)sub_EBF400((_QWORD *)a1[1], v8, v7, v8, v11, a6);
      break;
    case 24:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 32, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 24;
      *(_DWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      break;
    case 25:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 25;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 26:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 48, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 26;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 103;
      *(_QWORD *)(v14 + 32) = 2;
      *(_QWORD *)(v14 + 40) = 0;
      break;
    case 28:
      v76 = sub_1EC2080((__int64 *)(a1[1] + 2352), 56, 3u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AAC00);
      v14 = v76;
      *(_QWORD *)v76 = 0;
      *(_DWORD *)(v76 + 8) = 28;
      *(_QWORD *)(v76 + 16) = 0;
      *(_DWORD *)(v76 + 24) = 103;
      *(__m128i *)(v76 + 28) = si128;
      *(_QWORD *)(v76 + 48) = 0;
      break;
    case 29:
      v75 = *(_QWORD *)(v9 + 8LL * (unsigned int)v11);
      *(_DWORD *)(v7 + 24) = v12 + 3;
      v14 = sub_EC0330((_QWORD *)a1[1], v75, *(_QWORD *)(v9 + 8LL * (unsigned int)(v12 + 2)), v12, v11, a6);
      break;
    case 30:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 30;
      break;
    case 32:
      v74 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v74;
      v14 = sub_EBF810((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v74, v11, a6);
      break;
    case 33:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 0x6A00000021LL;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 34:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 40, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 34;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_DWORD *)(v14 + 32) = 103;
      break;
    case 35:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 40, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 35;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_DWORD *)(v14 + 32) = 103;
      break;
    case 36:
      v73 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v73;
      v14 = sub_EC0030((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v73, v11, a6);
      break;
    case 37:
      v72 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v72;
      v14 = sub_EBF730((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v72, v11, a6);
      break;
    case 38:
      v67 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)v11));
      v68 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 2)));
      v69 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 3)));
      *(_DWORD *)(v7 + 24) = v8 + 5;
      v70 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 4)));
      v71 = a1[1];
      v86[0] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v67, v68), _mm_unpacklo_epi32(v69, v70));
      v14 = sub_EBEAB0(v71, (int *)v86);
      break;
    case 39:
      v14 = sub_EBF290((_QWORD *)a1[1], v8, v7, v8, v11, a6);
      break;
    case 40:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 48, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 40;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 103;
      *(_QWORD *)(v14 + 32) = 1;
      *(_QWORD *)(v14 + 40) = 0;
      break;
    case 41:
      v62 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)v11));
      v63 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 2)));
      v64 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 3)));
      *(_DWORD *)(v7 + 24) = v8 + 5;
      v65 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 4)));
      v66 = (_QWORD *)a1[1];
      v86[0] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v62, v63), _mm_unpacklo_epi32(v64, v65));
      v14 = sub_EC0C70(v66, (unsigned int *)v86, v7, v8, v11, a6);
      break;
    case 42:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 42;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 43:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 43;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 44:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 56, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 44;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 103;
      *(_QWORD *)(v14 + 32) = 0;
      *(_QWORD *)(v14 + 40) = 0x6700000000LL;
      *(_DWORD *)(v14 + 48) = 0;
      break;
    case 45:
      v61 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v61;
      v14 = sub_EBF610((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v61, v11, a6);
      break;
    case 47:
      v60 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v60;
      v14 = sub_EBF7A0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v60, v11, a6);
      break;
    case 49:
      v59 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v59;
      v14 = sub_EBFE40((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v59, v11, a6);
      break;
    case 51:
      v54 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)v11));
      v55 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 2)));
      v56 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 3)));
      *(_DWORD *)(v7 + 24) = v8 + 5;
      v57 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 4)));
      v58 = (_QWORD *)a1[1];
      v86[0] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v54, v55), _mm_unpacklo_epi32(v56, v57));
      v14 = sub_EC0AD0(v58, (unsigned int *)v86, v7, v8, v11, a6);
      break;
    case 52:
      v53 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v53;
      v14 = sub_EC03C0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v53, v11, a6);
      break;
    case 53:
      v52 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v52;
      v14 = sub_EC08C0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v52, v11, a6);
      break;
    case 55:
      v47 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)v11));
      v48 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 2)));
      v49 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 3)));
      *(_DWORD *)(v7 + 24) = v8 + 5;
      v50 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 4)));
      v51 = a1[1];
      v86[0] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v47, v48), _mm_unpacklo_epi32(v49, v50));
      v14 = sub_EBE8F0(v51, (int *)v86);
      break;
    case 58:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 58;
      break;
    case 59:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 59;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 60:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 60;
      break;
    case 61:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 61;
      break;
    case 62:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 62;
      break;
    case 63:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 63;
      break;
    case 64:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 64;
      break;
    case 65:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 65;
      break;
    case 66:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 40, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 66;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_DWORD *)(v14 + 32) = 103;
      break;
    case 67:
      v46 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v46;
      v14 = sub_EBFAF0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v46, v11, a6);
      break;
    case 69:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 40, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 69;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_DWORD *)(v14 + 32) = 103;
      break;
    case 70:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 48, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 70;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 103;
      *(_QWORD *)(v14 + 32) = 1;
      *(_QWORD *)(v14 + 40) = 0;
      break;
    case 71:
      v45 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v45;
      v14 = sub_EC00B0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v45, v11, a6);
      break;
    case 72:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 48, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 72;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0x100000067LL;
      *(_DWORD *)(v14 + 40) = 0;
      break;
    case 73:
      v44 = (_QWORD *)sub_1EC2080((__int64 *)(a1[1] + 2352), 80, 3u);
      *v44 = 0;
      v14 = (__int64)v44;
      v44 += 4;
      *(v44 - 3) = 73;
      *(_QWORD *)(v14 + 16) = v44;
      *(_QWORD *)(v14 + 24) = 0x600000000LL;
      break;
    case 74:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 74;
      break;
    case 75:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 40, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 75;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_DWORD *)(v14 + 32) = 103;
      break;
    case 76:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 32, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 76;
      *(_QWORD *)(v14 + 16) = 1;
      *(_QWORD *)(v14 + 24) = 1;
      break;
    case 77:
      *(_DWORD *)(v7 + 24) = v8 + 2;
      v14 = sub_EBD960(a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11));
      break;
    case 79:
      v14 = (__int64)sub_EBF310((_QWORD *)a1[1], v8, v7, v8, v11, a6);
      break;
    case 80:
      v43 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v43;
      v14 = sub_EBF8F0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v43, v11, a6);
      break;
    case 81:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 40, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 81;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 103;
      *(_QWORD *)(v14 + 32) = 0;
      break;
    case 82:
      v42 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v42;
      v14 = sub_EBFA80((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v42, v11, a6);
      break;
    case 83:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 83;
      *(_QWORD *)(v14 + 16) = 7;
      break;
    case 84:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 84;
      break;
    case 85:
      v41 = *(_QWORD *)(v9 + 8LL * (unsigned int)v11);
      *(_DWORD *)(v7 + 24) = v12 + 3;
      v14 = sub_EBFF60((_QWORD *)a1[1], v41, *(_QWORD *)(v9 + 8LL * (unsigned int)(v12 + 2)), v12, v11, a6);
      break;
    case 86:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 86;
      break;
    case 87:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 87;
      break;
    case 88:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 88;
      break;
    case 89:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 89;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 90:
      v39 = sub_1EC2080((__int64 *)(a1[1] + 2352), 72, 3u);
      v40 = _mm_load_si128((const __m128i *)&xmmword_23AABF0);
      v14 = v39;
      *(_QWORD *)v39 = 0;
      *(_DWORD *)(v39 + 8) = 90;
      *(_QWORD *)(v39 + 16) = 0;
      *(_DWORD *)(v39 + 24) = 103;
      *(_QWORD *)(v39 + 44) = 0;
      *(_QWORD *)(v39 + 52) = 0;
      *(_QWORD *)(v39 + 64) = 0;
      *(__m128i *)(v39 + 28) = v40;
      break;
    case 91:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 91;
      break;
    case 92:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 92;
      break;
    case 93:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 93;
      *(_QWORD *)(v14 + 16) = 2;
      break;
    case 94:
      v38 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v38;
      v14 = sub_EBF880((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v38, v11, a6);
      break;
    case 95:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 95;
      break;
    case 96:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 24, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 96;
      *(_QWORD *)(v14 + 16) = 0;
      break;
    case 97:
      v37 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v37;
      v14 = sub_EBF6C0((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v37, v11, a6);
      break;
    case 98:
      v36 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v36;
      v14 = sub_EBF560((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v36, v11, a6);
      break;
    case 99:
      v35 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v35;
      v14 = sub_EC0130((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v35, v11, a6);
      break;
    case 101:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 101;
      break;
    case 102:
      v30 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)v11));
      v31 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 2)));
      v32 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 3)));
      *(_DWORD *)(v7 + 24) = v8 + 5;
      v33 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 4)));
      v34 = a1[1];
      v86[0] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v30, v31), _mm_unpacklo_epi32(v32, v33));
      v14 = sub_EBE9F0(v34, (int *)v86);
      break;
    case 103:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 103;
      break;
    case 104:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 104;
      break;
    case 107:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 107;
      break;
    case 108:
      v29 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v29;
      v14 = sub_EBD9D0((__int64 *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11) != 0, v7, v29, v11, a6);
      break;
    case 109:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 32, 3u);
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 109;
      *(_DWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      break;
    case 110:
      v24 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)v11));
      v25 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 2)));
      v26 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 3)));
      *(_DWORD *)(v7 + 24) = v8 + 5;
      v27 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 4)));
      v28 = (_QWORD *)a1[1];
      v86[0] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v24, v25), _mm_unpacklo_epi32(v26, v27));
      v14 = sub_EC0BA0(v28, (unsigned int *)v86, v7, v8, v11, a6);
      break;
    case 111:
      v19 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)v11));
      v20 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 2)));
      v21 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 3)));
      *(_DWORD *)(v7 + 24) = v8 + 5;
      v22 = _mm_loadl_epi64((const __m128i *)(v9 + 8LL * (unsigned int)(v8 + 4)));
      v23 = a1[1];
      v86[0] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v19, v20), _mm_unpacklo_epi32(v21, v22));
      v14 = sub_EBEB70(v23, (int *)v86);
      break;
    case 112:
      v18 = (unsigned int)(v8 + 2);
      *(_DWORD *)(v7 + 24) = v18;
      v14 = sub_EBFC40((_QWORD *)a1[1], *(_QWORD *)(v9 + 8LL * (unsigned int)v11), v7, v18, v11, a6);
      break;
    case 113:
      v14 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 113;
      break;
    case 115:
      v13 = sub_1EC2080((__int64 *)(a1[1] + 2352), 12, 3u);
      *(_QWORD *)v13 = 0;
      v14 = v13;
      *(_DWORD *)(v13 + 8) = 115;
      break;
    default:
      sub_1F1C130(a1, 0);
      sub_1EE7490(*a1);
      dword_0 = 0;
      BUG();
  }
  sub_1F1C130(a1, v14);
  v15 = sub_1EE7490(*a1);
  v16 = *a1;
  *(_DWORD *)v14 = v15;
  *(_DWORD *)(v14 + 4) = sub_1EE7490(v16);
  return v14;
}
