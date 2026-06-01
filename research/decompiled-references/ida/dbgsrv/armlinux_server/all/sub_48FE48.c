/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FE48
// Address: 0x000000000048FE48

//----- (000000000048FE48) ----------------------------------------------------
__int64 __fastcall sub_48FE48(int a1, void *a2, size_t a3)
{
  unsigned int v4; // w0
  unsigned int v5; // w20
  __int64 v6; // x0

  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(1225);
  }
  v4 = read(a1, a2, a3);
  v5 = v4;
  if ( a3 != v4 )
  {
    if ( v4 == -1 )
      v6 = 1;
    else
      v6 = 3;
    sub_4869C8(v6);
  }
  return v5;
}
// 52451C: using guessed type char under_debugger;
