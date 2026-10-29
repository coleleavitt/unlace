/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93310
// Address: 0x00093310

//----- (00093310) --------------------------------------------------------
int __fastcall sub_93310(int a1, int *a2)
{
  char v4; // al
  int v5; // ecx
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  int result; // eax
  char v11; // [esp+8h] [ebp-14h]

  v4 = sub_94C60(a2[17], 10000);
  v5 = a2[19];
  if ( !v4 )
  {
    if ( v5 )
      v7 = (char *)a2[18];
    else
      v7 = byte_EF875;
    sub_7CD60((int)a2, "Handshake with %s failed (timeout period %d ms)\n", v7, 10000);
    if ( a2[19] )
      v9 = (char *)a2[18];
    else
      v9 = byte_EF875;
    sub_7CD60((int)a2, "Closing connection from %s...\n", v9);
    return sub_945F0(a1, (int)a2);
  }
  if ( v5 )
    v6 = (char *)a2[18];
  else
    v6 = byte_EF875;
  sub_7CD60((int)a2, "Accepting connection from %s...\n", v6);
  v11 = (*(int (__cdecl **)(int *))(*a2 + 8))(a2);
  if ( a2[19] )
    v8 = (char *)a2[18];
  else
    v8 = byte_EF875;
  result = sub_7CD60((int)a2, "Closing connection from %s...\n", v8);
  if ( v11 )
    return sub_945F0(a1, (int)a2);
  return result;
}
