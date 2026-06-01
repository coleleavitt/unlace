__int64 __fastcall google_breakpad::ConvertUTF8toUTF16(
        char **a1,
        unsigned __int64 a2,
        _WORD **a3,
        unsigned __int64 a4,
        int a5)
{
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  _WORD *v11; // rax
  _WORD *v12; // rax
  _WORD *v13; // rax
  _WORD *v14; // rax
  _TBYTE v19; // [rsp+36h] [rbp-22h]
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]
  _WORD *v22; // [rsp+40h] [rbp-18h]
  char *v23; // [rsp+48h] [rbp-10h]
  unsigned int v24; // [rsp+54h] [rbp-4h]

  v24 = 0;
  v23 = *a1;
  v22 = *a3;
  while ( (unsigned __int64)v23 < a2 )
  {
    HIWORD(v19) = 0;
    *(_QWORD *)&v19 = (unsigned __int16)byte_1DB0A0[(unsigned __int8)*v23];
    if ( a2 <= (unsigned __int64)&v23[LOWORD(v19)] )
    {
      v24 = 1;
      break;
    }
    if ( !sub_1C2A9F(v23, (unsigned int)LOWORD(v19) + 1) )
    {
      v24 = 3;
      break;
    }
    if ( LOWORD(v19) <= 5u )
    {
      switch ( LOWORD(v19) )
      {
        case 0:
          goto LABEL_14;
        case 1:
          goto LABEL_13;
        case 2:
          goto LABEL_12;
        case 3:
          goto LABEL_11;
        case 4:
          goto LABEL_10;
        case 5:
          v5 = v23++;
          *(_QWORD *)((char *)&v19 + 2) = ((unsigned __int8)*v5 + *(_QWORD *)((char *)&v19 + 2)) << 6;
LABEL_10:
          v6 = v23++;
          *(_QWORD *)((char *)&v19 + 2) = ((unsigned __int8)*v6 + *(_QWORD *)((char *)&v19 + 2)) << 6;
LABEL_11:
          v7 = v23++;
          *(_QWORD *)((char *)&v19 + 2) = ((unsigned __int8)*v7 + *(_QWORD *)((char *)&v19 + 2)) << 6;
LABEL_12:
          v8 = v23++;
          *(_QWORD *)((char *)&v19 + 2) = ((unsigned __int8)*v8 + *(_QWORD *)((char *)&v19 + 2)) << 6;
LABEL_13:
          v9 = v23++;
          *(_QWORD *)((char *)&v19 + 2) = ((unsigned __int8)*v9 + *(_QWORD *)((char *)&v19 + 2)) << 6;
LABEL_14:
          v10 = v23++;
          *(_QWORD *)((char *)&v19 + 2) += (unsigned __int8)*v10;
          break;
      }
    }
    v20 = *(_QWORD *)((char *)&v19 + 2) - qword_1DB1A0[LOWORD(v19)];
    if ( (unsigned __int64)v22 >= a4 )
    {
      v23 += ~(unsigned __int64)LOWORD(v19);
      v24 = 2;
      break;
    }
    if ( v20 > 0xFFFF )
    {
      if ( v20 <= 0x10FFFF )
      {
        if ( a4 <= (unsigned __int64)(v22 + 1) )
        {
          v23 += ~(unsigned __int64)LOWORD(v19);
          v24 = 2;
          break;
        }
        v21 = v20 - 0x10000;
        *v22 = (v21 >> 10) - 10240;
        v14 = v22 + 1;
        v22 += 2;
        *v14 = (v21 & 0x3FF) - 9216;
      }
      else
      {
        if ( !a5 )
        {
          v24 = 3;
          v23 += ~(unsigned __int64)LOWORD(v19);
          break;
        }
        v13 = v22++;
        *v13 = -3;
      }
    }
    else if ( v20 <= 0xD7FF || v20 > 0xDFFF )
    {
      v12 = v22++;
      *v12 = v20;
    }
    else
    {
      if ( !a5 )
      {
        v23 += ~(unsigned __int64)LOWORD(v19);
        v24 = 3;
        break;
      }
      v11 = v22++;
      *v11 = -3;
    }
  }
  *a1 = v23;
  *a3 = v22;
  return v24;
}

