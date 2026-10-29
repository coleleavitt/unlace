/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408BC0
// Address: 0x00408BC0

//----- (00408BC0) --------------------------------------------------------
_DWORD *__thiscall sub_408BC0(int *this, _DWORD *a2, int *a3)
{
  int v3; // ecx
  int *v4; // eax
  int v5; // esi
  int v6; // ecx

  v3 = *this;
  v4 = *(int **)(v3 + 4);
  *a2 = v4;
  a2[1] = 0;
  a2[2] = v3;
  if ( !*((_BYTE *)v4 + 13) )
  {
    v5 = *a3;
    do
    {
      *a2 = v4;
      if ( v4[4] >= v5 )
      {
        a2[2] = v4;
        v6 = 1;
        v4 = (int *)*v4;
      }
      else
      {
        v4 = (int *)v4[2];
        v6 = 0;
      }
      a2[1] = v6;
    }
    while ( !*((_BYTE *)v4 + 13) );
  }
  return a2;
}
