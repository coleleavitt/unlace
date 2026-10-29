/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8061F80
// Address: 0x08061F80

//----- (08061F80) --------------------------------------------------------
_DWORD *__cdecl sub_8061F80(int a1, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  int v4; // edx
  int v5; // ecx

  result = *(_DWORD **)(a1 + 664);
  if ( !result )
    goto LABEL_8;
  v3 = (_DWORD *)(a1 + 660);
  do
  {
    while ( 1 )
    {
      v4 = result[2];
      v5 = result[3];
      if ( a2 <= result[4] )
        break;
      result = (_DWORD *)result[3];
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = result;
    result = (_DWORD *)result[2];
  }
  while ( v4 );
LABEL_6:
  if ( (_DWORD *)(a1 + 660) == v3 || a2 < v3[4] )
  {
LABEL_8:
    if ( *(_DWORD *)(a1 + 724) != a2 )
      sub_8061880(a1, a2, 0);
    return (_DWORD *)sub_80608E0(a1, a2, -1);
  }
  return result;
}
