__int64 __fastcall sub_3E1320(__int64 *a1)
{
  unsigned __int64 v1; // rcx
  char v2; // dl
  unsigned __int8 v3; // si
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __m128i v6; // xmm0
  char v7; // al
  __m128i v8; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+10h] [rbp-18h]

  v1 = *a1;
  v2 = *((_BYTE *)a1 + 8);
  v9 = a1[2];
  v3 = *((_BYTE *)a1 + 16);
  v8 = _mm_loadu_si128((const __m128i *)a1);
  while ( 1 )
  {
    if ( *((char *)a1 - 16) <= v2 )
    {
      if ( *((char *)a1 - 16) < v2 )
        break;
      v4 = *(a1 - 3);
      if ( v1 >= v4 && (v4 < v1 || v3 >= *((_BYTE *)a1 - 8)) )
        break;
    }
    v6 = _mm_loadu_si128((const __m128i *)(a1 - 3));
    v7 = *((_BYTE *)a1 - 8);
    a1 -= 3;
    *(__m128i *)(a1 + 3) = v6;
    *((_BYTE *)a1 + 40) = v7;
  }
  result = (unsigned __int8)v9;
  *(__m128i *)a1 = _mm_load_si128(&v8);
  *((_BYTE *)a1 + 16) = result;
  return result;
}
