__int64 __fastcall google_breakpad::ConvertUTF8toUTF32(
        char **a1,
        unsigned __int64 a2,
        unsigned __int64 **a3,
        unsigned __int64 a4,
        int a5)
{
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rax
  _TBYTE v18; // [rsp+36h] [rbp-22h]
  unsigned __int64 v19; // [rsp+38h] [rbp-20h]
  unsigned __int64 *v20; // [rsp+40h] [rbp-18h]
  char *v21; // [rsp+48h] [rbp-10h]
  unsigned int v22; // [rsp+54h] [rbp-4h]

  v22 = 0;
  v21 = *a1;
  v20 = *a3;
  while ( (unsigned __int64)v21 < a2 )
  {
    HIWORD(v18) = 0;
    *(_QWORD *)&v18 = (unsigned __int16)byte_1DB0A0[(unsigned __int8)*v21];
    if ( a2 <= (unsigned __int64)&v21[LOWORD(v18)] )
    {
      v22 = 1;
      break;
    }
    if ( !sub_1C2A9F(v21, (unsigned int)LOWORD(v18) + 1) )
    {
      v22 = 3;
      break;
    }
    switch ( LOWORD(v18) )
    {
      case 0:
        goto LABEL_13;
      case 1:
        goto LABEL_12;
      case 2:
        goto LABEL_11;
      case 3:
        goto LABEL_10;
      case 4:
        goto LABEL_9;
      case 5:
        v5 = v21++;
        *(_QWORD *)((char *)&v18 + 2) = ((unsigned __int8)*v5 + *(_QWORD *)((char *)&v18 + 2)) << 6;
LABEL_9:
        v6 = v21++;
        *(_QWORD *)((char *)&v18 + 2) = ((unsigned __int8)*v6 + *(_QWORD *)((char *)&v18 + 2)) << 6;
LABEL_10:
        v7 = v21++;
        *(_QWORD *)((char *)&v18 + 2) = ((unsigned __int8)*v7 + *(_QWORD *)((char *)&v18 + 2)) << 6;
LABEL_11:
        v8 = v21++;
        *(_QWORD *)((char *)&v18 + 2) = ((unsigned __int8)*v8 + *(_QWORD *)((char *)&v18 + 2)) << 6;
LABEL_12:
        v9 = v21++;
        *(_QWORD *)((char *)&v18 + 2) = ((unsigned __int8)*v9 + *(_QWORD *)((char *)&v18 + 2)) << 6;
LABEL_13:
        v10 = v21++;
        *(_QWORD *)((char *)&v18 + 2) += (unsigned __int8)*v10;
        break;
      default:
        break;
    }
    v19 = *(_QWORD *)((char *)&v18 + 2) - qword_1DB1A0[LOWORD(v18)];
    if ( (unsigned __int64)v20 >= a4 )
    {
      v21 += ~(unsigned __int64)LOWORD(v18);
      v22 = 2;
      break;
    }
    if ( v19 > 0x10FFFF )
    {
      v22 = 3;
      v13 = v20++;
      *v13 = 65533;
    }
    else if ( v19 <= 0xD7FF || v19 > 0xDFFF )
    {
      v12 = v20++;
      *v12 = v19;
    }
    else
    {
      if ( !a5 )
      {
        v21 += ~(unsigned __int64)LOWORD(v18);
        v22 = 3;
        break;
      }
      v11 = v20++;
      *v11 = 65533;
    }
  }
  *a1 = v21;
  *a3 = v20;
  return v22;
}

