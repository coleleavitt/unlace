char *__fastcall sub_AF4B00(__int64 a1)
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
      result = "requires_capability";
      break;
    case 2:
    case 3:
      result = "exclusive_locks_required";
      break;
    case 4:
    case 5:
      result = "requires_shared_capability";
      break;
    case 6:
    case 7:
      result = "shared_locks_required";
      break;
  }
  return result;
}

