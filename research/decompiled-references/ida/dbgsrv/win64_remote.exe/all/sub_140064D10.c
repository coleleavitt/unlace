/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064D10
// Address: 0x0000000140064D10

//----- (0000000140064D10) ----------------------------------------------------
const char *__fastcall sub_140064D10(int a1)
{
  int v1; // edi
  __int64 v2; // rbx

  v1 = a1;
  if ( a1 == -1 )
    v1 = sub_140063DE0();
  switch ( v1 )
  {
    case 0:
      return "No error";
    case 1:
      return (const char *)sub_140063E00(-1);
    case 2:
      return "Disk is full";
    case 3:
      return "Read attempt past file end";
  }
  v2 = sub_140063C90();
  sub_140002FB0(v2, "Unknown error code %d", v1);
  return *(const char **)v2;
}
