/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D830
// Address: 0x0043D830

//----- (0043D830) --------------------------------------------------------
int __thiscall sub_43D830(_DWORD *this, LPVOID *a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi

  v4 = a4;
  a2[1] = nullptr;
  if ( (*(this + 84) & 0x10) != 0 )
  {
    LOBYTE(a4) = 0;
    if ( v4 )
      sub_402900((int)a2, v4, &a4);
    return v4;
  }
  else
  {
    if ( v4 )
    {
      if ( v4 > (unsigned int)a2[2] )
        *a2 = sub_453B00((int)a2, *a2, v4, 1u);
      sub_464890((__m128i *)((char *)*a2 + (_DWORD)a2[1]), 0, v4 - (_DWORD)a2[1]);
      a2[1] = (LPVOID)v4;
    }
    if ( (*(int (__stdcall **)(_DWORD *, int, LPVOID, unsigned int, _DWORD))(*this + 140))(this, a3, *a2, v4, 0) <= 0 )
      return -1;
    return v4;
  }
}
