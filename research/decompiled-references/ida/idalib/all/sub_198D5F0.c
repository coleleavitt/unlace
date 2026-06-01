__int64 __fastcall sub_198D5F0(__int64 *a1, const __m128i *a2, __m128i *a3, char a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r13
  __int64 v9; // r14
  unsigned __int16 *v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // r9
  __int64 v20; // r14
  bool v21; // cl
  __int64 v22; // rax
  int v23; // edx
  __m128i v24; // xmm6
  __int64 v26; // rsi
  __int64 *v27; // rax
  unsigned __int64 v28; // rbx
  __m128i v29; // xmm2
  __m128i si128; // xmm3
  __int64 *v31; // rax
  __int64 v32; // rsi
  void *v33; // rdx
  unsigned int v34; // r15d
  __m128 v35; // xmm1
  int v36; // eax
  __int64 v37; // r8
  _QWORD *v38; // rsi
  __m128i v39; // xmm5
  __int64 v40; // rax
  __int64 v41; // rcx
  __m128i v42; // xmm7
  void *v43; // rdx
  char v44; // r12
  __int64 v45; // rsi
  __m128i v46; // xmm0
  bool v47; // cc
  __m128i v48; // xmm6
  __m128i v49; // xmm6
  __m128i v50; // xmm7
  __m128 v51; // [rsp+0h] [rbp-A8h] BYREF
  void *v52; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+18h] [rbp-90h]
  char v54; // [rsp+1Ch] [rbp-8Ch]
  __m128i v55; // [rsp+20h] [rbp-88h] BYREF
  __m128i v56; // [rsp+30h] [rbp-78h] BYREF
  __m128i v57; // [rsp+40h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v59; // [rsp+60h] [rbp-48h]

  switch ( a2->m128i_i32[0] & 0x7FFFFFFF )
  {
    case 1:
      v26 = a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v26 )
        v26 = (__int64)sub_A81910(*(_QWORD **)(*a1 + 248), a2->m128i_i64[1], 0);
      LODWORD(v6) = 1;
      v27 = sub_1988430(a1, v26, a5, a6);
      if ( v27 )
      {
        v28 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL;
        LODWORD(v6) = 0;
        sub_F1D250((__int64)&v55, *v27, 0, 0);
        v29 = _mm_load_si128(&v55);
        ptr[1] = (void *)(v28 | 2);
        ptr[0] = (void *)v56.m128i_i64[0];
        si128 = _mm_load_si128((const __m128i *)ptr);
        *a3 = v29;
        a3[1] = si128;
      }
      return (unsigned int)v6;
    case 2:
    case 3:
    case 4:
    case 5:
      v18 = sub_F1D610((__int64)a2);
      v20 = (__int64)sub_19885D0(a1, v18, a5, a6);
      if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_16;
      v21 = 1;
      v22 = 0;
      if ( (a2->m128i_i32[0] & 0x7FFFFFFF) != 2 )
        goto LABEL_11;
      v6 = a2[1].m128i_i64[0];
      if ( !v6 )
      {
        if ( v18 != v20 )
          goto LABEL_47;
LABEL_40:
        LODWORD(v6) = 0;
        *a3 = _mm_load_si128(a2);
        a3[1] = _mm_load_si128(a2 + 1);
        return (unsigned int)v6;
      }
      v22 = sub_18CBE40((__int64)a1, a2[1].m128i_i64[0]);
      if ( !v22 )
        goto LABEL_16;
      v21 = v22 == v6;
