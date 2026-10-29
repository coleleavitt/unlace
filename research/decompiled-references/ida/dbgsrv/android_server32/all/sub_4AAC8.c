/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AAC8
// Address: 0x0004AAC8

//----- (0004AAC8) --------------------------------------------------------
int __fastcall sub_4AAC8(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v4; // r4
  int v5; // r1
  int v6; // r0
  unsigned int v8; // r3
  int v9; // r2
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0

  v4 = -1;
  if ( deref_idcv(a1, 2) && deref_idcv(a2, 2) )
  {
    v5 = *a2;
    v6 = *a1;
    if ( v6 == v5 )
    {
      return *a1;
    }
    else if ( (unsigned __int8)(v6 - 1) < 3u || v6 == 9 || v6 == 7 )
    {
      v8 = (unsigned __int8)(v5 - 1);
      if ( v8 < 3 || v5 == 9 || v5 == 7 )
      {
        v9 = v6 - 2;
        v10 = 61;
        switch ( v9 )
        {
          case 0:
            v9 = v5 - 2;
            switch ( *a2 )
            {
              case 2u:
                return v5;
              case 3u:
                goto LABEL_24;
              case 7u:
                if ( !*((_DWORD *)a1 + 2) )
                  goto LABEL_34;
                v11 = (int)a2;
                break;
              case 9u:
                goto LABEL_28;
              default:
                goto LABEL_26;
            }
LABEL_21:
            v10 = idcv_long(v11);
            if ( !v10 )
              return *a1;
            goto LABEL_26;
          case 1:
            v12 = (int)a2;
LABEL_25:
            v10 = idcv_float(v12, v5, v9, v8);
            if ( v10 )
              goto LABEL_26;
            return *a1;
          case 5:
            v9 = v5 - 2;
            switch ( *a2 )
            {
              case 2u:
                if ( !*((_DWORD *)a2 + 2) )
                  goto LABEL_33;
                v11 = (int)a1;
                goto LABEL_21;
              case 3u:
                goto LABEL_24;
              case 7u:
                return v5;
              case 9u:
                if ( *((_QWORD *)a2 + 1) )
                {
LABEL_28:
                  v13 = (int)a1;
                  goto LABEL_31;
                }
LABEL_33:
                v14 = (int)a2;
                break;
              default:
                goto LABEL_26;
            }
LABEL_35:
            v10 = idcv_string(v14);
            if ( v10 )
              goto LABEL_26;
            return *a1;
          case 7:
            v9 = v5 - 2;
            switch ( *a2 )
            {
              case 2u:
                goto LABEL_30;
              case 3u:
LABEL_24:
                v12 = (int)a1;
                goto LABEL_25;
              case 7u:
                if ( !*((_QWORD *)a1 + 1) )
                {
LABEL_34:
                  v14 = (int)a1;
                  goto LABEL_35;
                }
LABEL_30:
                v13 = (int)a2;
LABEL_31:
                v10 = idcv_int64(v13);
                if ( !v10 )
                  return *a1;
                goto LABEL_26;
              case 9u:
                return v5;
              default:
                goto LABEL_26;
            }
          default:
LABEL_26:
            set_qerrno(v10);
            return -1;
        }
      }
    }
  }
  return v4;
}
