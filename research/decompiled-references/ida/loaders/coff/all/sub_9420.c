char __fastcall sub_9420(__int64 a1, __int64 a2, char a3)
{
  int v4; // ecx
  char result; // al
  int v6; // edx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rdi
  int v12; // edx
  __int16 v13; // dx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  void *v18; // rsi

  v4 = *(unsigned __int16 *)(a1 + 57);
  if ( (((_WORD)v4 - 387) & 0xFFFD) == 0 )
    goto LABEL_6;
  if ( !a3 )
  {
    if ( (v4 & 0xFFDF) != 0x142 )
    {
LABEL_4:
      result = (v4 & 0xFDFF) == 0x8C00 || (_WORD)v4 == 0x808C || (unsigned __int16)(v4 + 0x8000) <= 1u;
      if ( result )
        return result;
      result = (v4 & 0xFDFF) == 0x8180 || (_WORD)v4 == 0x8462;
      if ( result )
        return result;
      goto LABEL_11;
    }
    goto LABEL_6;
  }
  if ( (unsigned __int16)(v4 - 320) > 0x23u )
    goto LABEL_4;
  v7 = 0x900000001LL;
  if ( _bittest64(&v7, (unsigned int)(v4 - 320)) )
  {
LABEL_6:
    v6 = *(_DWORD *)(a2 + 72);
    result = 1;
    if ( (v6 & 0x9D0017E0) == 0 )
    {
      if ( (v6 & 0x2000000) != 0 )
        return (v6 & 0x2FFF000) == 41943040 || (((v6 & 0x2FFF000) - 35651584) & 0xFFDFF000) == 0;
      return 0;
    }
    return result;
  }
LABEL_11:
  result = (_WORD)v4 == 0x8C50 || (_WORD)v4 == 0x8C25;
  if ( !result )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2) )
      return 0;
    v8 = *(unsigned __int16 *)(a1 + 57);
    v9 = *(_DWORD *)(a2 + 72);
    if ( (_WORD)v8 == 194 || (_WORD)v8 == 147 || (_WORD)v8 == 193 )
    {
      if ( (v9 & 0x10) != 0 || (*(_BYTE *)(a1 + 83) & 2) != 0 && !*(_QWORD *)(a2 + 32) )
        return 0;
      v10 = 10248;
LABEL_18:
      if ( (v9 & v10) == 0 && strncmp((const char *)a2, ".debug", 6u) && strcmp((const char *)a2, ".stab") )
        return strcmp((const char *)a2, ".stabstr") != 0;
      return 0;
    }
    if ( (unsigned __int16)v8 > 0x1F2u )
    {
      if ( (_WORD)v8 != 0x8664 )
      {
        if ( (unsigned __int16)v8 > 0x8664u )
        {
          v12 = 768;
          if ( (_WORD)v8 != 0xA641 && (_WORD)v8 != 0xAA64 )
            v12 = 33536;
          goto LABEL_31;
        }
        LOBYTE(v13) = *(_WORD *)(a1 + 57);
        HIBYTE(v13) = BYTE1(v8) & 0xFE;
        if ( v13 != 614 && (_WORD)v8 != 1126 )
        {
          v12 = 768;
          if ( (_WORD)v8 == 512 )
            goto LABEL_31;
          if ( (_WORD)v8 == 2560 )
          {
            v10 = 27400;
            goto LABEL_18;
          }
          goto LABEL_46;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)v8 > 0x1BFu )
      {
        v14 = 0x7000000000015LL;
        if ( _bittest64(&v14, (unsigned int)(v8 - 448)) )
        {
          v12 = 768;
          goto LABEL_47;
        }
        v15 = (unsigned int)(v8 - 472);
        if ( (unsigned __int16)(v8 - 472) <= 7u )
        {
          v16 = 161;
          if ( _bittest64(&v16, v15) )
          {
            v10 = 64264;
            goto LABEL_18;
          }
          goto LABEL_55;
        }
        goto LABEL_46;
      }
      if ( (unsigned __int16)v8 <= 0x168u )
      {
        if ( (unsigned __int16)v8 > 0x14Bu )
        {
          v11 = 335544321;
          v12 = 768;
          if ( _bittest64(&v11, (unsigned int)(v8 - 332)) )
          {
LABEL_31:
            v10 = v12 | 0x6808;
            goto LABEL_18;
          }
          goto LABEL_46;
        }
LABEL_55:
        v12 = 33536;
        goto LABEL_31;
      }
      if ( (unsigned __int16)(v8 - 418) > 6u )
      {
        v12 = 768;
        if ( (_WORD)v8 == 388 )
          goto LABEL_31;
        goto LABEL_46;
      }
      v17 = 81;
      if ( !_bittest64(&v17, (unsigned int)(v8 - 418)) )
      {
LABEL_46:
        v12 = 33536;
LABEL_47:
        LOWORD(v8) = v8 - 487;
        if ( (unsigned __int16)v8 <= 0x10u )
        {
          v18 = &loc_10101;
          if ( _bittest64((const __int64 *)&v18, v8) )
          {
            v10 = v12 | 0x7808;
            goto LABEL_18;
          }
        }
        goto LABEL_31;
      }
    }
    v12 = 768;
    goto LABEL_31;
  }
  return result;
}

