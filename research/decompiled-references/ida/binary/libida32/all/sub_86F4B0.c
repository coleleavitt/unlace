__int64 __fastcall sub_86F4B0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 v7; // rsi
  __int64 result; // rax
  int v9; // edx
  __m128i v10[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( **(_BYTE **)a1 == 119 )
  {
    *a3 = byte_239F9C0[119];
    if ( a2[33] )
      goto LABEL_3;
    return 0;
  }
  *a3 = (unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)a1 + 5LL), 8);
  if ( !a2[33] )
    return 0;
LABEL_3:
  v4 = a2[31];
  *(_DWORD *)(v4 + 8) = (*(_DWORD *)(a1 + 128) >> 1) + 1;
  *(_DWORD *)(v4 + 12) = *(_DWORD *)(a1 + 116);
  *(_QWORD *)(v4 + 16) = a1 + 120;
  *(_QWORD *)(v4 + 24) = a2[24];
  *(_QWORD *)(v4 + 56) = *(_QWORD *)(a1 + 80) - a2[16];
  *(_QWORD *)(v4 + 64) = (unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)a1 + 1LL), 8);
  *(_QWORD *)(v4 + 72) = (unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)a1 + 3LL), 8);
  if ( **(_BYTE **)a1 == 119 )
  {
    v9 = *(unsigned __int8 *)(*(_QWORD *)a1 + 5LL);
    *(_QWORD *)(v4 + 80) = 0;
    *(_QWORD *)(v4 + 96) = 0;
    *(_DWORD *)(v4 + 4) = v9;
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(v4 + 4) = 0;
    *(_QWORD *)(v4 + 80) = (unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)a1 + 7LL), 8);
    *(_QWORD *)(v4 + 96) = *(_QWORD *)a1 + 10LL;
    v5 = *a3 - 11LL;
  }
  *(_QWORD *)(v4 + 88) = v5;
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 120));
  *(_OWORD *)(a1 + 120) = -1;
  v7 = a2[32];
  v10[0] = v6;
  result = ((__int64 (__fastcall *)(__int64, __int64))a2[33])(v4, v7);
  *(__m128i *)(a1 + 120) = _mm_load_si128(v10);
  *(_DWORD *)(v4 + 104) = 0;
  return result;
}

