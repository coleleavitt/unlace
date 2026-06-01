__int64 __fastcall sub_B73410(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // edi
  unsigned int v6; // edx
  __int64 *v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r8d
  __int64 v11; // rsi

  v2 = sub_B685F0(a1);
  v3 = *(_QWORD *)(v2 + 2152);
  result = *(unsigned int *)(v2 + 2168);
  if ( (_DWORD)result )
  {
    v5 = result - 1;
    v6 = (result - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
    v7 = (__int64 *)(v3 + 16LL * v6);
    v8 = *v7;
    if ( a1 == *v7 )
      return *((unsigned int *)v7 + 2);
    result = 0;
    if ( v8 != -4096 )
    {
      v9 = 1;
      while ( 1 )
      {
        v10 = v9 + 1;
        v6 = v5 & (v9 + v6);
        v7 = (__int64 *)(v3 + 16LL * v6);
        v11 = *v7;
        if ( a1 == *v7 )
          break;
        v9 = v10;
        if ( v11 == -4096 )
          return 0;
      }
      return *((unsigned int *)v7 + 2);
    }
  }
  return result;
}

