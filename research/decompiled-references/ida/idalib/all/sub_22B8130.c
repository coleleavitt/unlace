unsigned __int64 __fastcall sub_22B8130(int a1, int *a2, char a3)
{
  unsigned __int64 result; // rax
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi

  switch ( a1 )
  {
    case 5:
    case 27:
      v8 = *a2;
      if ( v8 == 19 && (a2[1] & 0x7FFFFFFF) == 0 && (a2[2] & 0x7FFFFFFF) == 0 && (a2[3] & 0x7FFFFFFF) == 0 )
        goto LABEL_30;
      if ( a3 )
        goto LABEL_2;
      result = sub_2257B10((__int64)a2, v8 + 7);
      break;
    case 9:
      v7 = *a2;
      if ( v7 == 10 )
      {
        if ( ((a2[1] ^ 0x80000010) & 0x7FFFFFFF) == 0 && (a2[2] & 0x7FFFFFFF) == 0 && (a2[3] & 0x7FFFFFFF) == 0 )
          return 0x800000000000000BLL;
      }
      else if ( v7 == 16 && (a2[1] & 0x7FFFFFFF) == 0 && (a2[2] & 0x7FFFFFFF) == 0 && (a2[3] & 0x7FFFFFFF) == 0 )
      {
        goto LABEL_30;
      }
      if ( a3 )
        goto LABEL_2;
      result = sub_2257B10((__int64)a2, v7 + 10);
      break;
    case 28:
      v6 = *a2;
      if ( v6 == 12 && (a2[1] & 0x7FFFFFFF) == 0 && (a2[2] & 0x7FFFFFFF) == 0 && (a2[3] & 0x7FFFFFFF) == 0 )
        goto LABEL_30;
      if ( a3 )
        goto LABEL_2;
      result = sub_2257B10((__int64)a2, v6 + 14);
      break;
    case 31:
      v5 = *a2;
      if ( v5 != 3 || (a2[1] & 0x7FFFFFFF) != 0 || (a2[2] & 0x7FFFFFFF) != 0 || (a2[3] & 0x7FFFFFFF) != 0 )
      {
        if ( a3 )
          goto LABEL_2;
        result = sub_2257B10((__int64)a2, v5 + 23);
      }
      else
      {
LABEL_30:
        result = 0x800000000000001ALL;
      }
      break;
    default:
LABEL_2:
      result = *(_QWORD *)a2;
      break;
  }
  return result;
}
