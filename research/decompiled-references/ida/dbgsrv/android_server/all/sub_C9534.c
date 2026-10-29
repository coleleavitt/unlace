/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C9534
// Address: 0x00000000000C9534

//----- (00000000000C9534) ----------------------------------------------------
__int64 __fastcall sub_C9534(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // x21
  __int64 result; // x0
  int v6; // w8
  unsigned int v8; // w22
  int v9; // w8
  int v10; // w8
  unsigned int v11; // w9
  __int64 v12; // x8
  __int64 v13; // x11
  __int64 v14; // x13
  __int64 v15; // x12
  __int64 v16; // x11
  __int64 v17; // x10
  int8x16_t *v18; // x14
  int32x4_t v19; // q1
  __int64 v20; // x12
  int8x16_t *v21; // x13
  int8x16_t v22; // t1
  uint16x8_t v23; // q2
  _WORD *v24; // x10
  unsigned int v25; // w11
  __int64 v26; // x9
  __int64 v27; // x13
  __int64 v28; // x12
  __int64 v29; // x11
  int v30; // w9
  int8x16_t *v31; // x14
  int32x4_t v32; // q1
  __int64 v33; // x12
  int8x16_t *v34; // x13
  int8x16_t v35; // t1
  uint16x8_t v36; // q2
  _WORD *v37; // x10
  unsigned int v38; // w11
  unsigned __int16 *v39; // x8
  int v40; // w9
  int v41; // w10
  int v42; // w11

  if ( !a1 )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 4294967294LL;
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 || *(_QWORD *)v4 != a1 )
    return 4294967294LL;
  v6 = *(_DWORD *)(v4 + 8);
  if ( ((unsigned int)(v6 - 57) > 0x38 || ((1LL << ((unsigned __int8)v6 - 57)) & 0x100400400011001LL) == 0)
    && v6 != 666
    && v6 != 42 )
  {
    return 4294967294LL;
  }
  if ( a2 == -1 )
    v8 = 6;
  else
    v8 = a2;
  result = 4294967294LL;
  if ( a3 <= 4 && v8 <= 9 )
  {
    if ( *(_DWORD *)(v4 + 200) == a3 && qword_1604B0[2 * *(int *)(v4 + 196) + 1] == qword_1604B0[2 * (int)v8 + 1]
      || *(_DWORD *)(v4 + 76) == -2 )
    {
      goto LABEL_18;
    }
    result = sub_C9850(a1, 5);
    if ( (_DWORD)result != -2 )
    {
      if ( *(_DWORD *)(a1 + 8) || *(unsigned int *)(v4 + 172) - *(_QWORD *)(v4 + 152) + *(unsigned int *)(v4 + 180) )
        return 4294967291LL;
LABEL_18:
      v9 = *(_DWORD *)(v4 + 196);
      if ( v9 == v8 )
      {
LABEL_50:
        *(_DWORD *)(v4 + 200) = a3;
        return 0;
      }
      if ( v9 || (v10 = *(_DWORD *)(v4 + 5928)) == 0 )
      {
LABEL_49:
        *(_DWORD *)(v4 + 196) = v8;
        v39 = (unsigned __int16 *)&qword_1604B0[2 * (int)v8];
        v40 = v39[3];
        v41 = v39[1];
        v42 = *v39;
        LODWORD(v39) = v39[2];
        *(_DWORD *)(v4 + 188) = v40;
        *(_DWORD *)(v4 + 192) = v41;
        *(_DWORD *)(v4 + 204) = v42;
        *(_DWORD *)(v4 + 208) = (_DWORD)v39;
        goto LABEL_50;
      }
      if ( v10 != 1 )
      {
        *(_WORD *)(*(_QWORD *)(v4 + 120) + 2LL * (unsigned int)(*(_DWORD *)(v4 + 132) - 1)) = 0;
        memset(*(void **)(v4 + 120), 0, 2LL * (unsigned int)(*(_DWORD *)(v4 + 132) - 1));
        goto LABEL_48;
      }
      v11 = *(_DWORD *)(v4 + 132);
      v12 = *(unsigned int *)(v4 + 80);
      v13 = v11 - 1;
      v14 = v13 + 1;
      v15 = *(_QWORD *)(v4 + 120) + 2LL * v11;
      if ( (unsigned __int64)(v13 + 1) >= 8 )
      {
        v17 = v11 & 7;
        v18 = (int8x16_t *)(v15 - 16);
        v16 = v15 + 2 * (~v13 + v17);
        v11 = *(_DWORD *)(v4 + 132) + (*(_DWORD *)(v4 + 132) & 7) - v14;
        v19 = vdupq_n_s32(v12);
        v20 = v14 - v17;
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
        if ( !(_DWORD)v17 )
        {
LABEL_39:
          v26 = (unsigned int)(v12 - 1);
          v27 = v26 + 1;
          v28 = *(_QWORD *)(v4 + 112) + 2 * v12;
          if ( (unsigned __int64)(v26 + 1) < 8 )
          {
            v29 = *(_QWORD *)(v4 + 112) + 2 * v12;
            v30 = v12;
            goto LABEL_44;
          }
          v29 = v28 + 2 * (~v26 + (v12 & 7));
          v30 = v12 + (v12 & 7) - v27;
          v31 = (int8x16_t *)(v28 - 16);
          v32 = vdupq_n_s32(v12);
          v33 = v27 - (v12 & 7);
          v34 = v31;
          do
          {
            v35 = *v34--;
            v33 -= 8;
            v36 = vqtbl1q_s8(v35, (int8x16_t)xmmword_11E840);
            *v31 = vqtbl1q_s8(
                     vmovn_hight_s32(
                       vmovn_s32(vsubq_s32(vmaxq_u32(v32, vmovl_u16((uint16x4_t)v36.n128_u64[0])), v32)),
                       vsubq_s32(vmaxq_u32(v32, vmovl_high_u16(v36)), v32)),
                     (int8x16_t)xmmword_11E840);
            v31 = v34;
          }
          while ( v33 );
          if ( (v12 & 7) != 0 )
          {
LABEL_44:
            v37 = (_WORD *)(v29 - 2);
            do
            {
              v38 = (unsigned __int16)*v37;
              if ( (unsigned int)v12 > v38 )
                LOWORD(v38) = v12;
              --v30;
              *v37-- = v38 - v12;
            }
            while ( v30 );
          }
LABEL_48:
          *(_DWORD *)(v4 + 5928) = 0;
          goto LABEL_49;
        }
      }
      else
      {
        v16 = *(_QWORD *)(v4 + 120) + 2LL * v11;
      }
      v24 = (_WORD *)(v16 - 2);
      do
      {
        v25 = (unsigned __int16)*v24;
        if ( (unsigned int)v12 > v25 )
          LOWORD(v25) = v12;
        --v11;
        *v24-- = v25 - v12;
      }
      while ( v11 );
      goto LABEL_39;
    }
  }
  return result;
}
// 11E840: using guessed type __int128 xmmword_11E840;
// 1604B0: using guessed type __int64 qword_1604B0[];
