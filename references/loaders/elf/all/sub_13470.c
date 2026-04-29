const char *__fastcall sub_13470(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  const char *v3; // rdx

  v2 = *a2;
  if ( (*a2 & 0x10) != 0 )
  {
    *a2 = v2 & 0xFFFFFFEF;
    return "--64bit";
  }
  else
  {
    if ( (v2 & 1) != 0 )
    {
      v3 = "Trap NIL pointer dereferences";
      *a2 = v2 & 0xFFFFFFFE;
      return v3;
    }
    if ( (v2 & 2) == 0 )
    {
      if ( (v2 & 4) != 0 )
      {
        v3 = "Program uses arch. extensions";
        *a2 = v2 & 0xFFFFFFFB;
      }
      else if ( (v2 & 8) != 0 )
      {
        v3 = "PSR BE bit set";
        *a2 = v2 & 0xFFFFFFF7;
      }
      else if ( (v2 & 0x23000000) != 0 )
      {
        v3 = "IA64 EAS 2.3";
        *a2 = v2 & 0xDCFFFFFF;
      }
      else if ( (v2 & 0x20) != 0 )
      {
        v3 = "Only FP6-FP11 used";
        *a2 = v2 & 0xFFFFFFDF;
      }
      else if ( (v2 & 0x40) != 0 )
      {
        v3 = "gp as program wide constant";
        *a2 = v2 & 0xFFFFFFBF;
      }
      else if ( (v2 & 0x80u) != 0 )
      {
        LOBYTE(v2) = v2 & 0x7F;
        v3 = "no function descriptors";
        *a2 = v2;
      }
      else
      {
        v3 = nullptr;
        if ( (v2 & 0x100) != 0 )
        {
          BYTE1(v2) &= ~1u;
          v3 = "Load at absolute addresses";
          *a2 = v2;
        }
      }
      return v3;
    }
    *a2 = v2 & 0xFFFFFFFD;
    return "Lazy Swap algorithm";
  }
}
