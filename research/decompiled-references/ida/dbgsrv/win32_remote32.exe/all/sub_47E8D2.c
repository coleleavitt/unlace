/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E8D2
// Address: 0x0047E8D2

//----- (0047E8D2) --------------------------------------------------------
signed __int32 __cdecl sub_47E8D2(signed __int32 a1)
{
  signed __int32 result; // eax
  volatile signed __int32 *v2; // ecx
  volatile signed __int32 *v3; // ecx
  volatile signed __int32 *v4; // ecx
  volatile signed __int32 *v5; // ecx
  volatile signed __int32 **v6; // ecx
  int v7; // esi
  volatile signed __int32 *v8; // edx

  result = a1;
  if ( a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 12));
    v2 = *(volatile signed __int32 **)(a1 + 124);
    if ( v2 )
      _InterlockedDecrement(v2);
    v3 = *(volatile signed __int32 **)(a1 + 132);
    if ( v3 )
      _InterlockedDecrement(v3);
    v4 = *(volatile signed __int32 **)(a1 + 128);
    if ( v4 )
      _InterlockedDecrement(v4);
    v5 = *(volatile signed __int32 **)(a1 + 140);
    if ( v5 )
      _InterlockedDecrement(v5);
    v6 = (volatile signed __int32 **)(a1 + 40);
    v7 = 6;
    do
    {
      if ( *(v6 - 2) != &dword_4B60E8 && *v6 )
        _InterlockedDecrement(*v6);
      if ( *(v6 - 3) )
      {
        v8 = *(v6 - 1);
        if ( v8 )
          _InterlockedDecrement(v8);
      }
      v6 += 4;
      --v7;
    }
    while ( v7 );
    return sub_47E8A9(*(_DWORD *)(a1 + 156));
  }
  return result;
}
// 4B60E8: using guessed type int dword_4B60E8;
