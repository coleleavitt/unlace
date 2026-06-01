__int64 __fastcall sub_507FE0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 *v2; // rax
  unsigned __int16 *v3; // rsi
  unsigned int v4; // edx
  int v5; // ecx

  v1 = *(int *)(a1 + 48);
  if ( (int)v1 <= 0 )
    return 0;
  v2 = *(unsigned __int16 **)(a1 + 56);
  v3 = &v2[2 * v1];
  v4 = 0;
  do
  {
    v5 = *v2;
    v2 += 2;
    v4 += v5 + 1;
  }
  while ( v3 != v2 );
  if ( v4 )
    v4 += 2;
  return v4;
}
