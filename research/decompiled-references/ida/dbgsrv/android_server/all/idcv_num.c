/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_num
// Address: 0x000000000006F6A0

//----- (000000000006F6A0) ----------------------------------------------------
__int64 __fastcall idcv_num(__int64 a1, int8x16x2_t a2)
{
  unsigned int v4; // w0
  const char *v5; // x20

  if ( !a1 )
  {
LABEL_7:
    v4 = 1531;
    return set_qerrno(v4);
  }
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
      return idcv_long(a1, a2);
    case 7:
      v5 = *(const char **)(a1 + 8);
      if ( !v5 || !*v5 )
      {
        v4 = 80;
        return set_qerrno(v4);
      }
      if ( !strcasecmp(*(const char **)(a1 + 8), "true") )
      {
        free_idcv((__int64 *)a1);
        *(_QWORD *)(a1 + 8) = 1;
        return 0;
      }
      if ( !strcasecmp(v5, "false") )
      {
        free_idcv((__int64 *)a1);
        *(_QWORD *)(a1 + 8) = 0;
        return 0;
      }
      return idcv_long(a1, a2);
    default:
      goto LABEL_7;
  }
}
// 6F75C: variable 'a2' is possibly undefined
