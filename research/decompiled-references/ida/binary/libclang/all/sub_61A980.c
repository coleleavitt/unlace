__int64 __fastcall sub_61A980(const __m128i *a1, __int64 a2)
{
  const __m128i **v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  __int32 v12; // r15d
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int32 v16; // r10d
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __m128i si128; // xmm0
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 (__fastcall *v29)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v30; // xmm0
  char v31; // al
  __int64 v33; // rax
  char v34; // al
  __m128i v35; // [rsp+0h] [rbp-D8h]
  __m128i v36; // [rsp+20h] [rbp-B8h]
  __m128i v37; // [rsp+20h] [rbp-B8h]
  __m128i v38; // [rsp+20h] [rbp-B8h]
  __m128i v39; // [rsp+30h] [rbp-A8h]
  unsigned __int8 v40; // [rsp+47h] [rbp-91h]
  char v41; // [rsp+48h] [rbp-90h]
  unsigned int v42; // [rsp+50h] [rbp-88h]
  __int32 v43; // [rsp+54h] [rbp-84h]
  unsigned __int64 v44; // [rsp+58h] [rbp-80h]
  __m128i v45; // [rsp+60h] [rbp-78h] BYREF
  __m128i v46; // [rsp+70h] [rbp-68h] BYREF
  __m128i v47; // [rsp+80h] [rbp-58h] BYREF
  __m128i v48[4]; // [rsp+90h] [rbp-48h] BYREF

  v40 = *(_BYTE *)(a2 + 29) & 1;
  if ( v40 )
  {
    v4 = nullptr;
    v5 = sub_79A2B0(a2);
    v6 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v4 = *(const __m128i ***)sub_79A2B0(a2);
    if ( (const __m128i **)v6 != v4 )
    {
      while ( 1 )
      {
        v7 = (__int64)*v4;
        if ( (*(_BYTE *)(a1->m128i_i64[0] + 49) & 0x20) == 0 && (*(_BYTE *)(v7 + 34) & 4) != 0 )
          goto LABEL_21;
        sub_638F70(&v45, v7, a2, a1->m128i_i64[0]);
        v12 = v45.m128i_i32[0];
        v47 = _mm_load_si128(&v45);
        v48[0] = _mm_load_si128(&v46);
        if ( (unsigned int)(v45.m128i_i32[0] - 70) <= 3 )
          goto LABEL_21;
        if ( (unsigned int)(v45.m128i_i32[0] - 1) > 0x26 && (unsigned int)(v45.m128i_i32[0] - 600) > 4 )
          goto LABEL_10;
        v38 = _mm_load_si128(&v47);
        v33 = sub_63A250((unsigned int)&v45, v7, v8, v9, v10, v11, v38.m128i_i32[0], v38.m128i_i64[1]);
        if ( !v33 )
          return v40;
        if ( (*(_BYTE *)(v33 + 29) & 2) == 0 || (*(_BYTE *)(v33 + 28) & 0x7F) == 0x10 )
        {
LABEL_10:
          v13 = a1[5].m128i_u32[1];
          if ( !(_DWORD)v13
            || !a1[5].m128i_i32[2]
            || (v14 = sub_5FD3D0(
                        (int)&v45,
                        v7,
                        v13,
                        v9,
                        v10,
                        v11,
                        (__int128)_mm_load_si128(&v47),
                        (__int128)_mm_load_si128(v48)),
                v10 = v14,
                v11 = (unsigned int)v14,
                (_DWORD)v14)
            && (v15 = HIDWORD(v14), v7 = (unsigned int)v15, (_DWORD)v15)
            && ((v16 = a1[5].m128i_u32[2],
                 v17 = *(_QWORD *)(a1->m128i_i64[1] + 32),
                 v13 = a1[5].m128i_u32[1],
                 (_DWORD)v15 == (_DWORD)v13)
             || (v44 = v10,
                 v43 = a1[5].m128i_i32[2],
                 v42 = v10,
                 v34 = sub_CB1620(v17, (unsigned int)v15),
                 v11 = v42,
                 v16 = v43,
                 v10 = v44,
                 !v34))
            && ((_DWORD)v10 == v16 || (v7 = v16, !(unsigned __int8)sub_CB1620(v17, v16))) )
          {
            v18 = _mm_loadu_si128(a1 + 1);
            v47.m128i_i32[0] = v12;
            v36 = v18;
            v39 = _mm_loadu_si128(a1 + 2);
            v35 = _mm_load_si128(&v47);
            si128 = _mm_load_si128(v48);
            v20 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[3].m128i_i64[1])(
                    a1[4].m128i_i64[1],
                    v7,
                    v13,
                    v9,
                    v10,
                    v11,
                    v35.m128i_i64[0],
                    v35.m128i_i64[1],
                    si128.m128i_i64[0],
                    si128.m128i_i64[1],
                    v36.m128i_i64[0],
                    v36.m128i_i64[1],
                    v39.m128i_i64[0],
                    v39.m128i_i64[1]);
            if ( v20 != 1 )
            {
              if ( v20 != 2 )
                return v40;
              v25 = (unsigned int)sub_616F10(
                                    (__int64)a1,
                                    (const __m128i *)v7,
                                    v21,
                                    v22,
                                    v23,
                                    v24,
                                    (__int128)_mm_load_si128(&v47),
                                    _mm_load_si128(v48));
              v29 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[4].m128i_i64[0];
              if ( v29 )
              {
                v41 = v25;
                v37 = _mm_load_si128(&v47);
                v30 = _mm_load_si128(v48);
                v31 = v29(
                        a1[4].m128i_i64[1],
                        v7,
                        v25,
                        v26,
                        v27,
                        v28,
                        v37.m128i_i64[0],
                        v37.m128i_i64[1],
                        v30.m128i_i64[0],
                        v30.m128i_i64[1]);
                LOBYTE(v25) = v41;
                if ( v31 )
                  return v40;
              }
              if ( (_BYTE)v25 )
                return v40;
            }
          }
LABEL_21:
          if ( (const __m128i **)v6 == ++v4 )
            return 0;
        }
        else if ( (const __m128i **)v6 == ++v4 )
        {
          return 0;
        }
      }
    }
  }
  return 0;
}

