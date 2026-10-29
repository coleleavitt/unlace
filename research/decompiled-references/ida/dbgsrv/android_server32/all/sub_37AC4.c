/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37AC4
// Address: 0x00037AC4

//----- (00037AC4) --------------------------------------------------------
int __fastcall sub_37AC4(int a1, int a2)
{
  char *v3; // r1

  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    if ( *(_DWORD *)(a1 + 36) )
      v3 = *(char **)(a1 + 32);
    else
      v3 = &byte_B3CBE;
    *(_DWORD *)(a2 + 8) = set_idcv_attr(a1, v3, (unsigned __int8 *)(a1 + 48), 0) == 0;
    return 0;
  }
  else
  {
    set_error_string(0, "setattr");
    return set_qerrno(56);
  }
}
// B3CBE: using guessed type char byte_B3CBE;
