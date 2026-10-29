const char *__fastcall sub_12C50(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  const char *v3; // rdx

  v2 = *a2;
  if ( (*a2 & 0x10000) != 0 )
  {
    *a2 = v2 & 0xFFFEFFFF;
    return "Trap null address dereferences";
  }
  else
  {
    if ( (v2 & 0x20000) != 0 )
    {
      v3 = ".PARISC.archext section is present.";
      *a2 = v2 & 0xFFFDFFFF;
      return v3;
    }
    if ( (v2 & 0x40000) == 0 )
    {
      if ( (v2 & 0x80000) != 0 )
      {
        v3 = "Program expects wide mode.";
        *a2 = v2 & 0xFFF7FFFF;
      }
      else if ( (v2 & 0x100000) != 0 )
      {
        v3 = "Do not allow kernel-assisted branch prediction.";
        *a2 = v2 & 0xFFEFFFFF;
      }
      else if ( (v2 & 0x400000) != 0 )
      {
        v3 = "Allow lazy swap for dynamically allocated program segments.";
        *a2 = v2 & 0xFFBFFFFF;
      }
      else if ( (_WORD)v2 == 528 )
      {
        LOWORD(v2) = 0;
        v3 = "PA RISC 1.1";
        *a2 = v2;
      }
      else if ( (unsigned __int16)v2 == 532 )
      {
        LOWORD(v2) = 0;
        v3 = "PA RISC 2.0";
        *a2 = v2;
      }
      else
      {
        v3 = nullptr;
        if ( (unsigned __int16)v2 == 523 )
        {
          LOWORD(v2) = 0;
          v3 = "PA RISC 1.0";
          *a2 = v2;
        }
      }
      return v3;
    }
    *a2 = v2 & 0xFFFBFFFF;
    return "Program expects little-endian mode.";
  }
}

