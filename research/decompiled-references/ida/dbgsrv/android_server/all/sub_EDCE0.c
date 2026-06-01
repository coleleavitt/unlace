/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EDCE0
// Address: 0x00000000000EDCE0

//----- (00000000000EDCE0) ----------------------------------------------------
__int64 __fastcall sub_EDCE0(__int64 a1, __int64 a2)
{
  __int64 i; // x20
  _QWORD *v5; // x0
  _QWORD *v6; // x1
  __int64 result; // x0
  __int64 v8; // [xsp+38h] [xbp+38h] BYREF

  if ( ((*(_QWORD *)(a2 + 832) & 0x4000000000000000LL) == 0 || !*(_BYTE *)(a2 + 887)) && !*(_QWORD *)(a2 + 248) )
    sub_EDC4C(a2, *(_QWORD *)(a2 + 784), &v8);
  for ( i = 0; i != 97; ++i )
  {
    v5 = *(_QWORD **)(a1 + 8 * i);
    v6 = *(_QWORD **)(a2 + 8 * i);
    if ( *(_BYTE *)(a1 + i + 856) )
LABEL_7:
      abort();
    if ( *(_BYTE *)(a2 + i + 856) && v5 )
    {
      if ( byte_169340[i] != 8 )
        goto LABEL_7;
      *v5 = v6;
    }
    else if ( v5 != nullptr && v6 != nullptr && v6 != v5 )
    {
      memcpy(v5, v6, (unsigned __int8)byte_169340[i]);
    }
  }
  if ( (*(_QWORD *)(a1 + 832) & 0x4000000000000000LL) == 0 || (result = 0, !*(_BYTE *)(a1 + 887)) )
  {
    result = 0;
    if ( !*(_QWORD *)(a1 + 248) )
      return Unwind_GetGR(a2, 31) - *(_QWORD *)(a1 + 784) + *(_QWORD *)(a2 + 848);
  }
  return result;
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
