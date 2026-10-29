__int64 __fastcall CoinFactorization::gutsOfDestructor(CoinFactorization *this, int a2)
{
  void *v3; // rdi
  void *v4; // rdi
  __int64 result; // rax

  v3 = *((void **)this + 105);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 107);
  if ( v4 )
    operator delete[](v4);
  if ( a2 == 2 )
  {
    *((_DWORD *)this + 152) = -1;
    *((_DWORD *)this + 48) = -1;
    *((_DWORD *)this + 170) = -1;
    *((_DWORD *)this + 158) = -1;
    *((_DWORD *)this + 128) = -1;
    *((_DWORD *)this + 164) = -1;
    *((_DWORD *)this + 180) = -1;
    *((_DWORD *)this + 186) = -1;
    *((_DWORD *)this + 192) = -1;
    *((_DWORD *)this + 206) = -1;
    *((_DWORD *)this + 54) = -1;
    *((_DWORD *)this + 60) = -1;
    *((_DWORD *)this + 66) = -1;
    *((_DWORD *)this + 22) = -1;
    *((_DWORD *)this + 40) = -1;
    *((_DWORD *)this + 72) = -1;
    *((_DWORD *)this + 78) = -1;
    *((_DWORD *)this + 84) = -1;
    *((_DWORD *)this + 28) = -1;
    *((_DWORD *)this + 34) = -1;
    *((_DWORD *)this + 90) = -1;
    *((_DWORD *)this + 96) = -1;
    *((_DWORD *)this + 102) = -1;
    *((_DWORD *)this + 108) = -1;
    *((_DWORD *)this + 114) = -1;
    *((_DWORD *)this + 120) = -1;
    *((_DWORD *)this + 134) = -1;
    *((_DWORD *)this + 140) = -1;
    *((_DWORD *)this + 278) = -1;
    *((_DWORD *)this + 266) = -1;
    *((_DWORD *)this + 272) = -1;
    *((_DWORD *)this + 284) = -1;
    *((_DWORD *)this + 220) = -1;
    *((_DWORD *)this + 226) = -1;
  }
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 600));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 184));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 672));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 624));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 504));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 648));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 712));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 736));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 760));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 816));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 208));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 232));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 256));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 80));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 152));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 280));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 304));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 328));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 104));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 128));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 352));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 376));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 400));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 424));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 448));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 472));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 528));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 552));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1104));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1056));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1080));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1128));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 872));
  result = CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 896));
  *((_DWORD *)this + 230) = 0;
  *((_DWORD *)this + 125) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 44) = -1;
  *((_DWORD *)this + 148) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_DWORD *)this + 197) = 0;
  *((_DWORD *)this + 198) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_OWORD *)this + 36) = 0;
  *(_OWORD *)((char *)this + 696) = 0;
  *((_DWORD *)this + 199) = 0;
  *((_QWORD *)this + 105) = 0;
  *((_QWORD *)this + 107) = 0;
  *((_DWORD *)this + 216) = 0;
  *((_OWORD *)this + 50) = 0;
  return result;
}

