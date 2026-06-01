const char *__fastcall sub_22E50(__int64 a1, int *a2)
{
  int v2; // eax
  char *v3; // rdx

  v2 = *a2;
  if ( *a2 < 0 )
  {
    *a2 = v2 & 0x7FFFFFFF;
    return "TC1v1.1";
  }
  else
  {
    if ( (v2 & 0x40000000) != 0 )
    {
      v3 = "TC1v1.2";
      *a2 = v2 & 0xBFFFFFFF;
      return v3;
    }
    if ( (v2 & 0x20000000) != 0 )
    {
      *a2 = v2 & 0xDFFFFFFF;
      return "TC1v1.3";
    }
    else
    {
      if ( (v2 & 0x800000) == 0 )
      {
        if ( (v2 & 0x400000) != 0 )
        {
          v3 = "TC1v1.6";
          *a2 = v2 & 0xFFBFFFFF;
        }
        else if ( (v2 & 0x200000) != 0 )
        {
          v3 = "TC1v1.6.1";
          *a2 = v2 & 0xFFDFFFFF;
        }
        else if ( (v2 & 0x100000) != 0 )
        {
          v3 = "TC1v1.6.2";
          *a2 = v2 & 0xFFEFFFFF;
        }
        else if ( (v2 & 0x80000) != 0 )
        {
          v3 = "TC1v1.8";
          *a2 = v2 & 0xFFF7FFFF;
        }
        else if ( (v2 & 0x1000000) != 0 )
        {
          v3 = "PCP";
          *a2 = v2 & 0xFEFFFFFF;
        }
        else
        {
          v3 = nullptr;
          if ( (v2 & 0x2000000) != 0 )
          {
            v3 = "PCP2";
            *a2 = v2 & 0xFDFFFFFF;
          }
        }
        return v3;
      }
      *a2 = v2 & 0xFF7FFFFF;
      return "TC1v1.3.1";
    }
  }
}

