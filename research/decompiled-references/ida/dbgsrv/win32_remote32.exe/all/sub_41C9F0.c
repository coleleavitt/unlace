/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C9F0
// Address: 0x0041C9F0

//----- (0041C9F0) --------------------------------------------------------
_DWORD *__thiscall sub_41C9F0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int **v5; // edx
  int *i; // ecx
  int v7; // ecx
  int j; // eax

  *this = 0;
  *(this + 1) = 0;
  v3 = sub_4627C2(0x38u);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 6) = 257;
  *this = v3;
  *(_DWORD *)(*this + 4) = sub_41C180(this, *(_DWORD *)(*a2 + 4), (int)v3);
  v4 = (_DWORD *)*this;
  *(this + 1) = a2[1];
  v5 = (int **)v4[1];
  if ( *((_BYTE *)v5 + 13) )
  {
    *v4 = v4;
    *(_DWORD *)(*this + 8) = *this;
  }
  else
  {
    for ( i = *v5; !*((_BYTE *)i + 13); i = (int *)*i )
      v5 = (int **)i;
    *v4 = v5;
    v7 = *(_DWORD *)(*this + 4);
    for ( j = *(_DWORD *)(v7 + 8); !*(_BYTE *)(j + 13); j = *(_DWORD *)(j + 8) )
      v7 = j;
    *(_DWORD *)(*this + 8) = v7;
  }
  *(this + 2) = 1;
  *(this + 3) = a2[3];
  return this;
}
