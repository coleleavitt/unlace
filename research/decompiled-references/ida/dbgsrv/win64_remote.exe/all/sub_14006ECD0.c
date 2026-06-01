/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006ECD0
// Address: 0x000000014006ECD0

//----- (000000014006ECD0) ----------------------------------------------------
__int64 __fastcall sub_14006ECD0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v7; // rdx
  FH4::UWMap4 *v9[2]; // [rsp+20h] [rbp-18h] BYREF

  v7 = *(_QWORD *)(a5 + 8);
  if ( v7 > *(_QWORD *)(a3 + 8) || *(_QWORD *)(a1 + 8) > v7 )
    return 0xFFFFFFFFLL;
  if ( (__int64)(v7 - *(_QWORD *)(a1 + 8)) >= (__int64)(*(_QWORD *)(a3 + 8) - v7) )
  {
    a2 = a4;
    *(_OWORD *)v9 = *(_OWORD *)a5;
    if ( *(_QWORD *)(a3 + 8) > v7 )
    {
      do
      {
        FH4::UWMap4::ReadEntry(v9[0], (unsigned __int8 **)&v9[1]);
        --a2;
      }
      while ( (FH4::UWMap4 *)*(_QWORD *)(a3 + 8) > v9[1] );
    }
  }
  else
  {
    *(_OWORD *)v9 = *(_OWORD *)a1;
    if ( v7 > *(_QWORD *)(a1 + 8) )
    {
      do
      {
        FH4::UWMap4::ReadEntry(v9[0], (unsigned __int8 **)&v9[1]);
        ++a2;
      }
      while ( (FH4::UWMap4 *)*(_QWORD *)(a5 + 8) > v9[1] );
    }
  }
  return a2;
}
