/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA000
// Address: 0x00000000000EA000

//----- (00000000000EA000) ----------------------------------------------------
char *__fastcall sub_EA000(__int64 a1)
{
  char *result; // x0

  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 1:
      result = "basic_string";
      break;
    case 2:
      result = "string";
      break;
    case 3:
      result = "istream";
      break;
    case 4:
      result = "ostream";
      break;
    case 5:
      result = "iostream";
      break;
    default:
      result = "allocator";
      break;
  }
  return result;
}
