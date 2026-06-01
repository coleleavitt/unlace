/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A030
// Address: 0x000000010004A030

//----- (000000010004A030) ----------------------------------------------------
char *__fastcall sub_10004A030(__int64 a1)
{
  char *result; // rax
  char v2; // cl
  int v3; // edx
  char *v4; // rdx
  char *v5; // rdx
  unsigned __int8 *v6; // rcx
  int v7; // edx

  for ( result = *(char **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = result )
  {
    v2 = *result;
    v3 = (unsigned __int8)*result;
    if ( (unsigned int)(v3 - 9) >= 5 && v3 != 32 )
      break;
    ++result;
  }
  if ( v2 >= 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v2] & 0x100) != 0 || v3 == 36 || v3 == 95 )
  {
    v4 = result + 1;
    while ( v2 >= 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v2] & 0x500) != 0 || v2 == 95 || v2 == 36 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      v2 = *v4++;
    }
    v5 = v4 - 1;
  }
  else
  {
    v5 = result;
  }
  *(_BYTE *)(a1 + 516) = v2;
  if ( *v5 )
  {
    *v5 = 0;
    v6 = *(unsigned __int8 **)(a1 + 8);
    do
    {
      do
      {
        *(_QWORD *)(a1 + 8) = ++v6;
        v7 = *v6;
      }
      while ( (unsigned int)(v7 - 9) < 5 );
    }
    while ( v7 == 32 );
  }
  return result;
}
