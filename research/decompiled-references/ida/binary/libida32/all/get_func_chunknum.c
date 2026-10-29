__int64 __fastcall get_func_chunknum(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // rax
  __int64 result; // rax

  if ( !a1 || a2 == -1 )
    return 0xFFFFFFFFLL;
  if ( a2 < *(_DWORD *)a1 || (result = 0, a2 >= *(_DWORD *)(a1 + 4)) )
  {
    v2 = sub_5AE770(*(_QWORD **)(qword_2CA1698 + 1480), a1, a2);
    if ( v2 )
      return (unsigned int)(((__int64)v2 - *(_QWORD *)(a1 + 112)) >> 3) + 1;
    else
      return 0xFFFFFFFFLL;
  }
  return result;
}

