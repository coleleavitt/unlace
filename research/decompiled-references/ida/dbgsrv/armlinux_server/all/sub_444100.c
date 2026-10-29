/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444100
// Address: 0x0000000000444100

//----- (0000000000444100) ----------------------------------------------------
__int64 *__fastcall sub_444100(__int64 a1)
{
  __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x0

  if ( !a1 )
    return nullptr;
  if ( *(_BYTE *)a1 != 5 )
    return nullptr;
  v1 = *(_QWORD *)(a1 + 8);
  v2 = v1 + 8;
  v3 = *(_QWORD *)(v1 + 24);
  if ( v3 == v2 )
    return nullptr;
  if ( *(_QWORD *)(v3 + 40) )
    return *(__int64 **)(v3 + 32);
  return &qword_4B2D48;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
