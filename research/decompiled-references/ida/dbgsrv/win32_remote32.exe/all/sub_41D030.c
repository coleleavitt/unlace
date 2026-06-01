/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D030
// Address: 0x0041D030

//----- (0041D030) --------------------------------------------------------
int **__thiscall sub_41D030(int **this)
{
  int *v2; // edx
  int *v4; // ecx
  int *v5; // eax
  int *v6; // ecx
  int *v7; // edi
  int *i; // eax

  v2 = *this;
  if ( *((_BYTE *)*this + 13) )
  {
    *this = (int *)v2[2];
    return this;
  }
  v4 = (int *)*v2;
  if ( *(_BYTE *)(*v2 + 13) )
  {
    v5 = (int *)v2[1];
    if ( !*((_BYTE *)v5 + 13) )
    {
      v6 = v2;
      do
      {
        v7 = v5;
        v2 = v6;
        if ( v6 != (int *)*v5 )
          break;
        *this = v5;
        v6 = v5;
        v5 = (int *)v5[1];
        v2 = v7;
      }
      while ( !*((_BYTE *)v5 + 13) );
    }
    if ( !*((_BYTE *)v2 + 13) )
    {
      *this = v5;
      return this;
    }
  }
  else
  {
    for ( i = (int *)v4[2]; !*((_BYTE *)i + 13); i = (int *)i[2] )
      v4 = i;
    *this = v4;
  }
  return this;
}
