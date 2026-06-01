/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4718A2
// Address: 0x004718A2

//----- (004718A2) --------------------------------------------------------
char __thiscall sub_4718A2(_DWORD *this, char a2)
{
  int v2; // eax
  unsigned __int64 v3; // kr00_8
  int v4; // eax

  v2 = *(this + 2);
  v3 = *((_QWORD *)this + 2) - 1LL;
  *(this + 4) = v3;
  v4 = *(this + 3) | v2;
  *(this + 5) = HIDWORD(v3);
  if ( !v4 || v3 <= *((_QWORD *)this + 1) )
  {
    LOBYTE(v4) = a2;
    if ( a2 && a2 != -1 )
      LOBYTE(v4) = sub_4718E9((_DWORD *)*this, a2);
  }
  return v4;
}
