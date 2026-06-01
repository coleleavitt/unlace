_BYTE *__fastcall sub_8399E0(_BYTE *a1, unsigned int a2)
{
  _BYTE *result; // rax
  unsigned int v3; // ecx
  unsigned int v4; // r12d
  unsigned int v5; // ebp
  _BYTE *v6; // rdx

  result = a1;
  if ( a2 )
  {
    v3 = a2 / 0xA;
    if ( a2 > 9 )
    {
      v4 = v3 / 0xA;
      v5 = v3 % 0xA;
      if ( a2 > 0x63 )
      {
        v6 = (_BYTE *)sub_8399E0(a1, v4 / 0xA);
        result = v6 + 1;
        *v6 = v4 % 0xA + 48;
      }
      *result++ = v5 + 48;
    }
    *result++ = a2 % 0xA + 48;
  }
  return result;
}
