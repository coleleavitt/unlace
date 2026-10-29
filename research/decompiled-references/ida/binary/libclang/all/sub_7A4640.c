__int64 __fastcall sub_7A4640(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 result; // rax
  int v5; // eax
  unsigned int v6; // ecx
  __int64 *v7; // rdx
  __int64 v8; // rdi
  int v9; // edx
  int v10; // r8d

  v2 = sub_798D40(a1);
  v3 = *(_QWORD *)(v2 + 2048);
  result = *(unsigned int *)(v2 + 2064);
  if ( (_DWORD)result )
  {
    v5 = result - 1;
    v6 = v5 & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
    v7 = (__int64 *)(v3 + 16LL * v6);
    v8 = *v7;
    if ( a1 == *v7 )
    {
      return *((unsigned int *)v7 + 2);
    }
    else
    {
      v9 = 1;
      while ( v8 != -4096 )
      {
        v10 = v9 + 1;
        v6 = v5 & (v9 + v6);
        v7 = (__int64 *)(v3 + 16LL * v6);
        v8 = *v7;
        if ( a1 == *v7 )
          return *((unsigned int *)v7 + 2);
        v9 = v10;
      }
      return 0;
    }
  }
  return result;
}

