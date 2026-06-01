// Alternative name is '_ZN9CoinParamC2ERKS_'
void __fastcall CoinParam::CoinParam(CoinParam *this, const CoinParam *a2)
{
  char *v2; // r12
  char *v5; // rsi
  char *v6; // rdi
  int v7; // edx
  __m128i v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm0
  int v11; // edx
  __m128i v12; // xmm0
  int v13; // edx

  v2 = (char *)this + 88;
  v5 = (char *)a2 + 16;
  v6 = (char *)this + 16;
  v7 = *((_DWORD *)v5 + 12);
  v8 = _mm_loadu_si128((const __m128i *)(v5 + 8));
  *((_QWORD *)v6 - 2) = &off_4D1B28;
  v9 = *((_DWORD *)v5 - 2);
  *(__m128i *)(v6 + 8) = v8;
  v10 = *(_OWORD *)(v5 + 24);
  *((_DWORD *)v6 - 2) = v9;
  *(_OWORD *)(v6 + 24) = v10;
  *(_QWORD *)&v10 = *((_QWORD *)v5 + 5);
  *((_DWORD *)v6 + 12) = v7;
  v11 = *((_DWORD *)v5 + 13);
  *(_QWORD *)v6 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *((_QWORD *)v6 + 5) = v10;
  v12 = _mm_loadu_si128((const __m128i *)(v5 + 104));
  *((_DWORD *)v6 + 13) = v11;
  v13 = *((_DWORD *)v5 + 14);
  *((_QWORD *)v6 + 8) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *((_QWORD *)v6 + 9) = 0;
  *((_QWORD *)v6 + 10) = 0;
  *((_QWORD *)v6 + 11) = 0;
  *((_DWORD *)v6 + 14) = v13;
  *((_DWORD *)v6 + 24) = *((_DWORD *)v5 + 24);
  *(__m128i *)(v6 + 104) = v12;
  *((_QWORD *)v6 + 15) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *((_QWORD *)v6 + 16) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  v6[136] = v5[136];
  std::string::assign((std::string *)v6, (const std::string *)v5);
  std::string::assign((CoinParam *)((char *)this + 80), (const CoinParam *)((char *)a2 + 80));
  std::vector<std::string>::operator=(v2, (char *)a2 + 88);
  std::string::assign((CoinParam *)((char *)this + 136), (const CoinParam *)((char *)a2 + 136));
  std::string::assign((CoinParam *)((char *)this + 144), (const CoinParam *)((char *)a2 + 144));
}

