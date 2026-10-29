/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022790
// Address: 0x0000000100022790

//----- (0000000100022790) ----------------------------------------------------
__int64 __fastcall sub_100022790(_QWORD *a1)
{
  char *v2; // x19
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x23
  __int64 v5; // x22
  int v6; // w24
  _QWORD *v7; // x8
  const char *v8; // x0

  if ( !a1[6] )
  {
    v2 = &byte_100075A30;
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
      v8 = v7[1] ? (const char *)*v7 : &byte_100075A30;
      if ( !strcmp(v8, v2) )
        break;
      v4 = v6++;
      if ( v3 <= v4 )
        goto LABEL_13;
    }
    if ( v4 != -1 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v2 = (char *)a1[5];
  v3 = a1[18];
  if ( v3 )
    goto LABEL_5;
LABEL_13:
  if ( sub_10002618C((__int64)(a1 + 17), v2) != -1 )
    return 0;
LABEL_15:
  set_error_string(0);
  return set_qerrno();
}
// 100075A30: using guessed type char byte_100075A30;
