/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1F60
// Address: 0x00000000004A1F60

//----- (00000000004A1F60) ----------------------------------------------------
char *__fastcall sub_4A1F60(unsigned int **a1)
{
  if ( (*(*a1 - 2) & 0x80000000) != 0 )
    return (char *)*a1 + *((_QWORD *)*a1 - 3);
  sub_4A1DC8(a1);
  return (char *)*a1 + *((_QWORD *)*a1 - 3);
}
