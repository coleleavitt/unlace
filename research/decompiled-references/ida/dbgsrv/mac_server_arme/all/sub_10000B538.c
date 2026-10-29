/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000B538
// Address: 0x000000010000B538

//----- (000000010000B538) ----------------------------------------------------
__int64 __fastcall sub_10000B538(__int64 a1, __int64 a2)
{
  __int64 v2; // x9
  _QWORD *v3; // x8
  _QWORD *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  _QWORD *v7; // x0

  v2 = 4294901760LL;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1929LL) )
    v2 = 0x7FFFFE000000LL;
  if ( *(_QWORD *)a2 == v2 )
  {
    v4 = (_QWORD *)(a2 + 16);
    v3 = *(_QWORD **)(a2 + 16);
    if ( *(_QWORD *)(a2 + 32) <= 8u )
    {
      v5 = a1;
      v6 = a2;
      v7 = qvector_reserve((_QWORD *)(a2 + 16), *(_QWORD **)(a2 + 16), 9u, 1u);
      a2 = v6;
      v3 = v7;
      a1 = v5;
      *v4 = v3;
    }
    *(_QWORD *)(a2 + 24) = 9;
    *v3 = 0x454741504D4D4F43LL;
    *(_BYTE *)(*(_QWORD *)(a2 + 16) + 8LL) = 0;
  }
  sub_10000B5F0(*(_QWORD **)(a1 + 16), (__int128 *)a2);
  return 0;
}
