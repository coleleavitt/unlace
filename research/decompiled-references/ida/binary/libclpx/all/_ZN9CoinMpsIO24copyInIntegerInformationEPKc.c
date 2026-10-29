void __fastcall CoinMpsIO::copyInIntegerInformation(CoinMpsIO *this, const char *a2)
{
  void *v3; // rdi
  void *v4; // rax
  size_t n; // [rsp+0h] [rbp-18h]

  v3 = *((void **)this + 18);
  if ( a2 )
  {
    if ( v3 )
    {
      memcpy(v3, a2, *((int *)this + 11));
    }
    else
    {
      n = *((int *)this + 11);
      v4 = malloc(n);
      *((_QWORD *)this + 18) = v4;
      memcpy(v4, a2, n);
    }
  }
  else
  {
    free(v3);
    *((_QWORD *)this + 18) = 0;
  }
}

