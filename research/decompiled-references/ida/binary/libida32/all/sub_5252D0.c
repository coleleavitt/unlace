__int64 __fastcall sub_5252D0(
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
  __int64 v15; // rdx
  unsigned __int8 v16; // dl
  __int64 v17; // rax

  v10 = *a1;
  v11 = *(_QWORD *)(*a1 + 1632);
  if ( a3 == 5 )
  {
    v13 = (_QWORD **)sub_51B8E0(*(_QWORD *)(v10 + 1632), a2);
    if ( v13 )
      return sub_5246C0(v13, *a1, a3, a2, a4, a5, a6, a7);
    return 0;
  }
  if ( a2 > 0xFF )
  {
    sub_525DE0(*(_QWORD *)(v10 + 1632));
    v12 = (__int64 *)v11;
    if ( a3 )
      goto LABEL_5;
    return (int)sub_524350(v12, a2);
  }
  if ( (a2 & 0xF) > 9 )
  {
    if ( !under_debugger )
      interr(933);
LABEL_48:
    BUG();
  }
  v12 = *(__int64 **)(*a1 + 1632);
  if ( !a3 )
    return (int)sub_524350(v12, a2);
LABEL_5:
  v13 = (_QWORD **)sub_51B8E0((__int64)v12, a2);
  if ( v13 )
    return sub_5246C0(v13, *a1, a3, a2, a4, a5, a6, a7);
  if ( a3 > 24 )
  {
    if ( a3 > 300 )
    {
      result = -5;
      if ( a3 == 305 )
        return result;
      if ( a3 <= 305 )
        return -(__int64)(a3 > 302);
      if ( (unsigned int)(a3 - 306) > 8 )
        goto LABEL_44;
    }
    else if ( a3 <= 289 )
    {
      if ( a3 == 289 )
      {
LABEL_23:
        if ( a2 > 0xFF )
        {
          v17 = sub_51B750(v11, a2);
          ++*(_DWORD *)(v17 + 64);
        }
        return a2;
      }
    }
    else
    {
      v15 = 1LL << ((unsigned __int8)a3 - 34);
      if ( (v15 & 0x147) == 0 )
      {
        result = -5;
        if ( (v15 & 0x38) != 0 )
          return result;
        result = 0xFFFFFFFFLL;
        if ( (v15 & 0x680) != 0 )
          return result;
      }
    }
    return 0;
  }
  if ( a3 > 15 )
  {
    if ( ((1LL << a3) & 0x15A0000) == 0 )
    {
      if ( ((1LL << a3) & 0xA10000) != 0 )
        return -1;
      if ( a3 == 18 )
        return (unsigned __int8)a2;
    }
    return 0;
  }
  if ( (unsigned int)(a3 - 1) > 0xE )
  {
LABEL_44:
    if ( !under_debugger )
      interr(887);
    goto LABEL_48;
  }
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
      goto LABEL_23;
    case 12:
    case 14:
      return -1;
    case 15:
      if ( (a2 & 0x3F) == 0x29 && (unsigned __int8)sub_614FB0(*a1, 66) == 16 )
        result = 12;
      else
        result = sub_54C420((unsigned __int8)a2);
      break;
    default:
      return (unsigned __int8)a2;
  }
  return result;
}

