/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006B0D8
// Address: 0x000000014006B0D8

//----- (000000014006B0D8) ----------------------------------------------------
__int64 __fastcall sub_14006B0D8(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0; i != a3; ++i )
  {
    a1 -= a2;
    result = a4(a1);
  }
  return result;
}
