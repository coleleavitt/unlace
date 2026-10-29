__int64 __fastcall sub_F21D60(char *a1, __int64 a2, int *a3)
{
  char v3; // cl
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rdx

  v3 = *a1;
  v4 = *a3;
  v5 = *((_QWORD *)a3 + 2);
  *((_QWORD *)a1 + 1) = 0;
  *((_QWORD *)a1 + 2) = a2;
  *a1 = v3 & 0xF8 | 2;
  v6 = (8 * (v4 & 0x3FFF)) | *(_DWORD *)a1 & 0xFFFE0007;
  *(_DWORD *)a1 = v6;
  *((_WORD *)a1 + 1) = (2 * v5) | BYTE2(v6) & 1;
  v7 = *((_QWORD *)a3 + 1);
  result = 24 * v5;
  v9 = 0xAAAAAAAAAAAAAAABLL * ((24 * v5) >> 3);
  if ( 24 * v5 > 0 )
  {
    result = 0;
    do
    {
      *(__m128i *)&a1[result + 24] = _mm_loadu_si128((const __m128i *)(v7 + result));
      *(_QWORD *)&a1[result + 40] = *(_QWORD *)(v7 + result + 16);
      result += 24;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
