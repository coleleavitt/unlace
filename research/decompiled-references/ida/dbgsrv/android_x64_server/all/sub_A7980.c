/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7980
// Address: 0x00000000000A7980

//----- (00000000000A7980) ----------------------------------------------------
__int64 __fastcall sub_A7980(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  bool v3; // cc
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v2 = sub_A08A0(a1, a2);
  v3 = v2 <= 0x80;
  v4 = v2 - 128;
  result = -1;
  if ( !v3 )
    return v4;
  return result;
}
