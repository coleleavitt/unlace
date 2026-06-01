void __fastcall CoinSnapshot::setDoNotSeparateThis(CoinSnapshot *this, const double *a2, char a3)
{
  void *v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbp
  void *v7; // rax
  void *v8; // rcx

  if ( *((char *)this + 225) < 0 )
  {
    v4 = *((void **)this + 25);
    if ( v4 )
    {
      operator delete[](v4);
      if ( a3 )
        goto LABEL_6;
LABEL_3:
      *((_BYTE *)this + 225) &= ~0x80u;
      *((_QWORD *)this + 25) = a2;
      return;
    }
  }
  if ( !a3 )
    goto LABEL_3;
LABEL_6:
  *((_BYTE *)this + 225) |= 0x80u;
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
  *((_QWORD *)this + 25) = v8;
}

