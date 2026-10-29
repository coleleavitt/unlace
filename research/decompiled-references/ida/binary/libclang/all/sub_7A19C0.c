_BYTE *__fastcall sub_7A19C0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbp
  int v3; // ebx
  __m128i v4; // xmm1
  _BYTE *result; // rax
  _BYTE *v6; // rax
  __m128i v7; // [rsp+0h] [rbp-58h] BYREF
  __m128i v8; // [rsp+10h] [rbp-48h] BYREF
  int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+24h] [rbp-34h]

  v2 = (_BYTE *)(a1 + 72);
  v3 = 0;
  v10 = *(_DWORD *)(a1 + 64);
  v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49F5E68, (__m128i)(unsigned __int64)"%02x");
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F5E48, (__m128i)(unsigned __int64)"GUID{%08x-%04x-%04x-");
  v9 = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 68)), 225));
  sub_26248B0(a2, &v8);
  do
  {
    while ( 1 )
    {
      v4 = _mm_load_si128(&v7);
      ++v3;
      LOBYTE(v9) = *v2;
      v8 = v4;
      sub_26248B0(a2, &v8);
      if ( v3 != 2 )
        break;
      v6 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a2 + 24) )
      {
        sub_26239D0(a2, 45);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v6 + 1;
        *v6 = 45;
      }
      ++v2;
    }
    ++v2;
  }
  while ( v3 != 8 );
  result = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 24) )
    return (_BYTE *)sub_26239D0(a2, 125);
  *(_QWORD *)(a2 + 32) = result + 1;
  *result = 125;
  return result;
}

