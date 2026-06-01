/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4383D0
// Address: 0x004383D0

//----- (004383D0) --------------------------------------------------------
_DWORD *__thiscall sub_4383D0(int this)
{
  int *v2; // ebx
  void *v3; // ecx

  if ( !*(_BYTE *)(this + 320) )
  {
    v2 = *(int **)(this + 284);
    if ( v2 )
    {
      v3 = (void *)v2[3];
      if ( v3 )
      {
        sub_40FB70((int)v2, this, v3, (v2[5] - (int)v3) >> 2);
        v2[3] = 0;
        v2[4] = 0;
        v2[5] = 0;
      }
      sub_430250((int)(v2 + 1), v2[1]);
      sub_4627F2((void *)v2[1]);
      sub_4627F2(v2);
    }
  }
  *(_DWORD *)(this + 284) = 0;
  *(_BYTE *)(this + 320) = 0;
  return sub_4333A0(this + 288);
}
