__int64 __fastcall sub_A503E0(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  __int16 v8; // [rsp+Eh] [rbp-9Ah] BYREF
  __m128i v9[9]; // [rsp+10h] [rbp-98h] BYREF

  result = a2;
  v8 = a3;
  if ( *(_WORD *)(a2 + 20) >> 2 != a3 )
  {
    if ( *(_BYTE *)(a2 + 16) == 25 )
    {
      v5 = sub_A4D8D0(a1, *(_QWORD *)(a2 + 24), (unsigned __int16 *)&v8);
    }
    else
    {
      sub_A3A3D0((__m128 *)v9, a2);
      v6 = *(unsigned __int16 *)(a2 + 22);
      v7 = *(_QWORD *)(a2 + 24);
      v9[0].m128i_i16[0] = v8;
      v5 = sub_A4F8D0(a1, v7, (__int64 *)(a2 + 48), v6, v9, 0);
    }
    return *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  }
  return result;
}

