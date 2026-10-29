__int64 __fastcall sub_2154570(_DWORD **a1, unsigned __int8 (__fastcall *a2)(__int64), __int64 a3, char a4)
{
  __int64 result; // rax
  int *v8; // rdi
  int v9; // eax
  __int64 v10; // rsi
  const char *v11; // [rsp+0h] [rbp-58h] BYREF
  __int16 v12; // [rsp+20h] [rbp-38h]

  if ( *a1[6] != 9 )
  {
    if ( !a4 )
    {
      while ( !a2(a3) )
      {
        if ( *a1[6] == 9 )
          goto LABEL_5;
      }
      return 1;
    }
LABEL_8:
    if ( a2(a3) )
      return 1;
    while ( 1 )
    {
      v8 = a1[6];
      v9 = *v8;
      if ( *v8 == 9 )
        break;
      v11 = "unexpected token";
      v12 = 259;
      if ( v9 == 26 )
      {
        (*((void (__fastcall **)(_DWORD **))*a1 + 19))(a1);
        goto LABEL_8;
      }
      v10 = sub_2124B50((__int64)v8);
      result = sub_2153E90((__int64)a1, v10, (__int64)&v11, 0, 0);
      if ( (_BYTE)result )
        return result;
      if ( a2(a3) )
        return 1;
    }
  }
LABEL_5:
  (*((void (__fastcall **)(_DWORD **))*a1 + 19))(a1);
  return 0;
}
