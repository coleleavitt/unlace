/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470F48
// Address: 0x00470F48

//----- (00470F48) --------------------------------------------------------
char __thiscall sub_470F48(int this)
{
  int v1; // eax
  unsigned __int64 v2; // kr00_8
  int v3; // eax
  int v4; // eax

  v1 = *(_DWORD *)(this + 8);
  v2 = *(_QWORD *)(this + 16) + 1LL;
  *(_DWORD *)(this + 16) = v2;
  v3 = *(_DWORD *)(this + 12) | v1;
  *(_DWORD *)(this + 20) = HIDWORD(v2);
  if ( v3 && v2 > *(_QWORD *)(this + 8) || (v4 = sub_470F7F(*(unsigned __int8 ***)this), v4 == -1) )
    LOBYTE(v4) = 0;
  return v4;
}
