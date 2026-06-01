_BOOL8 __fastcall sub_51C4F0(_BYTE *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( (a1[70] & 0x3F) == 0xD )
    return (*(_BYTE *)(*(_QWORD *)a1 + 45LL) & 0x10) != 0;
  return result;
}

