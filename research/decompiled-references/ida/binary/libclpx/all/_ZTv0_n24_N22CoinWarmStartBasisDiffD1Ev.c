void __fastcall `virtual thunk to'CoinWarmStartBasisDiff::~CoinWarmStartBasisDiff(CoinWarmStartBasisDiff *this)
{
  char *v1; // rdi
  bool v2; // zf
  bool v3; // cc
  void *v4; // rdi

  v1 = (char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL);
  v2 = *((_DWORD *)v1 + 2) == 0;
  v3 = *((_DWORD *)v1 + 2) <= 0;
  *(_QWORD *)v1 = off_4D24C0;
  if ( v3 )
  {
    if ( !v2 )
    {
      v4 = (void *)(*((_QWORD *)v1 + 2) - 4LL);
      if ( v4 )
        goto LABEL_3;
    }
  }
  else
  {
    v4 = *((void **)v1 + 2);
    if ( v4 )
LABEL_3:
      operator delete[](v4);
  }
}

