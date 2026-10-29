__int64 __fastcall sub_61E490(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rax
  __int64 *v9; // rbp
  __int64 *v10; // r13
  __int64 v11; // rsi
  int v12; // edx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int32 v15; // r12d
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  __m128i v20; // xmm0
  __m128i si128; // xmm0
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char v29; // r12
  unsigned __int8 (__fastcall *v30)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  bool (__fastcall *v33)(__int64); // rdx
  __int64 v34; // r12
  __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v42; // rax
  char v43; // al
  __m128i v44; // [rsp+0h] [rbp-D8h]
  __m128i v45; // [rsp+20h] [rbp-B8h]
  __m128i v46; // [rsp+20h] [rbp-B8h]
  __m128i v47; // [rsp+20h] [rbp-B8h]
  __m128i v48; // [rsp+30h] [rbp-A8h]
  unsigned int v49; // [rsp+50h] [rbp-88h]
  unsigned int v50; // [rsp+54h] [rbp-84h]
  unsigned __int64 v51; // [rsp+58h] [rbp-80h]
  __m128i v52; // [rsp+60h] [rbp-78h] BYREF
  __m128i v53; // [rsp+70h] [rbp-68h] BYREF
  __m128i v54; // [rsp+80h] [rbp-58h] BYREF
  __m128i v55[4]; // [rsp+90h] [rbp-48h] BYREF

  v8 = *(__int64 **)(a2 + 88);
  if ( v8 && (unsigned __int8)sub_61B330(a1, *v8, (__int64)(v8 + 1)) )
    return 1;
  v9 = *(__int64 **)(a2 + 96);
  v10 = &v9[*(unsigned int *)(a2 + 104)];
  if ( v10 != v9 )
  {
    while ( 1 )
    {
      v11 = *v9;
      sub_639160(&v52, *v9, *a1, *(_QWORD *)((char *)a1 + 84), 1, a6);
      v15 = v52.m128i_i32[0];
      v54 = _mm_load_si128(&v52);
      v55[0] = _mm_load_si128(&v53);
      if ( (unsigned int)(v52.m128i_i32[0] - 70) <= 3 )
        goto LABEL_18;
      if ( (unsigned int)(v52.m128i_i32[0] - 1) > 0x26 && (unsigned int)(v52.m128i_i32[0] - 600) > 4 )
        goto LABEL_7;
      v47 = _mm_load_si128(&v54);
      v42 = sub_63A250((unsigned int)&v52, v11, v12, v13, v14, a6, v47.m128i_i32[0], v47.m128i_i64[1]);
      if ( !v42 )
        return 1;
      if ( (*(_BYTE *)(v42 + 29) & 2) == 0 || (*(_BYTE *)(v42 + 28) & 0x7F) == 0x10 )
      {
LABEL_7:
        v16 = *((unsigned int *)a1 + 21);
        if ( !(_DWORD)v16
          || !*((_DWORD *)a1 + 22)
          || (v17 = sub_5FD3D0(
                      (int)&v52,
                      v11,
                      v16,
                      v13,
                      v14,
                      a6,
                      (__int128)_mm_load_si128(&v54),
                      (__int128)_mm_load_si128(v55)),
              v13 = v17,
              v14 = (unsigned int)v17,
              (_DWORD)v17)
          && (v18 = HIDWORD(v17), v11 = (unsigned int)v18, (_DWORD)v18)
          && ((a6 = *((unsigned int *)a1 + 22),
               v19 = *(_QWORD *)(a1[1] + 32LL),
               v16 = *((unsigned int *)a1 + 21),
               (_DWORD)v18 == (_DWORD)v16)
           || (v51 = v13,
               v50 = *((_DWORD *)a1 + 22),
               v49 = v13,
               v43 = sub_CB1620(v19, (unsigned int)v18),
               v14 = v49,
               a6 = v50,
               v13 = v51,
               !v43))
          && ((_DWORD)v13 == (_DWORD)a6 || (v11 = (unsigned int)a6, !(unsigned __int8)sub_CB1620(v19, (unsigned int)a6))) )
        {
          v20 = _mm_loadu_si128((const __m128i *)a1 + 1);
          v54.m128i_i32[0] = v15;
          v45 = v20;
          v48 = _mm_loadu_si128((const __m128i *)a1 + 2);
          v44 = _mm_load_si128(&v54);
          si128 = _mm_load_si128(v55);
          v22 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[7])(
                  a1[9],
                  v11,
                  v16,
                  v13,
                  v14,
                  a6,
                  v44.m128i_i64[0],
                  v44.m128i_i64[1],
                  si128.m128i_i64[0],
                  si128.m128i_i64[1],
                  v45.m128i_i64[0],
                  v45.m128i_i64[1],
                  v48.m128i_i64[0],
                  v48.m128i_i64[1]);
          if ( v22 != 1 )
          {
            if ( v22 != 2 )
              return 1;
            v29 = sub_616F10(
                    (__int64)a1,
                    (const __m128i *)v11,
                    v23,
                    v24,
                    v25,
                    a6,
                    (__int128)_mm_load_si128(&v54),
                    _mm_load_si128(v55));
            v30 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))a1[8];
            if ( v30 )
            {
              v46 = _mm_load_si128(&v54);
              v31 = _mm_load_si128(v55);
              if ( v30(
                     a1[9],
                     v11,
                     v26,
                     v27,
                     v28,
                     a6,
                     v46.m128i_i64[0],
                     v46.m128i_i64[1],
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
        if ( v10 == ++v9 )
          break;
      }
      else if ( v10 == ++v9 )
      {
        break;
      }
    }
  }
  v32 = *(_QWORD *)a2;
  v33 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v33 == sub_5F7BA0 )
  {
    if ( (*(_BYTE *)(a2 + 112) & 1) == 0 && !*(_QWORD *)(a2 + 112) )
      return 0;
LABEL_21:
    v34 = *a1;
    v35 = a1[6];
    v36 = (*(__int64 (__fastcall **)(__int64))(v32 + 64))(a2);
    sub_639270(&v54, v36, v35, v34, *(_QWORD *)((char *)a1 + 84));
    return sub_619180(
             (__int64)a1,
             v36,
             v37,
             v38,
             v39,
             v40,
             (__int128)_mm_load_si128(&v54),
             (__int128)_mm_load_si128(v55));
  }
  if ( v33(a2) )
  {
    v32 = *(_QWORD *)a2;
    goto LABEL_21;
  }
  return 0;
}

