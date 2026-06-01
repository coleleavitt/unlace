_BYTE *__fastcall sub_B95A20(__int64 a1, __int64 a2)
{
  int v2; // ebp
  char *v3; // rbx
  __int16 v4; // dx
  int v5; // eax
  __int16 v6; // dx
  __m128 v7; // xmm0
  __m128i v8; // xmm2
  char v9; // al
  _BYTE *result; // rax
  _BYTE *v11; // rax
  __m128i v12; // [rsp+0h] [rbp-68h] BYREF
  const char *v13; // [rsp+18h] [rbp-50h] BYREF
  __m128i v14; // [rsp+20h] [rbp-48h] BYREF
  __int16 v15; // [rsp+30h] [rbp-38h]
  __int16 v16; // [rsp+32h] [rbp-36h]
  int v17; // [rsp+34h] [rbp-34h]

  v2 = 1;
  v3 = (char *)(a1 + 73);
  v4 = *(_WORD *)(a1 + 70);
  v12.m128i_i64[0] = (__int64)"%02x";
  v5 = *(_DWORD *)(a1 + 64);
  v13 = "GUID{%08x-%04x-%04x-";
  v15 = v4;
  v6 = *(_WORD *)(a1 + 68);
  v12 = (__m128i)_mm_loadh_ps((const double *)v12.m128i_i64);
  v7 = _mm_loadh_ps((const double *)&v13);
  v16 = v6;
  v14 = (__m128i)v7;
  v17 = v5;
  sub_227C560(a2, &v14);
  v8 = _mm_load_si128(&v12);
  LOBYTE(v15) = *(_BYTE *)(a1 + 72);
  v14 = v8;
  sub_227C560(a2, &v14);
  do
  {
    while ( 1 )
    {
      v9 = *v3;
      ++v2;
      v14 = _mm_load_si128(&v12);
      LOBYTE(v15) = v9;
      sub_227C560(a2, &v14);
      if ( v2 != 2 )
        break;
      v11 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v11 >= *(_QWORD *)(a2 + 24) )
      {
        sub_227BA10(a2, 45);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v11 + 1;
        *v11 = 45;
      }
      ++v3;
    }
    ++v3;
  }
  while ( v2 != 8 );
  result = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 24) )
    return (_BYTE *)sub_227BA10(a2, 125);
  *(_QWORD *)(a2 + 32) = result + 1;
  *result = 125;
  return result;
}
