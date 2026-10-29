/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50F88
// Address: 0x0000000000050F88

//----- (0000000000050F88) ----------------------------------------------------
long double __fastcall sub_50F88(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // x2
  __int64 v6; // x1
  long double result; // q0
  __int128 v8; // q1

  v4 = *(_QWORD *)a3;
  if ( v4 >= 1 && *(_QWORD *)(a3 + 16) )
  {
    v6 = *a2;
    if ( v6 >= 1 && a2[2] )
    {
      if ( v6 == v4 )
        return result;
      sub_4EC28(
        (__int64)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%08llX), using the latter",
        v6,
        v4);
    }
    result = *(long double *)a3;
    v8 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)a2 = *(_OWORD *)a3;
    *((_OWORD *)a2 + 1) = v8;
  }
  return result;
}
