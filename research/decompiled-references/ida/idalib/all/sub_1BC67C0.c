unsigned int *__fastcall sub_1BC67C0(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int *v8; // rbx
  __int64 v9; // rdx
  _WORD *v10; // rsi
  unsigned int *v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h]
  __int64 v13; // [rsp+10h] [rbp-28h]

  result = *(unsigned int **)(a2 + 24);
  if ( *(_DWORD *)(a2 + 8) != 108 )
  {
    v8 = nullptr;
    if ( result )
      goto LABEL_8;
LABEL_10:
    v11 = result;
    v9 = 0;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
LABEL_11:
      if ( v8 == result )
      {
LABEL_18:
        if ( !v9 )
          return result;
      }
      while ( 1 )
      {
        if ( (v9 & 3) == 0 )
        {
          v10 = *(_WORD **)result;
          if ( !*(_QWORD *)result )
            goto LABEL_21;
LABEL_14:
          sub_1B68D30(a1, v10);
          goto LABEL_15;
        }
        v10 = *(_WORD **)sub_EF2B30((__int64)&v11);
        if ( v10 )
          goto LABEL_14;
LABEL_15:
        v9 = v12;
        if ( (v12 & 3) == 0 )
          break;
        if ( (v12 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        {
          sub_EF2750((unsigned __int64 *)&v11, 1);
          result = v11;
          v9 = v12;
          goto LABEL_11;
        }
        sub_EF2960((__int64)&v11);
        result = v11;
        v9 = v12;
        if ( v8 == v11 )
          goto LABEL_18;
      }
      result = v11;
LABEL_21:
      result += 2;
      v11 = result;
    }
  }
  if ( !result )
  {
    v8 = nullptr;
    goto LABEL_10;
  }
  v3 = (__int64)&result[2 * *result + 4];
  if ( result + 4 == (unsigned int *)v3 )
    goto LABEL_8;
  v4 = *((_QWORD *)result + 2);
  if ( *(_DWORD *)(v4 + 8) != 12 )
  {
    v5 = (__int64 *)(result + 6);
    while ( (__int64 *)v3 != v5 )
    {
      v4 = *v5++;
      if ( *(_DWORD *)(v4 + 8) == 12 )
        goto LABEL_26;
    }
    goto LABEL_8;
  }
LABEL_26:
  if ( *(_DWORD *)(v4 + 16) != 1 )
  {
LABEL_8:
    if ( *((_BYTE *)result + 8) )
    {
      v6 = 8LL * *result + 16;
      v7 = result[1];
      v8 = (unsigned int *)((char *)&result[2 * (unsigned int)(v7 + 1)] + v6);
      result = (unsigned int *)((char *)result + 8 * v7 + v6);
    }
    else
    {
      v8 = nullptr;
      result = nullptr;
    }
    goto LABEL_10;
  }
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
