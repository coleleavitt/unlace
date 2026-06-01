/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479010
// Address: 0x0000000000479010

//----- (0000000000479010) ----------------------------------------------------
__int64 *__usercall sub_479010@<X0>(char a1@<W0>, __int64 *a2@<X8>)
{
  char *v4; // x0
  __int64 v5; // x3
  __int64 v6; // x0

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  v4 = (char *)sub_491288((__int64)a2, nullptr, 5u, 1u);
  v5 = a2[1];
  *a2 = (__int64)v4;
  memset(&v4[v5], 0, 5 - v5);
  a2[1] = 5;
  v6 = *a2;
  *(_DWORD *)v6 = 0;
  *(_BYTE *)(v6 + 4) = a1;
  return a2;
}
