__int64 __fastcall sub_11D4A0(__int64 a1)
{
  __m128i v1; // xmm0
  _QWORD *v2; // rax
  unsigned int v3; // edx
  __int64 result; // rax
  struct _Unwind_Exception *v5; // rbp

  *(_QWORD *)a1 = &stru_235898;
  *(_QWORD *)(a1 + 8) = 0x2FF000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v1 = _mm_loadl_epi64((const __m128i *)&off_231010);
  v2 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 2;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)off_230FD0);
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v2 );
  *(_DWORD *)(a1 + 176) = 0;
  v3 = *(_DWORD *)(a1 + 12);
  if ( ((v3 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v5 = (struct _Unwind_Exception *)interr();
        if ( *(_QWORD *)(a1 + 8544) )
        {
          *(_QWORD *)(a1 + 8552) = 0;
          qfree();
        }
        sub_119100(a1 + 4280);
        *(_QWORD *)a1 = &unk_235B00;
        sub_BEE60((_QWORD *)a1);
        _Unwind_Resume(v5);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v3 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v3 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 4280) = 0;
  *(_QWORD *)a1 = off_230F18;
  *(_QWORD *)(a1 + 4288) = 0;
  *(_QWORD *)(a1 + 4416) = 0;
  *(_QWORD *)(a1 + 8520) = 0;
  *(_QWORD *)(a1 + 8544) = 0;
  *(_QWORD *)(a1 + 8584) = 0;
  *(_OWORD *)(a1 + 8528) = 0;
  *(_OWORD *)(a1 + 8552) = 0;
  qstrncpy();
  result = sub_11D360((_QWORD *)a1);
  *(_DWORD *)(a1 + 32) = 90;
  *(_DWORD *)(a1 + 72) = 185;
  return result;
}

