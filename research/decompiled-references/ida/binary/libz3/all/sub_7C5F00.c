__int64 __fastcall sub_7C5F00(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, __int128 a7, __int64 a8)
{
  __int64 result; // rax
  __m128i v9; // xmm0
  int v10; // [rsp+10h] [rbp-18h]

  result = *(unsigned int *)(*(_QWORD *)(a1 + 3288) + 4LL * a2);
  switch ( (_DWORD)result )
  {
    case 0:
      return sub_11C3360(a1, a2, a2, a4, a5, a6, a7, a8);
    case 1:
      v9 = _mm_loadu_si128((const __m128i *)&a7);
      result = a8;
      v10 = a8;
      if ( !(_DWORD)a7 && !*(_BYTE *)(a1 + 3832) )
      {
        result = *(_QWORD *)(a1 + 3296) + 24LL * (a2 >> 1);
        if ( *(_DWORD *)result )
        {
          *(__m128i *)result = v9;
          *(_DWORD *)(result + 16) = v10;
        }
      }
      break;
    case 0xFFFFFFFF:
      return sub_11B4C90(a1, a2 ^ 1, a2, a4, a5, a6, a7, a8);
  }
  return result;
}

