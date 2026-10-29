__int64 __fastcall sub_1D24620(__int64 **a1, const __m128i *a2, __m128i *a3, char a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int16 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  bool v24; // cl
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  __m128i v28; // xmm6
  __int64 v30; // rsi
  __int64 *v31; // rax
  unsigned __int64 v32; // rbx
  __m128i v33; // xmm2
  __m128i si128; // xmm3
  __int64 *v35; // rax
  __int64 v36; // rsi
  void *v37; // rdx
  unsigned int v38; // r15d
  __m128 v39; // xmm1
  int v40; // eax
  __int64 v41; // r8
  _QWORD *v42; // rsi
  __m128i v43; // xmm5
  __m128i v44; // xmm7
  __int64 v45; // r9
  __m128i v46; // xmm0
  bool v47; // cc
  __m128i v48; // xmm6
  __m128i v49; // xmm6
  __m128i v50; // xmm7
  __m128 v51; // [rsp+0h] [rbp-A8h] BYREF
  void *v52; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+18h] [rbp-90h]
  __m128i v54; // [rsp+20h] [rbp-88h] BYREF
  __m128i v55; // [rsp+30h] [rbp-78h] BYREF
  __m128i v56; // [rsp+40h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v58; // [rsp+60h] [rbp-48h]

  switch ( a2->m128i_i32[0] & 0x7FFFFFFF )
  {
    case 1:
      v30 = a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v30 )
        v30 = (__int64)sub_A81910((_QWORD *)(*a1)[31], a2->m128i_i64[1], 0);
      LODWORD(v6) = 1;
      v31 = sub_1D1AAC0(a1, v30, a5, a6);
      if ( v31 )
      {
        v32 = (unsigned __int64)v31 & 0xFFFFFFFFFFFFFFFCLL;
        LODWORD(v6) = 0;
        sub_F1D250((__int64)&v54, *v31, 0, 0);
        v33 = _mm_load_si128(&v54);
        ptr[1] = (void *)(v32 | 2);
        ptr[0] = (void *)v55.m128i_i64[0];
        si128 = _mm_load_si128((const __m128i *)ptr);
        *a3 = v33;
        a3[1] = si128;
      }
      return (unsigned int)v6;
    case 2:
    case 3:
    case 4:
    case 5:
      v20 = sub_F1D610((__int64)a2);
      v23 = (__int64)sub_1D1AC70(a1, v20, a5, a6);
      if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_14;
      v24 = 1;
      v25 = 0;
      v26 = a2->m128i_i32[0] & 0x7FFFFFFF;
      if ( (_DWORD)v26 != 2 )
        goto LABEL_9;
      v6 = a2[1].m128i_i64[0];
      if ( !v6 )
      {
        if ( v23 != v20 )
          goto LABEL_40;
LABEL_35:
        LODWORD(v6) = 0;
        *a3 = _mm_load_si128(a2);
        a3[1] = _mm_load_si128(a2 + 1);
        return (unsigned int)v6;
      }
      v25 = sub_1D1B120((__int64)a1, a2[1].m128i_i64[0], a5, a6, v26, 1, v21, v22);
      if ( !v25 )
        goto LABEL_14;
      v24 = v25 == v6;
