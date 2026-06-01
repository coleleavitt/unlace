void __fastcall CoinWarmStartBasis::setSize(CoinWarmStartBasis *this, int a2, int a3)
{
  int v5; // ebp
  int v6; // r15d
  void *v7; // rdi
  int v8; // r15d
  size_t v9; // rbx
  void *v10; // rdi

  v5 = (a3 + 15) >> 4;
  v6 = v5 + ((a2 + 15) >> 4);
  if ( v6 )
  {
    v7 = *((void **)this + 3);
    if ( *((_DWORD *)this + 4) < v6 )
    {
      if ( v7 )
        operator delete[](v7);
      v8 = v6 + 10;
      *((_DWORD *)this + 4) = v8;
      v7 = (void *)operator new[](4 * v8);
      *((_QWORD *)this + 3) = v7;
    }
    v9 = 4 * ((a2 + 15) >> 4);
    memset(v7, 0, v9);
    v10 = (void *)(v9 + *((_QWORD *)this + 3));
    *((_QWORD *)this + 4) = v10;
    memset(v10, 0, 4 * v5);
  }
  else
  {
    *((_QWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 2) = a2;
}

