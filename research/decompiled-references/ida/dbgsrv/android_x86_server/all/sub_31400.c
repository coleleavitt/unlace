/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31400
// Address: 0x00031400

//----- (00031400) --------------------------------------------------------
const char *__cdecl sub_31400(int a1)
{
  const char *result; // eax

  result = "R_RX_NONE";
  switch ( a1 )
  {
    case 0:
      return result;
    case 1:
      result = "R_RX_DIR32";
      break;
    case 9:
      result = "R_RX_DIR24S_PCREL";
      break;
    case 10:
      result = "R_RX_DIR16S_PCREL";
      break;
    case 11:
      result = "R_RX_DIR8S_PCREL";
      break;
    case 18:
      result = "R_RX_DIR3U_PCREL";
      break;
    default:
      result = "Unknown";
      break;
  }
  return result;
}
