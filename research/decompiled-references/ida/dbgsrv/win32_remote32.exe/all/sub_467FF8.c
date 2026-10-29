/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467FF8
// Address: 0x00467FF8

//----- (00467FF8) --------------------------------------------------------
int __thiscall sub_467FF8(int this, _DWORD *a2)
{
  _DWORD *v3; // ebx
  int *v4; // eax
  int v5; // eax
  int v6; // eax

  *(_BYTE *)(this + 12) = 0;
  v3 = (_DWORD *)(this + 4);
  if ( a2 )
  {
    *v3 = *a2;
    v4 = (int *)a2[1];
LABEL_5:
    *(_DWORD *)(this + 8) = v4;
    return this;
  }
  if ( !dword_4B7A48 )
  {
    *v3 = off_4B60E0;
    v4 = (int *)off_4B60E4;
    goto LABEL_5;
  }
  v5 = sub_4782C6();
  *(_DWORD *)this = v5;
  *v3 = *(_DWORD *)(v5 + 76);
  *(_DWORD *)(this + 8) = *(_DWORD *)(v5 + 72);
  sub_4785BA((int)v3, v5, (int *)(this + 4));
  sub_4785E7((int)v3, *(_DWORD *)this, (int **)(this + 8));
  v6 = *(_DWORD *)(*(_DWORD *)this + 848);
  if ( (v6 & 2) == 0 )
  {
    *(_DWORD *)(*(_DWORD *)this + 848) = v6 | 2;
    *(_BYTE *)(this + 12) = 1;
  }
  return this;
}
// 4B60E0: using guessed type wchar_t *off_4B60E0;
// 4B60E4: using guessed type int (*off_4B60E4)[22];
// 4B7A48: using guessed type int dword_4B7A48;
