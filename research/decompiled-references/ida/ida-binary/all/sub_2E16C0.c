__int64 __fastcall sub_2E16C0(
        __int64 *a1,
        __int64 a2,
        const char **a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v11; // rbp
  int v14; // eax
  unsigned int v15; // r14d
  __m128 si128; // xmm0
  int reg_value; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  const char *v29; // rdx
  void *v30; // rsi
  __int64 v31; // rsi
  __m128i v32; // xmm0
  __int64 v33; // r12
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  const char *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  const char *v42; // rcx
  const char *v43; // rdx
  const char *v44; // rdx
  const char *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // r13
  __int64 v55; // rbp
  const char *v56; // rbx
  _QWORD *v57; // rsi
  unsigned __int64 v58; // rdx
  char *v59; // rsi
  unsigned int v60; // eax
  const char *v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // r14
  __int64 v66; // rdi
  __int64 v67; // r8
  __int64 v68; // r9
  __m128 v69; // xmm4
  __m128 v70; // xmm5
  const char *v71; // rcx
  __int64 v72; // rax
  char v73; // [rsp+0h] [rbp-C8h]
  unsigned int v74; // [rsp+Ch] [rbp-BCh]
  __m128i v75; // [rsp+10h] [rbp-B8h] BYREF
  const char *v76; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v77; // [rsp+28h] [rbp-A0h]
  const char *v78; // [rsp+40h] [rbp-88h] BYREF
  __m128i v79; // [rsp+48h] [rbp-80h] BYREF
  const char *v80; // [rsp+60h] [rbp-68h] BYREF
  __int128 v81; // [rsp+68h] [rbp-60h]
  char v82; // [rsp+78h] [rbp-50h]
  unsigned __int64 v83; // [rsp+88h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  if ( (unsigned __int64)a3[1] <= 1 )
    return 0;
  v11 = *a3;
  v14 = sub_1E73C0(0x3F0u, &v80, 0, *a3);
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v11 = v80;
      goto LABEL_5;
    }
  }
  else if ( (unsigned int)str2reg(v11) != -1 )
  {
    goto LABEL_5;
  }
  v11 = nullptr;
