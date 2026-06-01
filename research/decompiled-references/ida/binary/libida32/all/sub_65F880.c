unsigned __int64 __fastcall sub_65F880(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 i; // rax
  __int64 v6; // rbx
  int v7; // eax
  char v8; // dl
  _BYTE *v9; // rax
  _BYTE *v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( (dword_2CA24C8 & 0x4000) != 0 )
  {
    *(__m128i *)a3 = _mm_loadu_si128((const __m128i *)a1);
    *(__m128i *)(a3 + 10) = _mm_loadu_si128((const __m128i *)(a1 + 10));
    *(_DWORD *)(a3 + 72) = *(_DWORD *)(a3 + 20);
    *(_WORD *)(a3 + 76) = *(_WORD *)(a3 + 24);
    *(_QWORD *)(a3 + 78) = 0x303030303030303LL;
    *(_WORD *)(a3 + 86) = 771;
    for ( i = 0; i != -12; i -= 2 )
      *(_DWORD *)(a3 + 2 * i + 28) = *(unsigned __int16 *)(a3 + i + 18);
    *(_QWORD *)(a3 + 64) = -1;
    *(_OWORD *)(a3 + 32) = -1;
    *(_OWORD *)(a3 + 48) = -1;
  }
  else
  {
    v10 = (_BYTE *)a1;
    v6 = 0;
    v11 = a2;
    *(_DWORD *)a3 = unpack_dd(&v10);
    *(_DWORD *)(a3 + 4) = *(_DWORD *)a3 + unpack_dd(&v10);
    do
    {
      v7 = unpack_dd(&v10);
      v8 = 0;
      *(_DWORD *)(a3 + 4 * v6 + 8) = v7 - 1;
      v9 = v10;
      if ( (unsigned __int64)v10 < v11 )
      {
        v8 = *v10;
        v9 = v10 + 1;
      }
      *(_BYTE *)(a3 + v6++ + 72) = v8;
      v10 = v9;
    }
    while ( v6 != 16 );
  }
  return v12 - __readfsqword(0x28u);
}

