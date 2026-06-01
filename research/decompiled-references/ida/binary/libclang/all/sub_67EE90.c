__int64 __fastcall sub_67EE90(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rsi
  int v8; // edi
  unsigned int v9; // ecx
  __int64 *v10; // rdx
  __int64 v11; // r8
  int v12; // edx
  int v13; // r9d

  result = a2;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = v3;
        v3 &= 0xFFFFFFFFFFFFFFF8LL;
        v5 = v3;
        if ( ((v4 >> 2) & 1) == 0 || !v3 )
          break;
        v3 = *(_QWORD *)(v3 + 8);
        if ( !v3 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v5 = 0;
    }
    v6 = *(_DWORD *)(a1 + 64);
    v7 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      v8 = v6 - 1;
      v9 = (v6 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
      v10 = (__int64 *)(v7 + 16LL * v9);
      v11 = *v10;
      if ( *v10 == v5 )
        return v10[1];
      v12 = 1;
      while ( v11 != -4096 )
      {
        v13 = v12 + 1;
        v9 = v8 & (v12 + v9);
        v10 = (__int64 *)(v7 + 16LL * v9);
        v11 = *v10;
        if ( *v10 == v5 )
          return v10[1];
        v12 = v13;
      }
    }
    return 0;
  }
  return result;
}

