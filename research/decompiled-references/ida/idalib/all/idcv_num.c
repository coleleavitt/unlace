__int64 __fastcall idcv_num(__int64 a1)
{
  const char *v2; // rbp

  if ( !a1 )
    return set_qerrno(1531);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
      case 9:
        return 0;
      case 3:
        return idcv_long(a1);
      case 7:
        v2 = *(const char **)(a1 + 8);
        if ( v2 && *v2 )
        {
          if ( !strcasecmp(*(const char **)(a1 + 8), "true") )
          {
            free_idcv(a1);
            *(_QWORD *)(a1 + 8) = 1;
          }
          else
          {
            if ( strcasecmp(v2, "false") )
              return idcv_long(a1);
            free_idcv(a1);
            *(_QWORD *)(a1 + 8) = 0;
          }
          return 0;
        }
        return set_qerrno(80);
      case 0xA:
        if ( deref_idcv(a1, 2) )
          continue;
        return get_qerrno(a1);
      default:
        return set_qerrno(1531);
    }
  }
}
