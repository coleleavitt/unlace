char **__fastcall sub_B1A8E0(__int64 a1, _BYTE *a2, size_t a3)
{
  char **result; // rax

  result = sub_B17F60(a2, a3);
  if ( !result )
    return (char **)sub_B1A830(a1, a2, a3);
  return result;
}

