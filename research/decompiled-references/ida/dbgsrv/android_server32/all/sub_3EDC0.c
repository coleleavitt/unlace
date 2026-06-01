/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EDC0
// Address: 0x0003EDC0

//----- (0003EDC0) --------------------------------------------------------
int __fastcall sub_3EDC0(void **a1, char a2)
{
  void *v4; // r0
  int v5; // r7
  void *v6; // r1

  v4 = a1[1];
  v5 = (int)v4 - 1;
  if ( !v4 )
    v5 = 0;
  v6 = *a1;
  if ( (unsigned int)a1[2] < v5 + 2 )
  {
    v6 = qvector_reserve((int)a1, v6, v5 + 2, 1u);
    *a1 = v6;
  }
  a1[1] = (void *)(v5 + 2);
  *((_BYTE *)v6 + v5) = a2;
  *((_BYTE *)*a1 + v5 + 1) = 0;
  return 0;
}
