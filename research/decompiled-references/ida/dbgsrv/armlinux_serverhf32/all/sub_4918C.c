/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4918C
// Address: 0x0004918C

//----- (0004918C) --------------------------------------------------------
void __fastcall sub_4918C(_DWORD *a1)
{
  char *v2; // r1
  int v3; // r3
  char *v4; // r4
  char *v5; // r0
  char *v6; // r0

  v3 = a1[4];
  v2 = (char *)a1[3];
  if ( !v3 )
  {
    if ( !a1[5] )
    {
      v5 = (char *)sub_77EB0((int)(a1 + 3), v2, 1u, 0x18u);
      v3 = a1[4];
      v2 = v5;
      a1[3] = v5;
    }
    v6 = &v2[24 * v3];
    *v6 = 2;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    *((_DWORD *)v6 + 2) = 0;
    v2 = (char *)a1[3];
    v3 = a1[4] + 1;
    a1[4] = v3;
  }
  v4 = &v2[24 * v3 - 24];
  sub_49088(v4);
  sub_48E78((int)a1, v4);
}
