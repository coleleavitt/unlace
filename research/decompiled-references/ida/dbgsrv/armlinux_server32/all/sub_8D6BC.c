/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D6BC
// Address: 0x0008D6BC

//----- (0008D6BC) --------------------------------------------------------
int __fastcall sub_8D6BC(int a1, char *s, int a3)
{
  unsigned int v6; // r5

  v6 = strlen(s);
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_8C2DC((_DWORD *)a1, *(_DWORD *)(a3 + 4) + v6);
  if ( 0x7FFFFFFF - *(_DWORD *)(a1 + 4) < v6 )
    sub_83DCC("basic_string::append");
  sub_8CE68((_DWORD *)a1, s, v6);
  sub_8CE68((_DWORD *)a1, *(_BYTE **)a3, *(_DWORD *)(a3 + 4));
  return a1;
}
