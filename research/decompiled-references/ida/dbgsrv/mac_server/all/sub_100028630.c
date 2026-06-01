/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028630
// Address: 0x0000000100028630

//----- (0000000100028630) ----------------------------------------------------
__int64 __fastcall sub_100028630(_QWORD *a1)
{
  const char *v1; // rbx
  unsigned __int64 v2; // r15
  __int64 v3; // r12
  int v4; // r14d
  unsigned __int64 v5; // r13
  const char *v6; // rdi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  int v9; // r14d
  unsigned __int64 v10; // r13
  const char *v11; // rdi
  int v12; // r14d
  unsigned __int64 v13; // r13
  const char *v14; // rdi
  __int64 *v17; // [rsp+0h] [rbp-30h]

  if ( a1[6] )
    v1 = (const char *)a1[5];
  else
    v1 = _s1;
  v2 = a1[18];
  if ( !v2 )
    goto LABEL_12;
  v3 = a1[17];
  v4 = 1;
  v5 = 0;
  while ( 1 )
  {
    v6 = _s1;
    if ( *(_QWORD *)(v3 + 24 * v5 + 8) )
      v6 = *(const char **)(v3 + 24 * v5);
    if ( !strcmp(v6, v1) )
      break;
    v5 = v4++;
    if ( v2 <= v5 )
      goto LABEL_12;
  }
  if ( v5 == -1 )
  {
LABEL_12:
    v7 = a1[15];
    v17 = a1 + 14;
    if ( !v7 )
      goto LABEL_27;
    v8 = *v17;
    v9 = 1;
    v10 = 0;
    while ( 1 )
    {
      v11 = _s1;
      if ( *(_QWORD *)(v8 + 24 * v10 + 8) )
        v11 = *(const char **)(v8 + 24 * v10);
      if ( !strcmp(v11, v1) )
        break;
      v10 = v9++;
      if ( v7 <= v10 )
        goto LABEL_20;
    }
    if ( v10 != -1 )
      goto LABEL_29;
LABEL_20:
    v12 = 1;
    v13 = 0;
    while ( 1 )
    {
      v14 = _s1;
      if ( *(_QWORD *)(v8 + 24 * v13 + 8) )
        v14 = *(const char **)(v8 + 24 * v13);
      if ( !strcmp(v14, v1) )
        break;
      v13 = v12++;
      if ( v7 <= v13 )
        goto LABEL_27;
    }
    if ( v13 == -1 )
    {
LABEL_27:
      if ( sub_10002B270((__int64)v17, v1) != -1 )
        return 0;
    }
  }
LABEL_29:
  set_error_string(0, v1);
  return set_qerrno();
}
