/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C8CB8
// Address: 0x00000000000C8CB8

//----- (00000000000C8CB8) ----------------------------------------------------
__int64 __fastcall sub_C8CB8(__int64 result)
{
  __int64 v1; // x23
  unsigned int v2; // w8
  __int64 v3; // x19
  int32x2_t v4; // d8
  int i; // w9
  unsigned int v6; // w11
  unsigned int v7; // w20
  unsigned __int32 v8; // w9
  int32x2_t v9; // d0
  __int64 v10; // x10
  unsigned int v11; // w9
  __int64 v12; // x8
  __int64 v13; // x13
  __int64 v14; // x12
  __int64 v15; // x11
  __int64 v16; // x10
  __int64 v17; // x14
  int8x16_t *v18; // x13
  int32x4_t v19; // q0
  __int64 v20; // x12
  int8x16_t *v21; // x14
  int8x16_t v22; // t1
  uint16x8_t v23; // q1
  _WORD *v24; // x10
  unsigned int v25; // w11
  __int64 v26; // x9
  __int64 v27; // x12
  __int64 v28; // x11
  int v29; // w9
  int8x16_t *v30; // x13
  int32x4_t v31; // q0
  __int64 v32; // x12
  int8x16_t *v33; // x14
  int8x16_t v34; // t1
  uint16x8_t v35; // q1
  _WORD *v36; // x10
  unsigned int v37; // w11
  __int64 v38; // x25
  unsigned int v39; // w9
  __int64 v40; // x8
  __int64 v41; // x10
  __int64 v42; // x11
  const void *v43; // x1
  _QWORD *v44; // x22
  int v45; // w8
  __int64 v46; // x9
  int v47; // w10
  __int64 v48; // x11
  unsigned int v49; // w9
  int v50; // w12
  __int64 v51; // x10
  __int64 v52; // x11
  __int64 v53; // x8
  int v54; // w12
  int v55; // w10
  unsigned __int64 v56; // x8
  unsigned __int64 v57; // x10
  unsigned __int64 v58; // x21
  size_t v59; // x20
  size_t v60; // x8
  unsigned __int64 v61; // x20

  v1 = *(unsigned int *)(result + 80);
  v2 = *(_DWORD *)(result + 180);
  v3 = result;
  v4.n64_u64[0] = vdup_n_s32(v1).n64_u64[0];
  for ( i = *(_DWORD *)(result + 80); ; i = *(_DWORD *)(v3 + 80) )
  {
    v6 = *(_DWORD *)(v3 + 172);
    v7 = *(_DWORD *)(v3 + 104) - v2 - v6;
    if ( v6 < (int)v1 - 262 + i )
      goto LABEL_24;
    result = (__int64)memcpy(*(void **)(v3 + 96), (const void *)(*(_QWORD *)(v3 + 96) + v1), (unsigned int)v1 - v7);
    v8 = *(_DWORD *)(v3 + 5932);
    v9.n64_u64[0] = vsub_s32(*(int32x2_t *)(v3 + 172), v4).n64_u64[0];
    v10 = *(_QWORD *)(v3 + 152) - v1;
    *(int32x2_t *)(v3 + 172) = v9;
    *(_QWORD *)(v3 + 152) = v10;
    if ( v8 > v9.n64_u32[0] )
      *(_DWORD *)(v3 + 5932) = v9.n64_u32[0];
    v11 = *(_DWORD *)(v3 + 132);
    v12 = *(unsigned int *)(v3 + 80);
    v13 = v11 - 1;
    v14 = v13 + 1;
    v15 = *(_QWORD *)(v3 + 120) + 2LL * v11;
    if ( (unsigned __int64)(v13 + 1) < 8 )
      goto LABEL_10;
    v16 = v11 & 7;
    v17 = ~v13;
    v18 = (int8x16_t *)(v15 - 16);
    v19 = vdupq_n_s32(v12);
    v15 += 2 * (v17 + v16);
    v11 = *(_DWORD *)(v3 + 132) + (*(_DWORD *)(v3 + 132) & 7) - v14;
    v20 = v14 - v16;
    v21 = v18;
    do
    {
      v22 = *v21--;
      v20 -= 8;
      v23 = vqtbl1q_s8(v22, (int8x16_t)xmmword_11E840);
      *v18 = vqtbl1q_s8(
               vmovn_hight_s32(
                 vmovn_s32(vsubq_s32(vmaxq_u32(v19, vmovl_u16((uint16x4_t)v23.n128_u64[0])), v19)),
                 vsubq_s32(vmaxq_u32(v19, vmovl_high_u16(v23)), v19)),
               (int8x16_t)xmmword_11E840);
      v18 = v21;
    }
    while ( v20 );
    if ( (_DWORD)v16 )
    {
LABEL_10:
      v24 = (_WORD *)(v15 - 2);
      do
      {
        v25 = (unsigned __int16)*v24;
        if ( (unsigned int)v12 > v25 )
          LOWORD(v25) = v12;
        --v11;
        *v24-- = v25 - v12;
      }
      while ( v11 );
    }
    v26 = (unsigned int)(v12 - 1);
    v27 = v26 + 1;
    v28 = *(_QWORD *)(v3 + 112) + 2 * v12;
    if ( (unsigned __int64)(v26 + 1) < 8 )
    {
      v29 = v12;
LABEL_19:
      v36 = (_WORD *)(v28 - 2);
      do
      {
        v37 = (unsigned __int16)*v36;
        if ( (unsigned int)v12 > v37 )
          LOWORD(v37) = v12;
        --v29;
        *v36-- = v37 - v12;
      }
      while ( v29 );
      goto LABEL_23;
    }
    v30 = (int8x16_t *)(v28 - 16);
    v31 = vdupq_n_s32(v12);
    v28 += 2 * (~v26 + (v12 & 7));
    v29 = v12 + (v12 & 7) - v27;
    v32 = v27 - (v12 & 7);
    v33 = v30;
    do
    {
      v34 = *v33--;
      v32 -= 8;
      v35 = vqtbl1q_s8(v34, (int8x16_t)xmmword_11E840);
      *v30 = vqtbl1q_s8(
               vmovn_hight_s32(
                 vmovn_s32(vsubq_s32(vmaxq_u32(v31, vmovl_u16((uint16x4_t)v35.n128_u64[0])), v31)),
                 vsubq_s32(vmaxq_u32(v31, vmovl_high_u16(v35)), v31)),
               (int8x16_t)xmmword_11E840);
      v30 = v33;
    }
    while ( v32 );
    if ( (v12 & 7) != 0 )
      goto LABEL_19;
LABEL_23:
    v7 += v1;
LABEL_24:
    v38 = *(_QWORD *)v3;
    v39 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
    if ( !v39 )
      break;
    v40 = *(unsigned int *)(v3 + 180);
    if ( v39 <= v7 )
      v7 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
    if ( v7 )
    {
      v41 = *(_QWORD *)(v3 + 96);
      v42 = *(unsigned int *)(v3 + 172);
      v43 = *(const void **)v38;
      *(_DWORD *)(v38 + 8) = v39 - v7;
      v44 = (_QWORD *)(v41 + v42 + v40);
      result = (__int64)memcpy(v44, v43, v7);
      v45 = *(_DWORD *)(*(_QWORD *)(v38 + 56) + 48LL);
      if ( v45 == 2 )
      {
        result = sub_C8324(*(_QWORD *)(v38 + 96), v44, v7);
LABEL_32:
        *(_QWORD *)(v38 + 96) = result;
      }
      else if ( v45 == 1 )
      {
        result = sub_D4634(*(_QWORD *)(v38 + 96), (unsigned __int8 *)v44, v7);
        goto LABEL_32;
      }
      v46 = *(_QWORD *)(v38 + 16) + v7;
      *(_QWORD *)v38 += v7;
      *(_QWORD *)(v38 + 16) = v46;
      LODWORD(v40) = *(_DWORD *)(v3 + 180);
    }
    v47 = *(_DWORD *)(v3 + 5932);
    v2 = v40 + v7;
    *(_DWORD *)(v3 + 180) = v2;
    if ( v47 + v2 >= 3 )
    {
      v48 = *(_QWORD *)(v3 + 96);
      v49 = *(_DWORD *)(v3 + 172) - v47;
      v50 = *(unsigned __int8 *)(v48 + v49);
      *(_DWORD *)(v3 + 128) = v50;
      *(_DWORD *)(v3 + 128) = ((v50 << *(_DWORD *)(v3 + 144))
                             ^ *(unsigned __int8 *)(v48 + v49 + 1))
                            & *(_DWORD *)(v3 + 140);
      if ( v47 )
      {
        do
        {
          v51 = *(_QWORD *)(v3 + 112);
          v52 = *(_QWORD *)(v3 + 120);
          v53 = ((*(_DWORD *)(v3 + 128) << *(_DWORD *)(v3 + 144))
               ^ (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v3 + 96) + v49 + 2))
              & *(_DWORD *)(v3 + 140);
          v54 = *(_DWORD *)(v3 + 88);
          *(_DWORD *)(v3 + 128) = v53;
          *(_WORD *)(v51 + 2LL * (v54 & v49)) = *(_WORD *)(v52 + 2 * v53);
          *(_WORD *)(*(_QWORD *)(v3 + 120) + 2LL * *(unsigned int *)(v3 + 128)) = v49;
          v2 = *(_DWORD *)(v3 + 180);
          v55 = *(_DWORD *)(v3 + 5932) - 1;
          *(_DWORD *)(v3 + 5932) = v55;
          if ( v2 + v55 <= 2 )
            break;
          ++v49;
        }
        while ( v55 );
      }
    }
    if ( v2 > 0x105 || !*(_DWORD *)(*(_QWORD *)v3 + 8LL) )
      break;
  }
  v56 = *(_QWORD *)(v3 + 5944);
  v57 = *(_QWORD *)(v3 + 104);
  if ( v57 > v56 )
  {
    v58 = *(unsigned int *)(v3 + 180) + (unsigned __int64)*(unsigned int *)(v3 + 172);
    if ( v56 < v58 )
    {
      if ( v57 - v58 >= 0x102 )
        v59 = 258;
      else
        v59 = v57 - v58;
      result = (__int64)memset((void *)(*(_QWORD *)(v3 + 96) + v58), 0, v59);
      v60 = v59 + v58;
      goto LABEL_51;
    }
    if ( v58 + 258 > v56 )
    {
      if ( v58 + 258 - v56 <= v57 - v56 )
        v61 = v58 + 258 - v56;
      else
        v61 = v57 - v56;
      result = (__int64)memset((void *)(*(_QWORD *)(v3 + 96) + v56), 0, (unsigned int)v61);
      v60 = *(_QWORD *)(v3 + 5944) + v61;
LABEL_51:
      *(_QWORD *)(v3 + 5944) = v60;
    }
  }
  return result;
}
// 11E840: using guessed type __int128 xmmword_11E840;
