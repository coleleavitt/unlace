_BOOL8 __fastcall sub_FB9880(unsigned __int8 *a1, size_t a2, const void *a3, size_t a4)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a2 >= a4 && (a2 == a4 || (byte_23ED5E0[2 * a1[a4]] & 0x40) == 0) )
    return !a4 || memcmp(a1, a3, a4) == 0;
  return result;
}

