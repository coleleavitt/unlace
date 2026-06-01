__int64 __fastcall CoinMpsCardReader::strcpyAndCompress(CoinMpsCardReader *this, char *a2, const char *a3)
{
  int v4; // eax
  char *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rcx

  v4 = strlen(a2);
  if ( v4 <= 0 )
    goto LABEL_8;
  v5 = &a2[v4 - 1 + 1];
  LODWORD(result) = 0;
  do
  {
    if ( *a2 != 32 )
    {
      v7 = (int)result;
      LODWORD(result) = result + 1;
      *((_BYTE *)this + v7) = *a2;
    }
    ++a2;
  }
  while ( a2 != v5 );
  if ( (_DWORD)result )
  {
    result = (int)result;
    *((_BYTE *)this + (int)result) = 0;
  }
  else
  {
LABEL_8:
    *(_BYTE *)this = 32;
    *((_BYTE *)this + 1) = 0;
    return 1;
  }
  return result;
}

