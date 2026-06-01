/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000226F0
// Address: 0x00000001000226F0

//----- (00000001000226F0) ----------------------------------------------------
const char *__fastcall sub_1000226F0(__int64 a1)
{
  char **v2; // x0
  char **v3; // x0
  unsigned __int64 v4; // x8
  char *v6; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char ***)(a1 + 40);
  else
    v2 = (char **)&byte_100075A30;
  v3 = sub_10002DB88(v2);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v3 || v4 >= 0x81 )
  {
    set_error_string(0);
    return (const char *)set_qerrno();
  }
  else
  {
    if ( v4 )
      v6 = *(char **)(a1 + 40);
    else
      v6 = &byte_100075A30;
    return sub_10002114C(a1, v6);
  }
}
// 100075A30: using guessed type char byte_100075A30;
