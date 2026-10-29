__int64 __fastcall sub_BAA340(_QWORD *a1, __m128 a2, __m128 a3, __m128 a4)
{
  __int64 result; // rax
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // esi

  result = a1[4];
  if ( result )
  {
    v5 = *(_DWORD *)(result - 4);
    v6 = v5 - 1;
    if ( v5 )
    {
      v7 = 8LL * v6;
      while ( 1 )
      {
        result = sub_15D1F10(**(_QWORD **)(result + v7));
        if ( *(_QWORD *)(a1[8] + 64LL) != result
          || (result = *(_QWORD *)(a1[4] + v7), *(_QWORD *)(result + 8) != result)
          || (v8 = a1[24]) != 0
          && v6 < *(_DWORD *)(v8 - 4)
          && (v9 = *(_QWORD *)(v8 + v7)) != 0
          && (result = *(unsigned int *)(v9 - 4), (_DWORD)result) )
        {
          --v6;
          v7 -= 8;
          if ( v6 == -1 )
            return result;
        }
        else
        {
          v10 = v6--;
          v7 -= 8;
          result = sub_BA8A20(a1, v10, a2, a3, a4);
          if ( v6 == -1 )
            return result;
        }
        result = a1[4];
      }
    }
  }
  return result;
}

