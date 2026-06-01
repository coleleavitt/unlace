__int64 __fastcall sub_1ACAAD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        _WORD *a6,
        double a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  __int64 result; // rax
  char v15; // di
  __int64 v16; // rax
  char v17; // dl
  _WORD *v18; // r8
  char v19; // cl
  __int64 v20; // rsi
  char v21; // r9
  char v22; // r8
  unsigned int v23; // eax

  switch ( a4 )
  {
    case 7:
      v15 = *(_BYTE *)(a1 + 8);
      v16 = 1LL << *(_BYTE *)(a1 + 8);
      if ( (v16 & 0x100201) != 0 )
      {
        v18 = a6;
        v19 = a5;
        v17 = v15;
        v20 = 7;
        goto LABEL_14;
      }
      if ( (v16 & 0x804) == 0 )
      {
        if ( (unsigned __int8)a5 > 1u )
          goto LABEL_10;
        v21 = v15;
        v22 = 7;
        goto LABEL_17;
      }
      result = (__int64)sub_1ACA750((__int64 *)a1, a2, a3, 7, v15, a5, a7, a6);
      break;
    case 8:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 20:
      result = 1;
      break;
    case 9:
      v17 = *(_BYTE *)(a1 + 8);
      v18 = a6;
      v19 = a5;
      v20 = 9;
LABEL_14:
      result = sub_1AC72E0((__int64 *)a1, v20, v17, v19, v18, (int)a6, a7, a8, a9, a10, a11);
      break;
    case 10:
      if ( (unsigned __int8)a5 <= 1u )
      {
        v21 = *(_BYTE *)(a1 + 8);
        v22 = 10;
        goto LABEL_17;
      }
LABEL_10:
      if ( a5 != 2 || (*a6 & 0x1FF) != 0x19 )
        goto LABEL_22;
      result = (__int64)a6;
      break;
    case 11:
      result = (__int64)sub_1ACA750((__int64 *)a1, a2, a3, 11, *(_BYTE *)(a1 + 8), a5, a7, a6);
      break;
    case 19:
      if ( a5 == 1 )
      {
        result = 1;
        if ( a6 )
          result = sub_1AC5100((__int64 *)a1, (unsigned __int64)a6, a7);
      }
      else if ( !a5 || a5 == 2 )
      {
        v21 = *(_BYTE *)(a1 + 8);
        v22 = 19;
LABEL_17:
        result = sub_1AC6E80((__int64 *)a1, (unsigned __int64)a6, a5, 29, v22, v21, a7);
      }
      else
      {
LABEL_22:
        v23 = sub_EEB7E0((unsigned __int64)a6, a2, a7);
        result = sub_1AA2500((_QWORD *)a1, 20, 29, v23, (__int64)a6);
      }
      break;
  }
  return result;
}
