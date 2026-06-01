char *__fastcall sub_B0B8C0(__int64 a1)
{
  int v1; // eax
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_FA77D0(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v1 )
  {
    case 0:
    case 1:
      result = "assert_capability";
      break;
    case 2:
    case 3:
      result = "assert_shared_capability";
      break;
    case 4:
      result = "assert_exclusive_lock";
      break;
    case 5:
      result = "assert_shared_lock";
      break;
  }
  return result;
}
