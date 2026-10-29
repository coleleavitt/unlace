char **__fastcall sub_B3E620(__int64 a1, _BYTE *a2, size_t a3)
{
  char **result; // rax

  result = sub_B3BCA0(a2, a3);
  if ( !result )
    return (char **)sub_B3E570(a1, a2, a3);
  return result;
}
