__int64 __fastcall idcv_num(__int64 a1, char *a2)
{
  const char *v3; // rbp

  if ( !a1 )
    return set_qerrno(1531, a2);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
      case 9:
        return 0;
      case 3:
        return idcv_long(a1, a2);
      case 7:
        v3 = *(const char **)(a1 + 8);
        if ( v3 && *v3 )
        {
          if ( !strcasecmp(*(const char **)(a1 + 8), "true") )
          {
            free_idcv(a1);
            *(_DWORD *)(a1 + 8) = 1;
          }
          else
          {
            a2 = "false";
            if ( strcasecmp(v3, "false") )
              return idcv_long(a1, a2);
            free_idcv(a1);
            *(_DWORD *)(a1 + 8) = 0;
          }
          return 0;
        }
        return set_qerrno(80, a2);
      case 0xA:
        a2 = (_BYTE *)(&dword_0 + 2);
        if ( deref_idcv(a1, 2) )
          continue;
        return get_qerrno(a1);
      default:
        return set_qerrno(1531, a2);
    }
  }
}

