__int64 __fastcall sub_1D30F60(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v10; // r13
  unsigned __int16 *v13; // r12
  unsigned __int64 v14; // rax
  __m128i v16; // kr00_16
  const __m128i *v17; // r15
  __int32 v18; // eax
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdi
  __int16 v22; // ax
  unsigned int v23; // esi
  __m128 v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdi
  unsigned __int64 v33; // r8
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // rsi
  __int8 v39; // al
  unsigned __int64 v40; // [rsp+8h] [rbp-D0h]
  __m128i v41; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+20h] [rbp-B8h]
  __m128i v43; // [rsp+30h] [rbp-A8h]
  __int64 v44; // [rsp+40h] [rbp-98h]
  const __m128i *v45; // [rsp+50h] [rbp-88h] BYREF
  __int32 v46; // [rsp+58h] [rbp-80h]
  __int64 v47; // [rsp+60h] [rbp-78h]
  __int64 v48; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-68h]
  __int8 v50; // [rsp+74h] [rbp-64h]
  char v51; // [rsp+78h] [rbp-60h]
  __int16 v52; // [rsp+80h] [rbp-58h]
  __m128 v53; // [rsp+88h] [rbp-50h]
  char v54; // [rsp+98h] [rbp-40h]

  v10 = 1;
  v13 = *(unsigned __int16 **)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
  v14 = sub_EEE170(a2);
  sub_1D1BD70((__int64)&v41, a1, *(unsigned int *)(a2 + 4), v14, v13, 0, a3, a4);
  if ( !(_BYTE)v42 )
  {
    v16 = v41;
    v17 = *(const __m128i **)(*a1 + 744);
    v18 = v17[2].m128i_i32[0];
    v19 = v17[4].m128i_i8[0] == 0;
    v45 = v17;
    v46 = v18;
    v20 = v17[2].m128i_i64[1];
    v51 = 0;
    v47 = v20;
    if ( v19 )
    {
      v21 = (__int64)v17;
    }
    else
    {
      v49 = v17[3].m128i_u32[2];
      if ( v49 > 0x40 )
      {
        sub_2205510(&v48);
        v21 = *(_QWORD *)(*a1 + 744);
      }
      else
      {
        v21 = (__int64)v17;
        v48 = v17[3].m128i_i64[0];
      }
      v39 = v17[3].m128i_i8[12];
      v51 = 1;
      v50 = v39;
    }
    v22 = v17[4].m128i_i16[4];
    v23 = *(_DWORD *)(a2 + 4);
    v54 = 1;
    v24 = (__m128)_mm_loadu_si128(v17 + 5);
    v52 = v22;
    v53 = v24;
    sub_1AA56C0(v21, v23);
    v30 = sub_1D2FA60(
            a1,
            *(unsigned __int16 **)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16),
            nullptr,
            v24,
            a4,
            a5,
            a6,
            v28,
            v29,
            a9,
            a10,
            v25,
            v26,
            v27);
    if ( v30 == 1 )
    {
      v10 = 1;
    }
    else
    {
      v32 = *a1;
      v33 = v30 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        v40 = v30 & 0xFFFFFFFFFFFFFFFELL;
        v34 = *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
        v35 = sub_EEE170(a2);
        v33 = v40;
        if ( v34 == (v16.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v35 == v16.m128i_i64[0] )
        {
          v10 = a2;
          if ( *(_QWORD *)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16) == v40 )
            goto LABEL_11;
        }
        v32 = *a1;
      }
      v36 = *(unsigned int *)(a2 + 12);
      v37 = *(unsigned int *)(a2 + 8);
      v43 = _mm_load_si128(&v41);
      v38 = *(unsigned int *)(a2 + 4);
      v44 = v42;
      v10 = sub_1C3AC70(v32, v38, v37, v36, v33, *(double *)v24.m128_u64, v31, v43.m128i_i64[0], v43.m128i_i64[1], v42);
    }
LABEL_11:
    sub_15354C0((__int64)&v45);
  }
  return v10;
}
