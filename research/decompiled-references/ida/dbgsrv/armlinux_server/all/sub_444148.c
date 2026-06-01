/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444148
// Address: 0x0000000000444148

//----- (0000000000444148) ----------------------------------------------------
__int64 *__fastcall sub_444148(__int64 a1)
{
  __int64 v1; // x1
  __int64 v2; // x0

  if ( !a1 )
    return nullptr;
  if ( *(_BYTE *)a1 != 5 )
    return nullptr;
  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v1 + 24) == v1 + 8 )
    return nullptr;
  v2 = sub_49F750(v1 + 8);
  if ( *(_QWORD *)(v2 + 40) )
    return *(__int64 **)(v2 + 32);
  else
    return &qword_4B2D48;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
