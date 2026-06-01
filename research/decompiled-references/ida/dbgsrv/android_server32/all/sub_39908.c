/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39908
// Address: 0x00039908

//----- (00039908) --------------------------------------------------------
int __fastcall sub_39908(int a1)
{
  char *v2; // r0
  char **v3; // r0
  int v4; // r1
  const char *v5; // r1
  _BOOL4 v6; // r0
  char *v7; // r1

  if ( *(_DWORD *)(a1 + 28) )
    v2 = *(char **)(a1 + 24);
  else
    v2 = &byte_B3CBE;
  v3 = sub_40BBC(v2);
  v4 = *(_DWORD *)(a1 + 28);
  if ( !v3 )
  {
    v6 = (unsigned int)(v4 - 1) > 0x7F && v4 != 0;
    if ( v4 )
    {
      v7 = *(char **)(a1 + 24);
      if ( v6 )
      {
LABEL_9:
        set_error_string(0, v7);
        return set_qerrno(28);
      }
    }
    else
    {
      v7 = &byte_B3CBE;
      if ( v6 )
        goto LABEL_9;
    }
    return sub_38BF8(a1, v7);
  }
  if ( v4 )
    v5 = *(const char **)(a1 + 24);
  else
    v5 = &byte_B3CBE;
  set_error_string(0, v5);
  return set_qerrno(52);
}
// B3CBE: using guessed type char byte_B3CBE;
