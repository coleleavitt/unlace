_QWORD *__fastcall dwarf_tied_make_entry(__int64 *a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx

  result = calloc(1u, 0x10u);
  if ( result )
  {
    v3 = *a1;
    result[1] = a2;
    *result = v3;
  }
  return result;
}

