__int64 __fastcall sub_28B0F0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbp
  const char *v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rsi
  bool v9; // zf
  const __int16 *v10; // rax
  bool v11; // cc
  __m128i si128; // xmm0
  _OWORD *v13; // rsi
  __m128i v14; // xmm0
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct _Unwind_Exception *v18; // r14

  v4 = (const char *)(a2 | 0x20084u);
  *(_DWORD *)(a1 + 8) = -16777212;
  *(_DWORD *)(a1 + 12) = (_DWORD)v4;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 16;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 64) = &off_860AE0;
  v5 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v5 );
  *(_DWORD *)(a1 + 176) = 0;
  v6 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v18 = (struct _Unwind_Exception *)interr(3449, v4, v6, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        *(_QWORD *)a1 = v3;
        sub_1AB100((_QWORD *)a1, v4);
        _Unwind_Resume(v18);
      }
      BUG();
    }
    v6 = (unsigned int)v6 & 0xFE07FFFF;
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v6;
  }
  *(_QWORD *)a1 = &unk_870D58;
  v7 = *(_DWORD *)(get_eah(a1, v4, v6) + 24);
  v8 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)a1 = func_chooser_t___vtable;
  v9 = v7 == 4;
  *(_DWORD *)(a1 + 180) = v7;
  v10 = L" %\b";
  if ( v9 )
    v10 = L" %\b";
  v11 = *(_QWORD *)(a1 + 120) <= 0x15u;
  *(_QWORD *)(a1 + 184) = -1;
  *(_BYTE *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 56) = v10;
  *(_DWORD *)(a1 + 72) = 41;
  if ( v11 )
  {
    v16 = qvector_reserve(a1 + 104, v8, 22, 1);
    *(_QWORD *)(a1 + 104) = v16;
    v8 = v16;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DCC70);
  *(_QWORD *)(a1 + 112) = 22;
  *(__m128i *)v8 = si128;
  *(_QWORD *)(v8 + 13) = 0x2E2E2E2973286E6FLL;
  *(_BYTE *)(*(_QWORD *)(a1 + 104) + 21LL) = 0;
  v13 = *(_OWORD **)(a1 + 128);
  if ( *(_QWORD *)(a1 + 144) <= 0x10u )
  {
    v17 = qvector_reserve(a1 + 128, v13, 17, 1);
    *(_QWORD *)(a1 + 128) = v17;
    v13 = (_OWORD *)v17;
  }
  v14 = _mm_load_si128((const __m128i *)&xmmword_5DCC80);
  *(_QWORD *)(a1 + 136) = 17;
  *v13 = v14;
  result = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(result + 16) = 0;
  return result;
}
