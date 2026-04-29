__int64 __fastcall sub_23910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi

  while ( 2 )
  {
    v6 = *(unsigned __int16 *)(a1 + 16);
    if ( (unsigned __int16)v6 <= 0xD9u )
    {
      if ( (unsigned __int16)v6 > 0xB3u )
      {
        a5 = 0;
        v10 = 1LL << ((unsigned __int8)v6 + 76);
        if ( (v10 & 0x2EFE6FFFDLL) == 0 )
        {
          a5 = 1;
          if ( (v10 & 0x3D10190000LL) == 0 )
          {
            if ( (_WORD)v6 == 181 )
            {
              v11 = nullptr;
              if ( sub_BFF0(a1) )
                v11 = *(_BYTE **)sub_C020((_BYTE *)a1);
              v12 = 0;
              if ( sub_BFF0((__int64)v11) )
                v12 = *(_QWORD *)sub_C020(v11);
              LOBYTE(a5) = sub_BFF0(v12) == 0;
              return a5;
            }
            goto LABEL_34;
          }
        }
      }
      else if ( (unsigned __int16)v6 <= 0x86u )
      {
        if ( (unsigned __int16)v6 > 0x50u )
        {
          LOBYTE(a5) = (unsigned __int16)v6 < 0x53u;
        }
        else
        {
          if ( (unsigned __int16)v6 <= 0x13u )
          {
            a5 = 1;
            if ( (unsigned __int16)v6 <= 0xBu )
              LOBYTE(a5) = (unsigned __int16)(v6 - 4) < 2u;
            return a5;
          }
          a5 = 0;
          v9 = 1LL << ((unsigned __int8)v6 - 20);
          if ( (v9 & 0x1FFFBEBBFF9F7FFBLL) == 0 )
          {
            if ( (v9 & 0x414400608004LL) == 0 )
              goto LABEL_34;
            return 1;
          }
        }
      }
      else
      {
        a5 = 0;
        v7 = 1LL << ((unsigned __int8)v6 + 121);
        if ( (v7 & 0xFF3FFBFFEFCLL) == 0 )
        {
          a5 = 1;
          if ( (v7 & 0xC00400103LL) == 0 )
          {
            if ( (_WORD)v6 == 179 )
            {
              v13 = 0;
              if ( sub_BFF0(a1) )
                v13 = *(_QWORD *)sub_C020((_BYTE *)a1);
              LOBYTE(a5) = (unsigned __int64)sub_BFF0(v13) <= 1;
              return a5;
            }
LABEL_34:
            sub_23620("bad node kind");
          }
        }
      }
      return a5;
    }
    if ( (unsigned __int16)v6 <= 0x11Eu )
    {
      LOWORD(v6) = v6 - 221;
      switch ( v6 )
      {
        case 0LL:
          if ( sub_BFF0(a1) )
            a1 = *(_QWORD *)sub_C020((_BYTE *)a1);
          else
            a1 = 0;
          continue;
        case 1LL:
        case 2LL:
        case 3LL:
        case 57LL:
        case 62LL:
        case 63LL:
        case 64LL:
        case 65LL:
          return 1;
        default:
          return 0;
      }
    }
    break;
  }
  if ( (unsigned __int16)(v6 - 287) > 0x2Du )
    goto LABEL_34;
  return 0;
}
