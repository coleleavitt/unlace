size_t __fastcall CoinLpIO::skip_comment(CoinLpIO *this, char *a2)
{
  size_t v2; // r12
  size_t result; // rax
  _QWORD *exception; // rax

  v2 = strcspn(a2, "\n");
  result = strlen(a2);
  if ( v2 == result )
  {
    while ( 1 )
    {
      result = *((unsigned int *)this + 341);
      if ( (result & 0x80000000) == 0LL )
        break;
      if ( !(unsigned int)CoinLpIO::fscanfLpIO(this, a2) )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = "bad fgets";
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
      }
    }
    *((_DWORD *)this + 342) = result;
  }
  return result;
}

