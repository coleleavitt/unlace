unsigned __int64 __fastcall sub_7973F0(unsigned __int8 *a1, char *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax

  if ( !deref_idcv(a1, 2) || !deref_idcv(a2, 2) )
    return 0xFFFFFFFFLL;
  v4 = *a1;
  result = (unsigned int)*a2;
  if ( (_BYTE)v4 == *a2 )
    return result;
  if ( (unsigned __int8)v4 > 9u )
    return 0xFFFFFFFFLL;
  v6 = 654;
  if ( !_bittest64(&v6, v4) || (unsigned __int8)*a2 > 9u || !_bittest64(&v6, result) )
    return 0xFFFFFFFFLL;
  if ( (_BYTE)v4 == 7 )
  {
    if ( *a2 == 7 )
      return result;
    if ( *a2 > 7 )
    {
      if ( *a2 != 9 )
        goto LABEL_16;
      if ( *((_QWORD *)a2 + 1) )
        goto LABEL_39;
    }
    else
    {
      if ( *a2 != 2 )
        goto LABEL_23;
      if ( *((_QWORD *)a2 + 1) )
      {
        v7 = idcv_long(a1);
        goto LABEL_13;
      }
    }
    v7 = idcv_string(a2, 2, v4, 654, v2, v3);
    goto LABEL_13;
  }
  if ( (char)v4 > 7 )
  {
    if ( (_BYTE)v4 != 9 )
      goto LABEL_16;
    if ( *a2 == 7 )
    {
      if ( !*((_QWORD *)a1 + 1) )
        goto LABEL_41;
    }
    else
    {
      if ( *a2 > 7 )
      {
        if ( *a2 == 9 )
          return result;
        goto LABEL_16;
      }
      if ( *a2 != 2 )
        goto LABEL_23;
    }
    v7 = idcv_int64(a2);
    goto LABEL_13;
  }
  if ( (_BYTE)v4 != 2 )
  {
    if ( (_BYTE)v4 == 3 )
    {
      v7 = idcv_float(a2);
      goto LABEL_13;
    }
LABEL_16:
    v7 = 61;
LABEL_17:
    set_qerrno(v7);
    return 0xFFFFFFFFLL;
  }
  if ( *a2 == 7 )
  {
    if ( *((_QWORD *)a1 + 1) )
    {
      v7 = idcv_long(a2);
      goto LABEL_13;
    }
LABEL_41:
    v7 = idcv_string(a1, 2, v4, 654, v2, v3);
    goto LABEL_13;
  }
  if ( *a2 > 7 )
  {
    if ( *a2 != 9 )
      goto LABEL_16;
LABEL_39:
    v7 = idcv_int64(a1);
    goto LABEL_13;
  }
  if ( *a2 != 2 )
  {
LABEL_23:
    if ( *a2 != 3 )
      goto LABEL_16;
    v7 = idcv_float(a1);
LABEL_13:
    if ( !v7 )
      return (unsigned int)(char)*a1;
    goto LABEL_17;
  }
  return result;
}
