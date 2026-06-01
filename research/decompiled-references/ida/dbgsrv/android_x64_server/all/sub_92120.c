/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92120
// Address: 0x0000000000092120

//----- (0000000000092120) ----------------------------------------------------
__int64 __fastcall sub_92120(__int64 a1, const char *a2, int a3)
{
  unsigned int v4; // ebp
  _QWORD *v5; // rax
  void *v6; // rbx

  v4 = 0;
  v5 = open_linput(a2, 0);
  if ( v5 )
  {
    v6 = v5;
    if ( a3 == 11 )
      v4 = sub_90B40(a1, (__int64)v5);
    else
      v4 = 0;
    close_linput(v6);
  }
  return v4;
}
