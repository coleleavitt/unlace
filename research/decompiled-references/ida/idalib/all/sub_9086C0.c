unsigned __int64 __fastcall sub_9086C0(__int64 a1, __int64 a2, int a3)
{
  int v3; // ecx
  unsigned __int64 v4; // rax
  __int64 v5; // r9

  if ( a3 < 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = v3++;
    v4 += *(unsigned int *)(a2 + 4 * v5) * (unsigned __int64)*(unsigned __int8 *)(a1 + 8 * v5 + 8);
  }
  while ( v3 <= a3 );
  return v4 >> 3;
}
