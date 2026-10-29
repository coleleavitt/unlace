/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77588
// Address: 0x0000000000077588

//----- (0000000000077588) ----------------------------------------------------
__int64 __fastcall sub_77588(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned int v4; // w8
  int v5; // w9
  unsigned int v6; // w0
  int8x16x2_t v8; // 0:q0.32

  if ( !deref_idcv(a1, 2) || !deref_idcv(a2, 2) )
    return (unsigned int)-1;
  v4 = *a1;
  v5 = *a2;
  if ( v4 == v5 )
    return v4;
  if ( v4 - 1 >= 3 && v4 != 9 && v4 != 7 || (unsigned int)(v5 - 1) >= 3 && v5 != 9 && v5 != 7 )
    return (unsigned int)-1;
  v6 = 61;
  switch ( *a1 )
  {
    case 2u:
      v6 = 61;
      v4 = *a2;
      switch ( *a2 )
      {
        case 2u:
          return v4;
        case 3u:
          goto LABEL_24;
        case 7u:
          if ( !*((_QWORD *)a1 + 1) )
            goto LABEL_34;
          v6 = idcv_long((__int64)a2, v8);
          if ( !v6 )
            goto LABEL_31;
          goto LABEL_25;
        case 9u:
          goto LABEL_27;
        default:
          goto LABEL_25;
      }
    case 3u:
      v6 = idcv_float((__int64)a2, v8);
      if ( !v6 )
        goto LABEL_31;
      goto LABEL_25;
    case 7u:
      v6 = 61;
      v4 = *a2;
      switch ( *a2 )
      {
        case 2u:
          if ( !*((_QWORD *)a2 + 1) )
            goto LABEL_32;
          v6 = idcv_long((__int64)a1, v8);
          if ( !v6 )
            goto LABEL_31;
          goto LABEL_25;
        case 3u:
          goto LABEL_24;
        case 7u:
          return v4;
        case 9u:
          if ( *((_QWORD *)a2 + 1) )
          {
LABEL_27:
            v6 = idcv_int64((__int64)a1, v8);
            if ( v6 )
              goto LABEL_25;
          }
          else
          {
LABEL_32:
            v6 = idcv_string((__int64)a2);
            if ( v6 )
              goto LABEL_25;
          }
          break;
        default:
          goto LABEL_25;
      }
      goto LABEL_31;
    case 9u:
      v6 = 61;
      v4 = *a2;
      switch ( *a2 )
      {
        case 2u:
          goto LABEL_30;
        case 3u:
LABEL_24:
          v6 = idcv_float((__int64)a1, v8);
          if ( v6 )
            goto LABEL_25;
          break;
        case 7u:
          if ( *((_QWORD *)a1 + 1) )
          {
LABEL_30:
            v6 = idcv_int64((__int64)a2, v8);
            if ( v6 )
              goto LABEL_25;
          }
          else
          {
LABEL_34:
            v6 = idcv_string((__int64)a1);
            if ( v6 )
              goto LABEL_25;
          }
          break;
        case 9u:
          return v4;
        default:
          goto LABEL_25;
      }
LABEL_31:
      v4 = *a1;
      break;
    default:
LABEL_25:
      set_qerrno(v6);
      v4 = -1;
      break;
  }
  return v4;
}
// 77654: variable 'v8' is possibly undefined
