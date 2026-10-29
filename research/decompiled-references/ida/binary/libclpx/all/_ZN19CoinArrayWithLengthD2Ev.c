// Alternative name is '_ZN19CoinArrayWithLengthD1Ev'
void __fastcall CoinArrayWithLength::~CoinArrayWithLength(CoinArrayWithLength *this)
{
  void *v1; // rax

  if ( *(_QWORD *)this )
  {
    v1 = (void *)(*(_QWORD *)this - *((int *)this + 3));
    if ( v1 )
      operator delete[](v1);
  }
}

