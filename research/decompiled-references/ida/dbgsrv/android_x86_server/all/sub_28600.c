/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28600
// Address: 0x00028600

//----- (00028600) --------------------------------------------------------
char __cdecl sub_28600(_DWORD *a1)
{
  _DWORD *v1; // esi
  char result; // al
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  int v5; // esi
  bool v6; // zf

  v1 = (_DWORD *)a1[142];
  result = 1;
  if ( a1 + 143 != v1 )
  {
    while ( (unsigned __int8)sub_28500(a1, v1[5]) )
    {
      v3 = (_DWORD *)v1[1];
      if ( v3 )
      {
        do
        {
          v4 = v3;
          v3 = (_DWORD *)*v3;
        }
        while ( v3 );
      }
      else
      {
        v4 = (_DWORD *)v1[2];
        if ( (_DWORD *)*v4 != v1 )
        {
          v5 = (int)(v1 + 2);
          do
          {
            v4 = *(_DWORD **)(*(_DWORD *)v5 + 8);
            v6 = *v4 == *(_DWORD *)v5;
            v5 = *(_DWORD *)v5 + 8;
          }
          while ( !v6 );
        }
      }
      v1 = v4;
      if ( a1 + 143 == v4 )
        return 1;
    }
    return 0;
  }
  return result;
}
