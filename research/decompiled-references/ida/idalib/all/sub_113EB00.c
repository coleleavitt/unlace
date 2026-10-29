__int64 __fastcall sub_113EB00(_DWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // eax
  int v4; // esi
  __int64 result; // rax
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx

  v1 = sub_22B7480(a1);
  v3 = sub_229CB60(v1, v2);
  v4 = a1[11];
  switch ( v4 )
  {
    case 1:
    case 5:
    case 9:
    case 27:
    case 30:
    case 31:
      if ( a1[9] == 26 )
        goto LABEL_4;
      v6 = v3 - 6;
      result = 2;
      if ( v6 > 1 )
        goto LABEL_8;
      return result;
    case 3:
      if ( a1[12] != 7 )
        goto LABEL_8;
      goto LABEL_4;
    case 11:
      v7 = a1[12];
      if ( v7 == 7 )
        goto LABEL_4;
      result = 2 * (unsigned int)(v7 == 16) + 1;
      break;
    case 12:
    case 17:
      return 2;
    case 15:
      if ( a1[13] != 5 )
        goto LABEL_4;
      if ( (unsigned int)(a1[12] - 15) <= 1 )
        goto LABEL_4;
      v9 = sub_22B7480(a1);
      if ( (unsigned int)sub_229CC10(v9, v10) == 3 )
        goto LABEL_4;
      goto LABEL_8;
    case 28:
      goto LABEL_4;
    default:
      v8 = a1[12];
      if ( v8 == 49 || v4 == 39 )
      {
LABEL_8:
        result = 1;
      }
      else
      {
        result = 0;
        if ( v8 <= 0x16 )
        {
          result = 2;
          if ( ((1LL << v8) & 0x228060) == 0 )
          {
            result = 0;
            if ( ((1LL << v8) & 0x410180) != 0 )
LABEL_4:
              result = 3;
          }
        }
      }
      break;
  }
  return result;
}
