/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21F28
// Address: 0x00021F28

//----- (00021F28) --------------------------------------------------------
_DWORD *__fastcall sub_21F28(_DWORD *result, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  int v6; // r7
  void *v7; // r0

  v4 = a4;
  v5 = result;
  if ( a3 )
  {
    sub_1C304((int)result, nullptr);
    v6 = sub_64FC8((int)v5);
    sub_2676C(v6, (int)(v5 + 210));
    sub_267EC(v6 + 12, (int)(v5 + 213));
    v7 = (void *)v5[210];
    if ( v7 )
    {
      v5[211] = 0;
      qfree(v7);
      v5[210] = 0;
      v5[212] = 0;
    }
    result = (_DWORD *)v5[213];
    v4 = a4;
    if ( result )
    {
      v5[214] = 0;
      qfree(result);
      v5[213] = 0;
      result = (_DWORD *)(&stru_350 + 12);
      v5[215] = 0;
    }
  }
  if ( v4 )
    return (_DWORD *)sub_1E514((int)v5, v4);
  return result;
}
// 350: using guessed type Elf32_Sym;
