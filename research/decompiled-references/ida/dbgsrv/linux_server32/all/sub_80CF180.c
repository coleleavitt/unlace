/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF180
// Address: 0x080CF180

//----- (080CF180) --------------------------------------------------------
int __cdecl sub_80CF180(FILE *stream, char *dest, int n, int a4)
{
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  int result; // eax
  _BYTE src[44]; // [esp+0h] [ebp-4Ch] BYREF
  unsigned int v9; // [esp+2Ch] [ebp-20h]

  v9 = __readgsdword(0x14u);
  if ( n == sub_80CEE00(stream, src, n) )
  {
    if ( a4 )
    {
      v4 = &dest[n];
      if ( n > 0 )
      {
        v5 = src;
        do
        {
          v6 = *v5;
          --v4;
          ++v5;
          *v4 = v6;
        }
        while ( dest != v4 );
      }
    }
    else if ( n > 0 )
    {
      memcpy(dest, src, n);
    }
    result = 0;
  }
  else
  {
    result = -1;
  }
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
