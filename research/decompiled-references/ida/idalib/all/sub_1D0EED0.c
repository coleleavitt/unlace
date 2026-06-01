__int64 __fastcall sub_1D0EED0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r12
  const __m128i *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rdi
  __int8 v10; // al
  __int16 v11; // ax
  __m128 v12; // xmm0
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int8 v21; // r14
  __int8 v22; // r15
  bool v23; // bp
  const __m128i *v24; // rdi
  unsigned int v25; // eax
  void *v26; // rdi
  const __m128i *v27; // rax
  __int16 v28; // dx
  __int8 v29; // bp
  unsigned int v31; // eax
  __int8 v32; // dl
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rdx
  const __m128i *v37; // [rsp+0h] [rbp-88h]
  __int32 v38; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+10h] [rbp-78h]
  __int64 v40; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v41; // [rsp+20h] [rbp-68h]
  __int8 v42; // [rsp+24h] [rbp-64h]
  char v43; // [rsp+28h] [rbp-60h]
  __int16 v44; // [rsp+30h] [rbp-58h]
  __m128 v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+48h] [rbp-40h]

  v4 = a2;
  v6 = *(const __m128i **)(*a1 + 744);
  v7 = v6[4].m128i_i8[0] == 0;
  v37 = v6;
  v38 = v6[2].m128i_i32[0];
  v8 = v6[2].m128i_i64[1];
  v43 = 0;
  v39 = v8;
  if ( v7 )
  {
    v9 = (__int64)v6;
  }
  else
  {
    v41 = v6[3].m128i_u32[2];
    if ( v41 > 0x40 )
    {
      sub_2205510(&v40);
      v9 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v9 = (__int64)v6;
      v40 = v6[3].m128i_i64[0];
    }
    v10 = v6[3].m128i_i8[12];
    v43 = 1;
    v42 = v10;
  }
  v11 = v6[4].m128i_i16[4];
  v12 = (__m128)_mm_loadu_si128(v6 + 5);
  v46 = 1;
  v13 = *(_DWORD *)(a2 + 4);
  v44 = v11;
  v45 = v12;
  sub_1AA58B0(v9, v13);
  v19 = sub_1CE7590(a1, *(_WORD **)(v4 + 8), 0, v12, a4, v14, v15, v16);
  if ( v19 == 1 || (v33 = sub_1CE88F0(a1, *(unsigned __int16 **)(v4 + 16), v12, a4, v17, v18, v20), v33 == 1) )
  {
    v4 = 1;
  }
  else
  {
    v34 = v33 & 0xFFFFFFFFFFFFFFFELL;
    v35 = v19 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v4 + 16) != v34 || *(_QWORD *)(v4 + 8) != v35 )
      v4 = sub_1C3AA30(
             (__int64 *)*a1,
             *(_DWORD *)(v4 + 4),
             v35,
             *(_DWORD *)(v4 + 24),
             v12,
             a4,
             *(unsigned int *)(v4 + 24),
             v34,
             *(_DWORD *)(v4 + 28));
  }
  if ( v46 )
  {
    v21 = v37[4].m128i_i8[8];
    v22 = v37[5].m128i_i8[12];
    v23 = (v37[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v21 = v44;
    v22 = v45.m128_i8[12];
    v23 = (v38 & 2) != 0;
  }
  v7 = v37[4].m128i_i8[0] == 0;
  v24 = v37 + 3;
  v37[2].m128i_i32[0] = v38;
  v37[2].m128i_i64[1] = v39;
  if ( v7 )
  {
    if ( !v43 )
      goto LABEL_16;
    v31 = v41;
    v37[3].m128i_i32[2] = v41;
    if ( v31 > 0x40 )
      sub_2205510(v24);
    else
      v37[3].m128i_i64[0] = v40;
    v27 = v37;
    v32 = v42;
    v37[4].m128i_i8[0] = 1;
    v37[3].m128i_i8[12] = v32;
  }
  else
  {
    v25 = v37[3].m128i_u32[2];
    if ( !v43 )
    {
      v37[4].m128i_i8[0] = 0;
      if ( v25 > 0x40 )
      {
        v26 = (void *)v37[3].m128i_i64[0];
        v27 = v37;
        if ( v26 )
        {
          operator delete[](v26);
          v27 = v37;
        }
        goto LABEL_17;
      }
LABEL_16:
      v27 = v37;
      goto LABEL_17;
    }
    if ( v25 <= 0x40 && v41 <= 0x40 )
    {
      v36 = v40;
      v37[3].m128i_i32[2] = v41;
      v27 = v37;
      v37[3].m128i_i64[0] = v36;
    }
    else
    {
      sub_22056A0(v24, &v40);
      v27 = v37;
    }
    v37[3].m128i_i8[12] = v42;
  }
LABEL_17:
  v37[4].m128i_i16[4] = v44;
  v27[5].m128i_i64[0] = v45.m128_u64[0];
  v27[5].m128i_i32[2] = v45.m128_i32[2];
  v28 = v45.m128_i16[6];
  v27[4].m128i_i8[8] = v21;
  v27[5].m128i_i16[6] = v28;
  LOBYTE(v28) = 2 * v23;
  v29 = v27[2].m128i_i8[0];
  v27[5].m128i_i8[12] = v22;
  v27[2].m128i_i8[0] = v28 | v29 & 0xFD;
  sub_98E4B0((__int64)&v40);
  return v4;
}
