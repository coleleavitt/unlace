/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52690
// Address: 0x0000000000052690

//----- (0000000000052690) ----------------------------------------------------
__int64 __fastcall sub_52690(__int64 a1, __int64 *a2, __int128 *a3)
{
  __int64 v4; // rdx
  __int64 v6; // rsi
  __int64 result; // rax
  __int128 v8; // xmm0

  v4 = *(_QWORD *)a3;
  if ( v4 > 0 && *((_QWORD *)a3 + 2) )
  {
    v6 = *a2;
    if ( v6 > 0 && a2[2] )
    {
      if ( v6 == v4 )
        return result;
      result = sub_4FCD0((int)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one"
                              " (%08llX), using the latter");
    }
    v8 = *a3;
    *((_OWORD *)a2 + 1) = a3[1];
    *(_OWORD *)a2 = v8;
  }
  return result;
}
