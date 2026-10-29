/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B9C0
// Address: 0x0040B9C0

//----- (0040B9C0) --------------------------------------------------------
int __thiscall sub_40B9C0(int this, unsigned int a2, int a3)
{
  int *v4; // ecx
  unsigned int v5; // edi
  _DWORD *v6; // esi
  LPVOID v7; // eax
  int result; // eax
  _DWORD *v9; // ecx

  v4 = *(int **)(this + 4);
  if ( ((int)v4 - *(_DWORD *)this) >> 2 >= a2 )
    return sub_408F20(*(int **)this, v4, &a3);
  if ( a2 > 0x3FFFFFFF )
    goto LABEL_17;
  v5 = 4 * a2;
  if ( 4 * a2 )
  {
    if ( v5 < 0x1000 )
    {
      v6 = sub_4627C2(v5);
      goto LABEL_10;
    }
    if ( v5 + 35 >= v5 )
    {
      v7 = sub_4627C2(v5 + 35);
      if ( v7 )
      {
        v6 = (_DWORD *)(((unsigned int)v7 + 35) & 0xFFFFFFE0);
        *(v6 - 1) = v7;
        goto LABEL_10;
      }
      sub_467F04(this, v5);
    }
LABEL_17:
    sub_403E00();
  }
  v6 = nullptr;
LABEL_10:
  result = (*(_DWORD *)(this + 8) - *(_DWORD *)this) >> 2;
  if ( result )
    result = sub_40FB70(this, v5, *(void **)this, (*(_DWORD *)(this + 8) - *(_DWORD *)this) >> 2);
  v9 = &v6[v5 / 4];
  *(_DWORD *)this = v6;
  *(_DWORD *)(this + 4) = &v6[v5 / 4];
  for ( *(_DWORD *)(this + 8) = &v6[v5 / 4]; v6 != v9; ++v6 )
  {
    result = a3;
    *v6 = a3;
  }
  return result;
}
