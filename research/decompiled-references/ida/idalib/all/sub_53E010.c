__int64 __fastcall sub_53E010(
        __int64 *a1,
        unsigned __int64 a2,
        signed int a3,
        unsigned __int64 a4,
        const char *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 *v12; // rdi
  _QWORD **v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  __int64 v17; // rax

  v10 = *a1;
  v11 = *(_QWORD *)(*a1 + 1824);
  if ( a3 == 5 )
  {
    v13 = (_QWORD **)sub_534260(*(_QWORD *)(v10 + 1824), a2);
    if ( v13 )
      return sub_53D390(v13, *a1, a3, a2, a4, a5, a6, a7);
    return 0;
  }
  if ( a2 > 0xFF )
  {
    sub_53EAE0(*(_QWORD *)(v10 + 1824));
    v12 = (__int64 *)v11;
    if ( a3 )
      goto LABEL_5;
    return (int)sub_53D020(v12, a2);
  }
  if ( (a2 & 0xF) > 9 )
  {
    if ( !under_debugger )
      interr(933);
LABEL_44:
    BUG();
  }
  v12 = *(__int64 **)(*a1 + 1824);
  if ( !a3 )
    return (int)sub_53D020(v12, a2);
LABEL_5:
  v13 = (_QWORD **)sub_534260((__int64)v12, a2);
  if ( v13 )
    return sub_53D390(v13, *a1, a3, a2, a4, a5, a6, a7);
  if ( a3 > 15 )
  {
    if ( a3 > 314 )
    {
LABEL_25:
      if ( !under_debugger )
        interr(887);
      goto LABEL_44;
    }
    if ( a3 > 289 )
    {
      v15 = 1LL << ((unsigned __int8)a3 - 34);
      if ( (v15 & 0x1FF1947) == 0 )
      {
        if ( (v15 & 0x6680) == 0 )
        {
          if ( (v15 & 0x8038) != 0 )
            return -5;
          goto LABEL_25;
        }
        return -1;
      }
    }
    else if ( a3 > 24 )
    {
      if ( a3 == 289 )
      {
LABEL_29:
        if ( a2 > 0xFF )
        {
          v17 = sub_5340D0(v11, a2);
          ++*(_DWORD *)(v17 + 64);
        }
        return a2;
      }
    }
    else if ( ((1LL << a3) & 0x15A0000) == 0 )
    {
      if ( ((1LL << a3) & 0xA10000) == 0 )
      {
        if ( a3 == 18 )
          return (unsigned __int8)a2;
        goto LABEL_25;
      }
      return -1;
    }
    return 0;
  }
  if ( a3 <= 0 )
    goto LABEL_25;
  switch ( a3 )
  {
    case 3:
      result = 1;
      v16 = a2 & 0xF;
      if ( (a2 & 0xF) != 8 )
      {
        if ( v16 > 8u )
        {
          result = 2LL * (v16 == 10);
        }
        else
        {
          result = 0;
          if ( (unsigned __int8)(v16 - 2) <= 5u )
            result = ((a2 & 0x30) == 32) + 1LL;
        }
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
    case 13:
      return 0;
    case 10:
      goto LABEL_29;
    case 12:
    case 14:
      return -1;
    case 15:
      if ( (a2 & 0x3F) == 0x29 && (unsigned __int8)sub_631AD0(*a1, 66) == 16 )
        result = 12;
      else
        result = sub_565B80((unsigned __int8)a2);
      break;
    default:
      return (unsigned __int8)a2;
  }
  return result;
}
