char *__fastcall sub_20F4520(int a1)
{
  char *v1; // rcx

  switch ( a1 )
  {
    case 0:
      j__strlen("invalid");
      v1 = "invalid";
      break;
    case 1:
      j__strlen("target");
      v1 = "target";
      break;
    case 2:
      j__strlen("teams");
      v1 = "teams";
      break;
    case 3:
      j__strlen("parallel");
      v1 = "parallel";
      break;
    case 4:
      j__strlen("for");
      v1 = (char *)"for";
      break;
    case 5:
      j__strlen("simd");
      v1 = (char *)"simd";
      break;
    case 6:
    case 8:
      j__strlen("kind");
      v1 = "kind";
      break;
    case 7:
    case 10:
      j__strlen("arch");
      v1 = "arch";
      break;
    case 9:
      j__strlen("device_num");
      v1 = "device_num";
      break;
    case 11:
      j__strlen("vendor");
      v1 = "vendor";
      break;
    case 12:
      j__strlen("extension");
      v1 = (char *)"extension";
      break;
    case 13:
      j__strlen("condition");
      v1 = (char *)"condition";
      break;
    case 14:
      j__strlen("dispatch");
      v1 = "dispatch";
      break;
    case 15:
    case 16:
      j__strlen("isa");
      v1 = "isa";
      break;
    case 17:
      j__strlen("unified_address");
      v1 = "unified_address";
      break;
    case 18:
      j__strlen("unified_shared_memory");
      v1 = "unified_shared_memory";
      break;
    case 19:
      j__strlen("reverse_offload");
      v1 = "reverse_offload";
      break;
    case 20:
      j__strlen("dynamic_allocators");
      v1 = "dynamic_allocators";
      break;
    case 21:
      j__strlen("atomic_default_mem_order");
      v1 = "atomic_default_mem_order";
      break;
  }
  return v1;
}
