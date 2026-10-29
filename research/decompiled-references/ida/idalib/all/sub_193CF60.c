__int64 __fastcall sub_193CF60(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 *v5; // rax
  __int64 v6; // r8
  bool v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  bool v15; // zf
  unsigned int v16; // r14d
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  char *v19; // rcx
  __m128i *p_si128; // rdx
  __m128 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edx
  int v26; // ecx
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  __m128i *v30; // rcx
  __m128i *v31; // rax
  __m128i v32; // xmm3
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  unsigned int v40; // edx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rdx
  __m128i *v43; // rcx
  __m128i *v44; // rax
  __m128i v45; // xmm6
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // [rsp+10h] [rbp-128h]
  __int64 v50; // [rsp+10h] [rbp-128h]
  unsigned __int64 v51; // [rsp+10h] [rbp-128h]
  unsigned __int64 v52; // [rsp+10h] [rbp-128h]
  _BYTE *v53; // [rsp+10h] [rbp-128h]
  unsigned __int64 v54; // [rsp+10h] [rbp-128h]
  _BYTE *v55; // [rsp+10h] [rbp-128h]
  unsigned __int64 v56; // [rsp+10h] [rbp-128h]
  unsigned __int64 v57; // [rsp+10h] [rbp-128h]
  _BYTE *v58; // [rsp+10h] [rbp-128h]
  unsigned __int64 v59; // [rsp+10h] [rbp-128h]
  __int64 v60; // [rsp+28h] [rbp-110h]
  unsigned __int64 v61; // [rsp+30h] [rbp-108h]
  unsigned __int64 v62; // [rsp+30h] [rbp-108h]
  unsigned __int64 v63; // [rsp+30h] [rbp-108h]
  unsigned __int64 v64; // [rsp+30h] [rbp-108h]
  unsigned __int64 v65; // [rsp+30h] [rbp-108h]
  unsigned __int64 v66; // [rsp+38h] [rbp-100h]
  __m128i si128; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v68; // [rsp+50h] [rbp-E8h]
  int v69; // [rsp+58h] [rbp-E0h]
  int v70; // [rsp+5Ch] [rbp-DCh]
  int v71; // [rsp+60h] [rbp-D8h]
  void *ptr[2]; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD v73[4]; // [rsp+80h] [rbp-B8h] BYREF
  void *v74; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-90h]
  _BYTE v76[136]; // [rsp+B0h] [rbp-88h] BYREF

  v74 = v76;
  v75 = 0x200000000LL;
  sub_EE9E50((__m128 *)ptr, a2);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v68 = v73[0];
  if ( (si128.m128i_i8[8] & 3) != 0 )
    v5 = (unsigned __int64 *)sub_EF2B30((__int64)&si128);
  else
    v5 = (unsigned __int64 *)si128.m128i_i64[0];
  v60 = sub_1933BC0(a1, *v5, *(double *)a3.m128_u64, a4);
  if ( v60 == 1 )
  {
    v38 = 1;
    goto LABEL_34;
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  ptr[0] = v73;
  ptr[1] = (void *)0x400000000LL;
  if ( v6 == v6 + 24LL * (*(_WORD *)(a2 + 20) >> 1) )
  {
LABEL_56:
    v38 = sub_1A13360(*a1, &v74, *(unsigned int *)(a2 + 16), *(_BYTE *)(a2 + 20) & 1, v60 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_32;
  }
  v8 = v6 + 24LL * (*(_WORD *)(a2 + 20) >> 1);
  v9 = v6;
  while ( !*(_DWORD *)v9 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( (v10 & 1) != 0 || !v10 )
    {
      v7 = 1;
LABEL_13:
      v16 = *(_DWORD *)(v9 + 20);
      v49 = *(_DWORD *)(v9 + 16);
      si128.m128i_i64[1] = sub_C00930(v9);
      v17 = (unsigned int)v75;
      v68 = __PAIR64__(v16, v49);
      v18 = (unsigned int)v75 + 1LL;
      si128.m128i_i32[0] = 0;
      if ( v18 > HIDWORD(v75) )
      {
        if ( v74 > &si128 || &si128 >= (__m128i *)((char *)v74 + 40 * (unsigned int)v75) )
        {
          sub_2237220(&v74, v76, v18, 40);
          v19 = (char *)v74;
          v17 = (unsigned int)v75;
          p_si128 = &si128;
        }
        else
        {
          v53 = v74;
          sub_2237220(&v74, v76, v18, 40);
          v19 = (char *)v74;
          v17 = (unsigned int)v75;
          p_si128 = (__m128i *)((char *)v74 + (char *)&si128 - v53);
        }
      }
      else
      {
        v19 = (char *)v74;
        p_si128 = &si128;
      }
      a3 = (__m128)_mm_loadu_si128(p_si128);
      v21 = (__m128 *)&v19[40 * v17];
      *v21 = a3;
      a4 = (__m128)_mm_loadu_si128(p_si128 + 1);
      LODWORD(v75) = v75 + 1;
      v21[1] = a4;
      v21[2].m128_u64[0] = p_si128[2].m128i_u64[0];
      goto LABEL_16;
    }
    v11 = sub_18CBB50((__int64)a1, v10);
    if ( v11 )
    {
      v14 = *(_QWORD *)(v9 + 8);
      if ( (v14 & 1) != 0 )
      {
        v7 = 1;
        goto LABEL_12;
      }
    }
    else
    {
      v14 = *(_QWORD *)(v9 + 8);
      if ( (v14 & 1) != 0 )
        goto LABEL_12;
    }
    v15 = v11 == v14;
    v14 = 1;
    if ( !v15 )
      v7 = 1;
LABEL_12:
    if ( !(unsigned __int8)sub_B78060(v11, v10, v14, v12, v13) )
      goto LABEL_13;
LABEL_16:
    v9 += 24;
    if ( v8 == v9 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)v9 == 1 )
  {
    v36 = sub_C033F0(a2, v9);
    v37 = sub_1933BC0(a1, v36, *(double *)a3.m128_u64, a4);
    if ( v37 == 1 )
      goto LABEL_31;
    v40 = *(_DWORD *)(v9 + 12);
    si128.m128i_i32[0] = 1;
    v41 = v37 & 0xFFFFFFFFFFFFFFFELL;
    si128.m128i_i64[1] = v37 & 0xFFFFFFFFFFFFFFFELL;
    v68 = v40;
    v42 = (unsigned int)v75 + 1LL;
    v43 = (__m128i *)((char *)v74 + 40 * (unsigned int)v75);
    v44 = &si128;
    if ( v42 > HIDWORD(v75) )
    {
      v58 = v74;
      if ( v74 > &si128 || v43 <= &si128 )
      {
        v59 = v41;
        sub_2237220(&v74, v76, v42, 40);
        v41 = v59;
        v43 = (__m128i *)((char *)v74 + 40 * (unsigned int)v75);
        v44 = &si128;
      }
      else
      {
        v65 = v41;
        sub_2237220(&v74, v76, v42, 40);
        v41 = v65;
        v44 = (__m128i *)((char *)v74 + (char *)&si128 - v58);
        v43 = (__m128i *)((char *)v74 + 40 * (unsigned int)v75);
      }
    }
    *v43 = _mm_loadu_si128(v44);
    v45 = _mm_loadu_si128(v44 + 1);
    LODWORD(v75) = v75 + 1;
    v43[1] = v45;
    v43[2].m128i_i64[0] = v44[2].m128i_i64[0];
    if ( !v7 )
    {
      v52 = v41;
      v48 = sub_C033F0(a2, v9);
      v41 = v52;
      v7 = v48 != v52;
    }
    sub_14B7B40((__int64)ptr, v41);
    goto LABEL_16;
  }
  v22 = sub_C03400(a2, v9);
  v50 = sub_1933BC0(a1, v22, *(double *)a3.m128_u64, a4);
  if ( v50 != 1 )
  {
    v23 = sub_C03410(a2, v9);
    v24 = sub_1933BC0(a1, v23, *(double *)a3.m128_u64, a4);
    if ( v24 != 1 )
    {
      v25 = *(_DWORD *)(v9 + 16);
      v26 = *(_DWORD *)(v9 + 12);
      si128.m128i_i32[0] = 2;
      v27 = v24 & 0xFFFFFFFFFFFFFFFELL;
      v68 = v24 & 0xFFFFFFFFFFFFFFFELL;
      v70 = v25;
      v28 = v50 & 0xFFFFFFFFFFFFFFFELL;
      v69 = v26;
      v29 = (unsigned int)v75 + 1LL;
      si128.m128i_i64[1] = v50 & 0xFFFFFFFFFFFFFFFELL;
      v30 = (__m128i *)((char *)v74 + 40 * (unsigned int)v75);
      v71 = 0;
      v31 = &si128;
      if ( v29 > HIDWORD(v75) )
      {
        v55 = v74;
        if ( v74 > &si128 || v30 <= &si128 )
        {
          v63 = v27;
          v56 = v28;
          sub_2237220(&v74, v76, v29, 40);
          v27 = v63;
          v28 = v56;
          v30 = (__m128i *)((char *)v74 + 40 * (unsigned int)v75);
          v31 = &si128;
        }
        else
        {
          v66 = v27;
          v62 = v28;
          sub_2237220(&v74, v76, v29, 40);
          v28 = v62;
          v27 = v66;
          v31 = (__m128i *)((char *)v74 + (char *)&si128 - v55);
          v30 = (__m128i *)((char *)v74 + 40 * (unsigned int)v75);
        }
      }
      *v30 = _mm_loadu_si128(v31);
      v32 = _mm_loadu_si128(v31 + 1);
      LODWORD(v75) = v75 + 1;
      v30[1] = v32;
      v30[2].m128i_i64[0] = v31[2].m128i_i64[0];
      if ( v7 || (v61 = v27, v51 = v28, v46 = sub_C03400(a2, v9), v28 = v51, v27 = v61, v46 != v51) )
      {
        v7 = 1;
      }
      else
      {
        v47 = sub_C03410(a2, v9);
        v27 = v61;
        v28 = v51;
        v7 = v47 != v61;
      }
      v33 = LODWORD(ptr[1]);
      v34 = LODWORD(ptr[1]) + 1LL;
      if ( v34 > HIDWORD(ptr[1]) )
      {
        v64 = v27;
        v57 = v28;
        sub_2237220(ptr, v73, v34, 8);
        v33 = LODWORD(ptr[1]);
        v27 = v64;
        v28 = v57;
      }
      *((_QWORD *)ptr[0] + v33) = v28;
      ++LODWORD(ptr[1]);
      v35 = LODWORD(ptr[1]);
      if ( (unsigned __int64)LODWORD(ptr[1]) + 1 > HIDWORD(ptr[1]) )
      {
        v54 = v27;
        sub_2237220(ptr, v73, LODWORD(ptr[1]) + 1LL, 8);
        v35 = LODWORD(ptr[1]);
        v27 = v54;
      }
      *((_QWORD *)ptr[0] + v35) = v27;
      ++LODWORD(ptr[1]);
      goto LABEL_16;
    }
  }
LABEL_31:
  v38 = 1;
LABEL_32:
  if ( ptr[0] != v73 )
    free(ptr[0]);
LABEL_34:
  if ( v74 != v76 )
    free(v74);
  return v38;
}
