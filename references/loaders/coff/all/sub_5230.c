__int64 __fastcall sub_5230(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  int v4; // eax
  unsigned __int64 v5; // rdx
  void *v6; // rax
  __int64 result; // rax
  char v8; // dl

  v4 = *a3;
  if ( (((_WORD)v4 - 387) & 0xFFFD) == 0
    || (_WORD)v4 == 0x8664
    || (_WORD)v4 == 0xAA64
    || (_WORD)v4 == 0xA641
    || (_WORD)v4 == 512 )
  {
    goto LABEL_8;
  }
  v5 = (unsigned int)(v4 - 487);
  if ( (unsigned __int16)(v4 - 487) > 0x10u )
  {
    if ( a4 && (*(_BYTE *)(a4 + 74) & 2) != 0 && (_WORD)v4 == 332 )
    {
      result = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v6 = &loc_10101;
    if ( _bittest64((const __int64 *)&v6, v5) )
      goto LABEL_8;
  }
  v8 = getinf_flag(3, 4);
  result = 1;
  if ( !v8 )
    goto LABEL_9;
  if ( (*(_DWORD *)(a2 + 8) & 0x10000000) != 0 )
  {
LABEL_8:
    result = 2;
LABEL_9:
    *(_BYTE *)(a1 + 43) = result;
    return result;
  }
  *(_BYTE *)(a1 + 43) = 1;
  return result;
}