LABEL_9:
      LOBYTE(v6) = v24 && v20 == v23;
      if ( (_BYTE)v6 )
        goto LABEL_35;
      v27 = a2->m128i_i32[0] & 0x7FFFFFFF;
      if ( v27 != 4 )
      {
        if ( v27 == 3 )
        {
          sub_F1D250((__int64)&v54, v23, 1, 0);
          v44 = _mm_load_si128(&v54);
          ptr[1] = nullptr;
          ptr[0] = (void *)v55.m128i_i64[0];
          *a3 = v44;
          a3[1] = _mm_load_si128((const __m128i *)ptr);
          return (unsigned int)v6;
        }
        if ( v27 != 2 )
        {
          sub_F1EED0((__int64)&v54, (_QWORD *)(*a1)[31], v23, a2->m128i_i64[1], 0, v22);
          v28 = _mm_load_si128(&v54);
          ptr[1] = nullptr;
          ptr[0] = (void *)v55.m128i_i64[0];
          *a3 = v28;
          a3[1] = _mm_load_si128((const __m128i *)ptr);
          return (unsigned int)v6;
        }
        v6 = v25;
LABEL_40:
        sub_F1D290(v54.m128i_i32, v6, v23, 0);
        v49 = _mm_load_si128(&v54);
        LODWORD(v6) = 0;
        ptr[1] = nullptr;
        ptr[0] = (void *)v55.m128i_i64[0];
        v50 = _mm_load_si128((const __m128i *)ptr);
        *a3 = v49;
        a3[1] = v50;
        return (unsigned int)v6;
      }
      sub_1CB2F30((__int64)&v52, (__int64)a2);
      sub_F1F190((__int64)&v54, (_QWORD *)(*a1)[31], (void ***)&v52, v23, 0, v45);
      v46 = _mm_load_si128(&v54);
      ptr[1] = nullptr;
      v47 = v53 <= 0x40;
      ptr[0] = (void *)v55.m128i_i64[0];
      v48 = _mm_load_si128((const __m128i *)ptr);
      v56 = v46;
      *a3 = v46;
      a3[1] = v48;
      if ( !v47 && v52 )
        operator delete[](v52);
      return (unsigned int)v6;
    case 6:
      v35 = (__int64 *)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
      v36 = *v35;
      v37 = (void *)v35[1];
      if ( *v35 )
      {
        v36 = sub_1D23E30(a1, v36, v37, 0, 0);
        if ( !v36 )
          goto LABEL_14;
      }
      v38 = 0;
      v51.m128_u64[0] = (unsigned __int64)v37;
      v56 = 0;
      *(_OWORD *)ptr = 0;
      v39 = _mm_loadh_ps((const double *)v51.m128_u64);
      v58 = 0;
      v51 = v39;
      sub_15AB8B0((__int64)&v56, v36, (__int64)v37);
      if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
        v38 = *(_DWORD *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
      sub_F22A90(&v54, a2->m128i_i64[1]);
      v52 = (void *)sub_1D1B260(a1, &v56, v54.m128i_i64[0], v38, 0, 0, (__m128)0LL, v39, 0);
      LOBYTE(v40) = sub_F22B30(&v52);
      LODWORD(v6) = v40;
      if ( !(_BYTE)v40 )
      {
        v41 = 0;
        if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
          v41 = *(unsigned int *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
        v42 = (_QWORD *)(*a1)[31];
        v54.m128i_i64[0] = 6;
        v54.m128i_i64[1] = (__int64)v52;
        sub_F1ECA0(&v55.m128i_u64[1], v42, v51.m128_u64[0], v51.m128_u64[1], v41, 0);
        v43 = _mm_load_si128(&v55);
        *a3 = _mm_load_si128(&v54);
        a3[1] = v43;
      }
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      return (unsigned int)v6;
    case 8:
      v9 = (__int64)*a1;
      sub_18C79B0((__int64)*a1, 4 * (a4 == 0), 0, 1);
      v13 = (unsigned __int16 *)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
      if ( (a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        v13 = (unsigned __int16 *)a2->m128i_i64[1];
      LODWORD(v6) = 1;
      v14 = sub_1D11200((__int64 *)a1, v13, a5, a6, v10, v11, v12);
      v19 = sub_19146D0((__int64)*a1, v14, v15, v16, v17, v18, a5, a6);
      if ( v19 != 1 )
      {
        LODWORD(v6) = 0;
        a3->m128i_i64[0] = a3->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
        a3->m128i_i64[1] = v19 & 0xFFFFFFFFFFFFFFFELL;
        a3[1].m128i_i64[1] = v19 & 0xFFFFFFFFFFFFFFFCLL | 1;
      }
      sub_190D5E0(v9, a5);
      return (unsigned int)v6;
    default:
LABEL_14:
      LODWORD(v6) = 1;
      return (unsigned int)v6;
  }
}
