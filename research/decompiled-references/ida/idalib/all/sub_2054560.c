__int64 __fastcall sub_2054560(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // r10
  unsigned int v6; // r9d
  _QWORD *v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rbp
  int i; // ebx
  unsigned int v11; // r12d
  _QWORD *v12; // r11
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r12

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result )
  {
    v4 = result - 1;
    v5 = *a1;
    v6 = (result - 1) & *(_DWORD *)a2;
    v7 = (_QWORD *)(*a1 + 8LL * v6);
    v8 = *v7;
    if ( *v7 == -4096 )
    {
      *a3 = v7;
      return 0;
    }
    else
    {
      v9 = nullptr;
      for ( i = 1; ; ++i )
      {
        if ( v8 == -8192 )
        {
          if ( !v9 )
            v9 = v7;
        }
        else if ( *(_QWORD *)(v8 + 8) == *(_QWORD *)(a2 + 8) )
        {
          v11 = *(_DWORD *)(v8 + 4) & 0x7FFFFFF;
          if ( *(_QWORD *)(a2 + 24) == v11 )
          {
            if ( !v11 )
              goto LABEL_15;
            v12 = *(_QWORD **)(a2 + 16);
            if ( *(_QWORD *)(v8 - 32LL * v11) == *v12 )
            {
              v13 = v8 - 32LL * v11;
              v14 = 0;
              v15 = 8LL * (v11 - 1);
              while ( v15 != v14 )
              {
                v16 = v12[v14 / 8 + 1];
                v14 += 8LL;
                if ( v16 != *(_QWORD *)(v13 + 4 * v14) )
                  goto LABEL_6;
              }
LABEL_15:
              *a3 = v7;
              return 1;
            }
          }
        }
LABEL_6:
        v6 = v4 & (i + v6);
        v7 = (_QWORD *)(v5 + 8LL * v6);
        v8 = *v7;
        if ( *v7 == -4096 )
          break;
      }
      if ( v9 )
        v7 = v9;
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
