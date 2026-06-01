/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C640
// Address: 0x0041C640

//----- (0041C640) --------------------------------------------------------
_DWORD *__thiscall sub_41C640(int *this, _DWORD *a2, int a3)
{
  int v3; // eax
  int *v4; // esi
  bool v5; // zf
  int v6; // ebp
  const char *v7; // ecx
  const char *v8; // eax
  int v9; // eax
  int v10; // eax

  v3 = *this;
  v4 = *(int **)(*this + 4);
  *a2 = v4;
  v5 = *((_BYTE *)v4 + 13) == 0;
  a2[1] = 0;
  a2[2] = v3;
  if ( v5 )
  {
    v6 = *(_DWORD *)(a3 + 4);
    do
    {
      *a2 = v4;
      v7 = MultiByteStr;
      if ( v6 )
        v7 = *(const char **)a3;
      v8 = MultiByteStr;
      if ( v4[5] )
        v8 = (const char *)v4[4];
      v9 = strcmp(v8, v7);
      if ( v9 )
        v9 = v9 < 0 ? -1 : 1;
      if ( v9 >= 0 )
      {
        a2[2] = v4;
        v10 = 1;
        v4 = (int *)*v4;
      }
      else
      {
        v4 = (int *)v4[2];
        v10 = 0;
      }
      a2[1] = v10;
    }
    while ( !*((_BYTE *)v4 + 13) );
  }
  return a2;
}
