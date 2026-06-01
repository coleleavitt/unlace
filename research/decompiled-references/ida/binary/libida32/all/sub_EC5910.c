char *__fastcall sub_EC5910(_WORD *a1, int a2)
{
  char *result; // rax

  *a1 = a2 & 0x1FF | *a1 & 0xFE00;
  result = (char *)&unk_2CAD564;
  if ( unk_2CAD564 )
  {
    if ( byte_2CAD565 )
      result = (char *)&unk_2CAD580 + 16 * a2;
    else
      result = sub_EC3F70(a2);
    ++*((_DWORD *)result + 2);
  }
  return result;
}

