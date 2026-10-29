__int64 __fastcall CoinPackedVector::append(CoinPackedVector *this, __int64 **a2)
{
  __int64 result; // rax
  int v5; // r13d
  signed int v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // eax
  __int64 (__fastcall *v10)(CoinPackedVector *__hidden); // rdx
  __int64 (__fastcall *v11)(CoinPackedVector *__hidden); // rax
  const __m128i *v12; // rbx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // ecx
  __m128i *v17; // r10
  int v18; // r11d
  int v19; // edi
  const __m128i *v20; // r8
  __m128i *v21; // r9
  __int64 v22; // rsi
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // rsi
  const __m128i *v26; // r8
  char v27; // r14
  signed int *v28; // rdx
  _QWORD *v29; // r14
  __int64 v30; // r8
  __int64 *v31; // r9
  __int64 v32; // rsi
  __int64 v33; // xmm0_8
  __int64 v34; // rsi
  __m128i si128; // xmm14
  signed int *v36; // rax
  unsigned int v37; // esi
  __m128 v38; // xmm7
  __m128i v39; // xmm13
  __m128i v40; // xmm0
  __m128i v41; // xmm12
  __m128i v42; // xmm11
  __m128i v43; // xmm10
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __m128i v46; // xmm8
  __m128i v47; // xmm5
  __m128i v48; // xmm1
  __m128i v49; // xmm8
  __m128i v50; // xmm15
  __m128i v51; // xmm3
  __m128i v52; // xmm8
  __m128i v53; // xmm15
  __m128i v54; // xmm9
  __m128i v55; // xmm6
  __m128i v56; // xmm15
  __m128i v57; // xmm9
  __m128i v58; // xmm4
  __m128i v59; // xmm9
  __m128i v60; // xmm8
  __m128i v61; // xmm2
  __m128i v62; // xmm8
  __m128i v63; // xmm3
  __m128i v64; // xmm5
  __m128i v65; // xmm3
  __m128i v66; // xmm15
  __m128i v67; // xmm1
  __m128i v68; // xmm15
  __m128i v69; // xmm3
  __m128i v70; // xmm2
  __m128i v71; // xmm3
  __m128i v72; // xmm1
  __m128i v73; // xmm1
  __m128 v74; // xmm2
  signed int *v75; // rsi
  _QWORD *v76; // r15
  __int64 v77; // r12
  __int64 v78; // r13
  __int64 v79; // rbp
  __int32 v80; // ecx
  __int64 v81; // rax
  char v82; // si
  __int32 v83; // edx
  void *exception; // r12
  __int64 v85; // r9
  const __m128i *v86; // r8
  __int32 v87; // eax
  double v88[2]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v89; // [rsp+20h] [rbp-58h]
  __int64 v90; // [rsp+28h] [rbp-50h]
  __int64 v91; // [rsp+30h] [rbp-48h]
  char *v92; // [rsp+38h] [rbp-40h]

  result = **a2;
  if ( (__int64 (__fastcall *)(CoinPackedVector *__hidden))result == CoinPackedVector::getNumElements )
  {
    v5 = *((_DWORD *)a2 + 12);
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64 **))result)(a2);
    v5 = result;
  }
  if ( !v5 )
    return result;
  if ( *((_BYTE *)this + 24) )
    CoinPackedVectorBase::indexSet(this, "append (1st call)", "CoinPackedVector");
  v6 = *((_DWORD *)this + 12);
  v7 = *((_DWORD *)this + 16);
  v8 = v5 + v6;
  if ( v7 < v5 + v6 )
  {
    v9 = 2 * v7;
    if ( v9 >= v8 )
      v8 = v9;
    CoinPackedVector::reserve(this, v8);
  }
  v10 = (__int64 (__fastcall *)(CoinPackedVector *__hidden))(*a2)[1];
  if ( v10 != CoinPackedVector::getIndices )
  {
    v12 = (const __m128i *)v10((CoinPackedVector *)a2);
    v11 = (__int64 (__fastcall *)(CoinPackedVector *__hidden))(*a2)[2];
    if ( v11 == CoinPackedVector::getElements )
      goto LABEL_12;
LABEL_82:
    result = v11((CoinPackedVector *)a2);
    goto LABEL_13;
  }
  v11 = (__int64 (__fastcall *)(CoinPackedVector *__hidden))(*a2)[2];
  v12 = (const __m128i *)a2[4];
  if ( v11 != CoinPackedVector::getElements )
    goto LABEL_82;
LABEL_12:
  result = (__int64)a2[5];
