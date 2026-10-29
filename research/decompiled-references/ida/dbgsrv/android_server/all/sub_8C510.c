/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C510
// Address: 0x000000000008C510

//----- (000000000008C510) ----------------------------------------------------
bool __fastcall sub_8C510(__int64 a1, const char *a2, int a3)
{
  _QWORD *v5; // x0
  void *v6; // x19
  bool v7; // w0
  bool v8; // w20
  int8x16x2_t v10; // 0:q0.32

  v5 = open_linput(a2, 0);
  if ( v5 )
  {
    v6 = v5;
    if ( a3 == 11 )
    {
      v7 = sub_8B090(a1, (__int64)v5);
    }
    else
    {
      if ( a3 != 18 )
      {
        v8 = 0;
        goto LABEL_9;
      }
      v7 = sub_8ADF0(a1, (__int64)v5, v10);
    }
    v8 = v7;
LABEL_9:
    close_linput(v6);
    return v8;
  }
  return 0;
}
// 8C54C: variable 'v10' is possibly undefined
