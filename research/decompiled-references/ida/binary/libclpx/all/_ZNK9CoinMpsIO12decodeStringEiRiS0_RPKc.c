void __fastcall CoinMpsIO::decodeString(CoinMpsIO *this, int a2, int *a3, int *a4, const char **a5)
{
  const char *v6; // rdi
  char *v7; // rax

  *a3 = -1;
  *a4 = -1;
  *a5 = nullptr;
  if ( a2 >= 0 && *((_DWORD *)this + 73) > a2 )
  {
    v6 = *(const char **)(*((_QWORD *)this + 37) + 8LL * a2);
    *a5 = v6;
    sscanf(v6, "%d,%d,", a3, a4);
    v7 = strchr(*a5, 44);
    *a5 = v7 + 1;
    *a5 = strchr(v7 + 1, 44) + 1;
  }
}

