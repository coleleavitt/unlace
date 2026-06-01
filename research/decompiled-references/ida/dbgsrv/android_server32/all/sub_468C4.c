/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468C4
// Address: 0x000468C4

//----- (000468C4) --------------------------------------------------------
int __fastcall sub_468C4(_DWORD *a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  _BYTE *v4; // r0
  int v5; // r1
  char *v6; // r5
  unsigned __int8 *v7; // r5

  v2 = a1[4];
  v3 = a1 + 3;
  if ( !v2 )
  {
    if ( a1[5] )
    {
      v4 = (_BYTE *)*v3;
      v5 = 0;
    }
    else
    {
      v4 = qvector_reserve((int)v3, (void *)a1[3], 1u, 0x18u);
      a1[3] = v4;
      v5 = a1[4];
    }
    v4[24 * v5] = 2;
    v6 = &v4[24 * v5];
    memset(v6 + 8, 0, 0x10u);
    *((_DWORD *)v6 + 2) = 0;
    v2 = a1[4] + 1;
    a1[4] = v2;
  }
  v7 = (unsigned __int8 *)(a1[3] + 24 * v2 - 24);
  sub_46924(v7);
  return sub_46678((int)a1, (int)v7);
}
