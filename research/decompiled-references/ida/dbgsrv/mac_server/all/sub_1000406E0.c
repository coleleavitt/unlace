/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000406E0
// Address: 0x00000001000406E0

//----- (00000001000406E0) ----------------------------------------------------
__int64 __fastcall sub_1000406E0(__int64 a1, __int64 a2)
{
  signed __int8 *v2; // r14
  unsigned int v3; // ebx
  unsigned __int8 v4; // cl
  signed __int8 v5; // al
  int v6; // eax

  v2 = (signed __int8 *)a1;
  v3 = -1;
  if ( deref_idcv((unsigned __int8 *)a1, 2) && deref_idcv((unsigned __int8 *)a2, 2) )
  {
    v4 = *(_BYTE *)a1;
    v5 = *(_BYTE *)a2;
    if ( *(_BYTE *)a1 == *(_BYTE *)a2 )
    {
      return (unsigned int)*(signed __int8 *)a1;
    }
    else if ( ((unsigned __int8)(v4 - 1) < 3u || v4 == 9 || v4 == 7)
           && ((unsigned __int8)(v5 - 1) < 3u || v5 == 9 || v5 == 7) )
    {
      switch ( v4 )
      {
        case 2u:
          switch ( v5 )
          {
            case 2:
              return (unsigned int)v5;
            case 3:
              goto LABEL_21;
            case 7:
              if ( !*(_QWORD *)(a1 + 8) )
                goto LABEL_31;
              v6 = idcv_long((unsigned __int8 *)a2);
              break;
            case 9:
              goto LABEL_27;
            default:
              goto LABEL_23;
          }
          goto LABEL_22;
        case 3u:
          a1 = a2;
LABEL_21:
          v6 = idcv_float((unsigned __int8 *)a1);
          goto LABEL_22;
        case 7u:
          switch ( v5 )
          {
            case 2:
              if ( !*(_QWORD *)(a2 + 8) )
                goto LABEL_30;
              v6 = idcv_long((unsigned __int8 *)a1);
              break;
            case 3:
              goto LABEL_21;
            case 7:
              return (unsigned int)v5;
            case 9:
              if ( *(_QWORD *)(a2 + 8) )
LABEL_27:
                v6 = idcv_int64((unsigned __int8 *)a1);
              else
LABEL_30:
                v6 = idcv_string(a2);
              break;
            default:
              goto LABEL_23;
          }
          goto LABEL_22;
        case 9u:
          switch ( v5 )
          {
            case 2:
              goto LABEL_29;
            case 3:
              goto LABEL_21;
            case 7:
              if ( *(_QWORD *)(a1 + 8) )
LABEL_29:
                v6 = idcv_int64((unsigned __int8 *)a2);
              else
LABEL_31:
                v6 = idcv_string(a1);
              break;
            case 9:
              return (unsigned int)v5;
            default:
              goto LABEL_23;
          }
LABEL_22:
          if ( v6 )
            goto LABEL_23;
          return (unsigned int)*v2;
        default:
LABEL_23:
          set_qerrno();
          return v3;
      }
    }
  }
  return v3;
}
