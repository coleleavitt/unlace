__int64 __fastcall sub_15612F0(const __m128i *a1, unsigned int a2, _BYTE *a3)
{
  unsigned int v4; // ebp
  int v6; // eax
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __int64 v12; // rdi
  __int32 v13; // r15d
  unsigned __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rdi
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  __int32 v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rdi
  char *v24; // rax
  __int16 v25; // ax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  void *v29; // rdx
  __int16 v30; // [rsp+Ch] [rbp-9Ch]
  bool v31; // [rsp+Fh] [rbp-99h]
  __m128i v32; // [rsp+18h] [rbp-90h] BYREF
  __m128i v33; // [rsp+28h] [rbp-80h] BYREF
  __int64 v34; // [rsp+38h] [rbp-70h]
  __m128i v35; // [rsp+40h] [rbp-68h] BYREF
  __int32 v36; // [rsp+50h] [rbp-58h]

  v4 = a2;
  *a3 = 0;
  v6 = sub_155DB90((__int64)a1, 0, 1u, nullptr);
  if ( v6 != 2 )
  {
    LOBYTE(v4) = v6 != 1;
    return v4;
  }
  v8 = a1[5].m128i_i64[0];
  v9 = _mm_loadu_si128(a1 + 3);
  v10 = _mm_loadu_si128(a1 + 4);
  v11 = _mm_loadu_si128(a1 + 1);
  v12 = a1->m128i_i64[1];
  v32 = v9;
  v13 = a1[5].m128i_i32[2];
  v34 = v8;
  LODWORD(v8) = a1[2].m128i_i32[0];
  v33 = v10;
  v14 = a1[169].m128i_u32[2];
  v36 = v8;
  LOWORD(v8) = a1[5].m128i_i16[6];
  v35 = v11;
  v30 = v8;
  sub_1418D30(v12, 0);
  v31 = a1[2].m128i_i16[0] == 76;
  sub_155CFC0((__int64)a1);
  v15 = sub_1560060((__int64)a1, 1u, 0, 0, v31);
  if ( v15 == 3 )
    goto LABEL_21;
  if ( v15 == 2 )
  {
    if ( a2 )
    {
      switch ( a2 )
      {
        case 4u:
          if ( a1[2].m128i_i16[0] != 66 )
          {
LABEL_18:
            v16 = a1->m128i_i64[1];
            v4 = 0;
            goto LABEL_7;
          }
          break;
        case 2u:
          v25 = a1[2].m128i_i16[0];
          LOBYTE(v4) = v25 == 52 || v25 == 66;
          if ( !(_BYTE)v4 )
          {
            v16 = a1->m128i_i64[1];
            if ( (*(_BYTE *)(*(_QWORD *)(v16 + 56) + 1LL) & 0x10) == 0 )
              goto LABEL_7;
            LOBYTE(v4) = v25 == 53 || v25 == 75;
            if ( !(_BYTE)v4 )
            {
              if ( v25 != 27 )
                goto LABEL_7;
              v26 = *(_QWORD *)(v16 + 2944);
              if ( v26 >= *(unsigned int *)(v16 + 2912) )
                v27 = sub_14180A0(v16, 1u);
              else
                v27 = *(_QWORD *)(v16 + 2904) + 24 * v26;
              v28 = (unsigned int)*(unsigned __int16 *)(v27 + 16) - 52;
              if ( (unsigned __int16)v28 > 0x17u || (v29 = &loc_804003, !_bittest64((const __int64 *)&v29, v28)) )
              {
                v16 = a1->m128i_i64[1];
                goto LABEL_7;
              }
            }
          }
          break;
        case 3u:
          break;
        default:
          goto LABEL_18;
      }
    }
    else if ( a1[2].m128i_i16[0] != 23 )
    {
      goto LABEL_18;
    }
    *a3 = 1;
LABEL_21:
    v16 = a1->m128i_i64[1];
    v4 = 1;
    goto LABEL_7;
  }
  v16 = a1->m128i_i64[1];
  LOBYTE(v4) = v15 == 0;
LABEL_7:
  sub_1417BC0(v16);
  v17 = _mm_loadu_si128(&v32);
  v18 = _mm_loadu_si128(&v33);
  v19 = _mm_load_si128(&v35);
  a1[5].m128i_i64[0] = v34;
  v20 = v36;
  a1[3] = v17;
  a1[2].m128i_i32[0] = v20;
  v21 = a1[169].m128i_u32[2];
  a1[4] = v18;
  a1[1] = v19;
  if ( v14 != v21 )
  {
    if ( v14 >= v21 )
    {
      if ( v14 > a1[169].m128i_u32[3] )
      {
        sub_2237220(&a1[169], &a1[170], v14, 8);
        v21 = a1[169].m128i_u32[2];
      }
      v22 = a1[169].m128i_i64[0];
      v23 = (char *)(v22 + 8 * v21);
      v24 = (char *)(v22 + 8 * v14);
      if ( v23 != v24 )
        memset(v23, 0, 8 * ((unsigned __int64)(v24 - 8 - v23) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v14;
  }
  a1[5].m128i_i32[2] = v13;
  a1[5].m128i_i16[6] = v30;
  return v4;
}
