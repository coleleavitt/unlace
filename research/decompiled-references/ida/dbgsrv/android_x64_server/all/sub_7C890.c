/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C890
// Address: 0x000000000007C890

//----- (000000000007C890) ----------------------------------------------------
__int64 __fastcall sub_7C890(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  unsigned int v5; // r14d
  char v6; // al
  char v7; // cl
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rdi

  v5 = -1;
  if ( deref_idcv((char *)a1, 2, a3, a4) && deref_idcv((char *)a2, 2, a3, a4) )
  {
    v6 = *(_BYTE *)a1;
    v7 = *(_BYTE *)a2;
    if ( *(_BYTE *)a1 == *(_BYTE *)a2 )
    {
      return (unsigned int)v6;
    }
    else if ( ((unsigned __int8)(v6 - 1) < 3u || v6 == 9 || v6 == 7)
           && ((unsigned __int8)(v7 - 1) < 3u || v7 == 9 || v7 == 7) )
    {
      v8 = 61;
      switch ( v6 )
      {
        case 2:
          switch ( *(_BYTE *)a2 )
          {
            case 2:
              return (unsigned int)v6;
            case 3:
              goto LABEL_20;
            case 7:
              if ( !*(_QWORD *)(a1 + 8) )
                goto LABEL_31;
              v9 = idcv_long(a2, a3, a4);
              break;
            case 9:
              goto LABEL_27;
            default:
              goto LABEL_23;
          }
          goto LABEL_22;
        case 3:
          v10 = a2;
LABEL_21:
          v9 = idcv_float(v10, a3, a4);
          goto LABEL_22;
        case 7:
          switch ( *(_BYTE *)a2 )
          {
            case 2:
              if ( !*(_QWORD *)(a2 + 8) )
                goto LABEL_30;
              v9 = idcv_long(a1, a3, a4);
              break;
            case 3:
              goto LABEL_20;
            case 7:
              return (unsigned int)v6;
            case 9:
              if ( *(_QWORD *)(a2 + 8) )
LABEL_27:
                v9 = idcv_int64(a1, a3, a4);
              else
LABEL_30:
                v9 = idcv_string(a2, a3, a4);
              break;
            default:
              goto LABEL_23;
          }
          goto LABEL_22;
        case 9:
          switch ( *(_BYTE *)a2 )
          {
            case 2:
              goto LABEL_29;
            case 3:
LABEL_20:
              v10 = a1;
              goto LABEL_21;
            case 7:
              if ( *(_QWORD *)(a1 + 8) )
LABEL_29:
                v9 = idcv_int64(a2, a3, a4);
              else
LABEL_31:
                v9 = idcv_string(a1, a3, a4);
              break;
            case 9:
              return (unsigned int)v6;
            default:
              goto LABEL_23;
          }
LABEL_22:
          v8 = v9;
          if ( v9 )
            goto LABEL_23;
          return (unsigned int)*(char *)a1;
        default:
LABEL_23:
          set_qerrno(v8);
          return v5;
      }
    }
  }
  return v5;
}
