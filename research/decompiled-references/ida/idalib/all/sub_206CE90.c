const char *__fastcall sub_206CE90(unsigned int a1)
{
  if ( a1 == 0x2000 )
  {
    j__strlen("DIFlagLValueReference");
    return "DIFlagLValueReference";
  }
  if ( a1 > 0x2000 )
  {
    if ( a1 == 0x100000 )
    {
      j__strlen("DIFlagNoReturn");
      return "DIFlagNoReturn";
    }
    if ( a1 <= 0x100000 )
    {
      if ( a1 == (_DWORD)&stru_20000 )
      {
        j__strlen("DIFlagMultipleInheritance");
        return "DIFlagMultipleInheritance";
      }
      if ( a1 <= (unsigned int)&stru_20000 )
      {
        if ( a1 == 0x8000 )
        {
          j__strlen("DIFlagExportSymbols");
          return "DIFlagExportSymbols";
        }
        if ( a1 == (_DWORD)&stru_10000 )
        {
          j__strlen("DIFlagSingleInheritance");
          return "DIFlagSingleInheritance";
        }
        if ( a1 == 0x4000 )
        {
          j__strlen("DIFlagRValueReference");
          return "DIFlagRValueReference";
        }
      }
      else
      {
        if ( a1 == 0x40000 )
        {
          j__strlen("DIFlagIntroducedVirtual");
          return "DIFlagIntroducedVirtual";
        }
        if ( a1 == (_DWORD)&stru_80000 )
        {
          j__strlen("DIFlagBitField");
          return "DIFlagBitField";
        }
        if ( a1 == 196608 )
        {
          j__strlen("DIFlagVirtualInheritance");
          return "DIFlagVirtualInheritance";
        }
      }
    }
    else
    {
      if ( a1 == 0x2000000 )
      {
        j__strlen("DIFlagThunk");
        return "DIFlagThunk";
      }
      if ( a1 <= 0x2000000 )
      {
        if ( a1 == (_DWORD)&loc_800000 )
        {
          j__strlen("DIFlagTypePassByReference");
          return "DIFlagTypePassByReference";
        }
        if ( a1 == (_DWORD)&loc_1000000 )
        {
          j__strlen("DIFlagEnumClass");
          return "DIFlagEnumClass";
        }
        if ( a1 == 0x400000 )
        {
          j__strlen("DIFlagTypePassByValue");
          return "DIFlagTypePassByValue";
        }
      }
      else
      {
        if ( a1 == 0x8000000 )
        {
          j__strlen("DIFlagBigEndian");
          return "DIFlagBigEndian";
        }
        if ( a1 <= 0x8000000 )
        {
          if ( a1 == 0x4000000 )
          {
            j__strlen("DIFlagNonTrivial");
            return "DIFlagNonTrivial";
          }
        }
        else
        {
          if ( a1 == 0x10000000 )
          {
            j__strlen("DIFlagLittleEndian");
            return "DIFlagLittleEndian";
          }
          if ( a1 == 0x20000000 )
          {
            j__strlen("DIFlagAllCallsDescribed");
            return "DIFlagAllCallsDescribed";
          }
        }
      }
    }
    goto LABEL_18;
  }
  if ( a1 == 32 )
  {
    j__strlen("DIFlagVirtual");
    return "DIFlagVirtual";
  }
  if ( a1 > 0x20 )
  {
    if ( a1 == 256 )
    {
      j__strlen("DIFlagPrototyped");
      return "DIFlagPrototyped";
    }
    if ( a1 <= 0x100 )
    {
      switch ( a1 )
      {
        case 0x40u:
          j__strlen("DIFlagArtificial");
          return "DIFlagArtificial";
        case 0x80u:
          j__strlen("DIFlagExplicit");
          return "DIFlagExplicit";
        case 0x24u:
          j__strlen("DIFlagIndirectVirtualBase");
          return "DIFlagIndirectVirtualBase";
      }
    }
    else
    {
      if ( a1 == 1024 )
      {
        j__strlen("DIFlagObjectPointer");
        return "DIFlagObjectPointer";
      }
      if ( a1 <= 0x400 )
      {
        if ( a1 == 512 )
        {
          j__strlen("DIFlagObjcClassComplete");
          return "DIFlagObjcClassComplete";
        }
      }
      else
      {
        if ( a1 == 2048 )
        {
          j__strlen("DIFlagVector");
          return "DIFlagVector";
        }
        if ( a1 == 4096 )
        {
          j__strlen("DIFlagStaticMember");
          return "DIFlagStaticMember";
        }
      }
    }
LABEL_18:
    j__strlen(&byte_22F0C30);
    return &byte_22F0C30;
  }
  if ( a1 == 3 )
  {
    j__strlen("DIFlagPublic");
    return "DIFlagPublic";
  }
  if ( a1 > 3 )
  {
    switch ( a1 )
    {
      case 8u:
        j__strlen("DIFlagAppleBlock");
        return "DIFlagAppleBlock";
      case 0x10u:
        j__strlen("DIFlagReservedBit4");
        return "DIFlagReservedBit4";
      case 4u:
        j__strlen("DIFlagFwdDecl");
        return "DIFlagFwdDecl";
    }
    goto LABEL_18;
  }
  if ( a1 == 1 )
  {
    j__strlen("DIFlagPrivate");
    return "DIFlagPrivate";
  }
  else if ( a1 > 1 )
  {
    j__strlen("DIFlagProtected");
    return "DIFlagProtected";
  }
  else
  {
    j__strlen("DIFlagZero");
    return "DIFlagZero";
  }
}
