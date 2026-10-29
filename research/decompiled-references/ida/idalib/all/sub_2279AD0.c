unsigned __int64 __fastcall sub_2279AD0(__int64 a1, __m128 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 i; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rsi
  __int64 v19; // rax
  char *v20; // rax
  size_t v21; // rdx
  size_t v22; // rbp
  char *v23; // r12
  __int64 v24; // rax
  __m128 v25; // xmm0
  void *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i si128; // xmm0
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  const __m128i *v40; // r15
  __int64 v41; // r14
  char *v42; // rax
  size_t v43; // rdx
  __int64 v44; // r9
  size_t v45; // rbp
  char *v46; // r12
  __int64 v47; // rdx
  int v48; // eax
  int v49; // eax
  __int64 ***v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // ecx
  __int64 v54; // r14
  unsigned int v55; // eax
  unsigned int v56; // r8d
  __int64 *v57; // rcx
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rax
  __int64 v63; // rax
  __int64 v64; // r15
  __int64 ***v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // r8d
  __int64 *v69; // rcx
  __int64 v70; // r15
  void *v71; // r8
  __int64 v72; // rax
  __int64 ***v73; // rdi
  __int64 v74; // rbp
  __int64 v75; // rax
  __int64 ***v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 **v79; // [rsp+10h] [rbp-178h] BYREF
  __int64 v80; // [rsp+18h] [rbp-170h]
  double v81; // [rsp+20h] [rbp-168h] BYREF
  unsigned int v82; // [rsp+2Ch] [rbp-15Ch]
  __int64 *v83; // [rsp+30h] [rbp-158h]
  __int64 v84; // [rsp+38h] [rbp-150h]
  _QWORD *v85; // [rsp+40h] [rbp-148h]
  __int64 v86; // [rsp+48h] [rbp-140h]
  _QWORD v87[4]; // [rsp+50h] [rbp-138h] BYREF
  __int16 v88; // [rsp+70h] [rbp-118h]
  __int64 v89[4]; // [rsp+80h] [rbp-108h] BYREF
  __int16 v90; // [rsp+A0h] [rbp-E8h]
  void *ptr; // [rsp+B0h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-D0h]
  _BYTE v93[192]; // [rsp+C8h] [rbp-C0h] BYREF

  v6 = (__int64)a2;
  ptr = v93;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  switch ( a2[2].m128_i32[0] )
  {
    case 0:
      v19 = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 288) += 8LL;
      v9 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(a1 + 216) >= v9 + 8 && v19 )
        *(_QWORD *)(a1 + 208) = v9 + 8;
      else
        v9 = sub_986170(a1 + 208, 8, 8, 3, a5, a6);
      *(_QWORD *)v9 = a2;
      goto LABEL_10;
    case 1:
      v20 = (char *)sub_2270420((__int64)a2, (__int64 *)&ptr);
      v22 = n[0];
      if ( !n[0] )
      {
        v23 = v20;
        v22 = v21;
        goto LABEL_19;
      }
      v26 = ptr;
      goto LABEL_25;
    case 2:
      v22 = a2[5].m128_u64[0];
      v23 = nullptr;
      if ( v22 )
      {
        v26 = (void *)a2[4].m128_u64[1];
LABEL_25:
        v23 = *(char **)(a1 + 112);
        *(_QWORD *)(a1 + 192) += v22;
        if ( *(_QWORD *)(a1 + 120) >= (unsigned __int64)&v23[v22] && v23 )
          *(_QWORD *)(a1 + 112) = &v23[v22];
        else
          v23 = (char *)sub_986170(a1 + 112, v22, v22, 0, a5, a6);
        memmove(v23, v26, v22);
      }
