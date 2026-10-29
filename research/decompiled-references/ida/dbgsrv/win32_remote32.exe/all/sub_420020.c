/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420020
// Address: 0x00420020

//----- (00420020) --------------------------------------------------------
int __thiscall sub_420020(unsigned int *this, const char **a2)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  const char *v5; // ecx
  const char *v6; // eax
  int v7; // eax

  while ( 1 )
  {
    v3 = *this;
    v4 = *(_DWORD *)(*this + 4);
    while ( !*(_BYTE *)(v4 + 13) )
    {
      v5 = MultiByteStr;
      if ( a2[1] )
        v5 = *a2;
      v6 = MultiByteStr;
      if ( *(_DWORD *)(v4 + 20) )
        v6 = *(const char **)(v4 + 16);
      v7 = strcmp(v6, v5);
      if ( v7 )
        v7 = v7 < 0 ? -1 : 1;
      if ( v7 >= 0 )
      {
        v3 = v4;
        v4 = *(_DWORD *)v4;
      }
      else
      {
        v4 = *(_DWORD *)(v4 + 8);
      }
    }
    if ( !*(_BYTE *)(v3 + 13) && !(unsigned __int8)sub_41D0A0((int)a2, v3 + 16) && v3 != *this )
      return *(_DWORD *)(v3 + 28);
    if ( !*(this + 2) && !*(this + 3) )
      break;
    this = (unsigned int *)sub_427F00(*(this + 2));
  }
  return -1;
}
