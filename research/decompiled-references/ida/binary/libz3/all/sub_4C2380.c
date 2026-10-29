__int64 __fastcall sub_4C2380(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  int v11; // edx
  int v12; // eax

  v4 = a3;
  v5 = a1;
  v6 = 24LL * ((unsigned int)a3 & (a2 - 1));
  v7 = 24LL * a2;
  v8 = a1 + v6;
  v9 = v5 + v7;
  if ( v6 == v7 )
  {
LABEL_10:
    while ( v8 != v5 )
    {
      v12 = *(_DWORD *)(v5 + 4);
      if ( v12 == 2 )
      {
        if ( v4 == *(_DWORD *)v5 && *(_QWORD *)(v5 + 8) == a3 )
          return v5;
      }
      else if ( !v12 )
      {
        return 0;
      }
      v5 += 24;
    }
    return 0;
  }
  result = v8;
  while ( 1 )
  {
    v11 = *(_DWORD *)(result + 4);
    if ( v11 != 2 )
    {
      if ( !v11 )
        return 0;
      goto LABEL_4;
    }
    if ( v4 == *(_DWORD *)result && *(_QWORD *)(result + 8) == a3 )
      return result;
LABEL_4:
    result += 24;
    if ( v9 == result )
      goto LABEL_10;
  }
}

