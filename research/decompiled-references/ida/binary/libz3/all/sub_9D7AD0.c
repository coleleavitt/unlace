__int64 __fastcall sub_9D7AD0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  _DWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // ebp
  __int64 v7; // rdx

  v2 = a2;
  v3 = (_DWORD *)(*(_QWORD *)(a1 + 984) + 4LL * a2);
  result = *(unsigned int *)(a1 + 976);
  if ( (unsigned int)result >= *v3 )
  {
    v5 = *(_QWORD *)(a1 + 728);
    v6 = v2;
    *v3 = result + 1;
    sub_98B5F0(*(_QWORD *)(a1 + 736) + 96 * v2, (int *)(96 * v2 + v5));
    result = *(_QWORD *)(a1 + 968);
    if ( !result || (v7 = *(unsigned int *)(result - 4), (_DWORD)v7 == *(_DWORD *)(result - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 968));
      result = *(_QWORD *)(a1 + 968);
      *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = v6;
    }
    else
    {
      *(_DWORD *)(result + 4 * v7) = v6;
      ++*(_DWORD *)(result - 4);
    }
    *(_BYTE *)(a1 + 1377) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 1377) = 1;
  }
  return result;
}

