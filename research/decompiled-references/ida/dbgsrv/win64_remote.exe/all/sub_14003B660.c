/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003B660
// Address: 0x000000014003B660

//----- (000000014003B660) ----------------------------------------------------
bool __fastcall sub_14003B660(char a1)
{
  return a1 >= 0 && isalnum((unsigned __int8)a1) || a1 == 95 || a1 == 36;
}
