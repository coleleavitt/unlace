unsigned __int16 *__fastcall sub_7191B0(__int64 a1, __int64 a2, void (__fastcall *a3)(_QWORD))
{
  unsigned __int16 *result; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int16 *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d

  result = (unsigned __int16 *)sub_720870(a2);
  if ( result )
  {
    result = (unsigned __int16 *)sub_718FF0(a1, result);
    if ( (_BYTE)result )
    {
      ++dword_2CA26A4;
      v5 = *(_DWORD *)(a2 + 28);
      while ( 1 )
      {
        v6 = sub_720F20(a2);
        v7 = (unsigned __int16 *)v6;
        if ( !v6 )
          break;
        if ( (int)sub_71D0C0(v6, a1 + 2672) <= 0 )
        {
          sub_713900((__int64)"\r*** FATAL: %s\n", "bad source file, use VALIDATE");
          sub_722B40();
          remove(filename);
          off_2C57CC0(0x14u, 0, v8, v9, v10, v11);
        }
        if ( a3 )
        {
          if ( (--v5 & 0xFFF) == 0 )
            a3(v5);
        }
        result = (unsigned __int16 *)sub_718FF0(a1, v7);
        if ( !(_BYTE)result )
          return result;
      }
      return (unsigned __int16 *)sub_719ED0(a1);
    }
  }
  return result;
}