LABEL_19:
      v24 = *(_QWORD *)(a1 + 304);
      *(_QWORD *)(a1 + 384) += 24LL;
      v9 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(a1 + 312) >= v9 + 24 && v24 )
        *(_QWORD *)(a1 + 304) = v9 + 24;
      else
        v9 = sub_986170(a1 + 304, 24, 24, 3, a5, a6);
      v79 = (__int64 **)v23;
      v25 = _mm_loadh_ps((const double *)&v79);
      *(_QWORD *)(v9 + 16) = v22;
      *(__m128 *)v9 = v25;
      goto LABEL_10;
    case 4:
      v27 = *(_QWORD *)(a1 + 400);
      *(_QWORD *)(a1 + 480) += 240LL;
      v9 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v28 = v9 + 240;
      if ( *(_QWORD *)(a1 + 408) >= v9 + 240 && v27 )
      {
        *(_QWORD *)(a1 + 400) = v28;
      }
      else
      {
        a2 = (__m128 *)&qword_F0;
        v9 = sub_986170(a1 + 400, 240, 240, 3, a5, a6);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
      *(_QWORD *)v9 = v6;
      *(_QWORD *)(v9 + 32) = v9 + 48;
      *(_QWORD *)(v9 + 8) = 0;
      *(__m128i *)(v9 + 16) = si128;
      *(_QWORD *)(v9 + 40) = 0x600000000LL;
      *(_BYTE *)(v6 + 76) = 0;
      sub_22754C0(v6, a2, v28, a4, a5, a6);
      v34 = *(_QWORD *)(v6 + 80);
      if ( !v34 )
        goto LABEL_10;
      v84 = v6;
      v79 = (__int64 **)v89;
      v86 = a1 + 112;
      v85 = v87;
      break;
    case 5:
      v8 = *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 576) += 32LL;
      v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = v9 + 32;
      if ( *(_QWORD *)(a1 + 504) >= v9 + 32 && v8 )
      {
        *(_QWORD *)(a1 + 496) = v10;
      }
      else
      {
        a2 = (__m128 *)&qword_20;
        v9 = sub_986170(a1 + 496, 32, 32, 3, a5, a6);
      }
      *(_QWORD *)v9 = v6;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
      *(_BYTE *)(v6 + 76) = 0;
      sub_2274D70(v6, a2, v10, a4, a5, a6);
      for ( i = *(_QWORD *)(v6 + 80); i; i = *(_QWORD *)(v6 + 80) )
      {
        v12 = sub_2279AD0(a1, i);
        v16 = *(unsigned int *)(a1 + 96);
        v89[0] = v12;
        if ( (_DWORD)v16 )
          break;
        v17 = *(__int64 **)(v9 + 16);
        if ( v17 == *(__int64 **)(v9 + 24) )
        {
          sub_2278FB0(v9 + 8, v17, v89);
        }
        else
        {
          *v17++ = v12;
          *(_QWORD *)(v9 + 16) = v17;
        }
        sub_2274D70(v6, v17, v13, v14, v15, v16);
      }
      goto LABEL_10;
    default:
      v65 = *(__int64 ****)(a1 + 80);
      v90 = 259;
      v9 = 0;
      v89[0] = (__int64)"unknown node kind";
      sub_226EEF0(v65, (const __m128i *)a2, (__int64)v89, 0);
      v66 = std::_V2::generic_category((std::_V2 *)v65);
      *(_DWORD *)(a1 + 96) = 22;
      *(_QWORD *)(a1 + 104) = v66;
      goto LABEL_10;
  }
  while ( 1 )
  {
    v35 = sub_22751E0(v34, a2, v30, v31, v32, v33);
    v40 = (const __m128i *)v35;
    if ( !v35 || *(_DWORD *)(v35 + 32) != 1 )
      break;
    v41 = sub_2275440(v34, a2, v36, v37, v38, v39);
    if ( !v41 )
      goto LABEL_62;
    n[0] = 0;
    v42 = (char *)sub_2270420((__int64)v40, (__int64 *)&ptr);
    v45 = n[0];
    if ( n[0] )
    {
      v46 = *(char **)(a1 + 112);
      v71 = ptr;
      *(_QWORD *)(a1 + 192) += n[0];
      if ( *(_QWORD *)(a1 + 120) >= (unsigned __int64)&v46[v45] && v46 )
      {
        *(_QWORD *)(a1 + 112) = &v46[v45];
      }
      else
      {
        v80 = (__int64)v71;
        v78 = sub_986170(v86, v45, v45, 0, (__int64)v71, v44);
        v71 = (void *)v80;
        v46 = (char *)v78;
      }
      memmove(v46, v71, v45);
    }
    else
    {
      v46 = v42;
      v45 = v43;
    }
    v47 = *(unsigned int *)(v9 + 16);
    v80 = v9 + 8;
    sub_2279A90(v79, (__int64 *)(*(_QWORD *)(v9 + 8) + 8 * v47), 1);
    v80 = v89[0];
    v48 = sub_2244B30((__int64)v46, v45);
    v49 = sub_2244E60((__int64 *)(v9 + 8), v46, v45, v48);
    if ( v49 == -1 )
      sub_2279A90(v79, (__int64 *)(*(_QWORD *)(v9 + 8) + 8LL * *(unsigned int *)(v9 + 16)), 1);
    else
      sub_2279A90(v79, (__int64 *)(*(_QWORD *)(v9 + 8) + 8LL * v49), 1);
    if ( v89[0] != v80 )
    {
      v87[0] = "duplicated mapping key '";
      v90 = 770;
      v50 = *(__int64 ****)(a1 + 80);
      v88 = 1283;
      v89[0] = (__int64)v85;
      v89[2] = (__int64)"'";
      v87[2] = v46;
      v87[3] = v45;
      v89[1] = 0;
      sub_226EEF0(v50, v40, (__int64)v79, 0);
      v51 = std::_V2::generic_category((std::_V2 *)v50);
      *(_DWORD *)(a1 + 96) = 22;
      *(_QWORD *)(a1 + 104) = v51;
    }
    v52 = sub_2279AD0(a1, v41);
    v53 = *(_DWORD *)(a1 + 96);
    v80 = v52;
    if ( v53 )
      goto LABEL_10;
    v54 = v40[1].m128i_i64[1];
    v81 = *(double *)v40[1].m128i_i64;
    v55 = sub_2244B30((__int64)v46, v45);
    v56 = sub_2244CB0(v9 + 8, v46, v45, v55);
    v57 = (__int64 *)(*(_QWORD *)(v9 + 8) + 8LL * v56);
    if ( !*v57 )
      goto LABEL_51;
    if ( *v57 == -8 )
    {
      --*(_DWORD *)(v9 + 24);
LABEL_51:
      v83 = v57;
      v82 = v56;
      v67 = sub_22300B0(v45 + 33, 8);
      v68 = v82;
      v69 = v83;
      v70 = v67;
      if ( v45 )
      {
        memcpy((void *)(v67 + 32), v46, v45);
        v69 = v83;
        v68 = v82;
      }
      *(_BYTE *)(v70 + v45 + 32) = 0;
      *(_OWORD *)(v70 + 8) = 0;
      *(_QWORD *)v70 = v45;
      *(_QWORD *)(v70 + 24) = 0;
      *v69 = v70;
      ++*(_DWORD *)(v9 + 20);
      a2 = (__m128 *)(*(_QWORD *)(v9 + 8) + 8LL * (unsigned int)sub_22450D0(v9 + 8, v68));
      sub_2279100(v79, (__int64 *)a2, 0);
      v62 = (__int64 *)v89[0];
      goto LABEL_47;
    }
    a2 = (__m128 *)(*(_QWORD *)(v9 + 8) + 8LL * v56);
    sub_2279100(v79, v57, 0);
    v62 = (__int64 *)v89[0];
LABEL_47:
    v63 = *v62;
    v64 = v84;
    *(_QWORD *)(v63 + 24) = v54;
    *(__m128 *)(v63 + 8) = _mm_loadh_ps(&v81);
    sub_22754C0(v64, a2, v58, v59, v60, v61);
    v34 = *(_QWORD *)(v64 + 80);
    if ( !v34 )
      goto LABEL_10;
  }
  v72 = sub_2275440(v34, a2, v36, v37, v38, v39);
  v73 = *(__int64 ****)(a1 + 80);
  v74 = v72;
  v89[0] = (__int64)"Map key must be a scalar";
  v90 = 259;
  sub_226EEF0(v73, v40, (__int64)v79, 0);
  v75 = std::_V2::generic_category((std::_V2 *)v73);
  *(_DWORD *)(a1 + 96) = 22;
  *(_QWORD *)(a1 + 104) = v75;
  if ( v74 )
    goto LABEL_10;
LABEL_62:
  v76 = *(__int64 ****)(a1 + 80);
  v89[0] = (__int64)"Map value must not be empty";
  v90 = 259;
  sub_226EEF0(v76, v40, (__int64)v79, 0);
  v77 = std::_V2::generic_category((std::_V2 *)v76);
  *(_DWORD *)(a1 + 96) = 22;
  *(_QWORD *)(a1 + 104) = v77;
LABEL_10:
  if ( ptr != v93 )
    free(ptr);
  return v9;
}
