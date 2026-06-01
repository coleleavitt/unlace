/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025464
// Address: 0x0000000100025464

//----- (0000000100025464) ----------------------------------------------------
__int64 __fastcall sub_100025464(_QWORD *a1)
{
  char *v2; // x19
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x23
  __int64 v5; // x22
  int v6; // w24
  _QWORD *v7; // x8
  const char *v8; // x0
  unsigned __int64 v9; // x21
  unsigned __int64 v10; // x23
  __int64 v11; // x22
  int v12; // w24
  _QWORD *v13; // x8
  const char *v14; // x0
  unsigned __int64 v15; // x23
  int v16; // w24
  _QWORD *v17; // x8
  const char *v18; // x0
  __int64 _48; // [xsp+48h] [xbp+8h]

  if ( a1[6] )
  {
    v2 = (char *)a1[5];
    v3 = a1[18];
    if ( !v3 )
      goto LABEL_13;
LABEL_5:
    v4 = 0;
    v5 = a1[17];
    v6 = 1;
    while ( 1 )
    {
      v7 = (_QWORD *)(v5 + 24 * v4);
      v8 = v7[1] ? (const char *)*v7 : &byte_10007AE40;
      if ( !strcmp(v8, v2) )
        break;
      v4 = v6++;
      if ( v3 <= v4 )
        goto LABEL_13;
    }
    if ( v4 != -1 )
      goto LABEL_32;
    goto LABEL_13;
  }
  v2 = &byte_10007AE40;
  v3 = a1[18];
  if ( v3 )
    goto LABEL_5;
LABEL_13:
  v9 = a1[15];
  if ( !v9 )
    goto LABEL_30;
  v10 = 0;
  v11 = a1[14];
  v12 = 1;
  while ( 1 )
  {
    v13 = (_QWORD *)(v11 + 24 * v10);
    v14 = v13[1] ? (const char *)*v13 : &byte_10007AE40;
    if ( !strcmp(v14, v2) )
      break;
    v10 = v12++;
    if ( v9 <= v10 )
      goto LABEL_22;
  }
  if ( v10 != -1 )
    goto LABEL_32;
LABEL_22:
  v15 = 0;
  v16 = 1;
  while ( 1 )
  {
    v17 = (_QWORD *)(v11 + 24 * v15);
    v18 = v17[1] ? (const char *)*v17 : &byte_10007AE40;
    if ( !strcmp(v18, v2) )
      break;
    v15 = v16++;
    if ( v9 <= v15 )
      goto LABEL_30;
  }
  if ( v15 == -1 )
  {
LABEL_30:
    if ( sub_1000285D0((__int64)(a1 + 14), v2) != -1 )
      return 0;
  }
LABEL_32:
  set_error_string(0);
  if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return set_qerrno();
}
// 100025610: variable '_48' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
