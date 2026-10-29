/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100040098
// Address: 0x0000000100040098

//----- (0000000100040098) ----------------------------------------------------
void __fastcall sub_100040098(__int64 a1)
{
  __int64 v2; // x0
  void *v3; // x0
  _QWORD *v4; // x20
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 i; // x9

  if ( (*(_BYTE *)(a1 + 608) & 1) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 560);
    if ( v2 )
    {
      v3 = (void *)sub_100048448(v2);
      operator delete(v3);
    }
  }
  *(_QWORD *)(a1 + 560) = 0;
  *(_BYTE *)(a1 + 608) = 0;
  if ( *(_QWORD *)(a1 + 592) )
  {
    v4 = *(_QWORD **)(a1 + 584);
    if ( v4 )
    {
      do
      {
        v5 = (_QWORD *)*v4;
        sub_100046F58((__int64)(v4 + 2));
        operator delete(v4);
        v4 = v5;
      }
      while ( v5 );
    }
    *(_QWORD *)(a1 + 584) = 0;
    v6 = *(_QWORD *)(a1 + 576);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
        *(_QWORD *)(*(_QWORD *)(a1 + 568) + 8 * i) = 0;
    }
    *(_QWORD *)(a1 + 592) = 0;
  }
}
