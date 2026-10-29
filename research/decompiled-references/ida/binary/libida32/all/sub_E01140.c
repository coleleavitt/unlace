__int64 __fastcall sub_E01140(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int64 v9; // rbp

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v6 = v4 + 1;
  v7 = *(_QWORD *)a1 + 56 * v4;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    if ( v5 > a2 || v7 <= a2 )
    {
      sub_C021C0(a1, v6);
      v7 = *(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8);
    }
    else
    {
      v9 = a2 - v5;
      sub_C021C0(a1, v6);
      a2 = *(_QWORD *)a1 + v9;
      v7 = *(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8);
    }
  }
  result = sub_A2BB60(v7, a2);
  ++*(_DWORD *)(a1 + 8);
  return result;
}

