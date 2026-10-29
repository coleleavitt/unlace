__int64 __fastcall sub_1F6A220(__int64 *a1, unsigned int *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // r8d
  _DWORD *v8; // rcx
  int v9; // edi
  int v10; // r11d
  _DWORD *v11; // r10

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result )
  {
    v4 = *a2;
    v5 = result - 1;
    v6 = *a1;
    v7 = v5 & v4;
    v8 = (_DWORD *)(*a1 + 8LL * (v5 & v4));
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
        v8 = (_DWORD *)(v6 + 8LL * v7);
        v9 = *v8;
        if ( *v8 == v4 )
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
