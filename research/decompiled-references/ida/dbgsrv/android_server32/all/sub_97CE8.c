/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97CE8
// Address: 0x00097CE8

//----- (00097CE8) --------------------------------------------------------
int __fastcall sub_97CE8(int a1, int a2)
{
  char *v2; // r3
  char *v3; // r2

  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0:
    case 1:
    case 2:
      v2 = "std::basic_string<char, std::char_traits<char>, std::allocator<char> >";
      v3 = "";
      break;
    case 3:
      v2 = "std::basic_istream<char, std::char_traits<char> >";
      goto LABEL_5;
    case 4:
      v2 = "std::basic_ostream<char, std::char_traits<char> >";
LABEL_5:
      v3 = v2 + 49;
      break;
    case 5:
      v2 = "std::basic_iostream<char, std::char_traits<char> >";
      v3 = "";
      break;
  }
  return sub_93B8C(a2, v2, v3);
}
