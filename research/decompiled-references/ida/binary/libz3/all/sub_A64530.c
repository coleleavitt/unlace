__int64 __fastcall sub_A64530(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  _DWORD *v7; // rax
  __int64 result; // rax
  unsigned int **v9; // r12
  __int64 v10; // rax
  unsigned int **v11; // r14
  unsigned int *v12; // r13
  void (__fastcall *v13)(__int64 *, __int64); // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // [rsp+0h] [rbp-38h]

  if ( *(_WORD *)(a2 + 4) )
    return sub_A63A20(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v7 || *v7 != 5 || v7[1] != 9 )
    return sub_A63A20(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
  v9 = (unsigned int **)(a2 + 32);
  v10 = 8LL * *(unsigned int *)(a2 + 24);
  v11 = (unsigned int **)(a2 + 32 + v10);
  if ( v10 )
  {
    do
    {
      v12 = *v9;
      if ( (unsigned int)sub_A63A20(a1, *v9, a3, a4, a5, a6, v16) == -1 )
      {
        v13 = *(void (__fastcall **)(__int64 *, __int64))*a1;
        v14 = sub_99A610((__int64)a1, v12);
        v13(a1, v14);
      }
      ++v9;
    }
    while ( v11 != v9 );
  }
  v15 = sub_99A610((__int64)a1, (unsigned int *)a2);
  result = sub_B39350(v15, *((unsigned int *)a1 + 2));
  if ( (_DWORD)result == -1 )
    return (*(__int64 (__fastcall **)(__int64 *, __int64))*a1)(a1, v15);
  return result;
}

