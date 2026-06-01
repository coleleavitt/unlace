__int64 __fastcall sub_20AF550(__int64 *a1, __int64 *a2, __int64 **a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // r8d
  __int64 *v8; // rdi
  __int64 v9; // rsi
  int v10; // r11d
  __int64 *v11; // r10
  __int64 *v12; // rbx

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result )
  {
    v4 = *a2;
    v5 = result - 1;
    v6 = *a1;
    v7 = v5 & *(_DWORD *)(*a2 + 4);
    v8 = (__int64 *)(*a1 + 8LL * v7);
    v9 = *v8;
    if ( v4 == *v8 )
    {
      *a3 = v8;
      return 1;
    }
    else if ( v9 == -4096 )
    {
      *a3 = v8;
      return 0;
    }
    else
    {
      v10 = 1;
      v11 = nullptr;
      while ( 1 )
      {
        if ( v9 != -8192 || v11 )
          v8 = v11;
        v7 = v5 & (v10 + v7);
        v12 = (__int64 *)(v6 + 8LL * v7);
        v9 = *v12;
        if ( *v12 == v4 )
        {
          *a3 = v12;
          return 1;
        }
        if ( v9 == -4096 )
          break;
        ++v10;
        v11 = v8;
        v8 = (__int64 *)(v6 + 8LL * v7);
      }
      if ( !v8 )
        v8 = (__int64 *)(v6 + 8LL * v7);
      *a3 = v8;
      return 0;
    }
  }
  else
  {
    *a3 = nullptr;
  }
  return result;
}
