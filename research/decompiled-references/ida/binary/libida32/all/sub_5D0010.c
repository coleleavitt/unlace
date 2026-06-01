__int64 __fastcall sub_5D0010(__int64 a1, const char *a2, _QWORD *a3)
{
  __int64 v3; // r15
  _QWORD *v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  int v7; // ebp
  __int64 v8; // rax
  const char *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v13; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 186) & 0x3F) == 0x2D && (v4 = *(_QWORD **)(v3 + 48), v5 = v4[1], v13 = v4, v5) )
    {
      v6 = *v4;
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = haystack;
        v10 = 56 * v8;
        v3 = v6 + 56 * v8;
        if ( *(_QWORD *)(v3 + 8) )
          v9 = *(const char **)v3;
        if ( !strcmp(v9, a2) )
          break;
        v8 = ++v7;
        if ( v7 >= v5 )
          return 0;
      }
      if ( a3 )
      {
        *a3 = v13;
        return *v13 + v10;
      }
    }
    else
    {
      return 0;
    }
  }
  return v3;
}

