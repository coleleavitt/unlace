/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063440
// Address: 0x0000000100063440

//----- (0000000100063440) ----------------------------------------------------
void __usercall sub_100063440(char a1@<W0>, __int64 *a2@<X8>)
{
  char *v4; // x0
  __int64 v5; // x8

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  v4 = (char *)qvector_reserve(a2, nullptr, 5u, 1u);
  *a2 = (__int64)v4;
  bzero(&v4[a2[1]], 5 - a2[1]);
  a2[1] = 5;
  v5 = *a2;
  *(_DWORD *)v5 = 0;
  *(_BYTE *)(v5 + 4) = a1;
}
