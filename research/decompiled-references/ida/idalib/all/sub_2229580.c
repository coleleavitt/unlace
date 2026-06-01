unsigned __int16 *__fastcall sub_2229580(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx
  int v9; // edx
  unsigned __int16 *v10; // rdx

  result = (unsigned __int16 *)*a2;
  *(_WORD *)a1 = (_WORD)result;
  switch ( (unsigned __int64)result )
  {
    case 0uLL:
    case 1uLL:
    case 2uLL:
    case 3uLL:
    case 4uLL:
      *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 4));
      *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 12));
      break;
    case 5uLL:
      result = *((unsigned __int16 **)a2 + 2);
      *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(a1 + 16) = result;
      break;
    case 6uLL:
      *(_QWORD *)(a1 + 8) = a1 + 24;
      v10 = *((unsigned __int16 **)a2 + 1);
      result = a2 + 12;
      if ( a2 + 12 == v10 )
      {
        *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 12));
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v10;
        *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 3);
      }
      *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
      *((_QWORD *)a2 + 1) = result;
      *((_QWORD *)a2 + 2) = 0;
      *((_BYTE *)a2 + 24) = 0;
      *a2 = 0;
      break;
    case 7uLL:
      *(_QWORD *)(a1 + 8) = 0;
      v7 = *((_QWORD *)a2 + 1);
      *(_QWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = v7;
      LODWORD(v7) = *((_DWORD *)a2 + 4);
      *((_QWORD *)a2 + 1) = 0;
      *(_DWORD *)(a1 + 16) = v7;
      v8 = *((_DWORD *)a2 + 5);
      *((_DWORD *)a2 + 4) = 0;
      LODWORD(v7) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v8;
      v9 = *((_DWORD *)a2 + 6);
      *((_DWORD *)a2 + 5) = v7;
      result = (unsigned __int16 *)*(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v9;
      *((_DWORD *)a2 + 6) = (_DWORD)result;
      *a2 = 0;
      break;
    case 8uLL:
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
      v3 = *((_QWORD *)a2 + 2);
      *((_QWORD *)a2 + 1) = 0;
      v4 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v3;
      v5 = *((_QWORD *)a2 + 3);
      *((_QWORD *)a2 + 2) = v4;
      v6 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v5;
      *((_QWORD *)a2 + 3) = v6;
      *a2 = 0;
      result = nullptr;
      break;
    default:
      return result;
  }
  return result;
}
