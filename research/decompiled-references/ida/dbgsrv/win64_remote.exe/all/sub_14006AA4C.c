/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006AA4C
// Address: 0x000000014006AA4C

//----- (000000014006AA4C) ----------------------------------------------------
__int64 __fastcall sub_14006AA4C(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL);
  result = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v2 + result + 3) & 0xF) != 0 )
    return *(_BYTE *)(v2 + result + 3) & 0xF0;
  return result;
}
