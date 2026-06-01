__int64 __fastcall sub_6CDB0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v6; // r14d
  char *v7; // rax
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  _WORD *v11; // r12
  unsigned __int64 v12; // rbp
  int v14; // eax
  struct tm v15; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( (a4 & 1) != 0 )
    v6 = sub_97350(&v15);
  else
    v6 = sub_97300(&v15);
  if ( (_BYTE)v6 )
  {
    v7 = " ";
    if ( (a4 & 2) != 0 )
      v7 = "T";
    v8 = sub_9A810(
           a1,
           a2,
           (unsigned int)"%04u-%02u-%02u%s%02u:%02u:%02u",
           v15.tm_year + 1900,
           v15.tm_mon + 1,
           v15.tm_mday,
           v7,
           (unsigned int)v15.tm_hour,
           (unsigned int)v15.tm_min,
           (unsigned int)v15.tm_sec);
    v11 = (_WORD *)(v8 + a1);
    v12 = a2 - v8;
    if ( (a4 & 4) != 0 )
    {
      v14 = sub_9A810((_DWORD)v11, v12, (unsigned int)".%03u", a3 / 0x3E8, v9, v10);
      v11 = (_WORD *)((char *)v11 + v14);
      v12 -= v14;
      if ( (~a4 & 3) != 0 )
        return v6;
    }
    else if ( (~(_BYTE)a4 & 3) != 0 )
    {
      return v6;
    }
    if ( v12 > 1 )
      *v11 = 90;
  }
  return v6;
}

