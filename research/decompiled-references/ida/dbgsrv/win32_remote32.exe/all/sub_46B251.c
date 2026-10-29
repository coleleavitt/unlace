/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B251
// Address: 0x0046B251

//----- (0046B251) --------------------------------------------------------
char __thiscall sub_46B251(int *this, char a2, _DWORD *a3)
{
  int v4; // ecx

  v4 = *this;
  if ( *(_DWORD *)(v4 + 8) == *(_DWORD *)(v4 + 4) )
  {
    if ( *(_BYTE *)(v4 + 12) )
      ++*a3;
    else
      *a3 = -1;
    return *(_BYTE *)(*this + 12);
  }
  else
  {
    ++*a3;
    ++*(_DWORD *)(*this + 8);
    *(_BYTE *)(*(_DWORD *)*this)++ = a2;
    return 1;
  }
}
