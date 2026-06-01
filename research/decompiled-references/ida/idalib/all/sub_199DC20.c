__int64 __fastcall sub_199DC20(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r12
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
  __int64 v17; // rbx
  __int8 v18; // r14
  __int8 v19; // r15
  bool v20; // bp
  const __m128i *v21; // rdi
  unsigned int v22; // eax
  void *v23; // rdi
  const __m128i *v24; // rax
  __int16 v25; // dx
  __int8 v26; // bp
  unsigned int v28; // eax
  __int8 v29; // dl
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  const __m128i *v33; // [rsp+0h] [rbp-88h]
  __int32 v34; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v37; // [rsp+20h] [rbp-68h]
  __int8 v38; // [rsp+24h] [rbp-64h]
  char v39; // [rsp+28h] [rbp-60h]
  __int16 v40; // [rsp+30h] [rbp-58h]
  __m128 v41; // [rsp+38h] [rbp-50h]
  char v42; // [rsp+48h] [rbp-40h]

  v4 = a2;
  v6 = *(const __m128i **)(*a1 + 744);
  v7 = v6[4].m128i_i8[0] == 0;
  v33 = v6;
  v34 = v6[2].m128i_i32[0];
  v8 = v6[2].m128i_i64[1];
  v39 = 0;
  v35 = v8;
  if ( v7 )
  {
    v9 = v6;
  }
  else
  {
    v37 = v6[3].m128i_u32[2];
    if ( v37 > 0x40 )
    {
      sub_2205510(&v36);
      v9 = *(const __m128i **)(*a1 + 744);
    }
    else
    {
      v9 = v6;
      v36 = v6[3].m128i_i64[0];
    }
    v10 = v6[3].m128i_i8[12];
    v39 = 1;
    v38 = v10;
  }
  v11 = v6[4].m128i_i16[4];
  v12 = (__m128)_mm_loadu_si128(v6 + 5);
  v42 = 1;
  v13 = *(unsigned int *)(a2 + 4);
  v40 = v11;
  v41 = v12;
  sub_1AA58B0(v9, v13);
  v17 = sub_1998500(a1, *(unsigned __int16 **)(v4 + 8), 0, v12, a4, v14, v15, v16);
  if ( v17 == 1 || (v30 = sub_190CCA0(a1, *(unsigned __int16 **)(v4 + 16), *(double *)v12.m128_u64, a4), v30 == 1) )
  {
    v4 = 1;
  }
  else
  {
    v31 = v17 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v30 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(v4 + 16) || *(_QWORD *)(v4 + 8) != v31 )
      v4 = sub_1C3AA30(
             *a1,
             *(_DWORD *)(v4 + 4),
             v31,
             *(_DWORD *)(v4 + 24),
             *(_DWORD *)(v4 + 24),
             (unsigned int)v30 & 0xFFFFFFFE,
             *(_DWORD *)(v4 + 28));
  }
  if ( v42 )
  {
    v18 = v33[4].m128i_i8[8];
    v19 = v33[5].m128i_i8[12];
    v20 = (v33[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v18 = v40;
    v19 = v41.m128_i8[12];
    v20 = (v34 & 2) != 0;
  }
  v7 = v33[4].m128i_i8[0] == 0;
  v21 = v33 + 3;
  v33[2].m128i_i32[0] = v34;
  v33[2].m128i_i64[1] = v35;
  if ( v7 )
  {
    if ( !v39 )
      goto LABEL_16;
    v28 = v37;
    v33[3].m128i_i32[2] = v37;
    if ( v28 > 0x40 )
      sub_2205510(v21);
    else
      v33[3].m128i_i64[0] = v36;
    v24 = v33;
    v29 = v38;
    v33[4].m128i_i8[0] = 1;
    v33[3].m128i_i8[12] = v29;
  }
  else
  {
    v22 = v33[3].m128i_u32[2];
    if ( !v39 )
    {
      v33[4].m128i_i8[0] = 0;
      if ( v22 > 0x40 )
      {
        v23 = (void *)v33[3].m128i_i64[0];
        v24 = v33;
        if ( v23 )
        {
          operator delete[](v23);
          v24 = v33;
        }
        goto LABEL_17;
      }
LABEL_16:
      v24 = v33;
      goto LABEL_17;
    }
    if ( v22 <= 0x40 && v37 <= 0x40 )
    {
      v32 = v36;
      v33[3].m128i_i32[2] = v37;
      v24 = v33;
      v33[3].m128i_i64[0] = v32;
    }
    else
    {
      sub_22056A0(v21, &v36);
      v24 = v33;
    }
    v33[3].m128i_i8[12] = v38;
  }
LABEL_17:
  v33[4].m128i_i16[4] = v40;
  v24[5].m128i_i64[0] = v41.m128_u64[0];
  v24[5].m128i_i32[2] = v41.m128_i32[2];
  v25 = v41.m128_i16[6];
  v24[4].m128i_i8[8] = v18;
  v24[5].m128i_i16[6] = v25;
  LOBYTE(v25) = 2 * v20;
  v26 = v24[2].m128i_i8[0];
  v24[5].m128i_i8[12] = v19;
  v24[2].m128i_i8[0] = v25 | v26 & 0xFD;
  sub_98E4B0((__int64)&v36);
  return v4;
}
