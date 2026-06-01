__int64 __fastcall sub_61B000(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rsi
  int v17; // edx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int32 v21; // r12d
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __m128i v26; // xmm0
  __m128i si128; // xmm0
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r8d
  int v32; // r9d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // r12
  unsigned __int8 (__fastcall *v39)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  char v42; // al
  __m128i v43; // [rsp+0h] [rbp-108h]
  __m128i v44; // [rsp+20h] [rbp-E8h]
  __m128i v45; // [rsp+20h] [rbp-E8h]
  __m128i v46; // [rsp+20h] [rbp-E8h]
  __m128i v47; // [rsp+30h] [rbp-D8h]
  unsigned int v48; // [rsp+50h] [rbp-B8h]
  unsigned int v49; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v50; // [rsp+58h] [rbp-B0h]
  __int64 v51; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+68h] [rbp-A0h]
  __m128i v53; // [rsp+70h] [rbp-98h] BYREF
  __m128i v54; // [rsp+80h] [rbp-88h] BYREF
  __m128i v55; // [rsp+90h] [rbp-78h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v57; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v58[4]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)a1;
  v51 = a2;
  v52 = a3;
  v5 = sub_B1E2D0(&v51);
  v6 = *(_QWORD *)(v51 + 40);
  sub_639CF0(&v53, v6, v5, v4);
  v11 = sub_619180(a1, v6, v7, v8, v9, v10, (__int128)_mm_load_si128(&v53), (__int128)_mm_load_si128(&v54));
  if ( (_BYTE)v11 )
    return 1;
  v12 = v11;
  v13 = v51;
  if ( (*(_BYTE *)(v51 + 32) & 0x3F) != 0 )
  {
    v14 = 12;
    v15 = 4LL * ((*(_BYTE *)(v51 + 32) & 0x3Fu) + 3);
    while ( 1 )
    {
      v16 = *(_QWORD *)(v13 + 2 * v14 + 24);
      sub_639C30(&v55, v16, *(unsigned int *)(v52 + v14), *(_QWORD *)a1);
      v21 = v55.m128i_i32[0];
      v57 = _mm_load_si128(&v55);
      v58[0] = _mm_load_si128(&v56);
      if ( (unsigned int)(v55.m128i_i32[0] - 70) > 3 )
      {
        if ( (unsigned int)(v55.m128i_i32[0] - 1) > 0x26 && (unsigned int)(v55.m128i_i32[0] - 600) > 4 )
          goto LABEL_20;
        v46 = _mm_load_si128(&v57);
        v41 = sub_63A250((unsigned int)&v55, v16, v17, v18, v19, v20, v46.m128i_i32[0], v46.m128i_i64[1]);
        if ( !v41 )
          return 1;
        if ( (*(_BYTE *)(v41 + 29) & 2) == 0 || (*(_BYTE *)(v41 + 28) & 0x7F) == 0x10 )
        {
LABEL_20:
          if ( (v22 = *(unsigned int *)(a1 + 84), !(_DWORD)v22)
            || !*(_DWORD *)(a1 + 88)
            || (v23 = sub_5FD3D0(
                        (int)&v55,
                        v16,
                        v22,
                        v18,
                        v19,
                        v20,
                        (__int128)_mm_load_si128(&v57),
                        (__int128)_mm_load_si128(v58)),
                v18 = v23,
                v19 = (unsigned int)v23,
                (_DWORD)v23)
            && (v24 = HIDWORD(v23), v16 = (unsigned int)v24, (_DWORD)v24)
            && ((v20 = *(unsigned int *)(a1 + 88),
                 v25 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL),
                 v22 = *(unsigned int *)(a1 + 84),
                 (_DWORD)v24 == (_DWORD)v22)
             || (v50 = v18,
                 v49 = *(_DWORD *)(a1 + 88),
                 v48 = v18,
                 v42 = sub_CB1620(v25, (unsigned int)v24),
                 v19 = v48,
                 v20 = v49,
                 v18 = v50,
                 !v42))
            && ((_DWORD)v18 == (_DWORD)v20
             || (v16 = (unsigned int)v20, !(unsigned __int8)sub_CB1620(v25, (unsigned int)v20))) )
          {
            v26 = _mm_loadu_si128((const __m128i *)(a1 + 16));
            v57.m128i_i32[0] = v21;
            v44 = v26;
            v47 = _mm_loadu_si128((const __m128i *)(a1 + 32));
            v43 = _mm_load_si128(&v57);
            si128 = _mm_load_si128(v58);
            v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(a1 + 56))(
                    *(_QWORD *)(a1 + 72),
                    v16,
                    v22,
                    v18,
                    v19,
                    v20,
                    v43.m128i_i64[0],
                    v43.m128i_i64[1],
                    si128.m128i_i64[0],
                    si128.m128i_i64[1],
                    v44.m128i_i64[0],
                    v44.m128i_i64[1],
                    v47.m128i_i64[0],
                    v47.m128i_i64[1]);
            if ( v28 != 1 )
            {
              if ( v28 != 2 )
                return 1;
              v38 = sub_616F10(
                      a1,
                      (const __m128i *)v16,
                      v29,
                      v30,
                      v31,
                      v32,
                      (__int128)_mm_load_si128(&v57),
                      _mm_load_si128(v58));
              v39 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(a1 + 64);
              if ( v39 )
              {
                v45 = _mm_load_si128(&v57);
                v40 = _mm_load_si128(v58);
                if ( v39(
                       *(_QWORD *)(a1 + 72),
                       v16,
                       v34,
                       v35,
                       v36,
                       v37,
                       v45.m128i_i64[0],
                       v45.m128i_i64[1],
                       v40.m128i_i64[0],
                       v40.m128i_i64[1]) )
                {
                  return 1;
                }
              }
              if ( v38 )
                return 1;
            }
          }
        }
      }
      v14 += 4;
      if ( v15 == v14 )
        return v12;
      v13 = v51;
    }
  }
  return v12;
}

