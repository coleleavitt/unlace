/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63B60
// Address: 0x00063B60

//----- (00063B60) --------------------------------------------------------
int __fastcall sub_63B60(char *a1, int a2)
{
  int v3; // edi
  char v4; // cl
  char v5; // dl
  int v6; // eax

  v3 = -1;
  if ( deref_idcv(a1, 2) && deref_idcv((char *)a2, 2) )
  {
    v4 = *a1;
    v5 = *(_BYTE *)a2;
    if ( *a1 == *(_BYTE *)a2 )
    {
      return v4;
    }
    else if ( ((unsigned __int8)(v4 - 1) < 3u || v4 == 9 || v4 == 7)
           && ((unsigned __int8)(v5 - 1) < 3u || v5 == 9 || v5 == 7) )
    {
      v6 = 61;
      switch ( v4 )
      {
        case 2:
          switch ( *(_BYTE *)a2 )
          {
            case 2:
              return v4;
            case 3:
              goto LABEL_22;
            case 7:
              if ( !*((_DWORD *)a1 + 1) )
                goto LABEL_33;
              v6 = idcv_long(a2);
              break;
            case 9:
              goto LABEL_27;
            default:
              goto LABEL_24;
          }
LABEL_19:
          if ( !v6 )
            return *a1;
          goto LABEL_24;
        case 3:
          v6 = idcv_float(a2);
LABEL_23:
          if ( v6 )
            goto LABEL_24;
          return *a1;
        case 7:
          switch ( *(_BYTE *)a2 )
          {
            case 2:
              if ( !*(_DWORD *)(a2 + 4) )
                goto LABEL_32;
              v6 = idcv_long((int)a1);
              goto LABEL_19;
            case 3:
              goto LABEL_22;
            case 7:
              return v4;
            case 9:
              if ( *(_QWORD *)(a2 + 4) )
              {
LABEL_27:
                v6 = idcv_int64((int)a1);
                goto LABEL_30;
              }
LABEL_32:
              v6 = idcv_string(a2);
              break;
            default:
              goto LABEL_24;
          }
LABEL_34:
          if ( v6 )
            goto LABEL_24;
          return *a1;
        case 9:
          switch ( *(_BYTE *)a2 )
          {
            case 2:
              goto LABEL_29;
            case 3:
LABEL_22:
              v6 = idcv_float((int)a1);
              goto LABEL_23;
            case 7:
              if ( !*(_QWORD *)(a1 + 4) )
              {
LABEL_33:
                v6 = idcv_string((int)a1);
                goto LABEL_34;
              }
LABEL_29:
              v6 = idcv_int64(a2);
LABEL_30:
              if ( !v6 )
                return *a1;
              goto LABEL_24;
            case 9:
              return v4;
            default:
              goto LABEL_24;
          }
        default:
LABEL_24:
          set_qerrno(v6);
          return -1;
      }
    }
  }
  return v3;
}
