/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D0C
// Address: 0x00046D0C

//----- (00046D0C) --------------------------------------------------------
void __fastcall sub_46D0C(int a1, int *a2)
{
  int *v3; // r4
  void *v4; // r0

  v3 = sub_81644(a2, (_DWORD *)(a1 + 4));
  sub_45758((unsigned __int8 *)v3 + 32);
  v4 = (void *)v3[4];
  if ( v4 )
  {
    v3[5] = 0;
    sub_77F70(v4);
  }
  sub_809EC(v3);
  --*(_DWORD *)(a1 + 20);
}
