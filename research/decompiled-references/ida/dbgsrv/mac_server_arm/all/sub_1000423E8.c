/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000423E8
// Address: 0x00000001000423E8

//----- (00000001000423E8) ----------------------------------------------------
unsigned __int8 *__fastcall sub_1000423E8(__int64 a1)
{
  unsigned __int8 *result; // x0
  __int64 v3; // x9
  unsigned __int8 *v4; // x11
  unsigned int v5; // t1
  unsigned __int8 *v6; // x10
  unsigned __int8 *v7; // x9
  int v8; // w10

  for ( result = *(unsigned __int8 **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = result )
  {
    v3 = *result;
    if ( (unsigned __int64)(v3 - 9) >= 5 && v3 != 32 )
      break;
    ++result;
  }
  if ( (v3 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v3] & 0x100) != 0 || v3 == 36 || v3 == 95 )
  {
    v4 = result + 1;
    while ( (v3 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v3] & 0x500) != 0 || v3 == 95 || v3 == 36 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      v5 = *v4++;
      v3 = v5;
    }
    v6 = v4 - 1;
  }
  else
  {
    v6 = result;
  }
  *(_BYTE *)(a1 + 556) = v3;
  if ( *v6 )
  {
    *v6 = 0;
    v7 = *(unsigned __int8 **)(a1 + 8);
    do
    {
      do
      {
        *(_QWORD *)(a1 + 8) = ++v7;
        v8 = *v7;
      }
      while ( (unsigned int)(v8 - 9) < 5 );
    }
    while ( v8 == 32 );
  }
  return result;
}
