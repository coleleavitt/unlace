__int64 __fastcall sub_89A5C0(_QWORD *a1, __int64 a2, char a3, _BYTE *a4, int a5, int a6)
{
  int v7; // ecx
  __int64 result; // rax
  const char *v9; // rsi
  _BYTE *v10; // rdi
  char v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = *(unsigned __int8 *)(a2 + 8);
    result = 0;
    if ( (_BYTE)v7 != a3 )
    {
      if ( (_BYTE)v7 == 11 )
      {
        set_error_string();
        return *(unsigned int *)(a2 + 12);
      }
      else
      {
        qsnprintf((int)&v11, 16, (int)"%d", v7, a5, a6, v11);
        set_error_string();
        if ( a4 )
          *a4 = 1;
        return 46;
      }
    }
  }
  else
  {
    v9 = haystack;
    if ( a1[3] )
      v9 = (const char *)a1[2];
    set_error_string();
    v10 = (_BYTE *)a1[32];
    if ( v10 && !v10[8] )
      (*(void (__fastcall **)(_BYTE *, const char *))(*(_QWORD *)v10 + 16LL))(v10, v9);
    return 52;
  }
  return result;
}

