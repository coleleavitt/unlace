__int64 __fastcall sub_3F94F0(__int64 a1, _BYTE *a2, signed int a3, signed int *a4)
{
  unsigned int v7; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // r13
  char v12; // si
  __int16 v13; // ax
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r15d
  int dtype_size; // eax
  unsigned int v18; // r15d
  __int64 v19; // rsi
  int v20; // eax
  unsigned int v21; // esi
  char v23; // si
  __int64 v24; // rsi
  int v25; // edx
  __m128i v26; // xmm0
  int v27; // ecx
  __int64 v28; // [rsp+8h] [rbp-70h]
  unsigned __int8 v29[16]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v30[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(unsigned __int16 *)(a1 + 48);
  v30[3] = __readfsqword(0x28u);
  v9 = v7;
  if ( (_WORD)v7 != 92 && v7 != 222 && (unsigned __int16)(v7 - 198) > 1u && (unsigned __int16)(v7 - 97) > 1u )
    a3 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL);
  if ( !a2[32] )
  {
    v18 = 0;
    goto LABEL_25;
  }
  v10 = *(_DWORD *)(a1 + 52) & 0x1018;
  v11 = 5 * ((_DWORD)v10 == 4112) + 2;
  v12 = ((char)a2[33] >> 3) & 7;
  if ( (*(_DWORD *)(a1 + 52) & 0x10) != 0 && (*(_BYTE *)(a1 + 57) & 2) != 0 )
  {
    v23 = v12 | 8;
    v13 = v23;
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
      v15 = (unsigned int)v23;
      goto LABEL_16;
    }
  }
  else
  {
    v13 = v12;
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
  v14 = a1 + 24;
  if ( (*(_BYTE *)(a1 + 297) & 0x10) != 0 )
    v13 |= 0x10u;
  v13 = sub_3F1D70(v14, v13);
LABEL_15:
  v15 = (unsigned int)v13;
  if ( v13 != 4 )
  {
LABEL_16:
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v15);
    dtype_size = get_dtype_size(v11);
    sub_1D6310(a1, 4u, dtype_size, v16, 0x3BEA45E214ADDC55LL, a3, 0);
    v10 = (unsigned __int8)a2[33];
    LOBYTE(v10) = (unsigned __int8)v10 >> 6;
    if ( (_BYTE)v10 )
    {
      v24 = *(_QWORD *)(a1 + 832);
      v25 = 1 << v10;
      v26 = _mm_cvtsi32_si128(*(_DWORD *)(v24 + 80));
      v27 = *(_DWORD *)(v24 + 80);
      v30[0] = 0xFFFFFFFF00000000LL;
      *(_DWORD *)v29 = 1;
      v30[1] = 0;
      *(_QWORD *)&v29[4] = _mm_unpacklo_epi32(v26, _mm_cvtsi32_si128(a3)).m128i_u64[0];
      sub_120A10((__int64)v30, v24, v25, v27, -1, 0);
      sub_1D6450(a1, 14, v29, (unsigned __int8 *)v30, v29);
      sub_11CDA0((__int64)v30);
      sub_11CDA0((__int64)v29);
    }
    v18 = 1;
    goto LABEL_19;
  }
  v18 = 0;
LABEL_19:
  if ( a2[1] != 2 )
  {
    v19 = a2[33] & 7;
    if ( (*(_BYTE *)(a1 + 52) & 0x10) != 0 && (*(_BYTE *)(a1 + 57) & 1) != 0 )
      v19 = a2[33] & 7 | 8u;
    v28 = (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(
            *(_QWORD *)(a1 + 832),
            v19,
            v9,
            v10);
    v20 = get_dtype_size(v11);
    v21 = (_BYTE)v18 == 0 ? 4 : 12;
    v18 = 1;
    sub_1D6310(a1, v21, v20, v28, a3, a3, 0);
  }
LABEL_25:
  *a4 = a3;
  return v18;
}
