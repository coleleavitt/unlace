void __fastcall CoinArrayWithLength::conditionalDelete(CoinArrayWithLength *this)
{
  int v1; // eax
  __int64 v3; // rdi
  void *v4; // rdi

  v1 = *((_DWORD *)this + 2);
  if ( v1 == -1 )
  {
    v3 = *(_QWORD *)this;
    if ( v3 )
    {
      v4 = (void *)(v3 - *((int *)this + 3));
      if ( v4 )
        operator delete[](v4);
    }
    *(_QWORD *)this = 0;
  }
  else if ( v1 >= 0 )
  {
    *((_DWORD *)this + 2) = -2 - v1;
  }
}

