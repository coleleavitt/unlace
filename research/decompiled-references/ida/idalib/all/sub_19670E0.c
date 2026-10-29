__int64 __fastcall sub_19670E0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  const __m128i *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  const __m128i *v9; // rdi
  __int8 v10; // al
  __int16 v11; // ax
  __m128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // r13
  __int8 v20; // r14
  __int8 v21; // r15
  bool v22; // bp
  const __m128i *v23; // rdi
  unsigned int v24; // eax
  void *v25; // rdi
  const __m128i *v26; // rax
  __int16 v27; // dx
  __int8 v28; // bp
  unsigned int v30; // eax
  __int8 v31; // dl
  __int64 v32; // rax
  __int64 v33; // rdx
  const __m128i *v34; // [rsp+0h] [rbp-88h]
  __int32 v35; // [rsp+8h] [rbp-80h]
  __int64 v36; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v38; // [rsp+20h] [rbp-68h]
  __int8 v39; // [rsp+24h] [rbp-64h]
  char v40; // [rsp+28h] [rbp-60h]
  __int16 v41; // [rsp+30h] [rbp-58h]
  __m128 v42; // [rsp+38h] [rbp-50h]
  char v43; // [rsp+48h] [rbp-40h]

  v6 = *(const __m128i **)(*a1 + 744);
  v7 = v6[4].m128i_i8[0] == 0;
  v34 = v6;
  v35 = v6[2].m128i_i32[0];
  v8 = v6[2].m128i_i64[1];
  v40 = 0;
  v36 = v8;
  if ( v7 )
  {
    v9 = v6;
  }
  else
  {
    v38 = v6[3].m128i_u32[2];
    if ( v38 > 0x40 )
    {
      sub_2205510(&v37);
      v9 = *(const __m128i **)(*a1 + 744);
    }
    else
    {
      v9 = v6;
      v37 = v6[3].m128i_i64[0];
    }
    v10 = v6[3].m128i_i8[12];
    v40 = 1;
    v39 = v10;
  }
  v11 = v6[4].m128i_i16[4];
  v12 = (__m128)_mm_loadu_si128(v6 + 5);
  v43 = 1;
  v13 = *(unsigned int *)(a2 + 4);
  v41 = v11;
  v42 = v12;
  sub_1AA58B0(v9, v13);
  v17 = sub_1961D20(a1, *(unsigned __int16 **)(a2 + 8), 0, v12, a4, v14, v15, v16);
  v18 = v17;
  if ( v17 == 1 || (v32 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), v12, a4), v32 == 1) )
    v19 = 1;
  else
    v19 = sub_1C3AA30(
            *a1,
            *(_DWORD *)(a2 + 4),
            v18 & 0xFFFFFFFE,
            *(_DWORD *)(a2 + 24),
            *(_DWORD *)(a2 + 24),
            (unsigned int)v32 & 0xFFFFFFFE,
            *(_DWORD *)(a2 + 28));
  if ( v43 )
  {
    v20 = v34[4].m128i_i8[8];
    v21 = v34[5].m128i_i8[12];
    v22 = (v34[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v20 = v41;
    v21 = v42.m128_i8[12];
    v22 = (v35 & 2) != 0;
  }
  v7 = v34[4].m128i_i8[0] == 0;
  v23 = v34 + 3;
  v34[2].m128i_i32[0] = v35;
  v34[2].m128i_i64[1] = v36;
  if ( v7 )
  {
    if ( !v40 )
      goto LABEL_16;
    v30 = v38;
    v34[3].m128i_i32[2] = v38;
    if ( v30 > 0x40 )
      sub_2205510(v23);
    else
      v34[3].m128i_i64[0] = v37;
    v26 = v34;
    v31 = v39;
    v34[4].m128i_i8[0] = 1;
    v34[3].m128i_i8[12] = v31;
  }
  else
  {
    v24 = v34[3].m128i_u32[2];
    if ( !v40 )
    {
      v34[4].m128i_i8[0] = 0;
      if ( v24 > 0x40 )
      {
        v25 = (void *)v34[3].m128i_i64[0];
        v26 = v34;
        if ( v25 )
        {
          operator delete[](v25);
          v26 = v34;
        }
        goto LABEL_17;
      }
LABEL_16:
      v26 = v34;
      goto LABEL_17;
    }
    if ( v24 <= 0x40 && v38 <= 0x40 )
    {
      v33 = v37;
      v34[3].m128i_i32[2] = v38;
      v26 = v34;
      v34[3].m128i_i64[0] = v33;
    }
    else
    {
      sub_22056A0(v23, &v37);
      v26 = v34;
    }
    v34[3].m128i_i8[12] = v39;
  }
LABEL_17:
  v34[4].m128i_i16[4] = v41;
  v26[5].m128i_i64[0] = v42.m128_u64[0];
  v26[5].m128i_i32[2] = v42.m128_i32[2];
  v27 = v42.m128_i16[6];
  v26[4].m128i_i8[8] = v20;
  v26[5].m128i_i16[6] = v27;
  LOBYTE(v27) = 2 * v22;
  v28 = v26[2].m128i_i8[0];
  v26[5].m128i_i8[12] = v21;
  v26[2].m128i_i8[0] = v27 | v28 & 0xFD;
  sub_98E4B0((__int64)&v37);
  return v19;
}
