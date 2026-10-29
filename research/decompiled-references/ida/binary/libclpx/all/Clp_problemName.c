__int64 __fastcall Clp_problemName(__int64 a1, int a2, char *a3)
{
  char *v4; // rbp
  int v5; // ebx
  __int64 result; // rax
  char *src; // [rsp+8h] [rbp-30h] BYREF

  std::string::string((std::string *)&src, (const std::string *)(*(_QWORD *)a1 + 688LL));
  v4 = src;
  v5 = *((_DWORD *)src - 6) + 1;
  if ( v5 > a2 )
    v5 = a2;
  result = (__int64)strncpy(a3, src, v5 - 1);
  a3[v5 - 1] = 0;
  if ( v4 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v4 - 2, 0xFFFFFFFF);
    }
    else
    {
      result = *((unsigned int *)v4 - 2);
      *((_DWORD *)v4 - 2) = result - 1;
    }
    if ( (int)result <= 0 )
      return std::string::_Rep::_M_destroy();
  }
  return result;
}

