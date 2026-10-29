/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47AD0
// Address: 0x0000000000047AD0

//----- (0000000000047AD0) ----------------------------------------------------
void __fastcall sub_47AD0(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rsi
  __int64 v4; // rdx

  if ( *(int *)a2 < -1 )
    v3 = (_OWORD *)(a2 + 8);
  else
    v3 = *(_OWORD **)(a2 + 8);
  v4 = 16 * a3;
  *(_OWORD *)(a1 + v4 + 976) = *v3;
  *(_OWORD *)(a1 + v4 + 1392) = v3[1];
  *(_BYTE *)(a1 + 1328) |= 6u;
}
