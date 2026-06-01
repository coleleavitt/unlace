/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65B98
// Address: 0x00065B98

//----- (00065B98) --------------------------------------------------------
int __fastcall sub_65B98(int a1, int *a2)
{
  int v4; // r0
  int v5; // r3
  const char *v6; // r2
  int v7; // r6
  const char *v8; // r2
  const char *v9; // r2
  int result; // r0

  v4 = sub_666D8(a2[17]);
  v5 = a2[19];
  if ( v4 )
  {
    if ( v5 )
      v6 = (const char *)a2[18];
    else
      v6 = (const char *)&dword_8DB98;
    sub_58320((int)a2, "Accepting connection from %s...\n", v6);
    v7 = (*(int (__fastcall **)(int *))(*a2 + 8))(a2);
    if ( !a2[19] )
    {
LABEL_5:
      v8 = (const char *)&dword_8DB98;
      goto LABEL_10;
    }
  }
  else
  {
    if ( v5 )
      v9 = (const char *)a2[18];
    else
      v9 = (const char *)&dword_8DB98;
    sub_58320((int)a2, "Handshake with %s failed (timeout period %d ms)\n", v9, 10000);
    v7 = 1;
    if ( !a2[19] )
      goto LABEL_5;
  }
  v8 = (const char *)a2[18];
LABEL_10:
  result = sub_58320((int)a2, "Closing connection from %s...\n", v8);
  if ( v7 )
    return sub_65B14(a1, (int)a2);
  return result;
}
// 8DB98: using guessed type int dword_8DB98;
