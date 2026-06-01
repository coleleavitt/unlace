__int64 __fastcall sub_959BA0(unsigned int *a1, int a2, char a3)
{
  unsigned int *v3; // r9
  unsigned int *v4; // r8
  __int64 result; // rax
  __int64 v6; // rsi
  char v7; // cl
  unsigned int v8; // edx
  int v9; // edx

  v3 = a1;
  v4 = a1;
  LODWORD(result) = 0;
  do
    result = *v4++ + (unsigned int)result;
  while ( v4 != &a1[a2 + 1] );
  if ( (unsigned int)result >> a3 > 1 )
  {
    _BitScanReverse((unsigned int *)&result, (unsigned int)result >> a3);
    v6 = (__int64)&a1[a2 + 1];
    v7 = 31 - (result ^ 0x1F);
    LODWORD(result) = 0;
    do
    {
      v8 = *v3++;
      v9 = (v8 >> v7) + 1;
      *(v3 - 1) = v9;
      result = (unsigned int)(v9 + result);
    }
    while ( (unsigned int *)v6 != v3 );
  }
  return result;
}
