__int64 __fastcall sub_193F0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 result; // rax
  unsigned __int16 v12; // ax
  int v13; // edx
  const char *v14; // r8
  int v15; // ecx
  int v16; // esi
  __int64 v17; // [rsp+0h] [rbp-30h]

  switch ( a2 )
  {
    case 14:
    case 17:
      v15 = 4;
      LODWORD(v14) = 0;
      v13 = 0;
      v16 = 1;
      goto LABEL_4;
    case 15:
      v15 = 4;
      LODWORD(v14) = 0;
      v13 = 1;
      v16 = 8;
      goto LABEL_4;
    case 16:
      v15 = 4;
      LODWORD(v14) = 0;
      v13 = 0;
      v16 = 8;
      goto LABEL_4;
    case 18:
    case 24:
      v15 = 4;
      LODWORD(v14) = 0;
      v13 = 0;
      v16 = 6;
      goto LABEL_4;
    case 19:
    case 28:
      v15 = 4;
      LODWORD(v14) = 0;
      v13 = 0;
      v16 = 7;
      goto LABEL_4;
    case 20:
    case 21:
    case 22:
    case 23:
    case 25:
    case 26:
    case 27:
    case 29:
    case 30:
    case 31:
      return 0;
    case 32:
    case 36:
      v15 = 4;
      LODWORD(v14) = 0;
      v13 = 0;
      v16 = 2;
      goto LABEL_4;
    case 33:
      v15 = 4;
      LODWORD(v14) = 0;
      v13 = 0;
      v16 = 9;
      goto LABEL_4;
    case 34:
    case 37:
      v17 = a6;
      v12 = sub_43FB0(*(_QWORD *)(a1 + 8));
      a6 = v17;
      v13 = 0;
      v14 = "PTPOFF";
      v15 = v12;
      v16 = 3;
      goto LABEL_4;
    case 35:
      v15 = 4;
      LODWORD(v14) = 0;
      v13 = 0;
      v16 = 4;
LABEL_4:
      sub_2EE90(a1, v16, v13, v15, (_DWORD)v14, a3, a4, a5, a6, a7, a8);
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

