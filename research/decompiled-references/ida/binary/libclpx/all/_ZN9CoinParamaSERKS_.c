__int64 __fastcall CoinParam::operator=(__int64 a1, __int64 a2)
{
  std::string *v3; // rdi
  int v4; // eax
  __int64 v5; // xmm0_8
  int v6; // eax
  int v7; // eax

  if ( a1 != a2 )
  {
    v3 = (std::string *)(a1 + 16);
    *((_DWORD *)v3 - 2) = *(_DWORD *)(a2 + 8);
    std::string::assign(v3, (const std::string *)(a2 + 16));
    v4 = *(_DWORD *)(a2 + 64);
    *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
    v5 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 64) = v4;
    v6 = *(_DWORD *)(a2 + 68);
    *(_QWORD *)(a1 + 56) = v5;
    *(_DWORD *)(a1 + 68) = v6;
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
    std::string::assign((std::string *)(a1 + 80), (const std::string *)(a2 + 80));
    std::vector<std::string>::operator=(a1 + 88, a2 + 88);
    v7 = *(_DWORD *)(a2 + 112);
    *(__m128i *)(a1 + 120) = _mm_loadu_si128((const __m128i *)(a2 + 120));
    *(_DWORD *)(a1 + 112) = v7;
    std::string::assign((std::string *)(a1 + 136), (const std::string *)(a2 + 136));
    std::string::assign((std::string *)(a1 + 144), (const std::string *)(a2 + 144));
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 152);
  }
  return a1;
}

