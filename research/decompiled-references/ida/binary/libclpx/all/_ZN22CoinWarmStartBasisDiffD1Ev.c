void __fastcall CoinWarmStartBasisDiff::~CoinWarmStartBasisDiff(CoinWarmStartBasisDiff *this)
{
  bool v1; // zf
  bool v2; // cc
  void *v3; // rdi

  v1 = *((_DWORD *)this + 2) == 0;
  v2 = *((_DWORD *)this + 2) <= 0;
  *(_QWORD *)this = off_4D24C0;
  if ( v2 )
  {
    if ( !v1 )
    {
      v3 = (void *)(*((_QWORD *)this + 2) - 4LL);
      if ( v3 )
        goto LABEL_3;
    }
  }
  else
  {
    v3 = *((void **)this + 2);
    if ( v3 )
LABEL_3:
      operator delete[](v3);
  }
}

