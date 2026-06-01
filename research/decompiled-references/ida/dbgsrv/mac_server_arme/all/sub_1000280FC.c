/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000280FC
// Address: 0x00000001000280FC

//----- (00000001000280FC) ----------------------------------------------------
bool __fastcall sub_1000280FC(__int64 *a1)
{
  char *v2; // x1
  unsigned __int16 v3; // w0
  __int64 v5; // x8
  int *v6; // x20
  int *v7; // x0
  int v8; // [xsp+4h] [xbp-1Ch] BYREF

  if ( a1[6] )
    v2 = (char *)a1[5];
  else
    v2 = &byte_10007AE40;
  v3 = sub_100027CC8(a1, v2, &v8);
  if ( (unsigned int)(v8 - 1) > 2 )
  {
    if ( (unsigned int)set_qerrno() )
      return 1;
  }
  else
  {
    sub_100023A70(a1, 0xDDC6C4u >> (8 * (v8 - 1)), v3);
  }
  sub_100027FBC((__int64)a1);
  v5 = a1[44];
  v6 = *(int **)(a1[43] + 8 * v5 - 8);
  if ( v5 )
    a1[44] = v5 - 1;
  sub_100029A64((__int64)a1, (__int64)v6, 0, 0);
  if ( v6 )
  {
    v7 = sub_100028214(v6);
    operator delete(v7);
  }
  return (unsigned int)set_qerrno() != 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
