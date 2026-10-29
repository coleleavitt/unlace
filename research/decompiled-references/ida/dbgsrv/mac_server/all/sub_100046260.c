/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046260
// Address: 0x0000000100046260

//----- (0000000100046260) ----------------------------------------------------
__int64 __fastcall sub_100046260(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx

  if ( *(_BYTE *)(a1 + 568) == 1 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x12Eu);
    return sub_1000462B0(302, a2, v4);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 520);
    *(_QWORD *)(a1 + 520) = 0;
    sub_100045060(a1, 0, 0);
    return v2;
  }
}
// 1000462AD: variable 'v4' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
