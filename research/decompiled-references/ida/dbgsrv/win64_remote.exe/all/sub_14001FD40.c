/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001FD40
// Address: 0x000000014001FD40

//----- (000000014001FD40) ----------------------------------------------------
__int64 __fastcall sub_14001FD40(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  FILE *v4; // rdx
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 < qword_1400CAFB0 && (v4 = *((FILE **)qword_1400CAFA8 + v3)) != nullptr )
  {
    v5 = sub_140064940(*(char *)(a1 + 8), v4);
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
