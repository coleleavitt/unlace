__int64 __fastcall sub_714300(unsigned int *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v9; // ebp
  __int64 v10; // rsi
  void (__fastcall *v11)(_QWORD, __int64); // rax
  __int64 v12; // rsi
  void (__fastcall *v13)(__int64, __int64); // rax

  result = 31;
  v5 = a1[1];
  v6 = *a1;
  v7 = v5 * a2;
  if ( (_DWORD)v6 != -1 )
  {
    if ( qseek(v6, v7, 0) == -1 )
    {
      v12 = *__errno_location();
      v13 = *((void (__fastcall **)(__int64, __int64))a1 + 2);
      if ( !v13 )
        off_2C57CC0();
      v13(28, v12);
      return 28;
    }
    else
    {
      v9 = qread(*a1, a3, v5);
      result = 0;
      if ( (_DWORD)v5 != v9 )
      {
        v10 = *__errno_location();
        v11 = *((void (__fastcall **)(_QWORD, __int64))a1 + 2);
        if ( !v11 )
          off_2C57CC0();
        v11(((v9 >> 31) & 9u) + 20, v10);
        return 29;
      }
    }
  }
  return result;
}

