/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B5E0
// Address: 0x0040B5E0

//----- (0040B5E0) --------------------------------------------------------
int *__thiscall sub_40B5E0(int *this)
{
  int v2; // edx
  int **v3; // edi
  int i; // eax
  int *j; // ecx

  v2 = *this;
  v3 = *(int ***)(*this + 8);
  if ( *((_BYTE *)v3 + 13) )
  {
    for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
    {
      if ( v2 != *(_DWORD *)(i + 8) )
        break;
      *this = i;
      v2 = i;
    }
    *this = i;
    return this;
  }
  else
  {
    for ( j = *v3; !*((_BYTE *)j + 13); j = (int *)*j )
      v3 = (int **)j;
    *this = (int)v3;
    return this;
  }
}
