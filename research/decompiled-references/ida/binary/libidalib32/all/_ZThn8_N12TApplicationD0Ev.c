void __fastcall `non-virtual thunk to'TApplication::~TApplication(TApplication *this)
{
  TApplication::~TApplication((TApplication *)((char *)this - 8));
  operator delete((char *)this - 8, 0xA0u);
}

