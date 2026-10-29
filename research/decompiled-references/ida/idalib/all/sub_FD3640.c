__int64 __fastcall sub_FD3640(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned __int16 *v3; // rax

  v2 = 0;
  if ( a2 <= 0x233B )
  {
    v3 = sub_FD2C00(a2);
    if ( v3 )
      LOBYTE(v2) = ((*((_BYTE *)v3 + 2) >> 3) & 7) == 1;
  }
  return v2;
}
