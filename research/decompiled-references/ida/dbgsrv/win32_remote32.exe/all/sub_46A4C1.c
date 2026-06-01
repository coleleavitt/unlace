/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A4C1
// Address: 0x0046A4C1

//----- (0046A4C1) --------------------------------------------------------
char __userpurge sub_46A4C1@<al>(int a1@<ecx>, int a2@<edi>, int a3)
{
  char v4; // bl
  int **v5; // eax
  char *v6; // eax
  char v7; // cl

  v4 = *(_BYTE *)(a1 + 49);
  v5 = *(int ***)(a1 + 8);
  *(_BYTE *)(a1 + 60) = 0;
  if ( !sub_469012(**v5, v4, 0x8000u) )
    return 1;
  sub_46B251((int *)(a1 + 1096), v4, (_DWORD *)(a1 + 24));
  v6 = *(char **)(a1 + 16);
  v7 = *v6;
  *(_BYTE *)(a1 + 49) = *v6;
  *(_DWORD *)(a1 + 16) = v6 + 1;
  if ( v7 )
    return 1;
  *sub_46B984() = 22;
  sub_467EF4(v4, a2);
  return 0;
}
