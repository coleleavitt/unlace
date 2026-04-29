__int64 __fastcall sub_3F17D0(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, int a5, double a6)
{
  unsigned __int16 v9; // cx
  __int64 result; // rax
  __int64 v11; // rax

  v9 = *(_WORD *)(a1 + 48);
  if ( v9 == 519 )
    goto LABEL_22;
  if ( v9 > 0x207u )
  {
    if ( v9 > 0x33Bu )
    {
      if ( v9 > 0x6B0u )
      {
        if ( v9 != 1721 )
        {
          if ( v9 != 1722 )
            goto LABEL_9;
          goto LABEL_25;
        }
      }
      else if ( v9 <= 0x6AEu )
      {
        if ( v9 > 0x46Bu )
        {
          if ( (unsigned __int16)(v9 - 1706) > 4u )
            goto LABEL_9;
          goto LABEL_25;
        }
        if ( v9 <= 0x468u && (unsigned __int16)(v9 - 1010) > 3u )
          goto LABEL_9;
      }
    }
    else
    {
      if ( v9 > 0x339u )
        goto LABEL_8;
      if ( v9 != 815 )
      {
        if ( v9 > 0x32Fu )
        {
          if ( (unsigned __int16)(v9 - 822) <= 1u )
          {
LABEL_8:
            if ( (unsigned __int8)sub_3F1490(a1, (unsigned int)a2, a3, a4, a5, a6) )
              return 1;
          }
LABEL_9:
          result = 0;
          if ( !a5 )
            return result;
          goto LABEL_10;
        }
        if ( v9 > 0x25Au )
        {
          if ( (unsigned __int16)(v9 - 603) > 1u )
            goto LABEL_9;
          goto LABEL_25;
        }
        if ( v9 <= 0x258u )
        {
          if ( v9 != 538 )
            goto LABEL_9;
          goto LABEL_25;
        }
      }
    }
LABEL_22:
    if ( !a5 )
      goto LABEL_23;
    goto LABEL_10;
  }
  if ( v9 > 0x91u )
  {
    if ( v9 > 0xD0u )
    {
      if ( (unsigned __int16)(v9 - 209) > 1u )
        goto LABEL_9;
      goto LABEL_25;
    }
    if ( v9 > 0xCEu )
      goto LABEL_22;
    if ( (unsigned __int16)(v9 - 148) > 2u )
      goto LABEL_9;
LABEL_25:
    if ( !a5 )
      goto LABEL_11;
LABEL_10:
    if ( a5 != 1 )
    {
LABEL_11:
      sub_3EAB70(
        a1,
        1u,
        a4,
        (int)a2,
        *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
        a3,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
      return 1;
    }
LABEL_23:
    sub_3EAB70(
      a1,
      2u,
      a4,
      *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
      a3,
      (int)a2,
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    return 1;
  }
  if ( v9 <= 0x77u )
    goto LABEL_9;
  v11 = 1LL << ((unsigned __int8)v9 - 120);
  if ( (v11 & 0x17943) != 0 )
    goto LABEL_22;
  if ( (v11 & 0x78003C) == 0 )
  {
    if ( (v11 & 0x3040000) == 0 )
      goto LABEL_9;
    goto LABEL_25;
  }
  if ( (unsigned __int8)sub_3F0EC0(a1, a2, a3, a4, a5, a6) )
    return 1;
  result = 0;
  if ( a5 )
    goto LABEL_10;
  return result;
}
