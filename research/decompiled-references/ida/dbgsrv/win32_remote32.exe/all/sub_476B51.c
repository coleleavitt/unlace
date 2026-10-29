/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476B51
// Address: 0x00476B51

//----- (00476B51) --------------------------------------------------------
int __usercall sub_476B51@<eax>(int a1@<ebx>, int *a2@<edi>, void *a3@<esi>)
{
  CHAR *v4; // eax
  CHAR *v5; // esi
  int v6; // edi
  void **v7; // eax

  if ( dword_4B7A00 )
    return 0;
  sub_47DA89(a1, a2, a3);
  v4 = sub_47DD7D();
  v5 = v4;
  if ( v4 )
  {
    v7 = sub_476BF2(v4);
    if ( v7 )
    {
      dword_4B7A0C = (int)v7;
      v6 = 0;
      dword_4B7A00 = (int)v7;
    }
    else
    {
      v6 = -1;
    }
    sub_479216(nullptr);
  }
  else
  {
    v6 = -1;
  }
  sub_479216(v5);
  return v6;
}
// 476B51: could not find valid save-restore pair for edi
// 476B51: could not find valid save-restore pair for esi
// 4B7A00: using guessed type int dword_4B7A00;
// 4B7A0C: using guessed type int dword_4B7A0C;
