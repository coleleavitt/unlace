__int64 __fastcall sub_71B040(unsigned int *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // r9d
  void (__fastcall *v15)(__int64, __int64); // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r8
  int v20; // r9d
  void (__fastcall *v21)(__int64, __int64); // rax

  result = 31;
  v6 = *a1;
  if ( (_DWORD)v6 != -1 )
  {
    if ( qseek(v6, a2, 0) == -1 )
    {
      v18 = *__errno_location();
      v21 = *((void (__fastcall **)(__int64, __int64))a1 + 2);
      if ( !v21 )
        off_2C57CC0(0x1Cu, v18, v16, v17, v19, v20);
      v21(28, v18);
      return 28;
    }
    else
    {
      v9 = qwrite(*a1, a4, a3);
      result = 0;
      if ( a3 != v9 )
      {
        v12 = *__errno_location();
        v15 = *((void (__fastcall **)(__int64, __int64))a1 + 2);
        if ( !v15 )
          off_2C57CC0(0x1Eu, v12, v10, v11, v13, v14);
        v15(30, v12);
        return 30;
      }
    }
  }
  return result;
}

