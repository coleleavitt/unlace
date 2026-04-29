unsigned __int64 __fastcall sub_815D0(__int64 a1)
{
  int v1; // ebp
  unsigned int v2; // r12d
  int v3; // eax
  __int64 v4; // rdx
  unsigned __int64 result; // rax
  char v6; // al
  const char *v7; // rsi

  v1 = *(_DWORD *)(a1 + 252) & 0x8007;
  v2 = 8 * (v1 == 0);
  v3 = *(unsigned __int16 *)(a1 + 248);
  if ( (_WORD)v3 == 46 )
  {
    if ( sub_61E40(a1 + 224) )
      return sub_80DB0((_QWORD *)a1);
    LOWORD(v3) = *(_WORD *)(a1 + 248);
    goto LABEL_13;
  }
  if ( (unsigned __int16)v3 <= 0x2Eu )
  {
    if ( (_WORD)v3 != 28 && (_WORD)v3 != 45 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, v2, 0);
  }
  else
  {
    if ( (unsigned __int16)v3 <= 0x85u )
    {
      if ( (unsigned __int16)v3 > 0x6Au )
      {
        v4 = 67239937;
        if ( !_bittest64(&v4, (unsigned int)(v3 - 107)) )
          return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, v2, 0);
        goto LABEL_6;
      }
LABEL_13:
      if ( (unsigned __int16)v3 > 0x39u )
      {
        if ( (unsigned __int16)(v3 - 61) > 0x18u )
          return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, v2, 0);
      }
      else if ( (unsigned __int16)v3 <= 0x34u )
      {
        return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, v2, 0);
      }
      v6 = *(_BYTE *)(a1 + 256);
      if ( ((v6 - 30) & 0xFD) == 0 )
      {
        v7 = "ht ";
        if ( v6 == 30 )
          v7 = "hnt ";
        v2 = 0;
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v7, 32);
        if ( !v1 )
        {
          v2 = 5;
          if ( *(_BYTE *)(a1 + 256) == 30 )
            v2 = 4;
        }
      }
      return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, v2, 0);
    }
    if ( (_WORD)v3 != 167 && (_WORD)v3 != 207 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, v2, 0);
  }
LABEL_6:
  result = sub_80C50((_QWORD *)a1);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, v2, 0);
  return result;
}
