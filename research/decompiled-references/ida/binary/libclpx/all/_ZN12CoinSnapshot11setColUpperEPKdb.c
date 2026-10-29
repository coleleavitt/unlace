void __fastcall CoinSnapshot::setColUpper(CoinSnapshot *this, const double *a2, char a3)
{
  void *v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r12
  void *v7; // rax
  void *v8; // rcx
  char v9; // [rsp+Ch] [rbp-1Ch]

  if ( (*((_BYTE *)this + 224) & 2) != 0 )
  {
    v4 = *((void **)this + 11);
    if ( v4 )
    {
      v9 = a3;
      operator delete[](v4);
      a3 = v9;
    }
  }
  if ( a3 )
  {
    *((_BYTE *)this + 224) |= 2u;
    v5 = *((int *)this + 52);
    if ( a2 )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v6 = 8 * v5;
      v7 = (void *)operator new[](v6);
      v8 = memcpy(v7, a2, v6);
    }
    else
    {
      v8 = nullptr;
    }
    *((_QWORD *)this + 11) = v8;
  }
  else
  {
    *((_QWORD *)this + 11) = a2;
    *((_BYTE *)this + 224) &= ~2u;
  }
}

