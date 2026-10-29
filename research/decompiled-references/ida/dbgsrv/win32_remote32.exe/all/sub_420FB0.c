/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420FB0
// Address: 0x00420FB0

//----- (00420FB0) --------------------------------------------------------
int __usercall sub_420FB0@<eax>(int a1@<ebx>, char *a2, int a3)
{
  char v3; // al
  char v4; // dl
  int v5; // ecx
  int v6; // eax

  if ( !sub_4239C0(a2, 2) || !sub_4239C0((char *)a3, 2) )
    return -1;
  v3 = *a2;
  v4 = *(_BYTE *)a3;
  if ( *a2 != *(_BYTE *)a3 )
  {
    if ( (v3 >= 1 && v3 <= 3 || v3 == 7 || v3 == 9) && (v4 >= 1 && v4 <= 3 || v4 == 7 || v4 == 9) )
    {
      v5 = 61;
      switch ( v3 )
      {
        case 2:
          switch ( v4 )
          {
            case 2:
              return *a2;
            case 3:
              goto LABEL_19;
            case 7:
              if ( !*((_DWORD *)a2 + 2) )
                goto LABEL_22;
              v6 = sub_4247F0(a1, (char *)a3);
              break;
            case 9:
              goto LABEL_18;
            default:
              goto LABEL_29;
          }
          goto LABEL_28;
        case 3:
          v6 = sub_4245A0((char *)a3);
          goto LABEL_28;
        case 7:
          switch ( v4 )
          {
            case 2:
              if ( !*(_DWORD *)(a3 + 8) )
                goto LABEL_15;
              v6 = sub_4247F0(a1, a2);
              break;
            case 3:
              goto LABEL_19;
            case 7:
              return *a2;
            case 9:
              if ( *(_QWORD *)(a3 + 8) )
LABEL_18:
                v6 = sub_4246D0(a1, a3, a2);
              else
LABEL_15:
                v6 = sub_424980((char *)a3);
              break;
            default:
              goto LABEL_29;
          }
          goto LABEL_28;
        case 9:
          switch ( v4 )
          {
            case 2:
              goto LABEL_26;
            case 3:
LABEL_19:
              v6 = sub_4245A0(a2);
              break;
            case 7:
              if ( *((_QWORD *)a2 + 1) )
LABEL_26:
                v6 = sub_4246D0(a1, a3, (char *)a3);
              else
LABEL_22:
                v6 = sub_424980(a2);
              break;
            case 9:
              return *a2;
            default:
              goto LABEL_29;
          }
LABEL_28:
          v5 = v6;
          if ( v6 )
            goto LABEL_29;
          return *a2;
        default:
LABEL_29:
          sub_45CC20(v5);
          break;
      }
    }
    return -1;
  }
  return *a2;
}
