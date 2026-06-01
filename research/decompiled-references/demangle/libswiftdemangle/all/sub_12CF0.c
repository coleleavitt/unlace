unsigned __int64 __fastcall sub_12CF0(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 result; // rax
  __int16 v3; // si
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rax

  v1 = a1[9];
  if ( v1 >= a1[8] )
    return 0;
  a1[9] = v1 + 1;
  switch ( *(_BYTE *)(a1[7] + v1) )
  {
    case 'a':
      result = sub_12C70(a1, 1);
      *(_WORD *)(result + 16) = 260;
      *(_BYTE *)(result + 18) = 0;
      return result;
    case 'b':
      result = sub_12C70(a1, 1);
      *(_WORD *)(result + 16) = 63;
      *(_BYTE *)(result + 18) = 0;
      return result;
    case 'c':
      v6 = sub_E0A0((__int64)a1);
      return sub_CD20(a1, 64, v6);
    case 'i':
      v3 = 121;
      v4 = sub_E0A0((__int64)a1);
      goto LABEL_6;
    case 'j':
      return sub_10DC0(a1);
    case 'k':
      v3 = 314;
      v4 = sub_E0A0((__int64)a1);
      goto LABEL_6;
    case 't':
      v3 = 319;
      v4 = sub_E0A0((__int64)a1);
LABEL_6:
      v5 = sub_CD20(a1, v3, v4);
      result = sub_CD20(a1, 221, v5);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
