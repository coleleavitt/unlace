/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46404
// Address: 0x00046404

//----- (00046404) --------------------------------------------------------
int __fastcall sub_46404(_DWORD *a1, unsigned __int8 *a2)
{
  unsigned int v3; // r1
  int v4; // r3
  char *v6; // r0
  int v7; // r3
  char *v8; // r3

  v3 = a1[5];
  v4 = a1[4];
  v6 = (char *)a1[3];
  if ( v4 + 1 > v3 )
  {
    v6 = (char *)sub_78018((int)(a1 + 3), v6, v4 + 1, 0x18u);
    v4 = a1[4];
    a1[3] = v6;
  }
  v7 = 24 * v4;
  v6[v7] = 2;
  v8 = &v6[v7];
  *((_DWORD *)v8 + 3) = 0;
  *((_DWORD *)v8 + 4) = 0;
  *((_DWORD *)v8 + 5) = 0;
  *((_DWORD *)v8 + 2) = 0;
  ++a1[4];
  return sub_46354((unsigned __int8 *)v8, a2);
}
