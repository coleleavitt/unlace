__int64 __fastcall sub_70FBA0(unsigned int a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 *v4; // rdi
  int v5; // edx
  int v6; // edx

  result = a1;
  if ( a3 )
  {
    v4 = &a2[a3];
    do
    {
      v5 = *a2++;
      LODWORD(result) = (v5 << 16) ^ result;
      v6 = 8;
      do
      {
        result = (unsigned int)(2 * result);
        if ( (int)result < 0 )
          result = (unsigned int)result ^ 0x11864CFB;
        --v6;
      }
      while ( v6 );
    }
    while ( a2 != v4 );
  }
  return result;
}

