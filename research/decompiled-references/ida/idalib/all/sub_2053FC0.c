__int64 __fastcall sub_2053FC0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // r8d
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  int v9; // r11d
  _QWORD *v10; // r10
  _QWORD *v11; // rbx

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result )
  {
    v4 = result - 1;
    v5 = *a1;
    v6 = v4 & *(_DWORD *)a2;
    v7 = (_QWORD *)(*a1 + 8LL * v6);
    v8 = *v7;
    if ( *v7 == -4096 )
    {
      *a3 = v7;
      return 0;
    }
    else
    {
      v9 = 1;
      v10 = nullptr;
      while ( 1 )
      {
        if ( v8 == -8192 )
        {
          if ( !v10 )
            v10 = v7;
        }
        else if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(v8 + 8) && *(_QWORD *)(a2 + 24) == 4 )
        {
          v11 = *(_QWORD **)(a2 + 16);
          if ( *v11 == *(_QWORD *)(v8 - 128)
            && v11[1] == *(_QWORD *)(v8 - 96)
            && v11[2] == *(_QWORD *)(v8 - 64)
            && v11[3] == *(_QWORD *)(v8 - 32) )
          {
            *a3 = v7;
            return 1;
          }
        }
        v6 = v4 & (v9 + v6);
        v7 = (_QWORD *)(v5 + 8LL * v6);
        v8 = *v7;
        if ( *v7 == -4096 )
          break;
        ++v9;
      }
      if ( v10 )
        v7 = v10;
      *a3 = v7;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
  }
  return result;
}
