/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000246DC
// Address: 0x00000001000246DC

//----- (00000001000246DC) ----------------------------------------------------
const char *__fastcall sub_1000246DC(__int64 a1)
{
  char **v2; // x0
  char **v3; // x0
  unsigned __int64 v4; // x8
  char *v6; // x1
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char ***)(a1 + 40);
  else
    v2 = (char **)&byte_10007AE40;
  v3 = sub_10002EF28(v2);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v3 || v4 >= 0x81 )
  {
    set_error_string(0);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const char *)set_qerrno();
  }
  else
  {
    if ( v4 )
      v6 = *(char **)(a1 + 40);
    else
      v6 = &byte_10007AE40;
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_1000230C0(a1, v6);
  }
}
// 10002475C: variable '_18' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
