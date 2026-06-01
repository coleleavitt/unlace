/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B940
// Address: 0x000000010006B940

//----- (000000010006B940) ----------------------------------------------------
__int64 __fastcall sub_10006B940(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 40) )
  {
    result = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(result + 8) += a2;
  }
  return result;
}
