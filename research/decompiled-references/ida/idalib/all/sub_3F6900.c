_BOOL8 __fastcall sub_3F6900(__int64 a1, __int64 a2, char a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _BOOL8 result; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  result = 0;
  if ( a6 == 4 && a3 == 65 && !a4 && !*a5 )
  {
    if ( a2 == *(_QWORD *)(a1 + 32) )
    {
      v8 = *(_QWORD *)(a1 + 48);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 24);
      v10[0] = a2;
      if ( sub_7BF130(v10, v9, a1 + 40) <= 0 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 32) = a2;
        return 0;
      }
      *(_QWORD *)(a1 + 32) = a2;
      v8 = *(_QWORD *)(a1 + 48);
    }
    if ( v8 )
      return strcmp(*(const char **)(a1 + 40), "$ got") == 0;
    return 0;
  }
  return result;
}
