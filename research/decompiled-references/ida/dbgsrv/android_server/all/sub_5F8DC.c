/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F8DC
// Address: 0x000000000005F8DC

//----- (000000000005F8DC) ----------------------------------------------------
__int64 __fastcall sub_5F8DC(__int64 a1)
{
  char *v2; // x0
  const char **v3; // x0
  __int64 v4; // x9
  const char *v5; // x1
  char *v6; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = &byte_F154B;
  v3 = sub_69D00(v2);
  v4 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
  {
    if ( v4 )
    {
      v6 = *(char **)(a1 + 40);
      if ( (unsigned __int64)(v4 - 1) > 0x7F && v4 != 0 )
      {
LABEL_9:
        set_error_string(nullptr, v6);
        return set_qerrno(0x1Cu);
      }
    }
    else
    {
      v6 = &byte_F154B;
      if ( (unsigned __int64)(v4 - 1) > 0x7F && v4 != 0 )
        goto LABEL_9;
    }
    return sub_5E4C0(a1, v6);
  }
  if ( v4 )
    v5 = *(const char **)(a1 + 40);
  else
    v5 = &byte_F154B;
  set_error_string(nullptr, v5);
  return set_qerrno(0x34u);
}
// F154B: using guessed type char byte_F154B;
