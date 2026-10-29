/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF220
// Address: 0x080CF220

//----- (080CF220) --------------------------------------------------------
int __cdecl sub_80CF220(FILE *a1, char *src, size_t n, int a4)
{
  int result; // eax
  char *v5; // eax
  _BYTE *v6; // edx
  char v7; // cl
  _BYTE dest[32]; // [esp+10h] [ebp-40h] BYREF
  unsigned int v9; // [esp+30h] [ebp-20h]

  v9 = __readgsdword(0x14u);
  if ( n > 0x20 )
  {
    result = -1;
  }
  else
  {
    if ( a4 )
    {
      v5 = &src[n];
      if ( n )
      {
        v6 = dest;
        do
        {
          v7 = *--v5;
          *v6++ = v7;
        }
        while ( src != v5 );
      }
    }
    else if ( n )
    {
      memcpy(dest, src, n);
    }
    result = -(n != sub_80CEEB0(a1, dest, n));
  }
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
