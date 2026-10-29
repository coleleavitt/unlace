/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BB0
// Address: 0x00047BB0

//----- (00047BB0) --------------------------------------------------------
int __cdecl sub_47BB0(int a1)
{
  char *v1; // eax
  bool v2; // zf
  int v3; // eax
  char *v4; // eax
  bool v5; // cl
  char *v6; // eax

  if ( *(_DWORD *)(a1 + 24) )
    v1 = *(char **)(a1 + 20);
  else
    v1 = byte_EF875;
  v2 = sub_531C0(v1) == nullptr;
  v3 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    v5 = v3 != 0 && (unsigned int)(v3 - 1) > 0x7F;
    if ( v3 )
    {
      v6 = *(char **)(a1 + 20);
      if ( v5 )
      {
LABEL_9:
        set_error_string(0, v6);
        return set_qerrno(28);
      }
    }
    else
    {
      v6 = byte_EF875;
      if ( v5 )
        goto LABEL_9;
    }
    return sub_46750(a1, v6);
  }
  if ( v3 )
    v4 = *(char **)(a1 + 20);
  else
    v4 = byte_EF875;
  set_error_string(0, v4);
  return set_qerrno(52);
}
