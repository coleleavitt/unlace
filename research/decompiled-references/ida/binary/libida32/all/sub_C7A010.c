__int64 __fastcall sub_C7A010(__int64 a1, char *a2)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx
  char v5; // cl
  __m128i v6; // xmm0

  v2 = *((_DWORD *)a2 + 6);
  result = a1;
  switch ( v2 )
  {
    case 8:
      v4 = 7;
      break;
    case 10:
      v4 = 9;
      break;
    case 3:
      v4 = 2;
      break;
    default:
      *(_BYTE *)(a1 + 32) = 0;
      return result;
  }
  v5 = *a2;
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_DWORD *)(a1 + 24) = v4;
  *(_BYTE *)(a1 + 32) = 1;
  *(__m128i *)(a1 + 8) = v6;
  *(_BYTE *)a1 = v5;
  return result;
}

