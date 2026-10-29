/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024C5C
// Address: 0x0000000100024C5C

//----- (0000000100024C5C) ----------------------------------------------------
__int64 __fastcall sub_100024C5C(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x20
  int v5; // w2

  v3 = *(_QWORD *)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v4 = *(unsigned int *)(v3 + 4 * v2 - 4);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 304) = v2 - 1;
    v5 = *(_DWORD *)(v3 + 4 * (v2 - 1) - 4);
    if ( v2 != 1 )
      *(_QWORD *)(a1 + 304) = v2 - 2;
  }
  else
  {
    v5 = *(_DWORD *)(v3 - 4);
  }
  sub_100024730(a1, 171, v5);
  if ( (_DWORD)v4 )
    sub_10002CBF8(*(_QWORD **)(a1 + 200), v4, *(_DWORD *)(a1 + 208) - v4 - 4);
  return 0;
}
