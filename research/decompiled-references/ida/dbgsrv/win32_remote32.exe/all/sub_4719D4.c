/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4719D4
// Address: 0x004719D4

//----- (004719D4) --------------------------------------------------------
char __userpurge sub_4719D4@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax

  *(_DWORD *)(a1 + 108) += 4;
  v5 = *(_DWORD **)(*(_DWORD *)(a1 + 108) - 4);
  if ( !v5 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a2, a3);
    return 0;
  }
  v7 = sub_471003(a1 + 24) - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( v9 )
      {
        if ( v9 != 4 )
          return 0;
        *v5 = a4;
        v5[1] = a5;
      }
      else
      {
        *v5 = a4;
      }
    }
    else
    {
      *(_WORD *)v5 = a4;
    }
  }
  else
  {
    *(_BYTE *)v5 = a4;
  }
  return 1;
}
