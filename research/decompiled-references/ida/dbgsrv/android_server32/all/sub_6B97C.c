/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B97C
// Address: 0x0006B97C

//----- (0006B97C) --------------------------------------------------------
int __fastcall sub_6B97C(int a1, int *a2)
{
  int v4; // r6
  int result; // r0

  if ( !sub_6C71C(a2[17]) )
  {
    sub_5B24C((int)a2, "Handshake with %s failed (timeout period %d ms)\n");
    sub_5B24C((int)a2, "Closing connection from %s...\n");
    return sub_6C490(a1, (int)a2);
  }
  sub_5B24C((int)a2, "Accepting connection from %s...\n");
  v4 = (*(int (__fastcall **)(int *))(*a2 + 8))(a2);
  result = sub_5B24C((int)a2, "Closing connection from %s...\n");
  if ( v4 )
    return sub_6C490(a1, (int)a2);
  return result;
}
