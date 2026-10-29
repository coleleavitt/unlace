/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DAB4
// Address: 0x0006DAB4

//----- (0006DAB4) --------------------------------------------------------
_DWORD *__fastcall sub_6DAB4(_DWORD *result, int a2)
{
  const char *v2; // r0

  result[11] = a2;
  if ( (byte_E0546 & 0x10) != 0 )
  {
    v2 = (const char *)(*(int (__fastcall **)(_DWORD *))(*result + 44))(result);
    return (_DWORD *)sub_6DAE0((int)"%s", v2);
  }
  return result;
}
// E0546: using guessed type char byte_E0546;
