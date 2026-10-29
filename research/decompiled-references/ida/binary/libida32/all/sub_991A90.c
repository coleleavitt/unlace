__int64 __fastcall sub_991A90(__int64 *a1, int *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  int v5; // edi
  int v6; // esi
  unsigned int v7; // ecx
  _DWORD *v8; // rax
  int v9; // r8d
  int v10; // r11d
  _DWORD *v11; // r10

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result )
  {
    v4 = *a1;
    v5 = *a2;
    v6 = result - 1;
    v7 = (result - 1) & (37 * v5);
    v8 = (_DWORD *)(v4 + 16LL * v7);
    v9 = *v8;
    if ( v5 == *v8 )
    {
      *a3 = v8;
      return 1;
    }
    else if ( v9 == -1 )
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
        if ( !v11 && v9 == -2 )
          v11 = v8;
        v7 = v6 & (v10 + v7);
        v8 = (_DWORD *)(v4 + 16LL * v7);
        v9 = *v8;
        if ( v5 == *v8 )
        {
          *a3 = v8;
          return 1;
        }
        if ( v9 == -1 )
          break;
        ++v10;
      }
      if ( v11 )
        v8 = v11;
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

