/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88780
// Address: 0x0000000000088780

//----- (0000000000088780) ----------------------------------------------------
char __fastcall sub_88780(__int64 a1, char *a2)
{
  char result; // al

  *(_QWORD *)(a1 + 8) = -*((_QWORD *)a2 + 1);
  result = *a2;
  *(_BYTE *)a1 = *a2;
  return result;
}
