__int16 __fastcall sub_1B1AB80(
        const __m128i **a1,
        _BYTE *a2,
        int a3,
        unsigned __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __int32 a7)
{
  __int32 v7; // r13d
  unsigned int v9; // r12d
  _DWORD *v11; // rbx
  const __m128i *v12; // rbp
  __int64 v13; // rax
  char v14; // dl
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm1
  __int8 v19; // al
  char v20; // al
  char v21; // dl
  __int16 result; // ax
  __int64 v23; // rax
  const __m128i *v24; // r13
  __int64 v25; // rax
  const __m128i *v26; // r13
  __m128i v27; // xmm0
  __m128i v28; // xmm2
  __int64 v29; // rcx
  __int8 v30; // dl
  char v31; // al
  char v32; // dl
  __m128i v33; // xmm0
  __int8 v34; // dl
  __m128i v35; // xmm3
  __int64 v36; // rcx
  char v37; // al
  char v38; // dl
  __int32 v40; // [rsp+8h] [rbp-70h]
  __int32 v41; // [rsp+Ch] [rbp-6Ch]
  __m128i v42; // [rsp+10h] [rbp-68h] BYREF
  __int64 v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  __int64 v45; // [rsp+30h] [rbp-48h]
  char v46; // [rsp+38h] [rbp-40h]
  __int8 v47; // [rsp+39h] [rbp-3Fh]
  __int32 v48; // [rsp+3Ch] [rbp-3Ch]

  v9 = a3 - 10;
  v11 = (_DWORD *)a4;
  if ( (unsigned int)(a3 - 10) <= 3 )
  {
    v23 = sub_1AEE510(a4);
    v24 = *a1;
    if ( v23 == (*a1)[4].m128i_i64[0] )
    {
      v14 = 1;
      if ( a5 && (*a5 & 0x40000) == 0 )
      {
        v27 = _mm_loadu_si128(v24);
        v24[5].m128i_i64[1] = (__int64)a5;
        v24[6].m128i_i8[9] = 1;
        v24[3].m128i_i64[0] = a6;
        v24[1].m128i_i32[3] = a7;
        v28 = _mm_loadu_si128(v24 + 1);
        v24[6].m128i_i8[8] = (v9 & 1) == 0;
        v29 = v24[7].m128i_i64[0];
        v30 = v24->m128i_i8[8];
        v24[6].m128i_i8[10] = v9 <= 1;
        v42 = _mm_unpacklo_epi64(v27, v28);
        v47 = v30;
        v43 = v23;
        v44 = 0;
        v45 = v29;
        v46 = 0;
        v48 = 0;
        v31 = sub_1B1A790(v42.m128i_i64, (unsigned __int64)a5);
        v32 = 0;
        if ( v31 )
        {
          v32 = 1;
          v24[7].m128i_i64[0] = v44;
          v40 = v48;
        }
        v24[8].m128i_i8[4] = v32;
        v14 = 0;
        v24[8].m128i_i32[0] = v40;
      }
      goto LABEL_11;
    }
    v25 = sub_1AEE510((unsigned __int64)a5);
    v26 = *a1;
    if ( v25 == (*a1)[4].m128i_i64[0] )
    {
      v14 = 1;
      if ( v11 && (*v11 & 0x40000) == 0 )
      {
        v33 = _mm_loadu_si128(v26);
        v26[5].m128i_i64[1] = (__int64)v11;
        v26[6].m128i_i8[9] = 1;
        v26[3].m128i_i64[0] = a6;
        v34 = v26->m128i_i8[8];
        v26[1].m128i_i32[3] = a7;
        v35 = _mm_loadu_si128(v26 + 1);
        v26[6].m128i_i8[8] = ((a3 - 11) & 0xFFFFFFFD) == 0;
        v36 = v26[7].m128i_i64[0];
        v26[6].m128i_i8[10] = v9 <= 1;
        v47 = v34;
        v42 = _mm_unpacklo_epi64(v33, v35);
        v43 = v25;
        v44 = 0;
        v45 = v36;
        v46 = 0;
        v48 = 0;
        v37 = sub_1B1A790(v42.m128i_i64, (unsigned __int64)v11);
        v38 = 0;
        if ( v37 )
        {
          v38 = 1;
          v26[7].m128i_i64[0] = v44;
          v41 = v48;
        }
        v26[8].m128i_i8[4] = v38;
        v14 = 0;
        v26[8].m128i_i32[0] = v41;
      }
      goto LABEL_11;
    }
  }
  else if ( a3 == 15 && *a2 )
  {
    v12 = *a1;
    v13 = sub_1AEE510(a4);
    v14 = 1;
    if ( v13 == (*a1)[4].m128i_i64[0] )
      v11 = a5;
    if ( v11 && (*v11 & 0x40000) == 0 )
    {
      v15 = _mm_loadu_si128(v12);
      v12[5].m128i_i64[1] = (__int64)v11;
      v12[6].m128i_i8[10] = 1;
      v16 = v12[7].m128i_i64[0];
      v17 = v12[4].m128i_i64[0];
      v12[3].m128i_i64[0] = a6;
      v12[1].m128i_i32[3] = a7;
      v18 = _mm_loadu_si128(v12 + 1);
      v19 = v12->m128i_i8[8];
      v45 = v16;
      v43 = v17;
      v42 = _mm_unpacklo_epi64(v15, v18);
      v44 = 0;
      v46 = 0;
      v47 = v19;
      v48 = 0;
      v20 = sub_1B1A790(v42.m128i_i64, (unsigned __int64)v11);
      v21 = 0;
      if ( v20 )
      {
        v7 = v48;
        v21 = 1;
        v12[7].m128i_i64[0] = v44;
      }
      v12[8].m128i_i32[0] = v7;
      v12[8].m128i_i8[4] = v21;
      v14 = 0;
    }
LABEL_11:
    LOBYTE(result) = v14;
    HIBYTE(result) = 1;
    return result;
  }
  return 0;
}
