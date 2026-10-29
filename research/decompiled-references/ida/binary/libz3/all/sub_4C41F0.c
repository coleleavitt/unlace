__int64 __fastcall sub_4C41F0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 *v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf

  result = sub_1625BE0(*(_QWORD *)(a1 + 8) + 56LL, *a3, *a2);
  v6 = *(__int64 **)a4;
  v7 = *(unsigned int *)(a4 + 8);
  v8 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v9 = 8 * v7;
  v10 = (__int64 *)(v9 + v6[1]);
  v11 = *v10;
  if ( *v10 && (v12 = *v6, v13 = *(_DWORD *)(v11 + 8) == 1, --*(_DWORD *)(v11 + 8), v13) )
  {
    result = sub_15D7BC0(v12, v11);
    *(_QWORD *)(v9 + v6[1]) = v8;
  }
  else
  {
    *v10 = result;
  }
  return result;
}

