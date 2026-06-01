/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9427
// Address: 0x00000000000E9427

//----- (00000000000E9427) ----------------------------------------------------
__int64 __fastcall sub_E9427(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a3 + 8);
  result = 1;
  if ( *(_QWORD *)(a2 + 8) <= v3 )
    return (unsigned int)-(*(_QWORD *)(a2 + 8) < v3);
  return result;
}
