__int64 __fastcall sub_6BF550(__int64 a1, unsigned int a2, __int64 *a3, __int64 *a4, __int64 a5, char a6, __int64 a7)
{
  __int64 v9; // r15
  __int64 result; // rax
  unsigned __int8 v11; // r9
  __int64 *v12; // [rsp+0h] [rbp-58h]
  __int64 *v13; // [rsp+8h] [rbp-50h]

  if ( a6 )
  {
    v11 = 1;
    return sub_6BF010(a1, a2, a3, a4, a5, v11, a7);
  }
  if ( *(_BYTE *)(a1 + 56) )
  {
    v11 = 0;
    return sub_6BF010(a1, a2, a3, a4, a5, v11, a7);
  }
  v12 = a3;
  v9 = 0;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    v13 = a4;
    result = sub_6BF010(a1, 1u, v12, a4, a5, 0, a7);
    if ( (_DWORD)result == -1 )
      break;
    a4 = v13;
    if ( !(_DWORD)result )
    {
      sub_6B2860(a5, a2 - 1 - v9, &a3[v9 + 1]);
      return 0;
    }
    ++v9;
    ++v12;
    if ( v9 == a2 )
      return 1;
  }
  return result;
}

