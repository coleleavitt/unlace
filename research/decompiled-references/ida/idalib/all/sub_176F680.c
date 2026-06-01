__int64 __fastcall sub_176F680(__int64 *a1, const __m128i *a2, __m128i *a3, char a4, __m128 a5)
{
  __int64 v5; // r13
  __int64 v8; // r14
  unsigned __int16 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r9
  __int64 v14; // r14
  bool v15; // cl
  __int64 v16; // rax
  int v17; // edx
  __m128i v18; // xmm6
  void **v20; // rsi
  __int64 *v21; // rax
  unsigned __int64 v22; // rbx
  __m128i v23; // xmm2
  __m128i si128; // xmm3
  __int64 *v25; // rax
  __int64 v26; // rsi
  void *v27; // rdx
  unsigned int v28; // r15d
  __m128 v29; // xmm1
  int v30; // eax
  __int64 v31; // r8
  _QWORD *v32; // rsi
  __m128i v33; // xmm5
  __m128i v34; // xmm7
  void *v35; // rdx
  char v36; // r12
  __int64 v37; // rsi
  __m128i v38; // xmm0
  bool v39; // cc
  __m128i v40; // xmm6
  __m128i v41; // xmm6
  __m128i v42; // xmm7
  __m128 v43; // [rsp+0h] [rbp-A8h] BYREF
  void *v44; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v45; // [rsp+18h] [rbp-90h]
  char v46; // [rsp+1Ch] [rbp-8Ch]
  __m128i v47; // [rsp+20h] [rbp-88h] BYREF
  __m128i v48; // [rsp+30h] [rbp-78h] BYREF
  __m128i v49; // [rsp+40h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v51; // [rsp+60h] [rbp-48h]

  switch ( a2->m128i_i32[0] & 0x7FFFFFFF )
  {
    case 1:
      v20 = (void **)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v20 )
        v20 = (void **)sub_A81910(*(_QWORD **)(*a1 + 248), a2->m128i_i64[1], 0);
      LODWORD(v5) = 1;
      v21 = (__int64 *)sub_176A140(a1, v20, a5);
      if ( v21 )
      {
        v22 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFCLL;
        LODWORD(v5) = 0;
        sub_F1D250((__int64)&v47, *v21, 0, 0);
        v23 = _mm_load_si128(&v47);
        ptr[1] = (void *)(v22 | 2);
        ptr[0] = (void *)v48.m128i_i64[0];
        si128 = _mm_load_si128((const __m128i *)ptr);
        *a3 = v23;
        a3[1] = si128;
      }
      return (unsigned int)v5;
    case 2:
    case 3:
    case 4:
    case 5:
      v12 = sub_F1D610((__int64)a2);
      v14 = (__int64)sub_176A2F0(a1, v12, a5);
      if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_14;
      v15 = 1;
      v16 = 0;
      if ( (a2->m128i_i32[0] & 0x7FFFFFFF) != 2 )
        goto LABEL_9;
      v5 = a2[1].m128i_i64[0];
      if ( !v5 )
      {
        if ( v14 != v12 )
          goto LABEL_42;
LABEL_35:
        LODWORD(v5) = 0;
        *a3 = _mm_load_si128(a2);
        a3[1] = _mm_load_si128(a2 + 1);
        return (unsigned int)v5;
      }
      v16 = sub_17473B0((__int64)a1, a2[1].m128i_i64[0]);
      if ( !v16 )
        goto LABEL_14;
      v15 = v16 == v5;
LABEL_9:
      LOBYTE(v5) = v15 && v12 == v14;
      if ( (_BYTE)v5 )
        goto LABEL_35;
      v17 = a2->m128i_i32[0] & 0x7FFFFFFF;
      if ( v17 != 4 )
      {
        if ( v17 == 3 )
        {
          sub_F1D250((__int64)&v47, v14, 1, 0);
          v34 = _mm_load_si128(&v47);
          ptr[1] = nullptr;
          ptr[0] = (void *)v48.m128i_i64[0];
          *a3 = v34;
          a3[1] = _mm_load_si128((const __m128i *)ptr);
          return (unsigned int)v5;
        }
        if ( v17 != 2 )
        {
          sub_F1EED0((__int64)&v47, *(_QWORD **)(*a1 + 248), v14, a2->m128i_i64[1], 0, v13);
          v18 = _mm_load_si128(&v47);
          ptr[1] = nullptr;
          ptr[0] = (void *)v48.m128i_i64[0];
          *a3 = v18;
          a3[1] = _mm_load_si128((const __m128i *)ptr);
          return (unsigned int)v5;
        }
        v5 = v16;
LABEL_42:
        sub_F1D290(v47.m128i_i32, v5, v14, 0);
        v41 = _mm_load_si128(&v47);
        LODWORD(v5) = 0;
        ptr[1] = nullptr;
        ptr[0] = (void *)v48.m128i_i64[0];
        v42 = _mm_load_si128((const __m128i *)ptr);
        *a3 = v41;
        a3[1] = v42;
        return (unsigned int)v5;
      }
      v35 = (void *)a2->m128i_i64[1];
      v36 = (unsigned __int8)a2->m128i_i8[7] >> 7;
      v37 = a2->m128i_i32[1] & 0x7FFFFFFF;
      if ( (unsigned int)v37 > 0x40 )
      {
        sub_2205600(&v49, v37, v35, ((unsigned __int64)(unsigned int)v37 + 63) >> 6);
        v46 = v36;
        v45 = v49.m128i_u32[2];
        v44 = (void *)v49.m128i_i64[0];
      }
      else
      {
        v45 = v37;
        v44 = v35;
        v46 = v36;
      }
      sub_F1F190((__int64)&v47, *(_QWORD **)(*a1 + 248), (void ***)&v44, v14, 0, v13);
      v38 = _mm_load_si128(&v47);
      ptr[1] = nullptr;
      v39 = v45 <= 0x40;
      ptr[0] = (void *)v48.m128i_i64[0];
      v40 = _mm_load_si128((const __m128i *)ptr);
      v49 = v38;
      *a3 = v38;
      a3[1] = v40;
      if ( !v39 && v44 )
        operator delete[](v44);
      return (unsigned int)v5;
    case 6:
      v25 = (__int64 *)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
      v26 = *v25;
      v27 = (void *)v25[1];
      if ( *v25 )
      {
        v26 = sub_176EE90(a1, v26, v27, 0, 0);
        if ( !v26 )
          goto LABEL_14;
      }
      v28 = 0;
      v43.m128_u64[0] = (unsigned __int64)v27;
      v49 = 0;
      *(_OWORD *)ptr = 0;
      v29 = _mm_loadh_ps((const double *)v43.m128_u64);
      v51 = 0;
      v43 = v29;
      sub_15AB8B0((__int64)&v49, v26, (__int64)v27);
      if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
        v28 = *(_DWORD *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
      sub_F22A90(&v47, a2->m128i_i64[1]);
      v44 = (void *)sub_17475E0(a1, (__int64)&v49, v47.m128i_i64[0], v28, 0, 0, 0);
      LOBYTE(v30) = sub_F22B30(&v44);
      LODWORD(v5) = v30;
      if ( !(_BYTE)v30 )
      {
        v31 = 0;
        if ( (a2->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
          v31 = *(unsigned int *)((a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
        v32 = *(_QWORD **)(*a1 + 248);
        v47.m128i_i64[0] = 6;
        v47.m128i_i64[1] = (__int64)v44;
        sub_F1ECA0(&v48.m128i_u64[1], v32, v43.m128_u64[0], v43.m128_u64[1], v31, 0);
        v33 = _mm_load_si128(&v48);
        *a3 = _mm_load_si128(&v47);
        a3[1] = v33;
      }
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      return (unsigned int)v5;
    case 8:
      v8 = *a1;
      sub_18C79B0(*a1, 4 * (unsigned int)(a4 == 0), 0, 1);
      v9 = (unsigned __int16 *)(a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
      if ( (a2[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        v9 = (unsigned __int16 *)a2->m128i_i64[1];
      LODWORD(v5) = 1;
      v10 = sub_175B800(a1, v9);
      v11 = sub_19146D0(*a1, v10);
      if ( v11 != 1 )
      {
        LODWORD(v5) = 0;
        a3->m128i_i64[0] = a3->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
        a3->m128i_i64[1] = v11 & 0xFFFFFFFFFFFFFFFELL;
        a3[1].m128i_i64[1] = v11 & 0xFFFFFFFFFFFFFFFCLL | 1;
      }
      sub_190D5E0(v8);
      return (unsigned int)v5;
    default:
LABEL_14:
      LODWORD(v5) = 1;
      return (unsigned int)v5;
  }
}
