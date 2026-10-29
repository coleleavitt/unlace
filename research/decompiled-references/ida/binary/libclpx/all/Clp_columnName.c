__int64 __fastcall Clp_columnName(__int64 a1, int a2, char *a3)
{
  char *v4; // rbx
  __int64 result; // rax
  char *src; // [rsp+8h] [rbp-20h] BYREF

  std::string::string((std::string *)&src, (const std::string *)(*(_QWORD *)(*(_QWORD *)a1 + 392LL) + 8LL * a2));
  v4 = src;
  result = (__int64)strcpy(a3, src);
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

