unsigned __int64 __fastcall sub_4C7EB0(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // rax
  unsigned __int64 *v4; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rsi
  unsigned int v10[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v10[0] = a2;
  v3 = sub_4C7060((_QWORD *)(a1 + 48), a2);
  if ( v3 && v3[3] != -1 )
    goto LABEL_3;
  if ( v4[84] )
  {
    v6 = v4[82];
    result = v4[81];
    v7 = *(unsigned __int64 **)(result + 8 * (a2 % v6));
    v8 = a2 % v6;
    if ( v7 )
    {
      result = *v7;
      if ( a2 == *(_DWORD *)(*v7 + 8) )
      {
LABEL_11:
        if ( v7 && *v7 )
        {
LABEL_3:
          sub_414990((char **)v4 + 81, v10);
          return sub_4C9EB0(214, a2, 2);
        }
      }
      else
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)result;
          if ( !*(_QWORD *)result )
            break;
          v7 = (unsigned __int64 *)result;
          result = *(unsigned int *)(v9 + 8) / v6;
          if ( v8 != *(unsigned int *)(v9 + 8) % v6 )
            break;
          result = v9;
          if ( a2 == *(_DWORD *)(v9 + 8) )
            goto LABEL_11;
        }
      }
    }
  }
  else
  {
    result = v4[83];
    if ( result )
    {
      while ( a2 != *(_DWORD *)(result + 8) )
      {
        result = *(_QWORD *)result;
        if ( !result )
          return result;
      }
      goto LABEL_3;
    }
  }
  return result;
}

