/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98020
// Address: 0x00098020

//----- (00098020) --------------------------------------------------------
int __fastcall sub_98020(int a1, int a2)
{
  char *v2; // r3
  char *v3; // r2

  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0:
      v2 = "std::allocator";
      v3 = "";
      break;
    case 1:
      v2 = "std::basic_string";
      v3 = "";
      break;
    case 2:
      v2 = "std::string";
      v3 = "";
      break;
    case 3:
      v2 = "std::istream";
      goto LABEL_7;
    case 4:
      v2 = "std::ostream";
LABEL_7:
      v3 = v2 + 12;
      break;
    case 5:
      v2 = "std::iostream";
      v3 = "";
      break;
  }
  return sub_93B8C(a2, v2, v3);
}
