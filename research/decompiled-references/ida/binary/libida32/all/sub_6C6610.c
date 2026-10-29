__int64 __fastcall sub_6C6610(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  unsigned int v12; // r15d
  _QWORD *v14; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // xmm0_8
  __int64 v23; // rdx
  __int64 v24; // rbx
  __m128i v26; // xmm0
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF

  v12 = 1;
  v14 = *(_QWORD **)(a12 + 16);
  v30[1] = __readfsqword(0x28u);
  v30[0] = *v14;
  v16 = sub_6B4E70(v30);
  if ( sub_A73FE0(*(_QWORD *)(a1 + 48), *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL)) >= 0 )
  {
    v12 = 0;
    sub_6C3AF0(&v29, a1, v16, v17, a3, a4, a5, a6, v18, v19, a9, a10);
    if ( !(_BYTE)v29 )
    {
LABEL_8:
      clear_tinfo_t(&v29);
      return v12;
    }
    v20 = a2[1];
    v21 = *a2;
    v22 = 0;
    if ( v20 )
    {
      v26 = _mm_loadu_si128((const __m128i *)(v21 + (v20 << 7) - 128));
      v23 = v20 + 1;
      v22 = _mm_add_epi64(v26, _mm_srli_si128(v26, 8)).m128i_u64[0];
      if ( a2[2] >= (unsigned __int64)(v20 + 1) )
        goto LABEL_5;
    }
    else
    {
      v23 = 1;
      if ( a2[2] )
      {
LABEL_5:
        v24 = v21 + (v20 << 7);
        *(_OWORD *)v24 = 0;
        *(_QWORD *)(v24 + 112) = 0;
        *(_OWORD *)(v24 + 24) = 0;
        *(_OWORD *)(v24 + 48) = 0;
        *(_OWORD *)(v24 + 64) = 0;
        *(_QWORD *)(v24 + 16) = 0;
        *(_QWORD *)(v24 + 40) = 0;
        *(_QWORD *)(v24 + 96) = 1;
        *(_DWORD *)(v24 + 104) = -1;
        *(_BYTE *)(v24 + 120) = 0;
        ++a2[1];
        *(_DWORD *)(v24 + 116) |= 0x20u;
        *(_QWORD *)v24 = v22;
        copy_tinfo_t(v24 + 64);
        *(_QWORD *)(v24 + 8) = get_tinfo_size(0, *(_QWORD *)(v24 + 64), 2);
        if ( (*(_BYTE *)(a12 + 12) & 1) != 0 )
          *(_DWORD *)(v24 + 116) |= 0x80u;
        v12 = 1;
        goto LABEL_8;
      }
    }
    v28 = v22;
    v27 = qvector_reserve(a2, v21, v23, 128);
    *a2 = v27;
    v21 = v27;
    v20 = a2[1];
    goto LABEL_5;
  }
  return v12;
}

