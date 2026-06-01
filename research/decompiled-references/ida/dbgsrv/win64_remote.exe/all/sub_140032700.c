/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032700
// Address: 0x0000000140032700

//----- (0000000140032700) ----------------------------------------------------
void __fastcall sub_140032700(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  sub_140034610((__int64)a1);
  a1[22] = 0;
  sub_1400213B0((__int64)(a1 + 52));
  v2 = (void *)a1[48];
  if ( v2 )
  {
    a1[49] = 0;
    j_free(v2);
    a1[48] = 0;
    a1[50] = 0;
  }
  v3 = (void *)a1[45];
  if ( v3 )
  {
    a1[46] = 0;
    j_free(v3);
    a1[45] = 0;
    a1[47] = 0;
  }
  v4 = (void *)a1[42];
  if ( v4 )
  {
    a1[43] = 0;
    j_free(v4);
    a1[42] = 0;
    a1[44] = 0;
  }
  v5 = (void *)a1[39];
  if ( v5 )
  {
    a1[40] = 0;
    j_free(v5);
    a1[39] = 0;
    a1[41] = 0;
  }
  v6 = (void *)a1[36];
  if ( v6 )
  {
    a1[37] = 0;
    j_free(v6);
    a1[36] = 0;
    a1[38] = 0;
  }
  v7 = (void *)a1[33];
  if ( v7 )
  {
    a1[34] = 0;
    j_free(v7);
    a1[33] = 0;
    a1[35] = 0;
  }
  v8 = (void *)a1[30];
  if ( v8 )
  {
    a1[31] = 0;
    j_free(v8);
    a1[30] = 0;
    a1[32] = 0;
  }
  v9 = (void *)a1[27];
  if ( v9 )
  {
    a1[28] = 0;
    j_free(v9);
    a1[27] = 0;
    a1[29] = 0;
  }
  if ( a1[19] )
  {
    sub_14001A6C0(a1 + 19, 0);
    j_free((void *)a1[19]);
    a1[19] = 0;
    a1[21] = 0;
  }
  if ( a1[16] )
  {
    sub_14001A6C0(a1 + 16, 0);
    j_free((void *)a1[16]);
    a1[16] = 0;
    a1[18] = 0;
  }
  if ( a1[13] )
  {
    sub_14001A6C0(a1 + 13, 0);
    j_free((void *)a1[13]);
    a1[13] = 0;
    a1[15] = 0;
  }
  v10 = (void *)a1[4];
  if ( v10 )
  {
    a1[5] = 0;
    j_free(v10);
    a1[4] = 0;
    a1[6] = 0;
  }
}
