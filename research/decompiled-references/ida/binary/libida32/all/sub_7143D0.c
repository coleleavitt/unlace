__int64 __fastcall sub_7143D0(unsigned int *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  int v9; // ebp
  __int64 v10; // rsi
  void (__fastcall *v11)(_QWORD, __int64); // rax
  __int64 v12; // rsi
  void (__fastcall *v13)(__int64, __int64); // rax

  result = 31;
  v6 = *a1;
  if ( (_DWORD)v6 != -1 )
  {
    if ( qseek(v6, a2, 0) == -1 )
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
      v9 = qread(*a1, a4, a3);
      result = 0;
      if ( a3 != v9 )
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

