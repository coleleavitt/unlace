__int64 __fastcall sub_8BE300(_QWORD *a1, __int64 a2, char a3, _BYTE *a4, int a5, int a6)
{
  int v7; // ecx
  __int64 result; // rax
  const char *v9; // rsi
  _BYTE *v10; // rdi
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[3] = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = *(unsigned __int8 *)(a2 + 8);
    result = 0;
    if ( (_BYTE)v7 != a3 )
    {
      if ( (_BYTE)v7 == 11 )
      {
        if ( *(_QWORD *)(a2 + 24) )
          set_error_string(0, *(_QWORD *)(a2 + 16));
        else
          set_error_string(0, haystack);
        return *(unsigned int *)(a2 + 12);
      }
      else
      {
        qsnprintf((unsigned int)v11, 16, (unsigned int)"%d", v7, a5, a6);
        set_error_string(0, v11);
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
    set_error_string(0, v9);
    v10 = (_BYTE *)a1[32];
    if ( v10 && !v10[8] )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 16LL))(v10);
    return 52;
  }
  return result;
}
