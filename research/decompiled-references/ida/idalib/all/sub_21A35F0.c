__int64 __fastcall sub_21A35F0(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v6; // rcx
  char *v7; // r12
  __int64 result; // rax
  size_t v9; // rbx
  __int64 v10; // rdi

  v3 = (unsigned int)a2;
  v4 = HIDWORD(a2);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 80 * v3 + 48);
  switch ( *(_BYTE *)(v6 + 24 * v4) )
  {
    case 0:
      v7 = "R_WASM_FUNCTION_INDEX_LEB";
      result = j__strlen("R_WASM_FUNCTION_INDEX_LEB");
      v9 = result;
      break;
    case 1:
      v7 = "R_WASM_TABLE_INDEX_SLEB";
      result = j__strlen("R_WASM_TABLE_INDEX_SLEB");
      v9 = result;
      break;
    case 2:
      v7 = "R_WASM_TABLE_INDEX_I32";
      result = j__strlen("R_WASM_TABLE_INDEX_I32");
      v9 = result;
      break;
    case 3:
      v7 = "R_WASM_MEMORY_ADDR_LEB";
      result = j__strlen("R_WASM_MEMORY_ADDR_LEB");
      v9 = result;
      break;
    case 4:
      v7 = "R_WASM_MEMORY_ADDR_SLEB";
      result = j__strlen("R_WASM_MEMORY_ADDR_SLEB");
      v9 = result;
      break;
    case 5:
      v7 = "R_WASM_MEMORY_ADDR_I32";
      result = j__strlen("R_WASM_MEMORY_ADDR_I32");
      v9 = result;
      break;
    case 6:
      v7 = "R_WASM_TYPE_INDEX_LEB";
      result = j__strlen("R_WASM_TYPE_INDEX_LEB");
      v9 = result;
      break;
    case 7:
      v7 = "R_WASM_GLOBAL_INDEX_LEB";
      result = j__strlen("R_WASM_GLOBAL_INDEX_LEB");
      v9 = result;
      break;
    case 8:
      v7 = "R_WASM_FUNCTION_OFFSET_I32";
      result = j__strlen("R_WASM_FUNCTION_OFFSET_I32");
      v9 = result;
      break;
    case 9:
      v7 = "R_WASM_SECTION_OFFSET_I32";
      result = j__strlen("R_WASM_SECTION_OFFSET_I32");
      v9 = result;
      break;
    case 0xA:
      v7 = "R_WASM_TAG_INDEX_LEB";
      result = j__strlen("R_WASM_TAG_INDEX_LEB");
      v9 = result;
      break;
    case 0xB:
      v7 = "R_WASM_MEMORY_ADDR_REL_SLEB";
      result = j__strlen("R_WASM_MEMORY_ADDR_REL_SLEB");
      v9 = result;
      break;
    case 0xC:
      v7 = "R_WASM_TABLE_INDEX_REL_SLEB";
      result = j__strlen("R_WASM_TABLE_INDEX_REL_SLEB");
      v9 = result;
      break;
    case 0xD:
      v7 = "R_WASM_GLOBAL_INDEX_I32";
      result = j__strlen("R_WASM_GLOBAL_INDEX_I32");
      v9 = result;
      break;
    case 0xE:
      v7 = "R_WASM_MEMORY_ADDR_LEB64";
      result = j__strlen("R_WASM_MEMORY_ADDR_LEB64");
      v9 = result;
      break;
    case 0xF:
      v7 = "R_WASM_MEMORY_ADDR_SLEB64";
      result = j__strlen("R_WASM_MEMORY_ADDR_SLEB64");
      v9 = result;
      break;
    case 0x10:
      v7 = "R_WASM_MEMORY_ADDR_I64";
      result = j__strlen("R_WASM_MEMORY_ADDR_I64");
      v9 = result;
      break;
    case 0x11:
      v7 = "R_WASM_MEMORY_ADDR_REL_SLEB64";
      result = j__strlen("R_WASM_MEMORY_ADDR_REL_SLEB64");
      v9 = result;
      break;
    case 0x12:
      v7 = "R_WASM_TABLE_INDEX_SLEB64";
      result = j__strlen("R_WASM_TABLE_INDEX_SLEB64");
      v9 = result;
      break;
    case 0x13:
      v7 = "R_WASM_TABLE_INDEX_I64";
      result = j__strlen("R_WASM_TABLE_INDEX_I64");
      v9 = result;
      break;
    case 0x14:
      v7 = "R_WASM_TABLE_NUMBER_LEB";
      result = j__strlen("R_WASM_TABLE_NUMBER_LEB");
      v9 = result;
      break;
    case 0x15:
      v7 = "R_WASM_MEMORY_ADDR_TLS_SLEB";
      result = j__strlen("R_WASM_MEMORY_ADDR_TLS_SLEB");
      v9 = result;
      break;
    case 0x16:
      v7 = "R_WASM_FUNCTION_OFFSET_I64";
      result = j__strlen("R_WASM_FUNCTION_OFFSET_I64");
      v9 = result;
      break;
    case 0x17:
      v7 = "R_WASM_MEMORY_ADDR_LOCREL_I32";
      result = j__strlen("R_WASM_MEMORY_ADDR_LOCREL_I32");
      v9 = result;
      break;
    case 0x18:
      v7 = "R_WASM_TABLE_INDEX_REL_SLEB64";
      result = j__strlen("R_WASM_TABLE_INDEX_REL_SLEB64");
      v9 = result;
      break;
    case 0x19:
      v7 = "R_WASM_MEMORY_ADDR_TLS_SLEB64";
      result = j__strlen("R_WASM_MEMORY_ADDR_TLS_SLEB64");
      v9 = result;
      break;
    case 0x1A:
      v7 = "R_WASM_FUNCTION_INDEX_I32";
      result = j__strlen("R_WASM_FUNCTION_INDEX_I32");
      v9 = result;
      break;
    default:
      result = v6 + 24 * v4;
      v9 = 7;
      v7 = "Unknown";
      break;
  }
  v10 = a3[1];
  if ( v9 + v10 > a3[2] )
  {
    result = sub_2236E10(a3, a3 + 3, v9 + v10, 1);
    v10 = a3[1];
  }
  if ( v9 )
  {
    result = (__int64)memcpy((void *)(*a3 + v10), v7, v9);
    v10 = a3[1];
  }
  a3[1] = v10 + v9;
  return result;
}
