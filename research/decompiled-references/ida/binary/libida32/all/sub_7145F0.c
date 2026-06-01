void __fastcall sub_7145F0(unsigned int *a1)
{
  __int64 v1; // rsi
  void (__fastcall __noreturn *v2)(); // rax

  if ( *((_BYTE *)a1 + 8) && (unsigned int)qfsync(*a1) )
  {
    v1 = *__errno_location();
    v2 = *((void (__fastcall __noreturn **)())a1 + 2);
    if ( !v2 )
      v2 = off_2C57CC0;
    ((void (__fastcall *)(__int64, __int64))v2)(30, v1);
  }
}

