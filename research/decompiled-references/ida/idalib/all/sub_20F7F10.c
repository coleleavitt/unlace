char *__fastcall sub_20F7F10(int a1, __int64 a2)
{
  char *v3; // rsi

  if ( (unsigned int)(a1 - 73) <= 1 )
    return (char *)a2;
  switch ( a1 )
  {
    case 0:
      j__strlen("invalid");
      v3 = "invalid";
      break;
    case 1:
      j__strlen("target");
      v3 = "target";
      break;
    case 2:
      j__strlen("teams");
      v3 = "teams";
      break;
    case 3:
      j__strlen("parallel");
      v3 = "parallel";
      break;
    case 4:
      j__strlen("for");
      v3 = (char *)"for";
      break;
    case 5:
      j__strlen("simd");
      v3 = (char *)"simd";
      break;
    case 6:
    case 27:
      j__strlen("host");
      v3 = "host";
      break;
    case 7:
    case 28:
      j__strlen("nohost");
      v3 = "nohost";
      break;
    case 8:
    case 29:
      j__strlen("cpu");
      v3 = "cpu";
      break;
    case 9:
    case 30:
      j__strlen("gpu");
      v3 = (char *)"gpu";
      break;
    case 10:
    case 31:
      j__strlen("fpga");
      v3 = "fpga";
      break;
    case 11:
    case 32:
      j__strlen("any");
      v3 = (char *)"any";
      break;
    case 12:
    case 34:
    case 50:
      j__strlen("arm");
      v3 = (char *)"arm";
      break;
    case 13:
    case 35:
      j__strlen("armeb");
      v3 = "armeb";
      break;
    case 14:
    case 36:
      j__strlen("aarch64");
      v3 = (char *)"aarch64";
      break;
    case 15:
    case 37:
      j__strlen("aarch64_be");
      v3 = "aarch64_be";
      break;
    case 16:
    case 38:
      j__strlen("aarch64_32");
      v3 = "aarch64_32";
      break;
    case 17:
    case 39:
      j__strlen("ppc");
      v3 = (char *)"ppc";
      break;
    case 18:
    case 40:
      j__strlen("ppcle");
      v3 = "ppcle";
      break;
    case 19:
    case 41:
      j__strlen("ppc64");
      v3 = "ppc64";
      break;
    case 20:
    case 42:
      j__strlen("ppc64le");
      v3 = "ppc64le";
      break;
    case 21:
    case 43:
      j__strlen("x86");
      v3 = "x86";
      break;
    case 22:
    case 44:
      j__strlen("x86_64");
      v3 = "x86_64";
      break;
    case 23:
    case 45:
      j__strlen("amdgcn");
      v3 = "amdgcn";
      break;
    case 24:
    case 46:
      j__strlen("nvptx");
      v3 = "nvptx";
      break;
    case 25:
    case 47:
      j__strlen("nvptx64");
      v3 = "nvptx64";
      break;
    case 26:
    case 48:
      j__strlen("spirv64");
      v3 = "spirv64";
      break;
    case 33:
      j__strlen("number");
      v3 = "number";
      break;
    case 49:
      j__strlen("amd");
      v3 = "amd";
      break;
    case 51:
      j__strlen("bsc");
      v3 = "bsc";
      break;
    case 52:
      j__strlen("cray");
      v3 = "cray";
      break;
    case 53:
      j__strlen("fujitsu");
      v3 = "fujitsu";
      break;
    case 54:
      j__strlen("gnu");
      v3 = "gnu";
      break;
    case 55:
      j__strlen("ibm");
      v3 = "ibm";
      break;
    case 56:
      j__strlen("intel");
      v3 = "intel";
      break;
    case 57:
      j__strlen("llvm");
      v3 = "llvm";
      break;
    case 58:
      j__strlen("nec");
      v3 = "nec";
      break;
    case 59:
      j__strlen("nvidia");
      v3 = "nvidia";
      break;
    case 60:
      j__strlen("pgi");
      v3 = "pgi";
      break;
    case 61:
      j__strlen("ti");
      v3 = "ti";
      break;
    case 62:
    case 71:
      j__strlen("unknown");
      v3 = "unknown";
      break;
    case 63:
      j__strlen("match_all");
      v3 = "match_all";
      break;
    case 64:
      j__strlen("match_any");
      v3 = "match_any";
      break;
    case 65:
      j__strlen("match_none");
      v3 = "match_none";
      break;
    case 66:
      j__strlen("disable_implicit_base");
      v3 = "disable_implicit_base";
      break;
    case 67:
      j__strlen("allow_templates");
      v3 = "allow_templates";
      break;
    case 68:
      j__strlen("bind_to_declaration");
      v3 = "bind_to_declaration";
      break;
    case 69:
      j__strlen("true");
      v3 = "true";
      break;
    case 70:
      j__strlen("false");
      v3 = "false";
      break;
    case 72:
      j__strlen("dispatch");
      v3 = "dispatch";
      break;
    case 73:
    case 74:
    case 79:
      j__strlen("atomic_default_mem_order");
      v3 = "atomic_default_mem_order";
      break;
    case 75:
      j__strlen("unified_address");
      v3 = "unified_address";
      break;
    case 76:
      j__strlen("unified_shared_memory");
      v3 = "unified_shared_memory";
      break;
    case 77:
      j__strlen("reverse_offload");
      v3 = "reverse_offload";
      break;
    case 78:
      j__strlen("dynamic_allocators");
      v3 = "dynamic_allocators";
      break;
  }
  return v3;
}
