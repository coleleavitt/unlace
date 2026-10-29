/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F834
// Address: 0x0001F834

//----- (0001F834) --------------------------------------------------------
int __fastcall sub_1F834(_DWORD *a1, int *a2)
{
  int v4; // r4

  v4 = sub_1EBEC((int)a1, a2, 0);
  if ( v4 != 1 )
    return v4;
  if ( sub_533AC((int)a1, a2) )
    return -6;
  sub_53474(a1, a2);
  return 1;
}
