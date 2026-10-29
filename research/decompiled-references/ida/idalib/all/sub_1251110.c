__int64 __fastcall sub_1251110(__int64 a1, const char *a2, __int64 a3, int a4, __int64 a5)
{
  __m128i si128; // xmm0
  const char *v7; // rax
  __m128 v8; // xmm1
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  char *(__fastcall *v11)(__int64); // rax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  const char *v14; // [rsp+8h] [rbp-20h] BYREF

  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9D10);
  *(_QWORD *)(a1 + 74) = 0xD720A6E0C660862LL;
  *(_QWORD *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 108) = 0;
  v7 = ".[\\*^$";
  *(__m128i *)(a1 + 88) = si128;
  v13 = a3;
  *(_BYTE *)a1 = 94;
  *(_DWORD *)(a1 + 4) = 22;
  *(_BYTE *)(a1 + 8) = 36;
  *(_DWORD *)(a1 + 12) = 23;
  *(_BYTE *)(a1 + 16) = 46;
  *(_BYTE *)(a1 + 24) = 42;
  *(_DWORD *)(a1 + 28) = 20;
  *(_BYTE *)(a1 + 32) = 43;
  *(_DWORD *)(a1 + 36) = 21;
  *(_BYTE *)(a1 + 40) = 63;
  *(_DWORD *)(a1 + 44) = 18;
  *(_BYTE *)(a1 + 48) = 124;
  *(_DWORD *)(a1 + 52) = 19;
  *(_BYTE *)(a1 + 56) = 10;
  *(_DWORD *)(a1 + 60) = 19;
  *(_DWORD *)(a1 + 68) = 19;
  *(_BYTE *)(a1 + 72) = 48;
  *(_DWORD *)(a1 + 82) = 192285044;
  *(_DWORD *)(a1 + 104) = 192285044;
  v14 = ".[\\*^$";
  *(_QWORD *)(a1 + 128) = ".[\\()*+?{|^$";
  *(_DWORD *)(a1 + 136) = 0;
  v8 = _mm_loadh_ps((const double *)&v14);
  *(_DWORD *)(a1 + 140) = a4;
  *(__m128 *)(a1 + 112) = v8;
  if ( (a4 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 152) = a1 + 72;
    v7 = "^$\\.*+?()[]{}|";
  }
  else
  {
    *(_QWORD *)(a1 + 152) = a1 + 88;
    if ( (a4 & 0x20) == 0 )
    {
      v7 = ".[\\()*+?{|^$";
      if ( (a4 & 0x40) == 0 )
      {
        v7 = ".[\\*^$\n";
        if ( (a4 & 0x100) == 0 )
        {
          v7 = ".[\\()*+?{|^$\n";
          if ( (a4 & 0x200) == 0 )
          {
            v7 = nullptr;
            if ( (a4 & 0x80) != 0 )
              v7 = ".[\\()*+?{|^$";
          }
        }
      }
    }
  }
  v14 = a2;
  *(_QWORD *)(a1 + 160) = v7;
  *(_BYTE *)(a1 + 168) = 0;
  *(__m128 *)(a1 + 176) = _mm_loadh_ps((const double *)&v13);
  v9 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
  if ( v9 >= *(_QWORD *)(*(_QWORD *)a5 + 16LL) || (v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 8LL) + 8 * v9)) == 0 )
    std::__throw_bad_cast();
  *(_QWORD *)(a1 + 192) = v10;
  *(_QWORD *)(a1 + 200) = a1 + 216;
  *(_QWORD *)(a1 + 208) = 0;
  *(_BYTE *)(a1 + 216) = 0;
  if ( (*(_BYTE *)(a1 + 140) & 0x10) != 0 )
    v11 = sub_1250A00;
  else
    v11 = sub_12508D0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 232) = v11;
  return sub_12510C0((unsigned __int8 *)a1);
}
