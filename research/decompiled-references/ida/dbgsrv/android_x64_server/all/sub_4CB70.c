/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CB70
// Address: 0x000000000004CB70

//----- (000000000004CB70) ----------------------------------------------------
__int64 __fastcall sub_4CB70(__m128 *a1)
{
  __int8 v2; // bp
  unsigned __int16 *v3; // r15
  __int8 v4; // bl
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  int v8; // ebx
  unsigned __int8 v9; // al
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  int v13; // eax
  int v14; // ebx
  signed __int64 v15; // rbx
  int v16; // ebp
  signed __int64 v17; // rbp
  int v18; // ebx
  void (__fastcall *v19)(__m128 *, __int64, __int64, _QWORD, __int64); // r12
  __int64 v20; // rax
  void (__fastcall *v21)(__m128 *, __int64, signed __int64, _QWORD, __int64); // r12
  __int64 v22; // rax
  void (__fastcall *v23)(__m128 *, __int64, signed __int64, _QWORD, __int64); // r12
  __int64 v24; // rax
  void (__fastcall *v25)(__m128 *, __int64, __int64, _QWORD, __int64); // r12
  __int64 v26; // rax
  unsigned int v27; // ebp
  unsigned __int64 v28; // rcx
  char v29; // al
  __int16 *v30; // rcx
  __int64 v31; // rdx
  unsigned __int32 v32; // ebx
  unsigned __int64 v33; // rax
  bool v34; // cf
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r8
  int v37; // eax
  char v38; // al
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int32 *v41; // rbx
  int v42; // eax
  unsigned __int64 v43; // rdi
  _OWORD *v44; // rax
  unsigned __int64 *v45; // rcx
  __m128 *v47; // [rsp+8h] [rbp-B0h]
  unsigned int *v48; // [rsp+8h] [rbp-B0h]
  __m128 *v49; // [rsp+10h] [rbp-A8h]
  char v50; // [rsp+1Ch] [rbp-9Ch]
  __int16 *v51; // [rsp+20h] [rbp-98h]
  unsigned __int64 *v52; // [rsp+28h] [rbp-90h]
  unsigned __int16 *v53; // [rsp+30h] [rbp-88h]
  char v54[4]; // [rsp+40h] [rbp-78h] BYREF
  int v55; // [rsp+44h] [rbp-74h]
  unsigned int v56; // [rsp+60h] [rbp-58h]
  unsigned __int32 v57; // [rsp+68h] [rbp-50h]
  unsigned __int64 v58; // [rsp+80h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  v2 = a1[31].m128_i8[12];
  if ( (unsigned __int8)(v2 - 1) < 2u
    || (LODWORD(v3) = 0,
        ((unsigned __int8 (__fastcall *)(__m128 *, __int64, _QWORD))a1[31].m128_u64[0])(a1, 1, a1[31].m128_u8[12])) )
  {
    v4 = a1[31].m128_i8[13];
    if ( (unsigned __int8)(v4 - 1) < 2u
      || (LODWORD(v3) = 0,
          ((unsigned __int8 (__fastcall *)(__m128 *, __int64, _QWORD))a1[31].m128_u64[0])(a1, 3, a1[31].m128_u8[13])) )
    {
      v5 = qlseek(a1[29].m128_i64[1], 0, 1);
      v6 = a1[30].m128_u64[0];
      v7 = v5 - v6;
      if ( qlseek(a1[29].m128_i64[1], v6 + 16, 0) == -1 )
        goto LABEL_82;
      a1[38].m128_i8[8] = v4 == 2;
      a1[38].m128_i8[9] = v2 == 2;
      a1[38].m128_i8[10] = v2 == 2;
      v8 = lreadbytes(a1[29].m128_i64[1], &a1[32].m128_u16[4], 2, v4 == 2);
      if ( v8 < 0
        || (v3 = &a1[32].m128_u16[5],
            v8 = lreadbytes(a1[29].m128_i64[1], (char *)&a1[32].m128_u32[2] + 2, 2, a1[38].m128_i8[8]),
            v8 < 0) )
      {
LABEL_34:
        v25 = (void (__fastcall *)(__m128 *, __int64, __int64, _QWORD, __int64))a1[31].m128_u64[0];
        v26 = qlseek(a1[29].m128_i64[1], 0, 1);
        LODWORD(v3) = 0;
        v25(a1, 19, 2, v8, v26);
        goto LABEL_83;
      }
      if ( !(unsigned __int8)sub_507D0((__int64)a1) )
        goto LABEL_82;
      v9 = a1[38].m128_u8[9];
      if ( a1[29].m128_i8[4] )
      {
        a1[28].m128_u64[1] = a1[27].m128_u64[v9 + 1];
        a1[29].m128_i32[0] = 4 * v9 + 4;
      }
      v10 = (__m128)_mm_slli_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v9 != 0), 0), 0x1Fu);
      v11 = _mm_blendv_ps((__m128)xmmword_FE2D0, (__m128)xmmword_FE2C0, v10);
      v12 = _mm_blendv_ps((__m128)xmmword_FE2F0, (__m128)xmmword_FE2E0, v10);
      a1[24] = v11;
      a1[25].m128_i32[0] = 8 * v9 + 8;
      a1[25].m128_i32[1] = v12.m128_i32[0];
      a1[25].m128_i32[2] = _mm_extract_ps(v12, 1);
      v13 = 4 * v9 + 4;
      a1[27].m128_i32[0] = v13;
      a1[27].m128_i32[1] = v13;
      a1[25].m128_i32[3] = _mm_extract_ps(v11, 3);
      a1[26] = v12;
      v14 = lreadbytes(a1[29].m128_i64[1], &a1[32].m128_u32[3], 4, a1[38].m128_i8[8]);
      if ( v14 >= 0 )
      {
        v15 = a1[26].m128_i32[2];
        v16 = lreadbytes(a1[29].m128_i64[1], &a1[33], v15, a1[38].m128_i8[8]);
        if ( v16 < 0 )
        {
          v21 = (void (__fastcall *)(__m128 *, __int64, signed __int64, _QWORD, __int64))a1[31].m128_u64[0];
          v22 = qlseek(a1[29].m128_i64[1], 0, 1);
          LODWORD(v3) = 0;
          v21(a1, 19, v15, v16, v22);
          goto LABEL_83;
        }
        v17 = a1[26].m128_i32[3];
        v52 = &a1[33].m128_u64[1];
        v18 = lreadbytes(a1[29].m128_i64[1], &a1[33].m128_u16[4], v17, a1[38].m128_i8[8]);
        if ( v18 < 0
          || (v17 = a1[26].m128_i32[3],
              v49 = a1 + 34,
              v18 = lreadbytes(a1[29].m128_i64[1], &a1[34], v17, a1[38].m128_i8[8]),
              v18 < 0) )
        {
          v23 = (void (__fastcall *)(__m128 *, __int64, signed __int64, _QWORD, __int64))a1[31].m128_u64[0];
          v24 = qlseek(a1[29].m128_i64[1], 0, 1);
          LODWORD(v3) = 0;
          v23(a1, 19, v17, v18, v24);
          goto LABEL_83;
        }
        v14 = lreadbytes(a1[29].m128_i64[1], &a1[34].m128_u16[4], 4, a1[38].m128_i8[8]);
        if ( v14 >= 0 )
        {
          v8 = lreadbytes(a1[29].m128_i64[1], &a1[34].m128_u32[3], 2, a1[38].m128_i8[8]);
          if ( v8 >= 0 )
          {
            v8 = lreadbytes(a1[29].m128_i64[1], (char *)&a1[34].m128_u32[3] + 2, 2, a1[38].m128_i8[8]);
            if ( v8 >= 0 )
            {
              v47 = a1 + 35;
              v8 = lreadbytes(a1[29].m128_i64[1], &a1[35], 2, a1[38].m128_i8[8]);
              if ( v8 >= 0 )
              {
                v53 = &a1[35].m128_u16[1];
                v8 = lreadbytes(a1[29].m128_i64[1], (char *)a1[35].m128_u64 + 2, 2, a1[38].m128_i8[8]);
                if ( v8 >= 0 )
                {
                  v51 = &a1[35].m128_i16[2];
                  v8 = lreadbytes(a1[29].m128_i64[1], &a1[35].m128_i16[2], 2, a1[38].m128_i8[8]);
                  if ( v8 >= 0 )
                  {
                    v8 = lreadbytes(a1[29].m128_i64[1], (char *)a1[35].m128_i64 + 6, 2, a1[38].m128_i8[8]);
                    if ( v8 >= 0 )
                    {
                      if ( a1[24].m128_i32[0] != a1[34].m128_u16[6]
                        && !((unsigned __int8 (__fastcall *)(__m128 *, __int64))a1[31].m128_u64[0])(a1, 2) )
                      {
                        goto LABEL_82;
                      }
                      if ( (v47->m128_i16[0] == 0) == (*v52 == 0) )
                      {
                        if ( *v52 && a1[24].m128_i32[1] != a1[34].m128_u16[7] )
                        {
                          if ( !((unsigned __int8 (__fastcall *)(__m128 *, __int64))a1[31].m128_u64[0])(a1, 4) )
                            goto LABEL_82;
                          v37 = a1[24].m128_i32[1];
                          if ( v37 > a1[34].m128_u16[7] )
                            goto LABEL_82;
                          a1[34].m128_i16[7] = v37;
                        }
                      }
                      else
                      {
                        if ( !((unsigned __int8 (__fastcall *)(__m128 *, __int64))a1[31].m128_u64[0])(a1, 5) )
                          goto LABEL_82;
                        *v52 = 0;
                        v47->m128_i16[0] = 0;
                      }
                      if ( *v51
                        || !v49->m128_u64[0]
                        || qlseek(a1[29].m128_i64[1], a1[30].m128_u64[0] + v49->m128_u64[0], 0) == -1
                        || !(unsigned __int8)sub_50920((__int64)a1, (__int64)v54)
                        || v55 )
                      {
                        v27 = a1[35].m128_u16[2];
                        v48 = &a1[35].m128_u32[2];
                        a1[35].m128_i32[2] = v27;
                        v50 = 1;
                      }
                      else
                      {
                        v27 = v56;
                        v48 = &a1[35].m128_u32[2];
                        a1[35].m128_i32[2] = v56;
                        v50 = 0;
                      }
                      v28 = v49->m128_u64[0];
                      if ( (v27 == 0) != (v49->m128_u64[0] == 0) )
                      {
                        v29 = ((__int64 (__fastcall *)(__m128 *, __int64, _QWORD, unsigned __int64, unsigned __int64))a1[31].m128_u64[0])(
                                a1,
                                7,
                                v27,
                                v28,
                                a1[30].m128_u64[1] - a1[30].m128_u64[0]);
                        v30 = &a1[35].m128_i16[2];
                        if ( !v29 )
                          goto LABEL_82;
                        goto LABEL_60;
                      }
                      if ( !v28 )
                      {
LABEL_61:
                        v35 = v27 * (unsigned __int64)*v53;
                        v28 = 0;
                        goto LABEL_62;
                      }
                      v31 = a1[35].m128_u16[1];
                      v32 = a1[24].m128_u32[2];
                      if ( v32 != (_DWORD)v31 )
                      {
                        v38 = ((__int64 (__fastcall *)(__m128 *, __int64, __int64, _QWORD))a1[31].m128_u64[0])(
                                a1,
                                6,
                                v31,
                                v32);
                        v30 = &a1[35].m128_i16[2];
                        if ( !v38 || a1[24].m128_i32[2] > a1[35].m128_u16[1] )
                        {
LABEL_60:
                          v49->m128_u64[0] = 0;
                          *v30 = 0;
                          *v48 = 0;
                          v27 = 0;
                          goto LABEL_61;
                        }
                        v28 = v49->m128_u64[0];
                        v27 = *v48;
                      }
                      v33 = v27 * (unsigned __int64)*v53;
                      v34 = __CFADD__(v28, v33);
                      v35 = v28 + v33;
                      if ( v34 )
                      {
                        v36 = a1[30].m128_u64[1] - a1[30].m128_u64[0];
                        goto LABEL_63;
                      }
LABEL_62:
                      v36 = a1[30].m128_u64[1] - a1[30].m128_u64[0];
                      if ( v35 <= v36 )
                      {
                        if ( !v28 )
                          goto LABEL_74;
                        v39 = a1[35].m128_u16[3];
                        if ( (v39 != 0xFFFF) | (unsigned __int8)v50 || (v40 = v57) == 0 )
                        {
                          a1[35].m128_i32[3] = v39;
                          if ( !(_WORD)v39 || (v41 = &a1[35].m128_i32[3], v40 = v39, v39 < v27) )
                          {
LABEL_74:
                            if ( !*v52
                              || a1[32].m128_i16[4] != 1
                              || ((unsigned __int8 (__fastcall *)(__m128 *, __int64))a1[31].m128_u64[0])(a1, 18) )
                            {
                              v42 = *v3;
                              if ( v42 == 183 || (unsigned __int16)v42 == 40 )
                              {
                                v43 = a1[37].m128_u64[1];
                                if ( v43 )
                                  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v43 + 8LL))(v43);
                                v44 = operator new(0x50u);
                                v45 = &a1[37].m128_u64[1];
                                *(_QWORD *)v44 = &off_147088;
                                v44[1] = 0;
                                *((_QWORD *)v44 + 1) = v44 + 1;
                                *(_OWORD *)((char *)v44 + 40) = 0;
                                *((_QWORD *)v44 + 4) = (char *)v44 + 40;
                                *(_OWORD *)((char *)v44 + 56) = 0;
                                *((_BYTE *)v44 + 74) = 0;
                                *((_WORD *)v44 + 36) = 0;
                              }
                              else
                              {
                                v44 = operator new(8u);
                                *(_QWORD *)v44 = &off_1470B8;
                                v45 = &a1[37].m128_u64[1];
                              }
                              *v45 = (unsigned __int64)v44;
                              LOBYTE(v3) = 1;
                              goto LABEL_83;
                            }
                            goto LABEL_82;
                          }
                        }
                        else
                        {
                          v41 = &a1[35].m128_i32[3];
                          a1[35].m128_i32[3] = v57;
                          if ( (unsigned int)v40 < v27 )
                            goto LABEL_74;
                        }
                        if ( ((unsigned __int8 (__fastcall *)(__m128 *, __int64, __int64, _QWORD))a1[31].m128_u64[0])(
                               a1,
                               17,
                               v40,
                               v27) )
                        {
                          *v41 = 0;
                          goto LABEL_74;
                        }
LABEL_82:
                        LODWORD(v3) = 0;
                        goto LABEL_83;
                      }
LABEL_63:
                      if ( ((unsigned __int8 (__fastcall *)(__m128 *, __int64, _QWORD, unsigned __int64, unsigned __int64))a1[31].m128_u64[0])(
                             a1,
                             7,
                             v27,
                             v28,
                             v36) )
                      {
                        v49->m128_u64[0] = 0;
                        *v51 = 0;
                        *v48 = 0;
                        goto LABEL_74;
                      }
                      goto LABEL_82;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_34;
        }
      }
      v19 = (void (__fastcall *)(__m128 *, __int64, __int64, _QWORD, __int64))a1[31].m128_u64[0];
      v20 = qlseek(a1[29].m128_i64[1], 0, 1);
      LODWORD(v3) = 0;
      v19(a1, 19, 4, v14, v20);
LABEL_83:
      qlseek(a1[29].m128_i64[1], a1[30].m128_u64[0] + v7, 0);
    }
  }
  return (unsigned int)v3;
}
// FE2C0: using guessed type __int128 xmmword_FE2C0;
// FE2D0: using guessed type __int128 xmmword_FE2D0;
// FE2E0: using guessed type __int128 xmmword_FE2E0;
// FE2F0: using guessed type __int128 xmmword_FE2F0;
// 147088: using guessed type __int64 (__fastcall *off_147088)();
// 1470B8: using guessed type __int64 (__fastcall *off_1470B8)();