LABEL_13:
  v13 = v5 + 7;
  v14 = *((_QWORD *)this + 4);
  if ( v5 >= 0 )
    v13 = v5;
  v15 = 4LL * v6;
  v16 = v13 >> 3;
  v17 = (__m128i *)(v14 + v15);
  v18 = v16;
  v19 = v5 % 8;
  if ( (const __m128i *)(v14 + v15) != v12 )
  {
    if ( v16 <= 0 )
    {
      v26 = v12;
    }
    else
    {
      if ( (v17 >= &v12[2] || (unsigned __int64)v12 >= v14 + v15 + 32) && (unsigned int)v16 > 1 )
      {
        v20 = v12;
        v21 = v17;
        v22 = (unsigned int)(v16 - 1);
        do
        {
          v23 = _mm_loadu_si128(v20);
          v20 += 2;
          v21 += 2;
          v24 = _mm_loadu_si128(v20 - 1);
          v21[-2] = v23;
          v21[-1] = v24;
        }
        while ( v20 != &v12[2 * v22 + 2] );
      }
      else
      {
        v85 = v14 + 4LL * v6;
        v86 = v12;
        *(_QWORD *)&v88[0] = result;
        v22 = (unsigned int)(v16 - 1);
        do
        {
          v87 = v86->m128i_i32[0];
          v86 += 2;
          v85 += 32;
          *(_DWORD *)(v85 - 32) = v87;
          *(_DWORD *)(v85 - 28) = v86[-2].m128i_i32[1];
          *(_DWORD *)(v85 - 24) = v86[-2].m128i_i32[2];
          *(_DWORD *)(v85 - 20) = v86[-2].m128i_i32[3];
          *(_DWORD *)(v85 - 16) = v86[-1].m128i_i32[0];
          *(_DWORD *)(v85 - 12) = v86[-1].m128i_i32[1];
          *(_DWORD *)(v85 - 8) = v86[-1].m128i_i32[2];
          *(_DWORD *)(v85 - 4) = v86[-1].m128i_i32[3];
        }
        while ( v86 != &v12[2 * v22 + 2] );
        result = *(_QWORD *)&v88[0];
      }
      v25 = 2 * ((int)v22 + 1LL);
      v26 = &v12[v25];
      v17 = (__m128i *)((char *)v17 + v25 * 16);
    }
    switch ( v19 )
    {
      case 1:
        goto LABEL_38;
      case 2:
        goto LABEL_37;
      case 3:
        goto LABEL_36;
      case 4:
        goto LABEL_35;
      case 5:
        goto LABEL_34;
      case 6:
        goto LABEL_33;
      case 7:
        v17[1].m128i_i32[2] = v26[1].m128i_i32[2];
LABEL_33:
        v17[1].m128i_i32[1] = v26[1].m128i_i32[1];
LABEL_34:
        v17[1].m128i_i32[0] = v26[1].m128i_i32[0];
LABEL_35:
        v17->m128i_i32[3] = v26->m128i_i32[3];
LABEL_36:
        v17->m128i_i32[2] = v26->m128i_i32[2];
LABEL_37:
        v17->m128i_i32[1] = v26->m128i_i32[1];
LABEL_38:
        v17->m128i_i32[0] = v26->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v28 = (signed int *)(*((_QWORD *)this + 7) + v15);
  v29 = (_QWORD *)(*((_QWORD *)this + 5) + 8LL * v6);
  if ( v29 != (_QWORD *)result )
  {
    if ( v16 > 0 )
    {
      v30 = *((_QWORD *)this + 5) + 8LL * v6;
      v31 = (__int64 *)result;
      v32 = (unsigned int)(v16 - 1);
      do
      {
        v33 = *v31;
        v30 += 64;
        v31 += 8;
        *(_QWORD *)(v30 - 64) = v33;
        *(_QWORD *)(v30 - 56) = *(v31 - 7);
        *(_QWORD *)(v30 - 48) = *(v31 - 6);
        *(_QWORD *)(v30 - 40) = *(v31 - 5);
        *(_QWORD *)(v30 - 32) = *(v31 - 4);
        *(_QWORD *)(v30 - 24) = *(v31 - 3);
        *(_QWORD *)(v30 - 16) = *(v31 - 2);
        *(_QWORD *)(v30 - 8) = *(v31 - 1);
      }
      while ( (_QWORD *)v30 != &v29[8 * v32 + 8] );
      v34 = ((int)v32 + 1LL) << 6;
      result += v34;
      v29 = (_QWORD *)((char *)v29 + v34);
      switch ( v19 )
      {
        case 1:
          goto LABEL_50;
        case 2:
          goto LABEL_49;
        case 3:
          goto LABEL_48;
        case 4:
          goto LABEL_47;
        case 5:
          goto LABEL_46;
        case 6:
          goto LABEL_45;
        case 7:
          goto LABEL_44;
        default:
          goto LABEL_52;
      }
    }
    switch ( v19 )
    {
      case 1:
        goto LABEL_50;
      case 2:
        goto LABEL_49;
      case 3:
        goto LABEL_48;
      case 4:
        goto LABEL_47;
      case 5:
        goto LABEL_46;
      case 6:
        goto LABEL_45;
      case 7:
LABEL_44:
        v29[6] = *(_QWORD *)(result + 48);
LABEL_45:
        v29[5] = *(_QWORD *)(result + 40);
LABEL_46:
        v29[4] = *(_QWORD *)(result + 32);
LABEL_47:
        v29[3] = *(_QWORD *)(result + 24);
LABEL_48:
        v29[2] = *(_QWORD *)(result + 16);
LABEL_49:
        v29[1] = *(_QWORD *)(result + 8);
LABEL_50:
        *v29 = *(_QWORD *)result;
        break;
      default:
        goto LABEL_30;
    }
  }
  if ( v16 <= 0 )
  {
    v75 = v28;
    result = (unsigned int)v6;
  }
  else
  {
LABEL_52:
    if ( v16 <= 4 )
      goto LABEL_99;
    si128 = _mm_load_si128((const __m128i *)&xmmword_28A1A0);
    v36 = v28;
    *(_QWORD *)&v88[0] = v28 + 8;
    v37 = 0;
    v38 = _mm_loadh_ps(v88);
    v39 = _mm_load_si128((const __m128i *)&xmmword_290830);
    v40 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v6), 0), (__m128i)xmmword_290820);
    v41 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v42 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
    v43 = _mm_load_si128((const __m128i *)&xmmword_290840);
    do
    {
      ++v37;
      v44 = _mm_add_epi32(v40, v41);
      v36 += 32;
      v45 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_289BC0), v40);
      v46 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290850), v40);
      v47 = _mm_unpacklo_epi32(v44, v46);
      v48 = _mm_unpackhi_epi32(v44, v46);
      v49 = _mm_add_epi32(v40, v42);
      v50 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290860), v40);
      v51 = _mm_unpackhi_epi32(v49, v50);
      v52 = _mm_unpacklo_epi32(v49, v50);
      v53 = _mm_add_epi32(v40, v43);
      v54 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290870), v40);
      v55 = _mm_unpackhi_epi32(v53, v54);
      v56 = _mm_unpacklo_epi32(v53, v54);
      v57 = _mm_unpacklo_epi32(v40, v45);
      v58 = _mm_unpackhi_epi32(v57, v52);
      v59 = _mm_unpacklo_epi32(v57, v52);
      v60 = _mm_unpackhi_epi32(v40, v45);
      v61 = _mm_unpackhi_epi32(v60, v51);
      v62 = _mm_unpacklo_epi32(v60, v51);
      v63 = v47;
      v64 = _mm_unpackhi_epi32(v47, v56);
      v65 = _mm_unpacklo_epi32(v63, v56);
      v66 = v48;
      v67 = _mm_unpackhi_epi32(v48, v55);
      v68 = _mm_unpacklo_epi32(v66, v55);
      *((__m128i *)v36 - 8) = _mm_unpacklo_epi32(v59, v65);
      *((__m128i *)v36 - 6) = _mm_unpacklo_epi32(v58, v64);
      *((__m128i *)v36 - 7) = _mm_unpackhi_epi32(v59, v65);
      *((__m128i *)v36 - 4) = _mm_unpacklo_epi32(v62, v68);
      v69 = v61;
      v70 = _mm_unpackhi_epi32(v61, v67);
      v71 = _mm_unpacklo_epi32(v69, v67);
      v72 = _mm_load_si128((const __m128i *)&xmmword_298760);
      *((__m128i *)v36 - 1) = v70;
      v73 = _mm_add_epi32(v72, v40);
      v40 = _mm_add_epi32(v40, v39);
      *((__m128i *)v36 - 5) = _mm_unpackhi_epi32(v58, v64);
      *((__m128i *)v36 - 3) = _mm_unpackhi_epi32(v62, v68);
      *((__m128i *)v36 - 2) = v71;
      v74 = (__m128)_mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_28A1B0), (__m128i)v38);
      v38 = (__m128)_mm_add_epi64((__m128i)v38, si128);
    }
    while ( (unsigned int)v16 >> 2 > v37 );
    v6 += 8 * (v16 & 0xFFFFFFFC);
    v18 = v16 - (v16 & 0xFFFFFFFC);
    result = (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v73, 255));
    v75 = (signed int *)_mm_movehl_ps(v38, v74).m128_u64[0];
    v28 += 8 * (v16 & 0xFFFFFFFC);
    if ( (v16 & 0xFFFFFFFC) != v16 )
    {
LABEL_99:
      *v28 = v6;
      v75 = v28 + 8;
      v28[1] = v6 + 1;
      v28[2] = v6 + 2;
      v28[3] = v6 + 3;
      v28[4] = v6 + 4;
      v28[5] = v6 + 5;
      v28[6] = v6 + 6;
      v28[7] = v6 + 7;
      result = (unsigned int)(v6 + 8);
      if ( v18 != 1 )
      {
        v28[8] = result;
        v75 = v28 + 16;
        v28[9] = v6 + 9;
        v28[10] = v6 + 10;
        v28[11] = v6 + 11;
        v28[12] = v6 + 12;
        v28[13] = v6 + 13;
        v28[14] = v6 + 14;
        v28[15] = v6 + 15;
        result = (unsigned int)(v6 + 16);
        if ( v18 != 2 )
        {
          v28[16] = result;
          v75 = v28 + 24;
          v28[17] = v6 + 17;
          v28[18] = v6 + 18;
          v28[19] = v6 + 19;
          v28[20] = v6 + 20;
          v28[21] = v6 + 21;
          v28[22] = v6 + 22;
          v28[23] = v6 + 23;
          result = (unsigned int)(v6 + 24);
          if ( v18 != 3 )
          {
            v28[24] = result;
            v75 = v28 + 32;
            v28[25] = v6 + 25;
            v28[26] = v6 + 26;
            v28[27] = v6 + 27;
            v28[28] = v6 + 28;
            v28[29] = v6 + 29;
            v28[30] = v6 + 30;
            v28[31] = v6 + 31;
            result = (unsigned int)(v6 + 32);
          }
        }
      }
    }
  }
  switch ( v5 % 8 )
  {
    case 1:
      goto LABEL_29;
    case 2:
      goto LABEL_28;
    case 3:
      goto LABEL_27;
    case 4:
      goto LABEL_26;
    case 5:
      goto LABEL_25;
    case 6:
      goto LABEL_24;
    case 7:
      v75[6] = result + 6;
LABEL_24:
      v75[5] = result + 5;
LABEL_25:
      v75[4] = result + 4;
LABEL_26:
      v75[3] = result + 3;
LABEL_27:
      v75[2] = result + 2;
LABEL_28:
      v75[1] = result + 1;
LABEL_29:
      *v75 = result;
      break;
    default:
      break;
  }
