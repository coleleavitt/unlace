/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8082BD0
// Address: 0x08082BD0

//----- (08082BD0) --------------------------------------------------------
_BYTE *__cdecl sub_8082BD0(int a1, int a2, _BYTE *a3, char a4)
{
  _BYTE *v4; // edx
  _BYTE *v5; // ebp
  int v6; // eax
  int v8; // eax
  int v9; // [esp+0h] [ebp-20h]

  v4 = a3;
  v9 = a4;
  while ( 1 )
  {
    v5 = v4;
    v6 = sub_80C7170(&a3);
    if ( v6 == -1 )
      v6 = (char)*a3++;
    if ( !v6 )
      break;
    v5 = a3;
    v4 = a3;
    if ( *(char *)(a1 + 104) == v6 )
    {
      v8 = sub_80C7170(&a3);
      if ( v8 == -1 )
        v8 = (char)*a3++;
      if ( !v8 )
        break;
      v4 = a3;
    }
    else if ( v9 == v6 )
    {
      sub_8082980(a1, a2, a3, *(_DWORD *)(a1 + 68));
      return a3;
    }
  }
  sub_8082980(a1, a2, v5, *(_DWORD *)(a1 + 96));
  return nullptr;
}
