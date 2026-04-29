__int64 __fastcall sub_7F790(__int64 a1, unsigned __int64 a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned __int16 *v6; // rax
  int v7; // ecx
  __int64 result; // rax
  char v9; // al
  int v10; // r14d
  __int64 v11; // rax
  __m128i v12; // xmm1
  unsigned __int32 v13; // r13d
  __int64 v14; // rax
  unsigned __int16 v15; // [rsp+Eh] [rbp-6Ah]
  unsigned __int32 v16; // [rsp+10h] [rbp-68h]
  int v17; // [rsp+14h] [rbp-64h]
  __int64 v18; // [rsp+18h] [rbp-60h]
  unsigned __int16 v19[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int32 v20; // [rsp+24h] [rbp-54h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+30h] [rbp-48h]
  unsigned __int32 v23; // [rsp+34h] [rbp-44h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a2 <= 0x17 )
    return 0xFFFFFFFFLL;
  v6 = (unsigned __int16 *)((char *)a3 + 23);
  v7 = -1;
  while ( 1 )
  {
    if ( *(_BYTE *)v6 )
    {
      if ( ++v7 > 0 )
        break;
    }
    if ( a3 == v6 )
      return 0xFFFFFFFFLL;
    v6 = (unsigned __int16 *)((char *)v6 - 1);
  }
  *a4 = 0;
  v9 = sub_7EC10(a3, a2);
  v10 = *a3;
  if ( v9 )
    goto LABEL_10;
  LOWORD(v10) = __ROL2__(v10, 8);
  v12 = _mm_cvtsi32_si128(*((_DWORD *)a3 + 4));
  v15 = __ROL2__(a3[1], 8);
  v16 = _byteswap_ulong(*((_DWORD *)a3 + 5));
  v13 = _byteswap_ulong(*((_DWORD *)a3 + 1));
  v17 = _mm_cvtsi128_si32(_mm_or_si128(_mm_slli_epi16(v12, 8u), _mm_srli_epi16(v12, 8u)));
  v14 = swap64(*((_QWORD *)a3 + 1));
  v19[0] = v10;
  v21 = v14;
  v18 = v14;
  v19[1] = v15;
  v22 = v17;
  v20 = v13;
  v23 = v16;
  if ( !(unsigned __int8)sub_7EC10(v19, a2) )
    return 0xFFFFFFFFLL;
  *a4 = 1;
  *a3 = v10;
  a3[1] = v15;
  *((_DWORD *)a3 + 1) = v13;
  *((_QWORD *)a3 + 1) = v18;
  *((_DWORD *)a3 + 4) = v17;
  *((_DWORD *)a3 + 5) = v16;
LABEL_10:
  *(_WORD *)(a1 + 57) = v10;
  *(_DWORD *)(a1 + 61) = a3[1];
  *(_DWORD *)(a1 + 69) = *((_DWORD *)a3 + 1);
  *(_QWORD *)(a1 + 73) = *((_QWORD *)a3 + 1);
  *(_DWORD *)(a1 + 65) = *((_DWORD *)a3 + 5);
  *(_WORD *)(a1 + 81) = a3[8];
  *(_WORD *)(a1 + 83) = a3[9];
  *(_WORD *)(a1 + 59) = 0;
  result = 0;
  if ( (unsigned __int16)(v10 - 487) <= 0x10u )
  {
    v11 = 65793;
    return _bittest64(&v11, (unsigned int)(v10 - 487));
  }
  return result;
}
