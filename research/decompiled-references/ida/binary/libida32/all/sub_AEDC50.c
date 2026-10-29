char *__fastcall sub_AEDC50(__int64 a1)
{
  int v1; // eax
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v1 )
  {
    case 0:
    case 1:
    case 2:
      result = "device_kernel";
      break;
    case 3:
    case 4:
    case 5:
      result = "sycl_kernel";
      break;
    case 6:
    case 7:
    case 8:
      result = "nvptx_kernel";
      break;
    case 9:
    case 10:
    case 11:
      result = "amdgpu_kernel";
      break;
    case 12:
      result = "__kernel";
      break;
    case 13:
      result = "kernel";
      break;
  }
  return result;
}

