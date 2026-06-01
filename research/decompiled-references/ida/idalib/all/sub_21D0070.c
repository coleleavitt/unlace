__int64 __fastcall sub_21D0070(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx

  v6 = *(unsigned int *)(a1 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) = a2;
  v7 = *(unsigned int *)(a1 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_2237220(a1, a1 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v8) = 0;
  ++*(_DWORD *)(a1 + 8);
  if ( a3 )
  {
    v9 = a4;
    v10 = a3;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  return sub_2222BB0(a1, v9, v10);
}
