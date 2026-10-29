/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E560
// Address: 0x000000000045E560

//----- (000000000045E560) ----------------------------------------------------
__int64 __fastcall sub_45E560(__int64 result, unsigned __int8 a2)
{
  __int64 v2; // x22
  __int64 v3; // x19
  __int64 v4; // x20
  unsigned int v5; // w23
  __int64 (*v6)(); // x3

  v2 = result + 616;
  v3 = *(_QWORD *)(result + 632);
  if ( v3 != result + 616 )
  {
    v4 = result;
    v5 = a2;
    do
    {
      while ( 1 )
      {
        v6 = *(__int64 (**)())(*(_QWORD *)v4 + 344LL);
        if ( v6 != sub_407140 )
          break;
        result = sub_49F6E8(v3);
        v3 = result;
        if ( v2 == result )
          return result;
      }
      ((void (__fastcall *)(__int64, __int64, _QWORD))v6)(v4, v3, v5);
      result = sub_49F6E8(v3);
      v3 = result;
    }
    while ( v2 != result );
  }
  return result;
}
