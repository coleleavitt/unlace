__int64 __fastcall sub_D18E50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned int v6; // r15d
  __m128i v8; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v9[104]; // [rsp+10h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v8 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
  sub_E21790(v4, 16);
  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( *(_DWORD *)(v5 + 24) || (v6 = 0, *(_DWORD *)(sub_CFDF60(v5) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CFDF60(v5) + 60) )
    {
      sub_CFE430((__int64)v9, v5, a3);
      v6 = sub_DCA140(a1, a2, v9);
      if ( (_BYTE)v6 )
      {
        sub_E24D00(v9);
        *(__m128i *)sub_D0E230((__int64)v9) = _mm_load_si128(&v8);
      }
      sub_E232A0(v9);
    }
    else
    {
      v6 = 1;
      sub_E24D00(v5);
      *(__m128i *)sub_D0E230(v5) = _mm_load_si128(&v8);
    }
  }
  return v6;
}
