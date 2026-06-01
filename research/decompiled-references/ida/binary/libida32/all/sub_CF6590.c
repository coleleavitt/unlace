__int64 __fastcall sub_CF6590(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  unsigned int v6; // r15d
  __m128i v8; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v9[24]; // [rsp+10h] [rbp-98h] BYREF
  int v10; // [rsp+28h] [rbp-80h]
  _BYTE v11[104]; // [rsp+40h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v8 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v4, 16));
  sub_DFDA50(v4, 16);
  v5 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v5, 48);
  sub_DFF520(v9);
  sub_DFDA50(v5, 48);
  if ( v10 || (v6 = 0, *(_DWORD *)(sub_CDA220((__int64)v9) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CDA220((__int64)v9) + 60) )
    {
      sub_CDA6F0((__int64)v11, (__int64)v9, a3);
      v6 = sub_DA6400(a1, a2, v11);
      if ( (_BYTE)v6 )
      {
        sub_E00FC0(v11);
        *(__m128i *)sub_CEA4F0((__int64)v11) = _mm_load_si128(&v8);
      }
      sub_DFF560(v11);
    }
    else
    {
      v6 = 1;
      sub_E00FC0(v9);
      *(__m128i *)sub_CEA4F0((__int64)v9) = _mm_load_si128(&v8);
    }
  }
  sub_DFF560(v9);
  return v6;
}

