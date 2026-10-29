/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BA04
// Address: 0x000000010000BA04

//----- (000000010000BA04) ----------------------------------------------------
__int64 __fastcall sub_10000BA04(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // x9
  const char *v7; // x0
  const char *v8; // x1
  __int64 result; // x0

  v6 = *(_QWORD *)(a1 + 96);
  if ( *(_QWORD *)(v6 + 8) )
    v7 = *(const char **)v6;
  else
    v7 = &byte_10007AE40;
  if ( *(_QWORD *)(a4 + 8) )
    v8 = *(const char **)a4;
  else
    v8 = &byte_10007AE40;
  result = strcmp(v7, v8);
  if ( !(_DWORD)result )
    **(_QWORD **)(a1 + 88) = a2;
  return result;
}
// 10007AE40: using guessed type char byte_10007AE40;