LABEL_30:
  v27 = *((_BYTE *)this + 24);
  *((_DWORD *)this + 12) += v5;
  if ( !v27 )
    return result;
  result = CoinPackedVectorBase::indexSet(this, "append (2nd call)", "CoinPackedVector");
  v76 = (_QWORD *)result;
  if ( v5 <= 0 )
    return result;
  v77 = result + 8;
  v78 = (__int64)v12->m128i_i64 + 4 * (unsigned int)(v5 - 1) + 4;
  do
  {
    v79 = v76[2];
    if ( !v79 )
    {
      v79 = v77;
      goto LABEL_84;
    }
    v80 = v12->m128i_i32[0];
    while ( 1 )
    {
      v83 = *(_DWORD *)(v79 + 32);
      if ( v80 >= v83 )
        break;
      v81 = *(_QWORD *)(v79 + 16);
      v82 = v27;
      if ( !v81 )
        goto LABEL_70;
LABEL_67:
      v79 = v81;
    }
    v81 = *(_QWORD *)(v79 + 24);
    v82 = 0;
    if ( v81 )
      goto LABEL_67;
LABEL_70:
    if ( !v82 )
    {
      if ( v80 <= v83 )
        goto LABEL_72;
      goto LABEL_87;
    }
LABEL_84:
    if ( v76[3] != v79 && v12->m128i_i32[0] <= *(_DWORD *)(std::_Rb_tree_decrement() + 32) || !v79 )
    {
LABEL_72:
      exception = __cxa_allocate_exception(0x30u);
      v92 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v89 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C6B8(v89 - 24);
      if ( (_UNKNOWN *)(v90 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C6B8(v90 - 24);
      if ( (_UNKNOWN *)(v91 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C6B8(v91 - 24);
      if ( v92 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
        sub_5C6B8((__int64)(v92 - 24));
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
LABEL_87:
    if ( v77 != v79 )
      LODWORD(v88[0]) = v12->m128i_i32[0] < *(_DWORD *)(v79 + 32);
    *(_DWORD *)(operator new(0x28u) + 32) = v12->m128i_i32[0];
    v12 = (const __m128i *)((char *)v12 + 4);
    result = std::_Rb_tree_insert_and_rebalance();
    ++v76[5];
  }
  while ( v12 != (const __m128i *)v78 );
  return result;
}

