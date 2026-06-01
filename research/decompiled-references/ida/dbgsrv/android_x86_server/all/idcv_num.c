/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_num
// Address: 0x00059BF0

//----- (00059BF0) --------------------------------------------------------
int __cdecl idcv_num(int a1)
{
  int result; // eax
  const char *v2; // edi

  if ( !a1 )
    return set_qerrno(1531);
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((char *)a1, 2) )
      return get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
    case 9:
      goto LABEL_6;
    case 3:
      goto LABEL_13;
    case 7:
      v2 = *(const char **)(a1 + 4);
      if ( v2 && *v2 )
      {
        if ( !strcasecmp(v2, "true") )
        {
          free_idcv((char *)a1);
          *(_DWORD *)(a1 + 4) = 1;
          result = 0;
        }
        else if ( !strcasecmp(v2, "false") )
        {
          free_idcv((char *)a1);
          *(_DWORD *)(a1 + 4) = 0;
LABEL_6:
          result = 0;
        }
        else
        {
LABEL_13:
          result = idcv_long(a1);
        }
      }
      else
      {
        result = set_qerrno(80);
      }
      break;
    default:
      return set_qerrno(1531);
  }
  return result;
}
