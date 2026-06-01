/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37180
// Address: 0x00037180

//----- (00037180) --------------------------------------------------------
const char *__cdecl sub_37180(int a1)
{
  int v1; // esi
  const char *result; // eax
  bool v3; // zf
  const char *v4; // edx

  v1 = *(__int16 *)(a1 + 400);
  result = "Unknown";
  if ( v1 <= -93 )
  {
    switch ( (unsigned __int16)v1 )
    {
      case 0xFF00u:
        return "Processor specific";
      case 0xFF80u:
        v3 = *(unsigned __int16 *)(a1 + 402) == 8;
        v4 = "PS2 IRX";
        break;
      case 0xFFA0u:
        v3 = *(unsigned __int16 *)(a1 + 402) == 8;
        v4 = "PSP executable";
        break;
      default:
        return result;
    }
  }
  else
  {
    switch ( (__int16)v1 )
    {
      case -1:
        return "Processor specific";
      case 0:
        return "None";
      case 1:
        return "Relocatable";
      case 2:
        return "Executable";
      case 3:
        return "Shared object";
      case 4:
        return "Core file";
      default:
        if ( (unsigned __int16)v1 != 65444 )
          return result;
        v3 = *(unsigned __int16 *)(a1 + 402) == 21;
        v4 = "Sony PS3 PRX file";
        break;
    }
  }
  result = "Unknown";
  if ( v3 )
    return v4;
  return result;
}
