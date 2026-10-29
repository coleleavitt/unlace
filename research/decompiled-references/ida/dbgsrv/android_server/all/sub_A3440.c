/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3440
// Address: 0x00000000000A3440

//----- (00000000000A3440) ----------------------------------------------------
FILE *__fastcall sub_A3440(_QWORD *a1)
{
  FILE *v2; // x0
  FILE *v3; // x0
  FILE *v4; // x0
  FILE *v5; // x0
  FILE *v6; // x0
  FILE *v7; // x0
  FILE *v8; // x0
  FILE *v9; // x0
  FILE *v10; // x0
  FILE *v11; // x0
  FILE *v12; // x0
  FILE *v13; // x0
  FILE *v14; // x0
  FILE *v15; // x0
  FILE *v16; // x0
  FILE *result; // x0

  v2 = (FILE *)a1[1];
  if ( v2 )
  {
    qfclose(v2);
    a1[1] = 0;
  }
  v3 = (FILE *)a1[2];
  if ( v3 )
  {
    qfclose(v3);
    a1[2] = 0;
  }
  v4 = (FILE *)a1[3];
  if ( v4 )
  {
    qfclose(v4);
    a1[3] = 0;
  }
  v5 = (FILE *)a1[4];
  if ( v5 )
  {
    qfclose(v5);
    a1[4] = 0;
  }
  v6 = (FILE *)a1[5];
  if ( v6 )
  {
    qfclose(v6);
    a1[5] = 0;
  }
  v7 = (FILE *)a1[6];
  if ( v7 )
  {
    qfclose(v7);
    a1[6] = 0;
  }
  v8 = (FILE *)a1[7];
  if ( v8 )
  {
    qfclose(v8);
    a1[7] = 0;
  }
  v9 = (FILE *)a1[8];
  if ( v9 )
  {
    qfclose(v9);
    a1[8] = 0;
  }
  v10 = (FILE *)a1[9];
  if ( v10 )
  {
    qfclose(v10);
    a1[9] = 0;
  }
  v11 = (FILE *)a1[10];
  if ( v11 )
  {
    qfclose(v11);
    a1[10] = 0;
  }
  v12 = (FILE *)a1[11];
  if ( v12 )
  {
    qfclose(v12);
    a1[11] = 0;
  }
  v13 = (FILE *)a1[12];
  if ( v13 )
  {
    qfclose(v13);
    a1[12] = 0;
  }
  v14 = (FILE *)a1[13];
  if ( v14 )
  {
    qfclose(v14);
    a1[13] = 0;
  }
  v15 = (FILE *)a1[14];
  if ( v15 )
  {
    qfclose(v15);
    a1[14] = 0;
  }
  v16 = (FILE *)a1[15];
  if ( v16 )
  {
    qfclose(v16);
    a1[15] = 0;
  }
  result = (FILE *)a1[16];
  if ( result )
  {
    result = (FILE *)qfclose(result);
    a1[16] = 0;
  }
  return result;
}
