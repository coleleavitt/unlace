/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412440
// Address: 0x00412440

//----- (00412440) --------------------------------------------------------
const CHAR *__stdcall sub_412440(_DWORD **a1, unsigned int *a2)
{
  _DWORD **v2; // edi
  _DWORD *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // edx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // edx

  v2 = (_DWORD **)*a1;
  v3 = (_DWORD *)**a1;
  a1 = (_DWORD **)v3;
  if ( v3 == v2 )
    return nullptr;
  v4 = *a2;
  v5 = a2[1];
  while ( 1 )
  {
    v6 = v3[6];
    v7 = v4;
    v8 = v6 + v3[7];
    if ( v6 >= v4 )
      v7 = v3[6];
    v9 = v5;
    if ( v8 <= v5 )
      v9 = v8;
    if ( v9 >= v7 && v9 > v7 )
      break;
    sub_40B5E0((int *)&a1);
    v3 = a1;
    if ( a1 == v2 )
      return nullptr;
  }
  if ( v3[9] )
    return (const CHAR *)v3[8];
  else
    return MultiByteStr;
}
