__int64 __fastcall sub_75EB70(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 result; // rax
  int v10; // ebx

  if ( *((_BYTE *)a3 + 4) )
  {
    v5 = *a3;
    v6 = *(_QWORD *)(a1 + 48) + 176 * v5;
    v7 = *(_QWORD *)(v6 + 32) - 1LL;
    if ( v7 < 0 )
    {
      return sub_75DDD0((_QWORD *)a1, a2, a3);
    }
    else
    {
      while ( 1 )
      {
        result = sub_75EB70(a1, v5, *(_QWORD *)(v6 + 24) + 5 * v7);
        if ( (_BYTE)result )
          break;
        if ( v7-- == 0 )
          return sub_75DDD0((_QWORD *)a1, a2, a3);
        v5 = *a3;
      }
    }
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 96) = a2;
    result = sub_75E950(a1, *a3, 0);
    *(_DWORD *)(a1 + 96) = v10;
  }
  return result;
}

