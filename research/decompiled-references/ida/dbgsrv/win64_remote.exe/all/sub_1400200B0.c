/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400200B0
// Address: 0x00000001400200B0

//----- (00000001400200B0) ----------------------------------------------------
__int64 __fastcall sub_1400200B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  FILE *v4; // rdx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < qword_1400CAFB0 && (v4 = *((FILE **)qword_1400CAFA8 + v2)) != nullptr )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v5 = sub_140064980(*(const char **)(a1 + 40), v4);
    else
      v5 = sub_140064980(Str1, v4);
    *(_QWORD *)(a2 + 8) = v5;
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
