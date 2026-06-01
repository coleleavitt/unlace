/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9490
// Address: 0x00000000000E9490

//----- (00000000000E9490) ----------------------------------------------------
char *__fastcall sub_E9490(__int64 a1)
{
  char *result; // x0

  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 1:
    case 2:
      result = "basic_string";
      break;
    case 3:
      result = "basic_istream";
      break;
    case 4:
      result = "basic_ostream";
      break;
    case 5:
      result = "basic_iostream";
      break;
    default:
      result = "allocator";
      break;
  }
  return result;
}
