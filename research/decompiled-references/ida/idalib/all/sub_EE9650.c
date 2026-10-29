char *__fastcall sub_EE9650(_WORD *a1, int a2)
{
  char *result; // rax

  *a1 = a2 & 0x1FF | *a1 & 0xFE00;
  result = (char *)&unk_2CD7484;
  if ( unk_2CD7484 )
  {
    if ( byte_2CD7485 )
      result = (char *)&unk_2CD74A0 + 16 * a2;
    else
      result = sub_EE7CB0(a2);
    ++*((_DWORD *)result + 2);
  }
  return result;
}
