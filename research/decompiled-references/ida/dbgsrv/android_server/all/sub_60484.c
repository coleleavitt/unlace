/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60484
// Address: 0x0000000000060484

//----- (0000000000060484) ----------------------------------------------------
__int64 __fastcall sub_60484(_QWORD *a1)
{
  char *v2; // x19
  unsigned __int64 v3; // x21
  __int64 v4; // x22
  __int64 v5; // x23
  int v6; // w24
  const char *v7; // x0
  bool v8; // cc
  unsigned __int64 v9; // x21
  __int64 *v10; // x20
  __int64 v11; // x22
  __int64 v12; // x23
  int v13; // w24
  const char *v14; // x0
  __int64 v15; // x23
  int v16; // w24
  const char *v17; // x0

  if ( a1[6] )
  {
    v2 = (char *)a1[5];
    v3 = a1[18];
    if ( !v3 )
      goto LABEL_13;
LABEL_5:
    v4 = a1[17];
    v5 = 0;
    v6 = 1;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 24 * v5 + 8) ? *(const char **)(v4 + 24 * v5) : &byte_F154B;
      if ( !strcmp(v7, v2) )
        break;
      v5 = v6;
      v8 = v3 > v6++;
      if ( !v8 )
        goto LABEL_13;
    }
    if ( v5 != -1 )
      goto LABEL_32;
    goto LABEL_13;
  }
  v2 = &byte_F154B;
  v3 = a1[18];
  if ( v3 )
    goto LABEL_5;
LABEL_13:
  v9 = a1[15];
  v10 = a1 + 14;
  if ( !v9 )
    goto LABEL_30;
  v11 = *v10;
  v12 = 0;
  v13 = 1;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v11 + 24 * v12 + 8) ? *(const char **)(v11 + 24 * v12) : &byte_F154B;
    if ( !strcmp(v14, v2) )
      break;
    v12 = v13;
    v8 = v9 > v13++;
    if ( !v8 )
      goto LABEL_22;
  }
  if ( v12 != -1 )
    goto LABEL_32;
LABEL_22:
  v15 = 0;
  v16 = 1;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v11 + 24 * v15 + 8) ? *(const char **)(v11 + 24 * v15) : &byte_F154B;
    if ( !strcmp(v17, v2) )
      break;
    v15 = v16;
    v8 = v9 > v16++;
    if ( !v8 )
      goto LABEL_30;
  }
  if ( v15 == -1 )
  {
LABEL_30:
    if ( sub_62D40((__int64)v10, v2) != -1 )
      return 0;
  }
LABEL_32:
  set_error_string(nullptr, v2);
  return set_qerrno(0x34u);
}
// F154B: using guessed type char byte_F154B;
