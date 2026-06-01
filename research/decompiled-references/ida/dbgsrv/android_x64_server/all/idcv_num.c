/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_num
// Address: 0x00000000000732C0

//----- (00000000000732C0) ----------------------------------------------------
__int64 __fastcall idcv_num(__int64 a1, double a2, __m128 a3)
{
  const char *v4; // r14

  if ( !a1 )
    return set_qerrno(0x5FBu);
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((char *)a1, 2, a2, a3) )
      return get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
    case 9:
      return 0;
    case 3:
      return idcv_long(a1, a2, a3);
    case 7:
      v4 = *(const char **)(a1 + 8);
      if ( v4 && *v4 )
      {
        if ( !strcasecmp(*(const char **)(a1 + 8), "true") )
        {
          free_idcv((char *)a1, a2, a3);
          *(_QWORD *)(a1 + 8) = 1;
        }
        else
        {
          if ( strcasecmp(v4, "false") )
            return idcv_long(a1, a2, a3);
          free_idcv((char *)a1, a2, a3);
          *(_QWORD *)(a1 + 8) = 0;
        }
        return 0;
      }
      return set_qerrno(0x50u);
    default:
      return set_qerrno(0x5FBu);
  }
}
