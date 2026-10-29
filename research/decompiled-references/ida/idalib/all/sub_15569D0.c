__int64 __fastcall sub_15569D0(
        __int64 a1,
        unsigned __int8 a2,
        int *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  char v13; // r8
  __int16 v14; // ax
  unsigned int v15; // esi
  unsigned int v16; // r14d
  unsigned int v18; // eax
  unsigned int v19; // esi
  char v20; // [rsp+Fh] [rbp-49h]
  int v21; // [rsp+1Ah] [rbp-3Eh] BYREF
  __int16 v22; // [rsp+1Eh] [rbp-3Ah]

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v13 = *(_BYTE *)(a1 + 1952);
  *a3 = *(_DWORD *)(a1 + 40);
  v14 = *(_WORD *)(a1 + 32);
  *(_BYTE *)(a1 + 1952) = 0;
  if ( (unsigned __int16)(v14 - 52) <= 3u
    || v14 == 75
    || (v20 = v13, v18 = sub_15566A0((const __m128i *)a1, a4, a6, *a3, a7, a8), v13 = v20, v16 = v18, !(_BYTE)v18) )
  {
    v15 = *a3;
    *(_BYTE *)(a1 + 1952) = v13;
    return (unsigned int)sub_1553D50(a1, v15, a5, a2, 0);
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) != 0 )
    {
      v22 = 75;
      v21 = 3473460;
      sub_15680D0(a1, &v21, 3, 3);
    }
    else
    {
      LOWORD(v21) = 52;
      sub_15680D0(a1, &v21, 1, 3);
    }
    v19 = *a3;
    *(_BYTE *)(a1 + 1952) = v20;
    sub_1553D50(a1, v19, a5, a2, 0);
  }
  return v16;
}
