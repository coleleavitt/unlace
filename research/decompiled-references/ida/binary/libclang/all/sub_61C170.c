_BOOL8 __fastcall sub_61C170(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbp
  __int64 v9; // r13
  __int64 v10; // rsi
  __int32 v11; // r12d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __m128i si128; // xmm0
  int v17; // eax
  char v18; // r12
  unsigned __int8 (__fastcall *v19)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v20; // xmm0
  _BOOL4 v21; // ebp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // al
  __m128i v31; // [rsp+0h] [rbp-D8h]
  __m128i v32; // [rsp+20h] [rbp-B8h]
  __m128i v33; // [rsp+20h] [rbp-B8h]
  __m128i v34; // [rsp+20h] [rbp-B8h]
  __m128i v35; // [rsp+30h] [rbp-A8h]
  unsigned int v36; // [rsp+50h] [rbp-88h]
  unsigned int v37; // [rsp+54h] [rbp-84h]
  __int64 v38; // [rsp+58h] [rbp-80h]
  __m128i v39; // [rsp+60h] [rbp-78h] BYREF
  __m128i v40; // [rsp+70h] [rbp-68h] BYREF
  __m128i v41; // [rsp+80h] [rbp-58h] BYREF
  __m128i v42[4]; // [rsp+90h] [rbp-48h] BYREF

  v7 = (__int64 *)(a2 + 104);
  v9 = a2 + 104 + 8LL * *(unsigned int *)(a2 + 100);
  if ( v9 != a2 + 104 )
  {
    do
    {
      while ( 1 )
      {
        v10 = *v7;
        sub_639160(&v39, *v7, *a1, *(__int64 *)((char *)a1 + 84), 1, a6);
        v11 = v39.m128i_i32[0];
        v41 = _mm_load_si128(&v39);
        v42[0] = _mm_load_si128(&v40);
        if ( (unsigned int)(v39.m128i_i32[0] - 70) <= 3 )
          goto LABEL_16;
        if ( (unsigned int)(v39.m128i_i32[0] - 1) > 0x26 && (unsigned int)(v39.m128i_i32[0] - 600) > 4 )
          break;
        v34 = _mm_load_si128(&v41);
        v23 = sub_63A250((unsigned int)&v39, v10, a3, a4, a5, a6, v34.m128i_i32[0], v34.m128i_i64[1]);
        if ( !v23 )
          return 1;
        if ( (*(_BYTE *)(v23 + 29) & 2) == 0 || (*(_BYTE *)(v23 + 28) & 0x7F) == 0x10 )
          break;
        if ( (__int64 *)v9 == ++v7 )
          goto LABEL_17;
      }
      a3 = *((unsigned int *)a1 + 21);
      if ( (_DWORD)a3 && *((_DWORD *)a1 + 22) )
      {
        v12 = sub_5FD3D0((int)&v39, v10, a3, a4, a5, a6, (__int128)_mm_load_si128(&v41), (__int128)_mm_load_si128(v42));
        a4 = v12;
        a5 = (unsigned int)v12;
        if ( !(_DWORD)v12 )
          goto LABEL_16;
        v13 = HIDWORD(v12);
        v10 = (unsigned int)v13;
        if ( !(_DWORD)v13 )
          goto LABEL_16;
        a6 = *((unsigned int *)a1 + 22);
        v14 = *(_QWORD *)(a1[1] + 32);
        a3 = *((unsigned int *)a1 + 21);
        if ( (_DWORD)v13 != (_DWORD)a3 )
        {
          v38 = a4;
          v37 = *((_DWORD *)a1 + 22);
          v36 = a4;
          v30 = sub_CB1620(v14, (unsigned int)v13);
          a5 = v36;
          a6 = v37;
          a4 = v38;
          if ( v30 )
            goto LABEL_16;
          if ( (_DWORD)v38 == v37 )
            goto LABEL_11;
LABEL_29:
          v10 = (unsigned int)a6;
          if ( (unsigned __int8)sub_CB1620(v14, (unsigned int)a6) )
            goto LABEL_16;
          goto LABEL_11;
        }
        if ( (_DWORD)a4 != (_DWORD)a6 )
          goto LABEL_29;
      }
LABEL_11:
      v15 = _mm_loadu_si128((const __m128i *)a1 + 1);
      v41.m128i_i32[0] = v11;
      v32 = v15;
      v35 = _mm_loadu_si128((const __m128i *)a1 + 2);
      v31 = _mm_load_si128(&v41);
      si128 = _mm_load_si128(v42);
      v17 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[7])(
              a1[9],
              v10,
              a3,
              a4,
              a5,
              a6,
              v31.m128i_i64[0],
              v31.m128i_i64[1],
              si128.m128i_i64[0],
              si128.m128i_i64[1],
              v32.m128i_i64[0],
              v32.m128i_i64[1],
              v35.m128i_i64[0],
              v35.m128i_i64[1]);
      if ( v17 != 1 )
      {
        if ( v17 != 2 )
          return 1;
        v18 = sub_616F10(
                (__int64)a1,
                (const __m128i *)v10,
                a3,
                a4,
                a5,
                a6,
                (__int128)_mm_load_si128(&v41),
                _mm_load_si128(v42));
        v19 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[8];
        if ( v19 )
        {
          v33 = _mm_load_si128(&v41);
          v20 = _mm_load_si128(v42);
          if ( v19(a1[9], v10, a3, a4, a5, a6, v33.m128i_i64[0], v33.m128i_i64[1], v20.m128i_i64[0], v20.m128i_i64[1]) )
            return 1;
        }
        if ( v18 )
          return 1;
      }
LABEL_16:
      ++v7;
    }
    while ( (__int64 *)v9 != v7 );
  }
LABEL_17:
  v21 = sub_61BF20(a1, a2, a3, a4, a5, a6);
  if ( v21 )
  {
    return 1;
  }
  else
  {
    v24 = sub_77BC00(a2);
    if ( v24 )
    {
      v25 = v24;
      sub_639270(&v41, v24, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
      return (_BOOL4)sub_619180(
                       (__int64)a1,
                       v25,
                       v26,
                       v27,
                       v28,
                       v29,
                       (__int128)_mm_load_si128(&v41),
                       (__int128)_mm_load_si128(v42));
    }
  }
  return v21;
}

