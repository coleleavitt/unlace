char *__fastcall sub_AE44B0(__int64 a1)
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
      result = "acquire_capability";
      break;
    case 2:
    case 3:
      result = "acquire_shared_capability";
      break;
    case 4:
      result = "exclusive_lock_function";
      break;
    case 5:
      result = "shared_lock_function";
      break;
  }
  return result;
}

