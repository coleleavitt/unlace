/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44870
// Address: 0x00044870

//----- (00044870) --------------------------------------------------------
int __cdecl sub_44870(int a1, int a2)
{
  char *v2; // ecx

  if ( *(_DWORD *)(a2 + 4) == 3 )
  {
    if ( *(_DWORD *)(a1 + 28) )
      v2 = *(char **)(a1 + 24);
    else
      v2 = byte_EF875;
    *(_DWORD *)(a2 + 4) = set_idcv_attr(a1, v2, (char *)(a1 + 40), 0) == 0;
    return 0;
  }
  else
  {
    set_error_string(0, "setattr");
    return set_qerrno(56);
  }
}
