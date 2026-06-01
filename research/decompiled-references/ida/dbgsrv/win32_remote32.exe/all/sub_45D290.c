/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D290
// Address: 0x0045D290

//----- (0045D290) --------------------------------------------------------
int __stdcall sub_45D290(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  int v5; // ecx
  __int8 *v6; // edx
  __int8 v7; // al
  __m128i v8; // [esp+8h] [ebp-24h] BYREF

  if ( sub_45CF50(a1, &v8, a3) != a3 )
    return -1;
  if ( !a4 )
  {
    if ( a3 > 0 )
      sub_464310(a2, (unsigned int)&v8, a3);
    return 0;
  }
  v5 = 0;
  v6 = (__int8 *)(a3 + a2);
  if ( a3 <= 0 )
    return 0;
  do
  {
    v7 = v8.m128i_i8[v5];
    --v6;
    ++v5;
    *v6 = v7;
  }
  while ( v5 < a3 );
  return 0;
}
