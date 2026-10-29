/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002842C
// Address: 0x000000010002842C

//----- (000000010002842C) ----------------------------------------------------
__int64 __fastcall sub_10002842C(__int64 a1)
{
  __int64 v2; // x20
  _QWORD *v3; // x1
  __int64 v4; // x8
  __int64 v5; // x8
  __int128 v7; // [xsp+0h] [xbp-30h]

  v2 = *(_QWORD *)(a1 + 368) + 16LL * *(_QWORD *)(a1 + 376);
  v7 = *(_OWORD *)(v2 - 16);
  v3 = *(_QWORD **)(a1 + 392);
  v4 = *(_QWORD *)(a1 + 400);
  if ( *(_QWORD *)(a1 + 408) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve((_QWORD *)(a1 + 392), v3, v4 + 1, 0x10u);
    *(_QWORD *)(a1 + 392) = v3;
    v4 = *(_QWORD *)(a1 + 400);
  }
  *(_OWORD *)&v3[2 * v4] = v7;
  ++*(_QWORD *)(a1 + 400);
  sub_10002CBF8(
    *(_QWORD **)(a1 + 200),
    (unsigned int)(*(_DWORD *)(v2 - 12) - 4),
    *(_DWORD *)(a1 + 208) - *(_DWORD *)(v2 - 12));
  v5 = *(_QWORD *)(a1 + 376);
  if ( v5 )
    *(_QWORD *)(a1 + 376) = v5 - 1;
  return 0;
}