LABEL_5:
  v15 = str2reg(v11);
  if ( v15 == -1 )
    return 0;
  if ( !sub_1E73C0(0x62u) )
  {
    reg_value = find_reg_value(&v78, a2, v15);
    if ( reg_value )
    {
      if ( reg_value != 1 )
      {
        sub_169700(
          (int)"This processor does not support the register tracker!\n",
          a2,
          v19,
          v20,
          v21,
          v22,
          a4,
          a5,
          a6,
          a7,
          v23,
          v24,
          a10,
          a11,
          v73);
        return 2;
      }
      sub_169A50(a1, (__int64)"0x%a", *(double *)a4.m128_u64);
      v81 = 0;
      v80 = nullptr;
      if ( get_ea_name(&v80, v78, 21, 0) > 0 )
      {
        v29 = &s1;
        if ( (_QWORD)v81 )
          v29 = v80;
        sub_16FAA0(a1, (__int64)" (%s)", v29);
      }
      sub_169700(
        (int)"The register %s at %a has the value 0x%a\n",
        (__int64)v11,
        a2,
        (__int64)v78,
        v25,
        v26,
        (__m128)0LL,
        a5,
        a6,
        a7,
        v27,
        v28,
        a10,
        a11,
        v73);
      if ( v80 )
      {
        *(_QWORD *)&v81 = 0;
        qfree(v80, v11);
      }
    }
    else
    {
      v30 = (void *)*a1;
      if ( (unsigned __int64)a1[2] <= 0xE )
      {
        v39 = qvector_reserve(a1, v30, 15, 1);
        *a1 = v39;
        v30 = (void *)v39;
      }
      a1[1] = 15;
      qmemcpy(v30, "No value found", 14);
      *(_BYTE *)(*a1 + 14) = 0;
    }
    return 1;
  }
  v82 = 0;
  v80 = nullptr;
  v81 = 0;
  si128.m128_u64[0] = 0;
  v76 = nullptr;
  v77 = 0;
  find_reg_value_info(&v80, a2, v15, 0xFFFFFFFFLL);
  switch ( v82 )
  {
    case 1:
      v53 = qvector_reserve(&v76, 0, 41, 1);
      v76 = (const char *)v53;
      *(_QWORD *)&v77 = 41;
      *(__m128i *)v53 = _mm_load_si128((const __m128i *)&xmmword_5DCDC0);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCDD0);
      *(_QWORD *)(v53 + 32) = 0x6D6F7266202E672ELL;
      *(__m128 *)(v53 + 16) = si128;
      *((_BYTE *)v76 + 40) = 0;
      v41 = v77;
      goto LABEL_40;
    case 2:
      v46 = qvector_reserve(&v76, 0, 41, 1);
      v76 = (const char *)v46;
      *(_QWORD *)&v77 = 41;
      *(__m128i *)v46 = _mm_load_si128((const __m128i *)&xmmword_5DCDE0);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCDF0);
      *(_QWORD *)(v46 + 32) = 0x7461206465686361LL;
      *(__m128 *)(v46 + 16) = si128;
      *((_BYTE *)v76 + 40) = 0;
      v41 = v77;
      goto LABEL_40;
    case 3:
      v40 = qvector_reserve(&v76, 0, 23, 1);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCE00);
      v76 = (const char *)v40;
      *(_QWORD *)&v77 = 23;
      *(__m128 *)v40 = si128;
      *(_QWORD *)(v40 + 14) = 0x7461206E6F697463LL;
      *((_BYTE *)v76 + 22) = 0;
      v41 = v77;
      goto LABEL_40;
    case 4:
      v52 = qvector_reserve(&v76, 0, 36, 1);
      v76 = (const char *)v52;
      *(_QWORD *)&v77 = 36;
      *(__m128i *)v52 = _mm_load_si128((const __m128i *)&xmmword_5DCE10);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCE20);
      *(__m128 *)(v52 + 16) = si128;
      *(_DWORD *)(v52 + 31) = 1952522350;
      *((_BYTE *)v76 + 35) = 0;
      v41 = v77;
      goto LABEL_40;
    case 5:
      v51 = qvector_reserve(&v76, 0, 46, 1);
      v76 = (const char *)v51;
      *(_QWORD *)&v77 = 46;
      *(__m128i *)v51 = _mm_load_si128((const __m128i *)&xmmword_5DCE30);
      *(__m128i *)(v51 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCE40);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCE50);
      *(__m128 *)(v51 + 29) = si128;
      *((_BYTE *)v76 + 45) = 0;
      v41 = v77;
      goto LABEL_40;
    case 6:
      v50 = qvector_reserve(&v76, 0, 44, 1);
      v76 = (const char *)v50;
      *(_QWORD *)&v77 = 44;
      *(__m128i *)v50 = _mm_load_si128((const __m128i *)&xmmword_5DCE60);
      *(__m128i *)(v50 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCE70);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCE80);
      *(__m128 *)(v50 + 27) = si128;
      *((_BYTE *)v76 + 43) = 0;
      v41 = v77;
      goto LABEL_40;
    case 7:
      v49 = qvector_reserve(&v76, 0, 54, 1);
      v76 = (const char *)v49;
      *(_QWORD *)&v77 = 54;
      *(__m128i *)v49 = _mm_load_si128((const __m128i *)&xmmword_5DCE90);
      *(__m128i *)(v49 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCEA0);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCEB0);
      *(__m128 *)(v49 + 32) = si128;
      *(_QWORD *)(v49 + 45) = 0x746120746E696F6ALL;
      *((_BYTE *)v76 + 53) = 0;
      v41 = v77;
      goto LABEL_40;
    case 8:
      v48 = qvector_reserve(&v76, 0, 28, 1);
      v76 = (const char *)v48;
      *(_QWORD *)&v77 = 28;
      *(__m128i *)v48 = _mm_load_si128((const __m128i *)&xmmword_5DCEC0);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCED0);
      *(__m128 *)(v48 + 11) = si128;
      *((_BYTE *)v76 + 27) = 0;
      v41 = v77;
      goto LABEL_40;
    case 9:
      v47 = qvector_reserve(&v76, 0, 36, 1);
      v76 = (const char *)v47;
      *(_QWORD *)&v77 = 36;
      *(__m128i *)v47 = _mm_load_si128((const __m128i *)&xmmword_5DCE90);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCEE0);
      *(__m128 *)(v47 + 16) = si128;
      *(_DWORD *)(v47 + 31) = 1952522355;
      *((_BYTE *)v76 + 35) = 0;
      v41 = v77;
LABEL_40:
      if ( v41 <= 1 )
        goto LABEL_55;
      sub_2E1490((__int64)&v78, 0, (__int64)v80, 0);
      v42 = &s1;
      if ( v79.m128i_i64[0] )
        v42 = v78;
      v43 = &s1;
      if ( (_QWORD)v77 )
        v43 = v76;
      v31 = (__int64)"Unknown (because %s %s)";
      sub_169A50(a1, (__int64)"Unknown (because %s %s)", v43, v42);
      if ( v78 )
      {
        v79.m128i_i64[0] = 0;
        *(double *)si128.m128_u64 = qfree(v78, "Unknown (because %s %s)", v44, v45);
      }
      break;
    case 10:
    case 11:
      v74 = 1;
      goto LABEL_25;
    case 12:
    case 13:
      v74 = 2;
