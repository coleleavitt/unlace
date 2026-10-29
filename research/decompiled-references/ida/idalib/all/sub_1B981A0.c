__int64 __fastcall sub_1B981A0(__int64 *a1, const __m128i *a2, __m128i *a3, char a4, __m128 a5, __m128 a6)
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
  __int64 v21; // r9
  __int64 v22; // r14
  bool v23; // cl
  __int64 v24; // rax
  int v25; // edx
  __m128i v26; // xmm6
  __int64 v28; // rsi
  __int64 *v29; // rax
  unsigned __int64 v30; // rbx
  __m128i v31; // xmm2
  __m128i si128; // xmm3
  __int64 *v33; // rax
  __int64 v34; // rsi
  void *v35; // rdx
  unsigned int v36; // r15d
  __m128 v37; // xmm1
  int v38; // eax
  __int64 v39; // r8
  _QWORD *v40; // rsi
  __m128i v41; // xmm5
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
      v28 = a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v28 )
        v28 = (__int64)sub_A81910(*(_QWORD **)(*a1 + 248), a2->m128i_i64[1], 0);
      LODWORD(v6) = 1;
      v29 = sub_1B90E50(a1, v28, a5, a6);
      if ( v29 )
      {
        v30 = (unsigned __int64)v29 & 0xFFFFFFFFFFFFFFFCLL;
        LODWORD(v6) = 0;
        sub_F1D250((__int64)&v55, *v29, 0, 0);
        v31 = _mm_load_si128(&v55);
        ptr[1] = (void *)(v30 | 2);
        ptr[0] = (void *)v56.m128i_i64[0];
        si128 = _mm_load_si128((const __m128i *)ptr);
        *a3 = v31;
        a3[1] = si128;
      }
      return (unsigned int)v6;
    case 2:
    case 3:
    case 4:
    case 5:
      v20 = sub_F1D610((__int64)a2);
      v22 = (__int64)sub_1B90FD0(a1, v20, a5, a6);
      if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_14;
      v23 = 1;
      v24 = 0;
      if ( (a2->m128i_i32[0] & 0x7FFFFFFF) != 2 )
        goto LABEL_9;
      v6 = a2[1].m128i_i64[0];
      if ( !v6 )
      {
        if ( v22 != v20 )
          goto LABEL_42;
LABEL_35:
        LODWORD(v6) = 0;
        *a3 = _mm_load_si128(a2);
        a3[1] = _mm_load_si128(a2 + 1);
        return (unsigned int)v6;
      }
      v24 = sub_1B04070((__int64)a1, a2[1].m128i_i64[0]);
      if ( !v24 )
        goto LABEL_14;
      v23 = v24 == v6;
LABEL_9:
      LOBYTE(v6) = v23 && v20 == v22;
      if ( (_BYTE)v6 )
        goto LABEL_35;
      v25 = a2->m128i_i32[0] & 0x7FFFFFFF;
      if ( v25 != 4 )
      {
        if ( v25 == 3 )
        {
          sub_F1D250((__int64)&v55, v22, 1, 0);
          v42 = _mm_load_si128(&v55);
          ptr[1] = nullptr;
          ptr[0] = (void *)v56.m128i_i64[0];
          *a3 = v42;
          a3[1] = _mm_load_si128((const __m128i *)ptr);
          return (unsigned int)v6;
        }
        if ( v25 != 2 )
        {
          sub_F1EED0((__int64)&v55, *(_QWORD **)(*a1 + 248), v22, a2->m128i_i64[1], 0, v21);
          v26 = _mm_load_si128(&v55);
          ptr[1] = nullptr;
          ptr[0] = (void *)v56.m128i_i64[0];
          *a3 = v26;
          a3[1] = _mm_load_si128((const __m128i *)ptr);
          return (unsigned int)v6;
        }
        v6 = v24;
LABEL_42:
        sub_F1D290(v55.m128i_i32, v6, v22, 0);
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
      sub_F1F190((__int64)&v55, *(_QWORD **)(*a1 + 248), (void ***)&v52, v22, 0, v21);
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
      v33 = (__int64 *)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
      v34 = *v33;
      v35 = (void *)v33[1];
      if ( *v33 )
      {
        v34 = sub_1B979C0(a1, v34, v35, 0, 0);
        if ( !v34 )
          goto LABEL_14;
      }
      v36 = 0;
      v51.m128_u64[0] = (unsigned __int64)v35;
      v57 = 0;
      *(_OWORD *)ptr = 0;
      v37 = _mm_loadh_ps((const double *)v51.m128_u64);
      v59 = 0;
      v51 = v37;
      sub_15AB8B0((__int64)&v57, v34, (__int64)v35);
      if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
        v36 = *(_DWORD *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
      sub_F22A90(&v55, a2->m128i_i64[1]);
      v52 = (void *)sub_1B04180(a1, (__int64)&v57, v55.m128i_i64[0], v36, 0, 0, 0);
      LOBYTE(v38) = sub_F22B30(&v52);
      LODWORD(v6) = v38;
      if ( !(_BYTE)v38 )
      {
        v39 = 0;
        if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
          v39 = *(unsigned int *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
        v40 = *(_QWORD **)(*a1 + 248);
        v55.m128i_i64[0] = 6;
        v55.m128i_i64[1] = (__int64)v52;
        sub_F1ECA0(&v56.m128i_u64[1], v40, v51.m128_u64[0], v51.m128_u64[1], v39, 0);
        v41 = _mm_load_si128(&v56);
        *a3 = _mm_load_si128(&v55);
        a3[1] = v41;
      }
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      return (unsigned int)v6;
    case 8:
      v9 = *a1;
      sub_18C79B0(*a1, 4 * (a4 == 0), 0, 1);
      v13 = (unsigned __int16 *)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
      if ( (a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        v13 = (unsigned __int16 *)a2->m128i_i64[1];
      LODWORD(v6) = 1;
      v14 = sub_1B7CAD0(a1, v13, a5, a6, v10, v11, v12);
      v19 = sub_19146D0(*a1, v14, v15, v16, v17, v18, a5, a6);
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
