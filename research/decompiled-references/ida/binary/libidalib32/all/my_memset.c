bool __fastcall my_memset(_BYTE *a1, char a2, __int64 a3)
{
  __int64 v3; // rax
  bool result; // al
  _BYTE *v5; // rax

  while ( 1 )
  {
    v3 = a3--;
    result = v3 != 0;
    if ( !result )
      break;
    v5 = a1++;
    *v5 = a2;
  }
  return result;
}

