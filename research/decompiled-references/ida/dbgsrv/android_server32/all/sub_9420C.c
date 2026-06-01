/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9420C
// Address: 0x0009420C

//----- (0009420C) --------------------------------------------------------
int __fastcall sub_9420C(int a1, int a2)
{
  int *v2; // r6
  _DWORD *v5; // r0
  int v6; // r3
  int result; // r0

  v2 = *(int **)a1;
  if ( **(_DWORD **)a1 )
  {
    v5 = sub_93AC6(*(_DWORD *)(a1 + 4) + 368, 16);
    v6 = *v2;
    *v5 = &off_DBCC0;
    v5[1] = 16843032;
    v5[2] = v6;
    v5[3] = a2;
    **(_DWORD **)a1 = v5;
  }
  else
  {
    *v2 = a2;
  }
  result = **(_DWORD **)(a1 + 8);
  if ( result )
    *(_BYTE *)(result + 1) = 0;
  return result;
}
// DBCC0: using guessed type _UNKNOWN *off_DBCC0;
