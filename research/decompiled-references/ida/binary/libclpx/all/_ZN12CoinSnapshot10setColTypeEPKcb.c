__int64 __fastcall CoinSnapshot::setColType(CoinSnapshot *this, const char *a2, char a3)
{
  void *v4; // rdi
  __int64 result; // rax
  const char *v6; // rdx
  size_t v7; // rbp
  void *v8; // rax
  const char *v9; // rcx
  char v10; // [rsp+Ch] [rbp-1Ch]

  if ( (*((_BYTE *)this + 224) & 0x40) != 0 )
  {
    v4 = *((void **)this + 16);
    if ( v4 )
    {
      v10 = a3;
      operator delete[](v4);
      a3 = v10;
    }
  }
  result = *((unsigned int *)this + 52);
  if ( a3 )
  {
    *((_BYTE *)this + 224) |= 0x40u;
    if ( a2 )
    {
      v7 = (int)result;
      v8 = (void *)operator new[]((int)result);
      v9 = (const char *)memcpy(v8, a2, v7);
      result = *((unsigned int *)this + 52);
      a2 = v9;
    }
  }
  else
  {
    *((_BYTE *)this + 224) &= ~0x40u;
  }
  *((_QWORD *)this + 16) = a2;
  *((_DWORD *)this + 55) = 0;
  if ( (int)result > 0 )
  {
    v6 = &a2[(unsigned int)(result - 1) + 1];
    do
    {
      while ( 1 )
      {
        result = *(unsigned __int8 *)a2;
        if ( (_BYTE)result == 66 || (_BYTE)result == 73 )
          break;
        if ( v6 == ++a2 )
          return result;
      }
      ++a2;
      ++*((_DWORD *)this + 55);
    }
    while ( v6 != a2 );
  }
  return result;
}

