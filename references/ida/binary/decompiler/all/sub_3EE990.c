__int64 __fastcall sub_3EE990(__int64 a1, _BYTE *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  __int16 v12; // ax
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r15d
  int dtype_size; // eax
  unsigned int v17; // r15d
  __int64 v18; // rsi
  int v19; // eax
  int v20; // esi
  char v22; // si
  __int64 v23; // rsi
  int v24; // edx
  __m128i v25; // xmm0
  int v26; // ecx
  int v27; // r9d
  int v28; // [rsp+8h] [rbp-70h]
  _DWORD v29[4]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v30[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(unsigned __int16 *)(a1 + 48);
  v30[3] = __readfsqword(0x28u);
  v9 = v7;
  if ( (_WORD)v7 != 92 && v7 != 222 && (unsigned __int16)(v7 - 198) > 1u && (unsigned __int16)(v7 - 97) > 1u )
    a3 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL);
  if ( !a2[32] )
  {
    v17 = 0;
    goto LABEL_25;
  }
  v10 = *(_DWORD *)(a1 + 52) & 0x1018;
  v11 = ((char)a2[33] >> 3) & 7;
  if ( (*(_DWORD *)(a1 + 52) & 0x10) != 0 && (*(_BYTE *)(a1 + 57) & 2) != 0 )
  {
    v22 = v11 | 8;
    v12 = v22;
    if ( (unsigned __int16)v9 > 0x5C0u )
    {
      if ( (unsigned __int16)v9 <= 0x5F1u )
      {
        if ( (unsigned __int16)v9 > 0x5EDu )
          goto LABEL_12;
        goto LABEL_42;
      }
      if ( (unsigned __int16)(v9 - 1532) > 0xFu )
        goto LABEL_42;
    }
    else if ( (unsigned __int16)v9 <= 0x5BCu )
    {
      if ( (unsigned __int16)v9 > 0x378u )
      {
        if ( (unsigned __int16)(v9 - 993) <= 3u )
          goto LABEL_12;
      }
      else if ( (unsigned __int16)v9 > 0x374u )
      {
        goto LABEL_12;
      }
LABEL_42:
      v14 = (unsigned int)v22;
      goto LABEL_16;
    }
  }
  else
  {
    v12 = v11;
    if ( (unsigned __int16)v9 > 0x5C0u )
    {
      if ( (unsigned __int16)v9 > 0x5F1u )
      {
        LOWORD(v9) = v9 - 1532;
        if ( (unsigned __int16)v9 > 0xFu )
          goto LABEL_15;
      }
      else if ( (unsigned __int16)v9 <= 0x5EDu )
      {
        goto LABEL_15;
      }
    }
    else if ( (unsigned __int16)v9 <= 0x5BCu )
    {
      if ( (unsigned __int16)v9 > 0x378u )
      {
        LOWORD(v9) = v9 - 993;
        if ( (unsigned __int16)v9 > 3u )
          goto LABEL_15;
      }
      else if ( (unsigned __int16)v9 <= 0x374u )
      {
        goto LABEL_15;
      }
    }
  }
LABEL_12:
  v13 = a1 + 24;
  if ( (*(_BYTE *)(a1 + 297) & 0x10) != 0 )
    v12 |= 0x10u;
  v12 = sub_3E7170(v13, v12);
LABEL_15:
  v14 = (unsigned int)v12;
  if ( v12 != 4 )
  {
LABEL_16:
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v14);
    dtype_size = get_dtype_size();
    sub_1D3790(a1, 4, dtype_size, v15, 346938453, a3, 0);
    v10 = (unsigned __int8)a2[33];
    LOBYTE(v10) = (unsigned __int8)v10 >> 6;
    if ( (_BYTE)v10 )
    {
      v23 = *(_QWORD *)(a1 + 832);
      v24 = 1 << v10;
      v25 = _mm_cvtsi32_si128(*(_DWORD *)(v23 + 80));
      v26 = *(_DWORD *)(v23 + 80);
      v30[0] = 0xFFFFFFFF00000000LL;
      v29[0] = 1;
      v30[1] = 0;
      *(_QWORD *)&v29[1] = _mm_unpacklo_epi32(v25, _mm_cvtsi32_si128(a3)).m128i_u64[0];
      sub_11E5D0((__int64)v30, v23, v24, v26, -1, 0);
      sub_1D38D0(a1, 14, (unsigned int)v29, (unsigned int)v30, (unsigned int)v29, v27);
      sub_11A960((__int64)v30);
      sub_11A960((__int64)v29);
    }
    v17 = 1;
    goto LABEL_19;
  }
  v17 = 0;
LABEL_19:
  if ( a2[1] != 2 )
  {
    v18 = a2[33] & 7;
    if ( (*(_BYTE *)(a1 + 52) & 0x10) != 0 && (*(_BYTE *)(a1 + 57) & 1) != 0 )
      v18 = a2[33] & 7 | 8u;
    v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(
            *(_QWORD *)(a1 + 832),
            v18,
            v9,
            v10);
    v19 = get_dtype_size();
    v20 = (_BYTE)v17 == 0 ? 4 : 12;
    v17 = 1;
    sub_1D3790(a1, v20, v19, v28, a3, a3, 0);
  }
LABEL_25:
  *a4 = a3;
  return v17;
}
