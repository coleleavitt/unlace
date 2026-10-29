unsigned __int64 __fastcall sub_69E150(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  switch ( *a1 & 0xF )
  {
    case 0LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      result = v5[0];
      goto LABEL_4;
    case 1LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = (__int64)&loc_600000;
      goto LABEL_3;
    case 2LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = (__int64)&loc_700000;
      goto LABEL_3;
    case 3LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = (__int64)&stru_100000;
      goto LABEL_3;
    case 4LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = 0x200000;
      goto LABEL_3;
    case 5LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = 12582912;
      goto LABEL_3;
    case 6LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = 3145728;
      goto LABEL_3;
    case 7LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = (__int64)&loc_400000;
      goto LABEL_3;
    case 8LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = 0x800000;
      goto LABEL_3;
    case 9LL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = 5242880;
      goto LABEL_3;
    case 0xALL:
      return 1342178304;
    case 0xBLL:
      v5[0] = 0;
      get_idainfo_by_type(0, v5, 0, a2, 0);
      v2 = (__int64)&loc_A00000;
LABEL_3:
      result = v2 | v5[0] & 0xFFFFFFFFFF0FFFFFLL;
LABEL_4:
      v4 = *a1;
      if ( (*a1 & 0x100) != 0 || (*a1 & 0xF) == 8 && (v4 & 0x400) != 0 )
        result |= 0x20000u;
      if ( (v4 & 0x200) != 0 )
        result |= 0x40000u;
      break;
    case 0xCLL:
      result = 0xDDDDDDDDD00400LL;
      break;
    default:
      if ( !under_debugger )
        interr(2923);
      BUG();
  }
  return result;
}

