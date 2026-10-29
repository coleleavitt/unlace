/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408B50
// Address: 0x00408B50

//----- (00408B50) --------------------------------------------------------
int **__thiscall sub_408B50(int **this, int **a2, _DWORD *a3, int a4)
{
  int v4; // eax
  int v5; // edx
  int *v6; // ecx
  int **v7; // edx
  int *v8; // eax
  int *v10; // edx
  int *v11; // ecx

  v4 = (int)*(this + 3);
  v5 = a4 & (unsigned int)*(this + 6);
  v6 = *(this + 1);
  v7 = (int **)(v4 + 8 * v5);
  v8 = v7[1];
  if ( v8 == v6 )
  {
    *a2 = v6;
    a2[1] = nullptr;
    return a2;
  }
  else
  {
    v10 = *v7;
    if ( *a3 == v8[2] )
    {
LABEL_6:
      v11 = (int *)*v8;
      a2[1] = v8;
      *a2 = v11;
      return a2;
    }
    else
    {
      while ( v8 != v10 )
      {
        v8 = (int *)v8[1];
        if ( *a3 == v8[2] )
          goto LABEL_6;
      }
      *a2 = v8;
      a2[1] = nullptr;
      return a2;
    }
  }
}
