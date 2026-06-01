__int64 __fastcall sub_619180(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rdx
  __m128i v9; // xmm0
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 (__fastcall *v20)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v21; // xmm0
  unsigned __int64 v23; // rbp
  __int64 v24; // rax
  unsigned int v25; // r13d
  __int64 v26; // r14
  __m128i v27; // [rsp+0h] [rbp-68h]
  __m128i v28; // [rsp+20h] [rbp-48h]
  __m128i v29; // [rsp+20h] [rbp-48h]
  __m128i v30; // [rsp+20h] [rbp-48h]
  __m128i v31; // [rsp+30h] [rbp-38h]

  if ( (unsigned int)(a7 - 70) > 3 )
  {
    if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
      goto LABEL_4;
    v30 = _mm_loadu_si128((const __m128i *)&a7);
    v24 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v30.m128i_i32[0], v30.m128i_i64[1]);
    if ( !v24 )
      return 1;
    if ( (*(_BYTE *)(v24 + 29) & 2) == 0 || (*(_BYTE *)(v24 + 28) & 0x7F) == 0x10 )
    {
LABEL_4:
      v8 = *(unsigned int *)(a1 + 84);
      if ( !(_DWORD)v8
        || !*(_DWORD *)(a1 + 88)
        || (v23 = sub_5FD3D0(
                    a1,
                    a2,
                    v8,
                    a4,
                    a5,
                    a6,
                    (__int128)_mm_loadu_si128((const __m128i *)&a7),
                    (__int128)_mm_loadu_si128((const __m128i *)&a8)),
            a2 = HIDWORD(v23),
            (_DWORD)v23)
        && HIDWORD(v23)
        && ((v25 = *(_DWORD *)(a1 + 88),
             v26 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL),
             v8 = *(unsigned int *)(a1 + 84),
             HIDWORD(v23) == (_DWORD)v8)
         || !(unsigned __int8)sub_CB1620(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), HIDWORD(v23)))
        && ((_DWORD)v23 == v25 || (a2 = v25, !(unsigned __int8)sub_CB1620(v26, v25))) )
      {
        v28 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v31 = _mm_loadu_si128((const __m128i *)(a1 + 32));
        v27 = _mm_loadu_si128((const __m128i *)&a7);
        v9 = _mm_loadu_si128((const __m128i *)&a8);
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(a1 + 56))(
                *(_QWORD *)(a1 + 72),
                a2,
                v8,
                a4,
                a5,
                a6,
                v27.m128i_i64[0],
                v27.m128i_i64[1],
                v9.m128i_i64[0],
                v9.m128i_i64[1],
                v28.m128i_i64[0],
                v28.m128i_i64[1],
                v31.m128i_i64[0],
                v31.m128i_i64[1]);
        if ( v10 != 1 )
        {
          if ( v10 == 2 )
          {
            v17 = sub_616F10(
                    a1,
                    (const __m128i *)a2,
                    v11,
                    v12,
                    v13,
                    v14,
                    (__int128)_mm_loadu_si128((const __m128i *)&a7),
                    _mm_loadu_si128((const __m128i *)&a8));
            v20 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(a1 + 64);
            if ( v20 )
            {
              v29 = _mm_loadu_si128((const __m128i *)&a7);
              v21 = _mm_loadu_si128((const __m128i *)&a8);
              v17 |= v20(
                       *(_QWORD *)(a1 + 72),
                       a2,
                       v15,
                       v16,
                       v18,
                       v19,
                       v29.m128i_i64[0],
                       v29.m128i_i64[1],
                       v21.m128i_i64[0],
                       v21.m128i_i64[1]);
            }
            return v17;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

