/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2498
// Address: 0x00000000004B2498

//----- (00000000004B2498) ----------------------------------------------------
__int64 __usercall sub_4B2498@<X0>(char *a1@<X0>, __int64 a2@<X1>, __int64 a3@<X8>)
{
  __int64 v5; // x22
  size_t v7; // x0
  size_t v8; // x20

  v5 = a3 + 16;
  v7 = strlen(a1);
  *(_QWORD *)a3 = v5;
  *(_QWORD *)(a3 + 8) = 0;
  v8 = v7;
  *(_BYTE *)(a3 + 16) = 0;
  sub_4B0328((_QWORD *)a3, v7 + *(_QWORD *)(a2 + 8));
  if ( v8 > 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a3 + 8) )
    sub_4A04D0("basic_string::append");
  sub_4B1578((__int64 *)a3, a1, v8);
  sub_4B1578((__int64 *)a3, *(_BYTE **)a2, *(_QWORD *)(a2 + 8));
  return a3;
}
