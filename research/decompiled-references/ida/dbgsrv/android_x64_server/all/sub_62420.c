/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62420
// Address: 0x0000000000062420

//----- (0000000000062420) ----------------------------------------------------
__int64 __fastcall sub_62420(_QWORD *a1)
{
  const char *v1; // r15
  unsigned __int64 v2; // r12
  __int64 v3; // r13
  int v4; // r14d
  unsigned __int64 v5; // rbx
  const char *v6; // rdi
  __int64 *v8; // [rsp+0h] [rbp-38h]

  if ( a1[6] )
    v1 = (const char *)a1[5];
  else
    v1 = s1;
  v2 = a1[18];
  v8 = a1 + 17;
  if ( !v2 )
    goto LABEL_12;
  v3 = *v8;
  v4 = 1;
  v5 = 0;
  while ( 1 )
  {
    v6 = s1;
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
    if ( sub_657D0((__int64)v8, v1) != -1 )
      return 0;
  }
  set_error_string(0, v1);
  return set_qerrno(0x34u);
}
