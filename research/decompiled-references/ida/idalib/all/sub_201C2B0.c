const char *__fastcall sub_201C2B0(unsigned int a1)
{
  if ( a1 == 100 )
  {
    j__strlen("DW_OP_reg20");
    return "DW_OP_reg20";
  }
  if ( a1 <= 0x64 )
  {
    if ( a1 == 52 )
    {
      j__strlen("DW_OP_lit4");
      return "DW_OP_lit4";
    }
    if ( a1 <= 0x34 )
    {
      if ( a1 == 28 )
      {
        j__strlen("DW_OP_minus");
        return "DW_OP_minus";
      }
      if ( a1 <= 0x1C )
      {
        if ( a1 == 16 )
        {
          j__strlen("DW_OP_constu");
          return "DW_OP_constu";
        }
        if ( a1 <= 0x10 )
        {
          if ( a1 == 10 )
          {
            j__strlen("DW_OP_const2u");
            return "DW_OP_const2u";
          }
          if ( a1 <= 0xA )
          {
            if ( a1 == 6 )
            {
              j__strlen("DW_OP_deref");
              return "DW_OP_deref";
            }
            if ( a1 <= 6 )
            {
              if ( a1 == 3 )
              {
                j__strlen("DW_OP_addr");
                return "DW_OP_addr";
              }
            }
            else
            {
              if ( a1 == 8 )
              {
                j__strlen("DW_OP_const1u");
                return "DW_OP_const1u";
              }
              if ( a1 == 9 )
              {
                j__strlen("DW_OP_const1s");
                return "DW_OP_const1s";
              }
            }
            return nullptr;
          }
          if ( a1 == 13 )
          {
            j__strlen("DW_OP_const4s");
            return "DW_OP_const4s";
          }
          else if ( a1 > 0xD )
          {
            if ( a1 == 14 )
            {
              j__strlen("DW_OP_const8u");
              return "DW_OP_const8u";
            }
            else
            {
              j__strlen("DW_OP_const8s");
              return "DW_OP_const8s";
            }
          }
          else if ( a1 == 11 )
          {
            j__strlen("DW_OP_const2s");
            return "DW_OP_const2s";
          }
          else
          {
            j__strlen("DW_OP_const4u");
            return "DW_OP_const4u";
          }
        }
        else if ( a1 == 22 )
        {
          j__strlen("DW_OP_swap");
          return "DW_OP_swap";
        }
        else if ( a1 <= 0x16 )
        {
          if ( a1 == 19 )
          {
            j__strlen("DW_OP_drop");
            return "DW_OP_drop";
          }
          else if ( a1 > 0x13 )
          {
            if ( a1 == 20 )
            {
              j__strlen("DW_OP_over");
              return "DW_OP_over";
            }
            else
            {
              j__strlen("DW_OP_pick");
              return "DW_OP_pick";
            }
          }
          else if ( a1 == 17 )
          {
            j__strlen("DW_OP_consts");
            return "DW_OP_consts";
          }
          else
          {
            j__strlen("DW_OP_dup");
            return "DW_OP_dup";
          }
        }
        else if ( a1 == 25 )
        {
          j__strlen("DW_OP_abs");
          return "DW_OP_abs";
        }
        else if ( a1 > 0x19 )
        {
          if ( a1 == 26 )
          {
            j__strlen("DW_OP_and");
            return "DW_OP_and";
          }
          else
          {
            j__strlen("DW_OP_div");
            return "DW_OP_div";
          }
        }
        else if ( a1 == 23 )
        {
          j__strlen("DW_OP_rot");
          return "DW_OP_rot";
        }
        else
        {
          j__strlen("DW_OP_xderef");
          return "DW_OP_xderef";
        }
      }
      else if ( a1 == 40 )
      {
        j__strlen("DW_OP_bra");
        return "DW_OP_bra";
      }
      else if ( a1 > 0x28 )
      {
        if ( a1 == 46 )
        {
          j__strlen("DW_OP_ne");
          return "DW_OP_ne";
        }
        else if ( a1 <= 0x2E )
        {
          if ( a1 == 43 )
          {
            j__strlen("DW_OP_gt");
            return "DW_OP_gt";
          }
          else if ( a1 > 0x2B )
          {
            if ( a1 == 44 )
            {
              j__strlen("DW_OP_le");
              return "DW_OP_le";
            }
            else
            {
              j__strlen("DW_OP_lt");
              return "DW_OP_lt";
            }
          }
          else if ( a1 == 41 )
          {
            j__strlen("DW_OP_eq");
            return "DW_OP_eq";
          }
          else
          {
            j__strlen("DW_OP_ge");
            return "DW_OP_ge";
          }
        }
        else if ( a1 == 49 )
        {
          j__strlen("DW_OP_lit1");
          return "DW_OP_lit1";
        }
        else if ( a1 > 0x31 )
        {
          if ( a1 == 50 )
          {
            j__strlen("DW_OP_lit2");
            return "DW_OP_lit2";
          }
          else
          {
            j__strlen("DW_OP_lit3");
            return "DW_OP_lit3";
          }
        }
        else if ( a1 == 47 )
        {
          j__strlen("DW_OP_skip");
          return "DW_OP_skip";
        }
        else
        {
          j__strlen("DW_OP_lit0");
          return "DW_OP_lit0";
        }
      }
      else if ( a1 == 34 )
      {
        j__strlen("DW_OP_plus");
        return "DW_OP_plus";
      }
      else if ( a1 <= 0x22 )
      {
        if ( a1 == 31 )
        {
          j__strlen("DW_OP_neg");
          return "DW_OP_neg";
        }
        else if ( a1 > 0x1F )
        {
          if ( a1 == 32 )
          {
            j__strlen("DW_OP_not");
            return "DW_OP_not";
          }
          else
          {
            j__strlen("DW_OP_or");
            return "DW_OP_or";
          }
        }
        else if ( a1 == 29 )
        {
          j__strlen("DW_OP_mod");
          return "DW_OP_mod";
        }
        else
        {
          j__strlen("DW_OP_mul");
          return "DW_OP_mul";
        }
      }
      else if ( a1 == 37 )
      {
        j__strlen("DW_OP_shr");
        return "DW_OP_shr";
      }
      else if ( a1 > 0x25 )
      {
        if ( a1 == 38 )
        {
          j__strlen("DW_OP_shra");
          return "DW_OP_shra";
        }
        else
        {
          j__strlen("DW_OP_xor");
          return "DW_OP_xor";
        }
      }
      else if ( a1 == 35 )
      {
        j__strlen("DW_OP_plus_uconst");
        return "DW_OP_plus_uconst";
      }
      else
      {
        j__strlen("DW_OP_shl");
        return "DW_OP_shl";
      }
    }
    else if ( a1 == 76 )
    {
      j__strlen("DW_OP_lit28");
      return "DW_OP_lit28";
    }
    else if ( a1 <= 0x4C )
    {
      if ( a1 == 64 )
      {
        j__strlen("DW_OP_lit16");
        return "DW_OP_lit16";
      }
      else if ( a1 > 0x40 )
      {
        if ( a1 == 70 )
        {
          j__strlen("DW_OP_lit22");
          return "DW_OP_lit22";
        }
        else if ( a1 <= 0x46 )
        {
          if ( a1 == 67 )
          {
            j__strlen("DW_OP_lit19");
            return "DW_OP_lit19";
          }
          else if ( a1 > 0x43 )
          {
            if ( a1 == 68 )
            {
              j__strlen("DW_OP_lit20");
              return "DW_OP_lit20";
            }
            else
            {
              j__strlen("DW_OP_lit21");
              return "DW_OP_lit21";
            }
          }
          else if ( a1 == 65 )
          {
            j__strlen("DW_OP_lit17");
            return "DW_OP_lit17";
          }
          else
          {
            j__strlen("DW_OP_lit18");
            return "DW_OP_lit18";
          }
        }
        else if ( a1 == 73 )
        {
          j__strlen("DW_OP_lit25");
          return "DW_OP_lit25";
        }
        else if ( a1 > 0x49 )
        {
          if ( a1 == 74 )
          {
            j__strlen("DW_OP_lit26");
            return "DW_OP_lit26";
          }
          else
          {
            j__strlen("DW_OP_lit27");
            return "DW_OP_lit27";
          }
        }
        else if ( a1 == 71 )
        {
          j__strlen("DW_OP_lit23");
          return "DW_OP_lit23";
        }
        else
        {
          j__strlen("DW_OP_lit24");
          return "DW_OP_lit24";
        }
      }
      else if ( a1 == 58 )
      {
        j__strlen("DW_OP_lit10");
        return "DW_OP_lit10";
      }
      else if ( a1 <= 0x3A )
      {
        if ( a1 == 55 )
        {
          j__strlen("DW_OP_lit7");
          return "DW_OP_lit7";
        }
        else if ( a1 > 0x37 )
        {
          if ( a1 == 56 )
          {
            j__strlen("DW_OP_lit8");
            return "DW_OP_lit8";
          }
          else
          {
            j__strlen("DW_OP_lit9");
            return "DW_OP_lit9";
          }
        }
        else if ( a1 == 53 )
        {
          j__strlen("DW_OP_lit5");
          return "DW_OP_lit5";
        }
        else
        {
          j__strlen("DW_OP_lit6");
          return "DW_OP_lit6";
        }
      }
      else if ( a1 == 61 )
      {
        j__strlen("DW_OP_lit13");
        return "DW_OP_lit13";
      }
      else if ( a1 > 0x3D )
      {
        if ( a1 == 62 )
        {
          j__strlen("DW_OP_lit14");
          return "DW_OP_lit14";
        }
        else
        {
          j__strlen("DW_OP_lit15");
          return "DW_OP_lit15";
        }
      }
      else if ( a1 == 59 )
      {
        j__strlen("DW_OP_lit11");
        return "DW_OP_lit11";
      }
      else
      {
        j__strlen("DW_OP_lit12");
        return "DW_OP_lit12";
      }
    }
    else if ( a1 == 88 )
    {
      j__strlen("DW_OP_reg8");
      return "DW_OP_reg8";
    }
    else if ( a1 > 0x58 )
    {
      if ( a1 == 94 )
      {
        j__strlen("DW_OP_reg14");
        return "DW_OP_reg14";
      }
      else if ( a1 <= 0x5E )
      {
        if ( a1 == 91 )
        {
          j__strlen("DW_OP_reg11");
          return "DW_OP_reg11";
        }
        else if ( a1 > 0x5B )
        {
          if ( a1 == 92 )
          {
            j__strlen("DW_OP_reg12");
            return "DW_OP_reg12";
          }
          else
          {
            j__strlen("DW_OP_reg13");
            return "DW_OP_reg13";
          }
        }
        else if ( a1 == 89 )
        {
          j__strlen("DW_OP_reg9");
          return "DW_OP_reg9";
        }
        else
        {
          j__strlen("DW_OP_reg10");
          return "DW_OP_reg10";
        }
      }
      else if ( a1 == 97 )
      {
        j__strlen("DW_OP_reg17");
        return "DW_OP_reg17";
      }
      else if ( a1 > 0x61 )
      {
        if ( a1 == 98 )
        {
          j__strlen("DW_OP_reg18");
          return "DW_OP_reg18";
        }
        else
        {
          j__strlen("DW_OP_reg19");
          return "DW_OP_reg19";
        }
      }
      else if ( a1 == 95 )
      {
        j__strlen("DW_OP_reg15");
        return "DW_OP_reg15";
      }
      else
      {
        j__strlen("DW_OP_reg16");
        return "DW_OP_reg16";
      }
    }
    else if ( a1 == 82 )
    {
      j__strlen("DW_OP_reg2");
      return "DW_OP_reg2";
    }
    else if ( a1 <= 0x52 )
    {
      if ( a1 == 79 )
      {
        j__strlen("DW_OP_lit31");
        return "DW_OP_lit31";
      }
      else if ( a1 > 0x4F )
      {
        if ( a1 == 80 )
        {
          j__strlen("DW_OP_reg0");
          return "DW_OP_reg0";
        }
        else
        {
          j__strlen("DW_OP_reg1");
          return "DW_OP_reg1";
        }
      }
      else if ( a1 == 77 )
      {
        j__strlen("DW_OP_lit29");
        return "DW_OP_lit29";
      }
      else
      {
        j__strlen("DW_OP_lit30");
        return "DW_OP_lit30";
      }
    }
    else if ( a1 == 85 )
    {
      j__strlen("DW_OP_reg5");
      return "DW_OP_reg5";
    }
    else if ( a1 > 0x55 )
    {
      if ( a1 == 86 )
      {
        j__strlen("DW_OP_reg6");
        return "DW_OP_reg6";
      }
      else
      {
        j__strlen("DW_OP_reg7");
        return "DW_OP_reg7";
      }
    }
    else if ( a1 == 83 )
    {
      j__strlen("DW_OP_reg3");
      return "DW_OP_reg3";
    }
    else
    {
      j__strlen("DW_OP_reg4");
      return "DW_OP_reg4";
    }
  }
  else
  {
    if ( a1 == 147 )
    {
      j__strlen("DW_OP_piece");
      return "DW_OP_piece";
    }
    if ( a1 <= 0x93 )
    {
      if ( a1 == 123 )
      {
        j__strlen("DW_OP_breg11");
        return "DW_OP_breg11";
      }
      else if ( a1 <= 0x7B )
      {
        if ( a1 == 111 )
        {
          j__strlen("DW_OP_reg31");
          return "DW_OP_reg31";
        }
        else if ( a1 <= 0x6F )
        {
          if ( a1 == 105 )
          {
            j__strlen("DW_OP_reg25");
            return "DW_OP_reg25";
          }
          else if ( a1 <= 0x69 )
          {
            if ( a1 == 102 )
            {
              j__strlen("DW_OP_reg22");
              return "DW_OP_reg22";
            }
            else if ( a1 < 0x66 )
            {
              j__strlen("DW_OP_reg21");
              return "DW_OP_reg21";
            }
            else if ( a1 == 103 )
            {
              j__strlen("DW_OP_reg23");
              return "DW_OP_reg23";
            }
            else
            {
              j__strlen("DW_OP_reg24");
              return "DW_OP_reg24";
            }
          }
          else if ( a1 == 108 )
          {
            j__strlen("DW_OP_reg28");
            return "DW_OP_reg28";
          }
          else if ( a1 > 0x6C )
          {
            if ( a1 == 109 )
            {
              j__strlen("DW_OP_reg29");
              return "DW_OP_reg29";
            }
            else
            {
              j__strlen("DW_OP_reg30");
              return "DW_OP_reg30";
            }
          }
          else if ( a1 == 106 )
          {
            j__strlen("DW_OP_reg26");
            return "DW_OP_reg26";
          }
          else
          {
            j__strlen("DW_OP_reg27");
            return "DW_OP_reg27";
          }
        }
        else if ( a1 == 117 )
        {
          j__strlen("DW_OP_breg5");
          return "DW_OP_breg5";
        }
        else if ( a1 <= 0x75 )
        {
          if ( a1 == 114 )
          {
            j__strlen("DW_OP_breg2");
            return "DW_OP_breg2";
          }
          else if ( a1 > 0x72 )
          {
            if ( a1 == 115 )
            {
              j__strlen("DW_OP_breg3");
              return "DW_OP_breg3";
            }
            else
            {
              j__strlen("DW_OP_breg4");
              return "DW_OP_breg4";
            }
          }
          else if ( a1 == 112 )
          {
            j__strlen("DW_OP_breg0");
            return "DW_OP_breg0";
          }
          else
          {
            j__strlen("DW_OP_breg1");
            return "DW_OP_breg1";
          }
        }
        else if ( a1 == 120 )
        {
          j__strlen("DW_OP_breg8");
          return "DW_OP_breg8";
        }
        else if ( a1 > 0x78 )
        {
          if ( a1 == 121 )
          {
            j__strlen("DW_OP_breg9");
            return "DW_OP_breg9";
          }
          else
          {
            j__strlen("DW_OP_breg10");
            return "DW_OP_breg10";
          }
        }
        else if ( a1 == 118 )
        {
          j__strlen("DW_OP_breg6");
          return "DW_OP_breg6";
        }
        else
        {
          j__strlen("DW_OP_breg7");
          return "DW_OP_breg7";
        }
      }
      else if ( a1 == 135 )
      {
        j__strlen("DW_OP_breg23");
        return "DW_OP_breg23";
      }
      else if ( a1 > 0x87 )
      {
        if ( a1 == 141 )
        {
          j__strlen("DW_OP_breg29");
          return "DW_OP_breg29";
        }
        else if ( a1 <= 0x8D )
        {
          if ( a1 == 138 )
          {
            j__strlen("DW_OP_breg26");
            return "DW_OP_breg26";
          }
          else if ( a1 > 0x8A )
          {
            if ( a1 == 139 )
            {
              j__strlen("DW_OP_breg27");
              return "DW_OP_breg27";
            }
            else
            {
              j__strlen("DW_OP_breg28");
              return "DW_OP_breg28";
            }
          }
          else if ( a1 == 136 )
          {
            j__strlen("DW_OP_breg24");
            return "DW_OP_breg24";
          }
          else
          {
            j__strlen("DW_OP_breg25");
            return "DW_OP_breg25";
          }
        }
        else if ( a1 == 144 )
        {
          j__strlen("DW_OP_regx");
          return "DW_OP_regx";
        }
        else if ( a1 > 0x90 )
        {
          if ( a1 == 145 )
          {
            j__strlen("DW_OP_fbreg");
            return "DW_OP_fbreg";
          }
          else
          {
            j__strlen("DW_OP_bregx");
            return "DW_OP_bregx";
          }
        }
        else if ( a1 == 142 )
        {
          j__strlen("DW_OP_breg30");
          return "DW_OP_breg30";
        }
        else
        {
          j__strlen("DW_OP_breg31");
          return "DW_OP_breg31";
        }
      }
      else if ( a1 == 129 )
      {
        j__strlen("DW_OP_breg17");
        return "DW_OP_breg17";
      }
      else if ( a1 <= 0x81 )
      {
        if ( a1 == 126 )
        {
          j__strlen("DW_OP_breg14");
          return "DW_OP_breg14";
        }
        else if ( a1 > 0x7E )
        {
          if ( a1 == 127 )
          {
            j__strlen("DW_OP_breg15");
            return "DW_OP_breg15";
          }
          else
          {
            j__strlen("DW_OP_breg16");
            return "DW_OP_breg16";
          }
        }
        else if ( a1 == 124 )
        {
          j__strlen("DW_OP_breg12");
          return "DW_OP_breg12";
        }
        else
        {
          j__strlen("DW_OP_breg13");
          return "DW_OP_breg13";
        }
      }
      else if ( a1 == 132 )
      {
        j__strlen("DW_OP_breg20");
        return "DW_OP_breg20";
      }
      else if ( a1 > 0x84 )
      {
        if ( a1 == 133 )
        {
          j__strlen("DW_OP_breg21");
          return "DW_OP_breg21";
        }
        else
        {
          j__strlen("DW_OP_breg22");
          return "DW_OP_breg22";
        }
      }
      else if ( a1 == 130 )
      {
        j__strlen("DW_OP_breg18");
        return "DW_OP_breg18";
      }
      else
      {
        j__strlen("DW_OP_breg19");
        return "DW_OP_breg19";
      }
    }
    else
    {
      if ( a1 == 225 )
      {
        j__strlen("DW_OP_HP_is_value");
        return "DW_OP_HP_is_value";
      }
      if ( a1 <= 0xE1 )
      {
        if ( a1 == 159 )
        {
          j__strlen("DW_OP_stack_value");
          return "DW_OP_stack_value";
        }
        if ( a1 > 0x9F )
        {
          if ( a1 == 165 )
          {
            j__strlen("DW_OP_regval_type");
            return "DW_OP_regval_type";
          }
          if ( a1 <= 0xA5 )
          {
            if ( a1 == 162 )
            {
              j__strlen("DW_OP_constx");
              return "DW_OP_constx";
            }
            else if ( a1 > 0xA2 )
            {
              if ( a1 == 163 )
              {
                j__strlen("DW_OP_entry_value");
                return "DW_OP_entry_value";
              }
              else
              {
                j__strlen("DW_OP_const_type");
                return "DW_OP_const_type";
              }
            }
            else if ( a1 == 160 )
            {
              j__strlen("DW_OP_implicit_pointer");
              return "DW_OP_implicit_pointer";
            }
            else
            {
              j__strlen("DW_OP_addrx");
              return "DW_OP_addrx";
            }
          }
          else
          {
            if ( a1 == 168 )
            {
              j__strlen("DW_OP_convert");
              return "DW_OP_convert";
            }
            if ( a1 > 0xA8 )
            {
              if ( a1 == 169 )
              {
                j__strlen("DW_OP_reinterpret");
                return "DW_OP_reinterpret";
              }
              if ( a1 == 224 )
              {
                j__strlen("DW_OP_GNU_push_tls_address");
                return "DW_OP_GNU_push_tls_address";
              }
              return nullptr;
            }
            if ( a1 == 166 )
            {
              j__strlen("DW_OP_deref_type");
              return "DW_OP_deref_type";
            }
            else
            {
              j__strlen("DW_OP_xderef_type");
              return "DW_OP_xderef_type";
            }
          }
        }
        else if ( a1 == 153 )
        {
          j__strlen("DW_OP_call4");
          return "DW_OP_call4";
        }
        else if ( a1 <= 0x99 )
        {
          if ( a1 == 150 )
          {
            j__strlen("DW_OP_nop");
            return "DW_OP_nop";
          }
          else if ( a1 > 0x96 )
          {
            if ( a1 == 151 )
            {
              j__strlen("DW_OP_push_object_address");
              return "DW_OP_push_object_address";
            }
            else
            {
              j__strlen("DW_OP_call2");
              return "DW_OP_call2";
            }
          }
          else if ( a1 == 148 )
          {
            j__strlen("DW_OP_deref_size");
            return "DW_OP_deref_size";
          }
          else
          {
            j__strlen("DW_OP_xderef_size");
            return "DW_OP_xderef_size";
          }
        }
        else if ( a1 == 156 )
        {
          j__strlen("DW_OP_call_frame_cfa");
          return "DW_OP_call_frame_cfa";
        }
        else if ( a1 > 0x9C )
        {
          if ( a1 == 157 )
          {
            j__strlen("DW_OP_bit_piece");
            return "DW_OP_bit_piece";
          }
          else
          {
            j__strlen("DW_OP_implicit_value");
            return "DW_OP_implicit_value";
          }
        }
        else if ( a1 == 154 )
        {
          j__strlen("DW_OP_call_ref");
          return "DW_OP_call_ref";
        }
        else
        {
          j__strlen("DW_OP_form_tls_address");
          return "DW_OP_form_tls_address";
        }
      }
      else
      {
        if ( a1 == 243 )
        {
          j__strlen("DW_OP_GNU_entry_value");
          return "DW_OP_GNU_entry_value";
        }
        if ( a1 > 0xF3 )
        {
          if ( a1 == 4098 )
          {
            j__strlen("DW_OP_LLVM_tag_offset");
            return "DW_OP_LLVM_tag_offset";
          }
          if ( a1 <= 0x1002 )
          {
            if ( a1 == 252 )
            {
              j__strlen("DW_OP_GNU_const_index");
              return "DW_OP_GNU_const_index";
            }
            if ( a1 > 0xFC )
            {
              if ( a1 == 4096 )
              {
                j__strlen("DW_OP_LLVM_fragment");
                return "DW_OP_LLVM_fragment";
              }
              if ( a1 == 4097 )
              {
                j__strlen("DW_OP_LLVM_convert");
                return "DW_OP_LLVM_convert";
              }
            }
            else
            {
              if ( a1 == 248 )
              {
                j__strlen("DW_OP_PGI_omp_thread_num");
                return "DW_OP_PGI_omp_thread_num";
              }
              if ( a1 == 251 )
              {
                j__strlen("DW_OP_GNU_addr_index");
                return "DW_OP_GNU_addr_index";
              }
            }
            return nullptr;
          }
          if ( a1 == 4101 )
          {
            j__strlen("DW_OP_LLVM_arg");
            return "DW_OP_LLVM_arg";
          }
          if ( a1 > 0x1005 )
          {
            if ( a1 == 4102 )
            {
              j__strlen("DW_OP_LLVM_extract_bits_sext");
              return "DW_OP_LLVM_extract_bits_sext";
            }
            if ( a1 == 4103 )
            {
              j__strlen("DW_OP_LLVM_extract_bits_zext");
              return "DW_OP_LLVM_extract_bits_zext";
            }
            return nullptr;
          }
          if ( a1 == 4099 )
          {
            j__strlen("DW_OP_LLVM_entry_value");
            return "DW_OP_LLVM_entry_value";
          }
          else
          {
            j__strlen("DW_OP_LLVM_implicit_pointer");
            return "DW_OP_LLVM_implicit_pointer";
          }
        }
        else
        {
          if ( a1 == 232 )
          {
            j__strlen("DW_OP_INTEL_bit_piece");
            return "DW_OP_INTEL_bit_piece";
          }
          if ( a1 > 0xE8 )
          {
            if ( a1 == 238 )
            {
              j__strlen("DW_OP_WASM_location_int");
              return "DW_OP_WASM_location_int";
            }
            if ( a1 > 0xEE )
            {
              if ( a1 == 240 )
              {
                j__strlen("DW_OP_APPLE_uninit");
                return "DW_OP_APPLE_uninit";
              }
              if ( a1 == 242 )
              {
                j__strlen("DW_OP_GNU_implicit_pointer");
                return "DW_OP_GNU_implicit_pointer";
              }
            }
            else
            {
              if ( a1 == 233 )
              {
                j__strlen("DW_OP_LLVM_user");
                return "DW_OP_LLVM_user";
              }
              if ( a1 == 237 )
              {
                j__strlen("DW_OP_WASM_location");
                return "DW_OP_WASM_location";
              }
            }
            return nullptr;
          }
          if ( a1 == 228 )
          {
            j__strlen("DW_OP_HP_mod_range");
            return "DW_OP_HP_mod_range";
          }
          if ( a1 > 0xE4 )
          {
            if ( a1 == 229 )
            {
              j__strlen("DW_OP_HP_unmod_range");
              return "DW_OP_HP_unmod_range";
            }
            if ( a1 == 230 )
            {
              j__strlen("DW_OP_HP_tls");
              return "DW_OP_HP_tls";
            }
            return nullptr;
          }
          if ( a1 == 226 )
          {
            j__strlen("DW_OP_HP_fltconst4");
            return "DW_OP_HP_fltconst4";
          }
          else
          {
            j__strlen("DW_OP_HP_fltconst8");
            return "DW_OP_HP_fltconst8";
          }
        }
      }
    }
  }
}
