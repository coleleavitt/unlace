void __fastcall CoinWarmStartBasisDiff::~CoinWarmStartBasisDiff(CoinWarmStartBasisDiff *this, __int64 *a2)
{
  __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  void *v5; // rdi

  v2 = *a2;
  v3 = *((_DWORD *)this + 2) == 0;
  v4 = *((int *)this + 2) < 0;
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(v2 - 40)) = a2[1];
  if ( v4 || v3 )
  {
    if ( !v3 )
    {
      v5 = (void *)(*((_QWORD *)this + 2) - 4LL);
      if ( v5 )
        goto LABEL_3;
    }
  }
  else
  {
    v5 = *((void **)this + 2);
    if ( v5 )
LABEL_3:
      operator delete[](v5);
  }
}