LABEL_25:
      if ( (_QWORD)v81 == 1 )
      {
        sub_2E1490((__int64)&v78, v74, (__int64)v80, 1);
        v64 = *a1;
        v65 = (__int64)v78;
        v78 = nullptr;
        si128 = (__m128)_mm_loadu_si128(&v79);
        v79 = 0;
        if ( v64 )
        {
          a1[1] = 0;
          v75 = (__m128i)si128;
          qfree(v64, (const char *)v74);
          si128 = (__m128)_mm_load_si128(&v75);
          v66 = (__int64)v78;
          *a1 = v65;
          *(__m128 *)(a1 + 1) = si128;
          if ( v66 )
          {
            v79.m128i_i64[0] = 0;
            *(double *)si128.m128_u64 = qfree(v66, (const char *)v74);
          }
        }
        else
        {
          *a1 = v65;
          *(__m128 *)(a1 + 1) = si128;
        }
        sub_2E1490((__int64)&v78, v74, (__int64)v80, 0);
        v71 = &s1;
        if ( v79.m128i_i64[0] )
          v71 = v78;
        v31 = (__int64)v11;
        sub_169700(
          (int)"The register %s at %a has the value %s\n",
          (__int64)v11,
          a2,
          (__int64)v71,
          v67,
          v68,
          si128,
          (__m128)0LL,
          a6,
          a7,
          v69,
          v70,
          a10,
          a11,
          v73);
        if ( v78 )
        {
          v79.m128i_i64[0] = 0;
          *(double *)si128.m128_u64 = qfree(v78, v11);
        }
      }
      else
      {
        v31 = *a1;
        if ( (unsigned __int64)a1[2] <= 0x3A )
        {
          v63 = qvector_reserve(a1, v31, 59, 1);
          *a1 = v63;
          v31 = v63;
        }
        v32 = _mm_load_si128((const __m128i *)&xmmword_5DCEF0);
        a1[1] = 59;
        *(__m128i *)v31 = v32;
        *(__m128i *)(v31 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCF00);
        *(__m128i *)(v31 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DCF10);
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCF20);
        *(__m128 *)(v31 + 42) = si128;
        *(_BYTE *)(*a1 + 58) = 0;
        v33 = (__int64)v80;
        if ( 24LL * (_QWORD)v81 )
        {
          do
          {
            sub_2E1490((__int64)&v78, v74, v33, 0);
            v38 = &s1;
            if ( v79.m128i_i64[0] )
              v38 = v78;
            v31 = (__int64)v11;
            sub_169700(
              (int)"The register %s at %a has the value %s\n",
              (__int64)v11,
              a2,
              (__int64)v38,
              v34,
              v35,
              si128,
              a5,
              a6,
              a7,
              v36,
              v37,
              a10,
              a11,
              v73);
            if ( v78 )
            {
              v79.m128i_i64[0] = 0;
              *(double *)si128.m128_u64 = qfree(v78, v11);
            }
            v33 += 24;
          }
          while ( (const char *)v33 != &v80[24 * (_QWORD)v81] );
        }
      }
      break;
    default:
LABEL_55:
      if ( v82 )
      {
        v54 = 28;
        v55 = 27;
        v56 = "(internal error: bad value)";
      }
      else
      {
        v54 = 30;
        v55 = 29;
        v56 = "(internal error: empty value)";
      }
      v57 = (_QWORD *)*a1;
      if ( a1[2] < v54 )
      {
        v72 = qvector_reserve(a1, v57, v54, 1);
        *a1 = v72;
        v57 = (_QWORD *)v72;
      }
      a1[1] = v54;
      v58 = (unsigned __int64)(v57 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v57 = *(_QWORD *)v56;
      *(_QWORD *)((char *)v57 + v55 - 8) = *(_QWORD *)&v56[v55 - 8];
      v59 = (char *)v57 - v58;
      v60 = 0;
      v61 = (const char *)(v56 - v59);
      v31 = ((_DWORD)v55 + (_DWORD)v59) & 0xFFFFFFF8;
      do
      {
        v62 = v60;
        v60 += 8;
        *(_QWORD *)(v58 + v62) = *(_QWORD *)&v61[v62];
      }
      while ( v60 < (unsigned int)v31 );
      *(_BYTE *)(*a1 + v55) = 0;
      break;
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    *(double *)si128.m128_u64 = qfree(v76, (const char *)v31);
  }
  if ( !v80 )
    return 1;
  *(_QWORD *)&v81 = 0;
  qfree(v80, (const char *)v31, *(double *)si128.m128_u64);
  return 1;
}
