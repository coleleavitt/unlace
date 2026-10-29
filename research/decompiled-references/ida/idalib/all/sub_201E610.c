const char *__fastcall sub_201E610(unsigned int a1)
{
  if ( a1 == 32 )
  {
    j__strlen("DW_LANG_Dylan");
    return "DW_LANG_Dylan";
  }
  if ( a1 > 0x20 )
  {
    if ( a1 == 49 )
    {
      j__strlen("DW_LANG_Assembly");
      return "DW_LANG_Assembly";
    }
    if ( a1 > 0x31 )
    {
      if ( a1 == 57 )
      {
        j__strlen("DW_LANG_SYCL");
        return "DW_LANG_SYCL";
      }
      if ( a1 > 0x39 )
      {
        if ( a1 == 66 )
        {
          j__strlen("DW_LANG_Hylo");
          return "DW_LANG_Hylo";
        }
        if ( a1 > 0x42 )
        {
          switch ( a1 )
          {
            case 0x8E57u:
              j__strlen("DW_LANG_GOOGLE_RenderScript");
              return "DW_LANG_GOOGLE_RenderScript";
            case 0xB000u:
              j__strlen("DW_LANG_BORLAND_Delphi");
              return "DW_LANG_BORLAND_Delphi";
            case 0x8001u:
              j__strlen("DW_LANG_Mips_Assembler");
              return "DW_LANG_Mips_Assembler";
          }
        }
        else
        {
          if ( a1 == 64 )
          {
            j__strlen("DW_LANG_Ruby");
            return "DW_LANG_Ruby";
          }
          if ( a1 > 0x40 )
          {
            j__strlen("DW_LANG_Move");
            return "DW_LANG_Move";
          }
          if ( a1 == 61 )
          {
            j__strlen("DW_LANG_Metal");
            return "DW_LANG_Metal";
          }
        }
        return nullptr;
      }
      if ( a1 == 53 )
      {
        j__strlen("DW_LANG_GLSL_ES");
        return "DW_LANG_GLSL_ES";
      }
      else if ( a1 > 0x35 )
      {
        if ( a1 == 55 )
        {
          j__strlen("DW_LANG_OpenCL_CPP");
          return "DW_LANG_OpenCL_CPP";
        }
        else if ( a1 > 0x37 )
        {
          j__strlen("DW_LANG_CPP_for_OpenCL");
          return "DW_LANG_CPP_for_OpenCL";
        }
        else
        {
          j__strlen("DW_LANG_HLSL");
          return "DW_LANG_HLSL";
        }
      }
      else if ( a1 == 51 )
      {
        j__strlen("DW_LANG_Mojo");
        return "DW_LANG_Mojo";
      }
      else if ( a1 > 0x33 )
      {
        j__strlen("DW_LANG_GLSL");
        return "DW_LANG_GLSL";
      }
      else
      {
        j__strlen("DW_LANG_C_sharp");
        return "DW_LANG_C_sharp";
      }
    }
    else
    {
      if ( a1 == 40 )
      {
        j__strlen("DW_LANG_Crystal");
        return "DW_LANG_Crystal";
      }
      if ( a1 > 0x28 )
      {
        if ( a1 == 45 )
        {
          j__strlen("DW_LANG_Fortran18");
          return "DW_LANG_Fortran18";
        }
        if ( a1 <= 0x2D )
        {
          if ( a1 == 43 )
          {
            j__strlen("DW_LANG_C_plus_plus_20");
            return "DW_LANG_C_plus_plus_20";
          }
          if ( a1 > 0x2B )
          {
            j__strlen("DW_LANG_C17");
            return "DW_LANG_C17";
          }
          if ( a1 == 42 )
          {
            j__strlen("DW_LANG_C_plus_plus_17");
            return "DW_LANG_C_plus_plus_17";
          }
          return nullptr;
        }
        if ( a1 == 47 )
        {
          j__strlen("DW_LANG_Ada2012");
          return "DW_LANG_Ada2012";
        }
        else if ( a1 > 0x2F )
        {
          j__strlen("DW_LANG_HIP");
          return "DW_LANG_HIP";
        }
        else
        {
          j__strlen("DW_LANG_Ada2005");
          return "DW_LANG_Ada2005";
        }
      }
      else if ( a1 == 36 )
      {
        j__strlen("DW_LANG_RenderScript");
        return "DW_LANG_RenderScript";
      }
      else if ( a1 > 0x24 )
      {
        if ( a1 == 38 )
        {
          j__strlen("DW_LANG_Kotlin");
          return "DW_LANG_Kotlin";
        }
        else if ( a1 > 0x26 )
        {
          j__strlen("DW_LANG_Zig");
          return "DW_LANG_Zig";
        }
        else
        {
          j__strlen("DW_LANG_BLISS");
          return "DW_LANG_BLISS";
        }
      }
      else if ( a1 == 34 )
      {
        j__strlen("DW_LANG_Fortran03");
        return "DW_LANG_Fortran03";
      }
      else if ( a1 > 0x22 )
      {
        j__strlen("DW_LANG_Fortran08");
        return "DW_LANG_Fortran08";
      }
      else
      {
        j__strlen("DW_LANG_C_plus_plus_14");
        return "DW_LANG_C_plus_plus_14";
      }
    }
  }
  else
  {
    if ( a1 == 16 )
    {
      j__strlen("DW_LANG_ObjC");
      return "DW_LANG_ObjC";
    }
    if ( a1 > 0x10 )
    {
      if ( a1 == 24 )
      {
        j__strlen("DW_LANG_Haskell");
        return "DW_LANG_Haskell";
      }
      else if ( a1 > 0x18 )
      {
        if ( a1 == 28 )
        {
          j__strlen("DW_LANG_Rust");
          return "DW_LANG_Rust";
        }
        else if ( a1 > 0x1C )
        {
          if ( a1 == 30 )
          {
            j__strlen("DW_LANG_Swift");
            return "DW_LANG_Swift";
          }
          else if ( a1 > 0x1E )
          {
            j__strlen("DW_LANG_Julia");
            return "DW_LANG_Julia";
          }
          else
          {
            j__strlen("DW_LANG_C11");
            return "DW_LANG_C11";
          }
        }
        else if ( a1 == 26 )
        {
          j__strlen("DW_LANG_C_plus_plus_11");
          return "DW_LANG_C_plus_plus_11";
        }
        else if ( a1 > 0x1A )
        {
          j__strlen("DW_LANG_OCaml");
          return "DW_LANG_OCaml";
        }
        else
        {
          j__strlen("DW_LANG_C_plus_plus_03");
          return "DW_LANG_C_plus_plus_03";
        }
      }
      else if ( a1 == 20 )
      {
        j__strlen("DW_LANG_Python");
        return "DW_LANG_Python";
      }
      else if ( a1 > 0x14 )
      {
        if ( a1 == 22 )
        {
          j__strlen("DW_LANG_Go");
          return "DW_LANG_Go";
        }
        else if ( a1 > 0x16 )
        {
          j__strlen("DW_LANG_Modula3");
          return "DW_LANG_Modula3";
        }
        else
        {
          j__strlen("DW_LANG_OpenCL");
          return "DW_LANG_OpenCL";
        }
      }
      else if ( a1 == 18 )
      {
        j__strlen("DW_LANG_UPC");
        return "DW_LANG_UPC";
      }
      else if ( a1 > 0x12 )
      {
        j__strlen("DW_LANG_D");
        return "DW_LANG_D";
      }
      else
      {
        j__strlen("DW_LANG_ObjC_plus_plus");
        return "DW_LANG_ObjC_plus_plus";
      }
    }
    else
    {
      if ( a1 == 8 )
      {
        j__strlen("DW_LANG_Fortran90");
        return "DW_LANG_Fortran90";
      }
      if ( a1 > 8 )
      {
        if ( a1 == 12 )
        {
          j__strlen("DW_LANG_C99");
          return "DW_LANG_C99";
        }
        else if ( a1 > 0xC )
        {
          if ( a1 == 14 )
          {
            j__strlen("DW_LANG_Fortran95");
            return "DW_LANG_Fortran95";
          }
          else if ( a1 > 0xE )
          {
            j__strlen("DW_LANG_PLI");
            return "DW_LANG_PLI";
          }
          else
          {
            j__strlen("DW_LANG_Ada95");
            return "DW_LANG_Ada95";
          }
        }
        else if ( a1 == 10 )
        {
          j__strlen("DW_LANG_Modula2");
          return "DW_LANG_Modula2";
        }
        else if ( a1 > 0xA )
        {
          j__strlen("DW_LANG_Java");
          return "DW_LANG_Java";
        }
        else
        {
          j__strlen("DW_LANG_Pascal83");
          return "DW_LANG_Pascal83";
        }
      }
      else
      {
        if ( a1 == 4 )
        {
          j__strlen("DW_LANG_C_plus_plus");
          return "DW_LANG_C_plus_plus";
        }
        if ( a1 <= 4 )
        {
          if ( a1 == 2 )
          {
            j__strlen("DW_LANG_C");
            return "DW_LANG_C";
          }
          if ( a1 > 2 )
          {
            j__strlen("DW_LANG_Ada83");
            return "DW_LANG_Ada83";
          }
          if ( a1 == 1 )
          {
            j__strlen("DW_LANG_C89");
            return "DW_LANG_C89";
          }
          return nullptr;
        }
        if ( a1 == 6 )
        {
          j__strlen("DW_LANG_Cobol85");
          return "DW_LANG_Cobol85";
        }
        else if ( a1 > 6 )
        {
          j__strlen("DW_LANG_Fortran77");
          return "DW_LANG_Fortran77";
        }
        else
        {
          j__strlen("DW_LANG_Cobol74");
          return "DW_LANG_Cobol74";
        }
      }
    }
  }
}
