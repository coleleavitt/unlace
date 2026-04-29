__int64 __fastcall sub_1F0A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rdx
  __int64 v5; // rax
  __m128i *v6; // rax

  result = 0;
  if ( *(_WORD *)(a1 + 40) == 72 && *(_BYTE *)(a1 + 57) == 1 )
  {
    if ( *(_WORD *)(a1 + 62) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
      v2 = *(_QWORD *)(a1 + 376);
      v3 = *(_QWORD *)(v2 + 8);
      *(_DWORD *)v2 |= 0x200u;
      *(_QWORD *)(v2 + 56) = v3;
      **(_DWORD **)(a1 + 376) |= 0x2000u;
      **(_DWORD **)(a1 + 376) &= 0xFFFFFBFB;
      v4 = *(_DWORD **)(a1 + 376);
      LODWORD(v2) = *v4 & 0xFFFFFE7F;
      LOBYTE(v2) = v2 | 0x80;
      *v4 = v2;
      v5 = *(_QWORD *)(a1 + 376);
      LODWORD(v4) = *(unsigned __int16 *)(a1 + 62);
      *(_BYTE *)(v5 + 68) = 2;
      *(_DWORD *)(v5 + 64) = (_DWORD)v4;
      v6 = *(__m128i **)(a1 + 864);
      *v6 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      v6[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
      v6[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
      return 1;
    }
  }
  return result;
}
