__int64 __fastcall format_timestamp(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v6; // r14d
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  _WORD *v10; // r12
  unsigned __int64 v11; // rbp
  int v13; // eax
  struct tm v14; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( (a4 & 1) != 0 )
    v6 = qgmtime(&v14);
  else
    v6 = qlocaltime(&v14);
  if ( (_BYTE)v6 )
  {
    v7 = qsnprintf(
           a1,
           a2,
           (unsigned int)"%04u-%02u-%02u%s%02u:%02u:%02u",
           v14.tm_year + 1900,
           v14.tm_mon + 1,
           v14.tm_mday);
    v10 = (_WORD *)(v7 + a1);
    v11 = a2 - v7;
    if ( (a4 & 4) != 0 )
    {
      v13 = qsnprintf((_DWORD)v10, v11, (unsigned int)".%03u", a3 / 0x3E8, v8, v9);
      v10 = (_WORD *)((char *)v10 + v13);
      v11 -= v13;
      if ( (~a4 & 3) != 0 )
        return v6;
    }
    else if ( (~a4 & 3) != 0 )
    {
      return v6;
    }
    if ( v11 > 1 )
      *v10 = 90;
  }
  return v6;
}
