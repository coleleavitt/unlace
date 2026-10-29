__int64 __fastcall sub_3B8C60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  _QWORD *range; // rax
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // eax

  v4 = *(_QWORD *)(a2 + 1480);
  range = (_QWORD *)rangeset_t_find_range(v4 + 1112, a3);
  if ( range )
  {
    if ( a1 )
      *(_QWORD *)a1 = *range;
    return 1;
  }
  else
  {
    v7 = *(_QWORD *)(v4 + 1008);
    v8 = sub_8954D0(v7, a3);
    result = 0xFFFFFFFFLL;
    if ( v8 )
    {
      v9 = **(unsigned int **)(v7 + 48);
      if ( (_DWORD)v9 != -1 )
      {
        if ( a1 )
        {
          *(_DWORD *)a1 = v9;
          v10 = *(_QWORD *)(v4 + 1008);
          v11 = sub_8954D0(v10, v9);
          v12 = 0;
          if ( v11 )
            v12 = *(_DWORD *)(*(_QWORD *)(v10 + 48) + 4LL);
          *(_DWORD *)(a1 + 4) = v12;
        }
        return 0;
      }
    }
  }
  return result;
}

