/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_num
// Address: 0x00044BEC

//----- (00044BEC) --------------------------------------------------------
int __fastcall idcv_num(int a1)
{
  int result; // r0
  const char *v3; // r5

  if ( !a1 )
    return set_qerrno(1531);
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((unsigned __int8 *)a1, 2) )
      return get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
    case 9:
      return 0;
    case 3:
      goto LABEL_12;
    case 7:
      v3 = *(const char **)(a1 + 8);
      if ( v3 && *v3 )
      {
        if ( !strcasecmp(*(const char **)(a1 + 8), "true") )
        {
          free_idcv((unsigned __int8 *)a1);
          *(_DWORD *)(a1 + 8) = 1;
          result = 0;
        }
        else if ( !strcasecmp(v3, "false") )
        {
          free_idcv((unsigned __int8 *)a1);
          *(_DWORD *)(a1 + 8) = 0;
          result = 0;
        }
        else
        {
LABEL_12:
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
