/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B56C
// Address: 0x0003B56C

//----- (0003B56C) --------------------------------------------------------
int __fastcall sub_3B56C(_DWORD *a1, int a2)
{
  const char *v4; // r1
  unsigned __int16 v5; // r2
  char v6; // r0
  char v7; // r1
  int v9; // [sp+4h] [bp-8h] BYREF

  if ( a1[7] )
    v4 = (const char *)a1[6];
  else
    v4 = &byte_B3CBE;
  v5 = sub_3B468(a1, v4, &v9);
  switch ( v9 )
  {
    case 3:
      v6 = -37;
      v7 = -35;
      if ( a2 > 0 )
      {
LABEL_11:
        sub_391D4((int)a1, v6, v5);
        return 0;
      }
LABEL_10:
      v6 = v7;
      goto LABEL_11;
    case 2:
      v6 = -62;
      v7 = -58;
      if ( a2 > 0 )
        goto LABEL_11;
      goto LABEL_10;
    case 1:
      v6 = -64;
      v7 = -60;
      if ( a2 > 0 )
        goto LABEL_11;
      goto LABEL_10;
  }
  return set_qerrno(58);
}
// B3CBE: using guessed type char byte_B3CBE;
