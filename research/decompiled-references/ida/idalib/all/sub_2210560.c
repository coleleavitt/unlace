char __fastcall sub_2210560(unsigned __int8 a1)
{
  __int64 v1; // rax

  LOBYTE(v1) = a1 == 9 || a1 == 32;
  if ( !(_BYTE)v1 && a1 <= 0xDu )
    return (0x2401uLL >> a1) & 1;
  return v1;
}
