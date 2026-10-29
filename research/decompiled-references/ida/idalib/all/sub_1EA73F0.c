__int64 __fastcall sub_1EA73F0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // dx

  v1 = 0;
  v2 = (*(_WORD *)(a1 + 18) >> 3) & 0x1FF;
  if ( v2 <= 0x1FCu )
    v1 = (unsigned __int16)aKlmnopqrstuvwx[v2];
  return v1 << 32;
}
