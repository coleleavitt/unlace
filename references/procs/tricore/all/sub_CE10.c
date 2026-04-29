bool __fastcall sub_CE10(__int64 a1)
{
  unsigned __int16 v1; // dx

  v1 = *(_WORD *)(a1 + 24);
  if ( v1 > 0x4Au )
  {
    if ( v1 > 0xCFu )
      return v1 == 251;
    else
      return v1 > 0xCCu || v1 == 76;
  }
  else if ( v1 <= 0x48u )
  {
    return (unsigned __int16)(v1 - 30) <= 2u;
  }
  else
  {
    return *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26) != *(_QWORD *)(a1 + 56);
  }
}
