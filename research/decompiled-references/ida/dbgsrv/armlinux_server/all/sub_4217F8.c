/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4217F8
// Address: 0x00000000004217F8

//----- (00000000004217F8) ----------------------------------------------------
__int64 __fastcall sub_4217F8(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1

  if ( *a3 > 0 )
  {
    result = a3[2];
    if ( result )
    {
      v6 = *a2;
      if ( v6 > 0 )
      {
        result = a2[2];
        if ( result )
        {
          if ( *a3 == v6 )
            return result;
          sub_41A920(
            "The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%08llX), using the latter");
        }
      }
      v7 = a3[1];
      *a2 = *a3;
      a2[1] = v7;
      result = a3[2];
      v8 = a3[3];
      a2[2] = result;
      a2[3] = v8;
    }
  }
  return result;
}
