/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F980
// Address: 0x000000000005F980

//----- (000000000005F980) ----------------------------------------------------
__int64 __fastcall sub_5F980(_QWORD *a1)
{
  char *v1; // x19
  unsigned __int64 v2; // x21
  __int64 *v3; // x20
  __int64 v4; // x22
  __int64 v5; // x23
  int v6; // w24
  const char *v7; // x0

  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = &byte_F154B;
  v2 = a1[18];
  v3 = a1 + 17;
  if ( !v2 )
    goto LABEL_13;
  v4 = *v3;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + 24 * v5 + 8) ? *(const char **)(v4 + 24 * v5) : &byte_F154B;
    if ( !strcmp(v7, v1) )
      break;
    v5 = v6;
    if ( v2 <= v6++ )
      goto LABEL_13;
  }
  if ( v5 == -1 )
  {
LABEL_13:
    if ( sub_62D40((__int64)v3, v1) != -1 )
      return 0;
  }
  set_error_string(nullptr, v1);
  return set_qerrno(0x34u);
}
// F154B: using guessed type char byte_F154B;
