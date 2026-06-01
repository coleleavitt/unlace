/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51A50
// Address: 0x0000000000051A50

//----- (0000000000051A50) ----------------------------------------------------
const char *__fastcall sub_51A50(__int64 a1)
{
  int v1; // w9
  const char *result; // x0
  const char *v4; // x9
  bool v5; // zf

  v1 = *(unsigned __int16 *)(a1 + 520);
  result = "Unknown";
  if ( v1 <= 65279 )
  {
    switch ( v1 )
    {
      case 0:
        result = "None";
        break;
      case 1:
        result = "Relocatable";
        break;
      case 2:
        result = "Executable";
        break;
      case 3:
        result = "Shared object";
        break;
      case 4:
        result = "Core file";
        break;
      default:
        return result;
    }
    return result;
  }
  if ( v1 <= 65439 )
  {
    if ( v1 == 65280 )
      return "Processor specific";
    if ( v1 == 65408 && *(_WORD *)(a1 + 522) == 8 )
      return "PS2 IRX";
  }
  else
  {
    switch ( v1 )
    {
      case 0xFFA0:
        v4 = "PSP executable";
        v5 = *(unsigned __int16 *)(a1 + 522) == 8;
        break;
      case 0xFFA4:
        v4 = "Sony PS3 PRX file";
        v5 = *(unsigned __int16 *)(a1 + 522) == 21;
        break;
      case 0xFFFF:
        return "Processor specific";
      default:
        return result;
    }
    if ( v5 )
      return v4;
  }
  return result;
}
