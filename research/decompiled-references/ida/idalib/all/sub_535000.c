_BOOL8 __fastcall sub_535000(_BYTE *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( (a1[70] & 0x3F) == 0xD )
    return (*(_BYTE *)(*(_QWORD *)a1 + 45LL) & 8) != 0;
  return result;
}
