__int64 __fastcall dwarf_get_OP_name(int a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 3:
      *a2 = "DW_OP_addr";
      goto LABEL_4;
    case 6:
      *a2 = "DW_OP_deref";
      goto LABEL_4;
    case 8:
      *a2 = "DW_OP_const1u";
      goto LABEL_4;
    case 9:
      *a2 = "DW_OP_const1s";
      goto LABEL_4;
    case 10:
      *a2 = "DW_OP_const2u";
      goto LABEL_4;
    case 11:
      *a2 = "DW_OP_const2s";
      goto LABEL_4;
    case 12:
      *a2 = "DW_OP_const4u";
      goto LABEL_4;
    case 13:
      *a2 = "DW_OP_const4s";
      goto LABEL_4;
    case 14:
      *a2 = "DW_OP_const8u";
      goto LABEL_4;
    case 15:
      *a2 = "DW_OP_const8s";
      goto LABEL_4;
    case 16:
      *a2 = "DW_OP_constu";
      goto LABEL_4;
    case 17:
      *a2 = "DW_OP_consts";
      goto LABEL_4;
    case 18:
      *a2 = "DW_OP_dup";
      goto LABEL_4;
    case 19:
      *a2 = "DW_OP_drop";
      goto LABEL_4;
    case 20:
      *a2 = "DW_OP_over";
      goto LABEL_4;
    case 21:
      *a2 = "DW_OP_pick";
      goto LABEL_4;
    case 22:
      *a2 = "DW_OP_swap";
      goto LABEL_4;
    case 23:
      *a2 = "DW_OP_rot";
      goto LABEL_4;
    case 24:
      *a2 = "DW_OP_xderef";
      goto LABEL_4;
    case 25:
      *a2 = "DW_OP_abs";
      goto LABEL_4;
    case 26:
      *a2 = "DW_OP_and";
      goto LABEL_4;
    case 27:
      *a2 = "DW_OP_div";
      goto LABEL_4;
    case 28:
      *a2 = "DW_OP_minus";
      goto LABEL_4;
    case 29:
      *a2 = "DW_OP_mod";
      goto LABEL_4;
    case 30:
      *a2 = "DW_OP_mul";
      goto LABEL_4;
    case 31:
      *a2 = "DW_OP_neg";
      goto LABEL_4;
    case 32:
      *a2 = "DW_OP_not";
      goto LABEL_4;
    case 33:
      *a2 = "DW_OP_or";
      goto LABEL_4;
    case 34:
      *a2 = "DW_OP_plus";
      goto LABEL_4;
    case 35:
      *a2 = "DW_OP_plus_uconst";
      goto LABEL_4;
    case 36:
      *a2 = "DW_OP_shl";
      goto LABEL_4;
    case 37:
      *a2 = "DW_OP_shr";
      goto LABEL_4;
    case 38:
      *a2 = "DW_OP_shra";
      goto LABEL_4;
    case 39:
      *a2 = "DW_OP_xor";
      goto LABEL_4;
    case 40:
      *a2 = "DW_OP_bra";
      goto LABEL_4;
    case 41:
      *a2 = "DW_OP_eq";
      goto LABEL_4;
    case 42:
      *a2 = "DW_OP_ge";
      goto LABEL_4;
    case 43:
      *a2 = "DW_OP_gt";
      goto LABEL_4;
    case 44:
      *a2 = "DW_OP_le";
      goto LABEL_4;
    case 45:
      *a2 = "DW_OP_lt";
      goto LABEL_4;
    case 46:
      *a2 = "DW_OP_ne";
      goto LABEL_4;
    case 47:
      *a2 = "DW_OP_skip";
      goto LABEL_4;
    case 48:
      *a2 = "DW_OP_lit0";
      goto LABEL_4;
    case 49:
      *a2 = "DW_OP_lit1";
      goto LABEL_4;
    case 50:
      *a2 = "DW_OP_lit2";
      goto LABEL_4;
    case 51:
      *a2 = "DW_OP_lit3";
      goto LABEL_4;
    case 52:
      *a2 = "DW_OP_lit4";
      goto LABEL_4;
    case 53:
      *a2 = "DW_OP_lit5";
      goto LABEL_4;
    case 54:
      *a2 = "DW_OP_lit6";
      goto LABEL_4;
    case 55:
      *a2 = "DW_OP_lit7";
      goto LABEL_4;
    case 56:
      *a2 = "DW_OP_lit8";
      goto LABEL_4;
    case 57:
      *a2 = "DW_OP_lit9";
      goto LABEL_4;
    case 58:
      *a2 = "DW_OP_lit10";
      goto LABEL_4;
    case 59:
      *a2 = "DW_OP_lit11";
      goto LABEL_4;
    case 60:
      *a2 = "DW_OP_lit12";
      goto LABEL_4;
    case 61:
      *a2 = "DW_OP_lit13";
      goto LABEL_4;
    case 62:
      *a2 = "DW_OP_lit14";
      goto LABEL_4;
    case 63:
      *a2 = "DW_OP_lit15";
      goto LABEL_4;
    case 64:
      *a2 = "DW_OP_lit16";
      goto LABEL_4;
    case 65:
      *a2 = "DW_OP_lit17";
      goto LABEL_4;
    case 66:
      *a2 = "DW_OP_lit18";
      goto LABEL_4;
    case 67:
      *a2 = "DW_OP_lit19";
      goto LABEL_4;
    case 68:
      *a2 = "DW_OP_lit20";
      goto LABEL_4;
    case 69:
      *a2 = "DW_OP_lit21";
      goto LABEL_4;
    case 70:
      *a2 = "DW_OP_lit22";
      goto LABEL_4;
    case 71:
      *a2 = "DW_OP_lit23";
      goto LABEL_4;
    case 72:
      *a2 = "DW_OP_lit24";
      goto LABEL_4;
    case 73:
      *a2 = "DW_OP_lit25";
      goto LABEL_4;
    case 74:
      *a2 = "DW_OP_lit26";
      goto LABEL_4;
    case 75:
      *a2 = "DW_OP_lit27";
      goto LABEL_4;
    case 76:
      *a2 = "DW_OP_lit28";
      goto LABEL_4;
    case 77:
      *a2 = "DW_OP_lit29";
      goto LABEL_4;
    case 78:
      *a2 = "DW_OP_lit30";
      goto LABEL_4;
    case 79:
      *a2 = "DW_OP_lit31";
      goto LABEL_4;
    case 80:
      *a2 = "DW_OP_reg0";
      goto LABEL_4;
    case 81:
      *a2 = "DW_OP_reg1";
      goto LABEL_4;
    case 82:
      *a2 = "DW_OP_reg2";
      goto LABEL_4;
    case 83:
      *a2 = "DW_OP_reg3";
      goto LABEL_4;
    case 84:
      *a2 = "DW_OP_reg4";
      goto LABEL_4;
    case 85:
      *a2 = "DW_OP_reg5";
      goto LABEL_4;
    case 86:
      *a2 = "DW_OP_reg6";
      goto LABEL_4;
    case 87:
      *a2 = "DW_OP_reg7";
      goto LABEL_4;
    case 88:
      *a2 = "DW_OP_reg8";
      goto LABEL_4;
    case 89:
      *a2 = "DW_OP_reg9";
      goto LABEL_4;
    case 90:
      *a2 = "DW_OP_reg10";
      goto LABEL_4;
    case 91:
      *a2 = "DW_OP_reg11";
      goto LABEL_4;
    case 92:
      *a2 = "DW_OP_reg12";
      goto LABEL_4;
    case 93:
      *a2 = "DW_OP_reg13";
      goto LABEL_4;
    case 94:
      *a2 = "DW_OP_reg14";
      goto LABEL_4;
    case 95:
      *a2 = "DW_OP_reg15";
      goto LABEL_4;
    case 96:
      *a2 = "DW_OP_reg16";
      goto LABEL_4;
    case 97:
      *a2 = "DW_OP_reg17";
      goto LABEL_4;
    case 98:
      *a2 = "DW_OP_reg18";
      goto LABEL_4;
    case 99:
      *a2 = "DW_OP_reg19";
      goto LABEL_4;
    case 100:
      *a2 = "DW_OP_reg20";
      goto LABEL_4;
    case 101:
      *a2 = "DW_OP_reg21";
      goto LABEL_4;
    case 102:
      *a2 = "DW_OP_reg22";
      goto LABEL_4;
    case 103:
      *a2 = "DW_OP_reg23";
      goto LABEL_4;
    case 104:
      *a2 = "DW_OP_reg24";
      goto LABEL_4;
    case 105:
      *a2 = "DW_OP_reg25";
      goto LABEL_4;
    case 106:
      *a2 = "DW_OP_reg26";
      goto LABEL_4;
    case 107:
      *a2 = "DW_OP_reg27";
      goto LABEL_4;
    case 108:
      *a2 = "DW_OP_reg28";
      goto LABEL_4;
    case 109:
      *a2 = "DW_OP_reg29";
      goto LABEL_4;
    case 110:
      *a2 = "DW_OP_reg30";
      goto LABEL_4;
    case 111:
      *a2 = "DW_OP_reg31";
      goto LABEL_4;
    case 112:
      *a2 = "DW_OP_breg0";
      goto LABEL_4;
    case 113:
      *a2 = "DW_OP_breg1";
      goto LABEL_4;
    case 114:
      *a2 = "DW_OP_breg2";
      goto LABEL_4;
    case 115:
      *a2 = "DW_OP_breg3";
      goto LABEL_4;
    case 116:
      *a2 = "DW_OP_breg4";
      goto LABEL_4;
    case 117:
      *a2 = "DW_OP_breg5";
      goto LABEL_4;
    case 118:
      *a2 = "DW_OP_breg6";
      goto LABEL_4;
    case 119:
      *a2 = "DW_OP_breg7";
      goto LABEL_4;
    case 120:
      *a2 = "DW_OP_breg8";
      goto LABEL_4;
    case 121:
      *a2 = "DW_OP_breg9";
      goto LABEL_4;
    case 122:
      *a2 = "DW_OP_breg10";
      goto LABEL_4;
    case 123:
      *a2 = "DW_OP_breg11";
      goto LABEL_4;
    case 124:
      *a2 = "DW_OP_breg12";
      goto LABEL_4;
    case 125:
      *a2 = "DW_OP_breg13";
      goto LABEL_4;
    case 126:
      *a2 = "DW_OP_breg14";
      goto LABEL_4;
    case 127:
      *a2 = "DW_OP_breg15";
      goto LABEL_4;
    case 128:
      *a2 = "DW_OP_breg16";
      goto LABEL_4;
    case 129:
      *a2 = "DW_OP_breg17";
      goto LABEL_4;
    case 130:
      *a2 = "DW_OP_breg18";
      goto LABEL_4;
    case 131:
      *a2 = "DW_OP_breg19";
      goto LABEL_4;
    case 132:
      *a2 = "DW_OP_breg20";
      goto LABEL_4;
    case 133:
      *a2 = "DW_OP_breg21";
      goto LABEL_4;
    case 134:
      *a2 = "DW_OP_breg22";
      goto LABEL_4;
    case 135:
      *a2 = "DW_OP_breg23";
      goto LABEL_4;
    case 136:
      *a2 = "DW_OP_breg24";
      goto LABEL_4;
    case 137:
      *a2 = "DW_OP_breg25";
      goto LABEL_4;
    case 138:
      *a2 = "DW_OP_breg26";
      goto LABEL_4;
    case 139:
      *a2 = "DW_OP_breg27";
      goto LABEL_4;
    case 140:
      *a2 = "DW_OP_breg28";
      goto LABEL_4;
    case 141:
      *a2 = "DW_OP_breg29";
      goto LABEL_4;
    case 142:
      *a2 = "DW_OP_breg30";
      goto LABEL_4;
    case 143:
      *a2 = "DW_OP_breg31";
      goto LABEL_4;
    case 144:
      *a2 = "DW_OP_regx";
      goto LABEL_4;
    case 145:
      *a2 = "DW_OP_fbreg";
      goto LABEL_4;
    case 146:
      *a2 = "DW_OP_bregx";
      goto LABEL_4;
    case 147:
      *a2 = "DW_OP_piece";
      goto LABEL_4;
    case 148:
      *a2 = "DW_OP_deref_size";
      goto LABEL_4;
    case 149:
      *a2 = "DW_OP_xderef_size";
      goto LABEL_4;
    case 150:
      *a2 = "DW_OP_nop";
      goto LABEL_4;
    case 151:
      *a2 = "DW_OP_push_object_address";
      goto LABEL_4;
    case 152:
      *a2 = "DW_OP_call2";
      goto LABEL_4;
    case 153:
      *a2 = "DW_OP_call4";
      goto LABEL_4;
    case 154:
      *a2 = "DW_OP_call_ref";
      goto LABEL_4;
    case 155:
      *a2 = "DW_OP_form_tls_address";
      goto LABEL_4;
    case 156:
      *a2 = "DW_OP_call_frame_cfa";
      goto LABEL_4;
    case 157:
      *a2 = "DW_OP_bit_piece";
      goto LABEL_4;
    case 158:
      *a2 = "DW_OP_implicit_value";
      goto LABEL_4;
    case 159:
      *a2 = "DW_OP_stack_value";
      goto LABEL_4;
    case 160:
      *a2 = "DW_OP_implicit_pointer";
      goto LABEL_4;
    case 161:
      *a2 = "DW_OP_addrx";
      goto LABEL_4;
    case 162:
      *a2 = "DW_OP_constx";
      goto LABEL_4;
    case 163:
      *a2 = "DW_OP_entry_value";
      goto LABEL_4;
    case 164:
      *a2 = "DW_OP_const_type";
      goto LABEL_4;
    case 165:
      *a2 = "DW_OP_regval_type";
      goto LABEL_4;
    case 166:
      *a2 = "DW_OP_deref_type";
      goto LABEL_4;
    case 167:
      *a2 = "DW_OP_xderef_type";
      goto LABEL_4;
    case 168:
      *a2 = "DW_OP_convert";
      goto LABEL_4;
    case 169:
      *a2 = "DW_OP_reinterpret";
      goto LABEL_4;
    case 224:
      *a2 = "DW_OP_GNU_push_tls_address";
      goto LABEL_4;
    case 225:
      *a2 = "DW_OP_LLVM_form_aspace_address";
      goto LABEL_4;
    case 226:
      *a2 = "DW_OP_LLVM_push_lane";
      goto LABEL_4;
    case 227:
      *a2 = "DW_OP_LLVM_offset";
      goto LABEL_4;
    case 228:
      *a2 = "DW_OP_LLVM_offset_uconst";
      goto LABEL_4;
    case 229:
      *a2 = "DW_OP_LLVM_bit_offset";
      goto LABEL_4;
    case 230:
      *a2 = "DW_OP_LLVM_call_frame_entry_reg";
      goto LABEL_4;
    case 231:
      *a2 = "DW_OP_LLVM_undefined";
      goto LABEL_4;
    case 232:
      *a2 = "DW_OP_LLVM_aspace_bregx";
      goto LABEL_4;
    case 233:
      *a2 = "DW_OP_LLVM_aspace_implicit_pointer";
      goto LABEL_4;
    case 234:
      *a2 = "DW_OP_LLVM_piece_end";
      goto LABEL_4;
    case 235:
      *a2 = "DW_OP_LLVM_extend";
      goto LABEL_4;
    case 236:
      *a2 = "DW_OP_LLVM_select_bit_piece";
      goto LABEL_4;
    case 237:
      *a2 = "DW_OP_WASM_location";
      goto LABEL_4;
    case 238:
      *a2 = "DW_OP_WASM_location_int";
      goto LABEL_4;
    case 240:
      *a2 = "DW_OP_GNU_uninit";
      goto LABEL_4;
    case 241:
      *a2 = "DW_OP_GNU_encoded_addr";
      goto LABEL_4;
    case 242:
      *a2 = "DW_OP_GNU_implicit_pointer";
      goto LABEL_4;
    case 243:
      *a2 = "DW_OP_GNU_entry_value";
      goto LABEL_4;
    case 244:
      *a2 = "DW_OP_GNU_const_type";
      goto LABEL_4;
    case 245:
      *a2 = "DW_OP_GNU_regval_type";
      goto LABEL_4;
    case 246:
      *a2 = "DW_OP_GNU_deref_type";
      goto LABEL_4;
    case 247:
      *a2 = "DW_OP_GNU_convert";
      goto LABEL_4;
    case 248:
      *a2 = "DW_OP_PGI_omp_thread_num";
      goto LABEL_4;
    case 249:
      *a2 = "DW_OP_GNU_reinterpret";
      goto LABEL_4;
    case 250:
      *a2 = "DW_OP_GNU_parameter_ref";
      goto LABEL_4;
    case 251:
      *a2 = "DW_OP_GNU_addr_index";
      goto LABEL_4;
    case 252:
      *a2 = "DW_OP_GNU_const_index";
      goto LABEL_4;
    case 253:
      *a2 = "DW_OP_GNU_variable_value";
      goto LABEL_4;
    case 255:
      *a2 = "DW_OP_hi_user";
LABEL_4:
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

