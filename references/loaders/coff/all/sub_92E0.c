const char *__fastcall sub_92E0(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  const char *result; // rax
  unsigned __int64 v5; // r8
  __int16 v6; // di
  _WORD *v7; // rsi

  result = nullptr;
  if ( !*(_WORD *)a1 && *(_WORD *)(a1 + 2) == 0xFFFF && !*(_WORD *)(a1 + 4) )
  {
    v5 = *(unsigned int *)(a1 + 12);
    if ( a2 > 0x14 && (_DWORD)v5 )
    {
      if ( a2 - 20 >= v5 )
      {
        v6 = *(_WORD *)(a1 + 6);
        v7 = &unk_22400;
        do
        {
          if ( v6 == *v7 && a3-- == 0 )
            return *((const char **)&unk_22400 + 2 * (int)result + 1);
          LODWORD(result) = (_DWORD)result + 1;
          v7 += 8;
        }
        while ( (_DWORD)result != 113 );
        result = "Unknown COFF machine";
        if ( !a4 )
          return nullptr;
      }
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}
