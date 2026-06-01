char *__fastcall dwarf_errmsg_by_number(unsigned __int64 a1)
{
  char *result; // rax

  result = "Dwarf_Error value out of range";
  if ( a1 <= 0x1FD )
    return &aDwDleNoError0[111 * a1];
  return result;
}

