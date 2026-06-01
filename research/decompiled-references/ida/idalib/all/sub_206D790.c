const char *__fastcall sub_206D790(unsigned int a1)
{
  if ( a1 == 16 )
  {
    j__strlen("DISPFlagOptimized");
    return "DISPFlagOptimized";
  }
  else if ( a1 <= 0x10 )
  {
    if ( a1 == 2 )
    {
      j__strlen("DISPFlagPureVirtual");
      return "DISPFlagPureVirtual";
    }
    else if ( a1 <= 2 )
    {
      if ( a1 )
      {
        j__strlen("DISPFlagVirtual");
        return "DISPFlagVirtual";
      }
      else
      {
        j__strlen("DISPFlagZero");
        return "DISPFlagZero";
      }
    }
    else if ( a1 == 4 )
    {
      j__strlen("DISPFlagLocalToUnit");
      return "DISPFlagLocalToUnit";
    }
    else
    {
      if ( a1 != 8 )
        goto LABEL_8;
      j__strlen("DISPFlagDefinition");
      return "DISPFlagDefinition";
    }
  }
  else if ( a1 == 128 )
  {
    j__strlen("DISPFlagRecursive");
    return "DISPFlagRecursive";
  }
  else if ( a1 <= 0x80 )
  {
    if ( a1 == 32 )
    {
      j__strlen("DISPFlagPure");
      return "DISPFlagPure";
    }
    else
    {
      if ( a1 != 64 )
        goto LABEL_8;
      j__strlen("DISPFlagElemental");
      return "DISPFlagElemental";
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0x200u:
        j__strlen("DISPFlagDeleted");
        return "DISPFlagDeleted";
      case 0x800u:
        j__strlen("DISPFlagObjCDirect");
        return "DISPFlagObjCDirect";
      case 0x100u:
        j__strlen("DISPFlagMainSubprogram");
        return "DISPFlagMainSubprogram";
      default:
LABEL_8:
        j__strlen(&byte_22F0C30);
        return &byte_22F0C30;
    }
  }
}
