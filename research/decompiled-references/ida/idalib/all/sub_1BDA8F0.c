__int64 __fastcall sub_1BDA8F0(__int64 *a1, unsigned __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // r9
  unsigned int v7; // eax
  _QWORD *v8; // rdi
  __int64 v9; // r8
  int v10; // r11d
  _QWORD *v11; // r10

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result )
  {
    v4 = *a2;
    v5 = result - 1;
    v6 = *a1;
    v7 = (result - 1) & (v4 ^ (v4 >> 9));
    v8 = (_QWORD *)(*a1 + 8LL * v7);
    v9 = *v8;
    if ( v4 == *v8 )
    {
      *a3 = v8;
      return 1;
    }
    else if ( v9 )
    {
      v10 = 1;
      v11 = nullptr;
      while ( 1 )
      {
        if ( !v11 && v9 == -1 )
          v11 = v8;
        v7 = v5 & (v10 + v7);
        v8 = (_QWORD *)(v6 + 8LL * v7);
        v9 = *v8;
        if ( v4 == *v8 )
        {
          *a3 = v8;
          return 1;
        }
        if ( !v9 )
          break;
        ++v10;
      }
      if ( v11 )
        v8 = v11;
      *a3 = v8;
      return 0;
    }
    else
    {
      *a3 = v8;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
  }
  return result;
}
