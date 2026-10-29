__int64 __fastcall sub_BF5170(__int64 a1, __int64 a2, const __m128i *a3)
{
  unsigned int v4; // ebp
  unsigned int v6; // eax
  unsigned __int8 **v7; // rax
  __int64 v8; // rsi
  __m128i v9[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(sub_E0E500(a1) + 2) & 1) != 0 )
    return 1;
  if ( (*(_BYTE *)(a2 + 1) & 6) != 0 )
    return 1;
  v4 = sub_F436F0(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(a1 + 16));
  if ( (_BYTE)v4 )
  {
    return 1;
  }
  else if ( a3 && (v9[0] = _mm_loadu_si128(a3), LOBYTE(v6) = sub_A2B910((_QWORD *)(a1 + 792), v9), (_BYTE)v6) )
  {
    return v6;
  }
  else if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) != 0 )
  {
    v7 = (unsigned __int8 **)sub_E0FED0(a1, a2, 2458, 0);
    v8 = *(_QWORD *)(a2 + 8);
    if ( v7 )
      sub_AC60B0(v7, v8, 8u);
  }
  else
  {
    sub_E0FED0(a1, a2, 108, 0);
  }
  return v4;
}

