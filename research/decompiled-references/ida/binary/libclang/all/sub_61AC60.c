__int64 __fastcall sub_61AC60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbp
  __int64 v9; // r14
  __int64 v10; // rsi
  int v11; // edx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int32 v14; // r12d
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __m128i v19; // xmm0
  __m128i si128; // xmm0
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char v29; // r12
  unsigned __int8 (__fastcall *v30)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v31; // xmm0
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  char v38; // al
  __m128i v39; // [rsp+0h] [rbp-D8h]
  __m128i v40; // [rsp+20h] [rbp-B8h]
  __m128i v41; // [rsp+20h] [rbp-B8h]
  __m128i v42; // [rsp+20h] [rbp-B8h]
  __m128i v43; // [rsp+30h] [rbp-A8h]
  unsigned int v44; // [rsp+50h] [rbp-88h]
  unsigned int v45; // [rsp+54h] [rbp-84h]
  unsigned __int64 v46; // [rsp+58h] [rbp-80h]
  __m128i v47; // [rsp+60h] [rbp-78h] BYREF
  __m128i v48; // [rsp+70h] [rbp-68h] BYREF
  __m128i v49; // [rsp+80h] [rbp-58h] BYREF
  __m128i v50[4]; // [rsp+90h] [rbp-48h] BYREF

  if ( !a2 )
    return 0;
  v7 = (__int64 *)(a2 + 24);
  v9 = a2 + (unsigned int)(8 * *(_DWORD *)(a2 + 20)) + 24;
  if ( 8 * *(_DWORD *)(a2 + 20) )
  {
    while ( 1 )
    {
      v10 = *v7;
      sub_639160(&v47, *v7, *a1, *(_QWORD *)((char *)a1 + 84), 1, a6);
      v14 = v47.m128i_i32[0];
      v49 = _mm_load_si128(&v47);
      v50[0] = _mm_load_si128(&v48);
      if ( (unsigned int)(v47.m128i_i32[0] - 70) <= 3 )
        goto LABEL_18;
      if ( (unsigned int)(v47.m128i_i32[0] - 1) > 0x26 && (unsigned int)(v47.m128i_i32[0] - 600) > 4 )
        goto LABEL_6;
      v42 = _mm_load_si128(&v49);
      v37 = sub_63A250((unsigned int)&v47, v10, v11, v12, v13, a6, v42.m128i_i32[0], v42.m128i_i64[1]);
      if ( !v37 )
        return 1;
      if ( (*(_BYTE *)(v37 + 29) & 2) == 0 || (*(_BYTE *)(v37 + 28) & 0x7F) == 0x10 )
      {
LABEL_6:
        v15 = *((unsigned int *)a1 + 21);
        if ( !(_DWORD)v15
          || !*((_DWORD *)a1 + 22)
          || (v16 = sub_5FD3D0(
                      (int)&v47,
                      v10,
                      v15,
                      v12,
                      v13,
                      a6,
                      (__int128)_mm_load_si128(&v49),
                      (__int128)_mm_load_si128(v50)),
              v12 = v16,
              v13 = (unsigned int)v16,
              (_DWORD)v16)
          && (v17 = HIDWORD(v16), v10 = (unsigned int)v17, (_DWORD)v17)
          && ((a6 = *((unsigned int *)a1 + 22),
               v18 = *(_QWORD *)(a1[1] + 32LL),
               v15 = *((unsigned int *)a1 + 21),
               (_DWORD)v17 == (_DWORD)v15)
           || (v46 = v12,
               v45 = *((_DWORD *)a1 + 22),
               v44 = v12,
               v38 = sub_CB1620(v18, (unsigned int)v17),
               v13 = v44,
               a6 = v45,
               v12 = v46,
               !v38))
          && ((_DWORD)v12 == (_DWORD)a6 || (v10 = (unsigned int)a6, !(unsigned __int8)sub_CB1620(v18, (unsigned int)a6))) )
        {
          v19 = _mm_loadu_si128((const __m128i *)a1 + 1);
          v49.m128i_i32[0] = v14;
          v40 = v19;
          v43 = _mm_loadu_si128((const __m128i *)a1 + 2);
          v39 = _mm_load_si128(&v49);
          si128 = _mm_load_si128(v50);
          v21 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[7])(
                  a1[9],
                  v10,
                  v15,
                  v12,
                  v13,
                  a6,
                  v39.m128i_i64[0],
                  v39.m128i_i64[1],
                  si128.m128i_i64[0],
                  si128.m128i_i64[1],
                  v40.m128i_i64[0],
                  v40.m128i_i64[1],
                  v43.m128i_i64[0],
                  v43.m128i_i64[1]);
          if ( v21 != 1 )
          {
            if ( v21 != 2 )
              return 1;
            v29 = sub_616F10(
                    (__int64)a1,
                    (const __m128i *)v10,
                    v22,
                    v23,
                    v24,
                    a6,
                    (__int128)_mm_load_si128(&v49),
                    _mm_load_si128(v50));
            v30 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[8];
            if ( v30 )
            {
              v41 = _mm_load_si128(&v49);
              v31 = _mm_load_si128(v50);
              if ( v30(
                     a1[9],
                     v10,
                     v26,
                     v27,
                     v28,
                     a6,
                     v41.m128i_i64[0],
                     v41.m128i_i64[1],
                     v31.m128i_i64[0],
                     v31.m128i_i64[1]) )
              {
                return 1;
              }
            }
            if ( v29 )
              return 1;
          }
        }
LABEL_18:
        if ( ++v7 == (__int64 *)v9 )
          break;
      }
      else if ( ++v7 == (__int64 *)v9 )
      {
        break;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 23) & 0x40) == 0 )
    return 0;
  v32 = *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24);
  if ( !v32 )
    return 0;
  sub_639270(&v49, v32, 0, *a1, *(_QWORD *)((char *)a1 + 84));
  return sub_619180((__int64)a1, v32, v33, v34, v35, v36, (__int128)_mm_load_si128(&v49), (__int128)_mm_load_si128(v50));
}

