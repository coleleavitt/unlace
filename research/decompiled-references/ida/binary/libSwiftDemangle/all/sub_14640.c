unsigned __int64 __fastcall sub_14640(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  char v2; // dl
  unsigned __int64 result; // rax
  int v4; // eax
  int v5; // r11d
  int v6; // eax

  v1 = a1[9];
  if ( v1 >= a1[8] )
    goto LABEL_7;
  v2 = *(_BYTE *)(a1[7] + v1);
  switch ( v2 )
  {
    case 'd':
      a1[9] = v1 + 1;
      sub_D180(a1);
      v4 = sub_D180(a1);
      return sub_10120(a1, v5 + 1, v4);
    case 'z':
      a1[9] = v1 + 1;
      return sub_10120(a1, 0, 0);
    case 's':
      a1[9] = v1 + 1;
      result = sub_12C70(a1, 1);
      *(_WORD *)(result + 16) = 82;
      *(_BYTE *)(result + 18) = 0;
      break;
    default:
LABEL_7:
      v6 = sub_D180(a1);
      return sub_10120(a1, 0, v6 + 1);
  }
  return result;
}