LABEL_11:
      LOBYTE(v6) = v21 && v18 == v20;
      if ( (_BYTE)v6 )
        goto LABEL_40;
      v23 = a2->m128i_i32[0] & 0x7FFFFFFF;
      if ( v23 != 4 )
      {
        if ( v23 == 3 )
        {
          sub_F1D250((__int64)&v55, v20, 1, 0);
          v42 = _mm_load_si128(&v55);
          ptr[1] = nullptr;
          ptr[0] = (void *)v56.m128i_i64[0];
          *a3 = v42;
          a3[1] = _mm_load_si128((const __m128i *)ptr);
          return (unsigned int)v6;
        }
        if ( v23 != 2 )
        {
          sub_F1EED0((__int64)&v55, *(_QWORD **)(*a1 + 248), v20, a2->m128i_i64[1], 0, v19);
          v24 = _mm_load_si128(&v55);
          ptr[1] = nullptr;
          ptr[0] = (void *)v56.m128i_i64[0];
          *a3 = v24;
          a3[1] = _mm_load_si128((const __m128i *)ptr);
          return (unsigned int)v6;
        }
        v6 = v22;
LABEL_47:
        sub_F1D290(v55.m128i_i32, v6, v20, 0);
        v49 = _mm_load_si128(&v55);
        LODWORD(v6) = 0;
        ptr[1] = nullptr;
        ptr[0] = (void *)v56.m128i_i64[0];
        v50 = _mm_load_si128((const __m128i *)ptr);
        *a3 = v49;
        a3[1] = v50;
        return (unsigned int)v6;
      }
      v43 = (void *)a2->m128i_i64[1];
      v44 = (unsigned __int8)a2->m128i_i8[7] >> 7;
      v45 = a2->m128i_i32[1] & 0x7FFFFFFF;
      if ( (unsigned int)v45 > 0x40 )
      {
        sub_2205600(&v57, v45, v43, ((unsigned __int64)(unsigned int)v45 + 63) >> 6);
        v54 = v44;
        v53 = v57.m128i_u32[2];
        v52 = (void *)v57.m128i_i64[0];
      }
      else
      {
        v53 = v45;
        v52 = v43;
        v54 = v44;
      }
      sub_F1F190((__int64)&v55, *(_QWORD **)(*a1 + 248), (void ***)&v52, v20, 0, v19);
      v46 = _mm_load_si128(&v55);
      ptr[1] = nullptr;
      v47 = v53 <= 0x40;
      ptr[0] = (void *)v56.m128i_i64[0];
      v48 = _mm_load_si128((const __m128i *)ptr);
      v57 = v46;
      *a3 = v46;
      a3[1] = v48;
      if ( !v47 && v52 )
        operator delete[](v52);
      return (unsigned int)v6;
    case 6:
      v31 = (__int64 *)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
      v32 = *v31;
      v33 = (void *)v31[1];
      if ( *v31 )
      {
        v32 = sub_198CB00((__int64)a1, v32, v33, 0, 0);
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = 0;
      v51.m128_u64[0] = (unsigned __int64)v33;
      v57 = 0;
      *(_OWORD *)ptr = 0;
      v35 = _mm_loadh_ps((const double *)v51.m128_u64);
      v59 = 0;
      v51 = v35;
      sub_15AB8B0((__int64)&v57, v32, (__int64)v33);
      if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
        v34 = *(_DWORD *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
      sub_F22A90(&v55, a2->m128i_i64[1]);
      v52 = (void *)sub_18CBF50(a1, (__int64)&v57, v55.m128i_i64[0], v34, 0, 0, 0);
      LOBYTE(v36) = sub_F22B30(&v52);
      LODWORD(v6) = v36;
      if ( !(_BYTE)v36 )
      {
        v37 = 0;
        if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
          v37 = *(unsigned int *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
        v38 = *(_QWORD **)(*a1 + 248);
        v55.m128i_i64[0] = 6;
        v55.m128i_i64[1] = (__int64)v52;
        sub_F1ECA0(&v56.m128i_u64[1], v38, v51.m128_u64[0], v51.m128_u64[1], v37, 0);
        v39 = _mm_load_si128(&v56);
        *a3 = _mm_load_si128(&v55);
        a3[1] = v39;
      }
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      return (unsigned int)v6;
    case 8:
      v9 = *a1;
      sub_18C74E0(
        v9,
        4 * (a4 == 0),
        *(_QWORD *)(*(_QWORD *)(v9 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 520),
        1);
      v10 = (unsigned __int16 *)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
      if ( (a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        v10 = (unsigned __int16 *)a2->m128i_i64[1];
      v11 = sub_190CCA0(a1, v10, *(double *)a5.m128_u64, a6);
      if ( v11 == 1 )
        goto LABEL_32;
      if ( v11 )
      {
        v40 = sub_1914520(*a1, v11 & 0xFFFFFFFFFFFFFFFELL, v12, v13, v14, v15, a5, a6);
        if ( v40 == 1 )
        {
LABEL_32:
          LODWORD(v6) = 1;
LABEL_8:
          sub_190D5E0(v9, a5);
          return (unsigned int)v6;
        }
        v41 = v40;
        v11 = v40 & 0xFFFFFFFFFFFFFFFELL;
        v16 = v41 & 0xFFFFFFFFFFFFFFFCLL | 1;
      }
      else
      {
        v16 = 1;
      }
      v17 = a3->m128i_i64[0] & 0xFFFFFFFE00000000LL;
      a3->m128i_i64[1] = v11;
      LODWORD(v6) = 0;
      a3[1].m128i_i64[1] = v16;
      a3->m128i_i64[0] = v17 | 8;
      goto LABEL_8;
    default:
LABEL_16:
      LODWORD(v6) = 1;
      return (unsigned int)v6;
  }
}
