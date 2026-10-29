__int64 __fastcall sub_10BB20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  __m128i v7; // xmm0
  unsigned int v8; // edx
  __int64 v9; // r13
  __int64 result; // rax
  void *v11; // rax
  const void *v12; // rsi
  struct _Unwind_Exception *v13; // rbp

  *(_QWORD *)a1 = &stru_235898;
  *(_QWORD *)(a1 + 8) = 0x2080431000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v6 = (_QWORD *)(a1 + 80);
  v7 = _mm_loadl_epi64(&off_230AA0);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = 7;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)&off_230960);
  do
  {
    *v6 = 0;
    v6 += 3;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v6 );
  *(_DWORD *)(a1 + 176) = 0;
  v8 = *(_DWORD *)(a1 + 12);
  if ( ((v8 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v13 = (struct _Unwind_Exception *)interr();
        if ( *(_QWORD *)(a1 + 208) )
        {
          *(_QWORD *)(a1 + 216) = 0;
          qfree();
        }
        sub_10BA30((__int64 *)(a1 + 184));
        *(_QWORD *)a1 = &unk_235BC0;
        sub_BEE60((_QWORD *)a1);
        _Unwind_Resume(v13);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v8 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v8 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  v9 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)a1 = off_230798;
  if ( v9 )
  {
    v11 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 208) = v11;
    v12 = *(const void **)a3;
    *(_QWORD *)(a1 + 224) = v9;
    memcpy(v11, v12, 4 * v9);
    *(_QWORD *)(a1 + 216) = v9;
  }
  *(_QWORD *)(a1 + 232) = a4;
  result = *(unsigned int *)(get_eah() + 8);
  *(_DWORD *)(a1 + 240) = result;
  return result;
}

