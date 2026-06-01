/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E45B8
// Address: 0x00000000000E45B8

//----- (00000000000E45B8) ----------------------------------------------------
void *__fastcall sub_E45B8(void *result, char **a2)
{
  const char *v2; // x8
  __int64 v4; // x9
  int8x16_t *v5; // x10
  int v6; // w15
  int v7; // w14
  char v8; // w16
  char v9; // w15
  char v10; // w16
  uint32x4_t v11; // q2
  uint16x8_t v12; // q3
  uint16x8_t v13; // q4
  uint16x8_t v14; // q5
  uint16x8_t v15; // q6
  int8x16_t v16; // q7
  int8x16_t v17; // q4
  uint32x4_t v18; // q16
  uint32x4_t v19; // q3
  uint32x4_t v20; // q17
  uint32x4_t v21; // q6
  uint32x4_t v22; // q18
  int8x16_t v23; // q2
  int8x16_t v24; // q3
  int16x8_t v25; // q16
  char *v26; // x8
  __int8 *v27; // x9
  char v28; // w11
  char *v30; // x8
  unsigned __int64 v31; // x10
  size_t v32; // x20
  unsigned __int64 v33; // x9
  char *v34; // x0
  char *v35; // x0
  size_t v36; // x1
  int8x16_t v37; // [xsp+0h] [xbp-60h] BYREF
  char s[16]; // [xsp+10h] [xbp-50h] BYREF
  __int128 v39; // [xsp+20h] [xbp-40h]
  __int64 v40; // [xsp+30h] [xbp-30h]
  __int64 v41; // [xsp+38h] [xbp-28h]
  int8x16x2_t v42; // 0:q0.16,16:q1.16

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((const char **)result + 2);
  if ( (unsigned __int64)(*((_QWORD *)result + 3) + 1LL - (_QWORD)v2) >= 0x21 )
  {
    if ( v2 + 32 <= (const char *)&v37 || v2 >= s )
    {
      v42 = vld2q_s8(v2);
      v11.n128_u64[0] = 0x2F0000002FLL;
      v11.n128_u64[1] = 0x2F0000002FLL;
      v12 = vmovl_high_u8(v42.val[0]);
      v13 = vmovl_u8((uint8x8_t)v42.val[0].n128_u64[0]);
      v14 = vmovl_high_u8(v42.val[1]);
      v15 = vmovl_u8((uint8x8_t)v42.val[1].n128_u64[0]);
      v16 = vaddw_u16(v11, (uint16x4_t)v13.n128_u64[0]);
      v17 = vaddw_high_u16(v11, v13);
      v18 = vaddw_u16(v11, (uint16x4_t)v12.n128_u64[0]);
      v19 = vaddw_high_u16(v11, v12);
      v20 = vaddw_u16(v11, (uint16x4_t)v15.n128_u64[0]);
      v21 = vaddw_high_u16(v11, v15);
      v22 = vaddw_u16(v11, (uint16x4_t)v14.n128_u64[0]);
      v23 = vaddw_high_u16(v11, v14);
      v14.n128_u64[0] = 0xA0000000ALL;
      v14.n128_u64[1] = 0xA0000000ALL;
      v24 = vmovn_hight_s16(
              vmovn_s16(vmovn_hight_s32(vmovn_s32(vcgtq_u32(v14, v16)), vcgtq_u32(v14, v17))),
              vmovn_hight_s32(vmovn_s32(vcgtq_u32(v14, v18)), vcgtq_u32(v14, v19)));
      v17.n128_u64[0] = 0x909090909090909LL;
      v17.n128_u64[1] = 0x909090909090909LL;
      v25 = vmovn_hight_s32(vmovn_s32(vcgtq_u32(v14, v22)), vcgtq_u32(v14, v23));
      v16.n128_u64[0] = 0xA9A9A9A9A9A9A9A9LL;
      v16.n128_u64[1] = 0xA9A9A9A9A9A9A9A9LL;
      v23.n128_u64[0] = 0xD0D0D0D0D0D0D0D0LL;
      v23.n128_u64[1] = 0xD0D0D0D0D0D0D0D0LL;
      v37 = vaddq_s8(
              vaddq_s8(
                vbslq_s8(
                  vmovn_hight_s16(vmovn_s16(vmovn_hight_s32(vmovn_s32(vcgtq_u32(v14, v20)), vcgtq_u32(v14, v21))), v25),
                  v23,
                  v16),
                v42.val[1]),
              vshlq_n_s8(vaddq_s8(vbicq_s8(v17, v24), v42.val[0]), 4u));
    }
    else
    {
      v4 = 0;
      v5 = &v37;
      do
      {
        v6 = (unsigned __int8)v2[v4];
        v7 = (unsigned __int8)v2[v4 + 1];
        v4 += 2;
        if ( (unsigned int)(v6 - 48) >= 0xA )
          v8 = 9;
        else
          v8 = 0;
        v9 = v8 + v6;
        if ( (unsigned int)(v7 - 48) >= 0xA )
          v10 = -87;
        else
          v10 = -48;
        v5->n128_u8[0] = v10 + v7 + 16 * v9;
        v5 = (int8x16_t *)((char *)v5 + 1);
      }
      while ( v4 != 32 );
    }
    v26 = (char *)((unsigned __int64)&v37 | 0xF);
    v27 = &v37.n128_i8[1];
    do
    {
      v28 = *(v27 - 1);
      *(v27 - 1) = *v26;
      *v26-- = v28;
    }
    while ( v27++ < v26 );
    v40 = 0;
    *(_OWORD *)s = 0u;
    v39 = 0u;
    result = (void *)snprintf(s, 0x28u, "%LaL", *(long double *)&v37);
    if ( (_DWORD)result )
    {
      v30 = a2[1];
      v31 = (unsigned __int64)a2[2];
      v32 = (int)result;
      v33 = (unsigned __int64)&v30[(int)result];
      if ( v33 >= v31 )
      {
        v35 = *a2;
        if ( 2 * v31 >= v33 )
          v36 = 2 * v31;
        else
          v36 = v33;
        a2[2] = (char *)v36;
        v34 = (char *)realloc(v35, v36);
        v30 = a2[1];
        *a2 = v34;
      }
      else
      {
        v34 = *a2;
      }
      result = memmove(&v30[(_QWORD)v34], s, v32);
      a2[1] += v32;
    }
  }
  return result;
}
