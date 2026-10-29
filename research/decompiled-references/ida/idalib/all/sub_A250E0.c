__int64 __fastcall sub_A250E0(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int64 v9; // rbp

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v6 = v4 + 1;
  v7 = *(_QWORD *)a1 + 176 * v4;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    if ( v5 > a2 || v7 <= a2 )
    {
      sub_A14160((__int64 *)a1, v6);
      v7 = *(_QWORD *)a1 + 176LL * *(unsigned int *)(a1 + 8);
    }
    else
    {
      v9 = a2 - v5;
      sub_A14160((__int64 *)a1, v6);
      a2 = *(_QWORD *)a1 + v9;
      v7 = *(_QWORD *)a1 + 176LL * *(unsigned int *)(a1 + 8);
    }
  }
  result = sub_A20EF0(v7, a2);
  ++*(_DWORD *)(a1 + 8);
  return result;
}
