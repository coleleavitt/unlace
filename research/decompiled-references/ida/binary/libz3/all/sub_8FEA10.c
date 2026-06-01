__int64 __fastcall sub_8FEA10(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int *v6; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(v1 + 8592);
  ++*(_DWORD *)(v1 + 52);
  v3 = *(_QWORD *)(v1 + 8656);
  if ( !result )
  {
    *(_QWORD *)(v3 + 8LL * (unsigned int)*MEMORY[0x7FFFFFFF8]) = 0;
    BUG();
  }
  v4 = *(_QWORD *)(v1 + 8584);
  v5 = (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v6 = *(unsigned int **)(result + 8 * v5);
  *(_QWORD *)(v3 + 8LL * *v6) = 0;
  *(_DWORD *)(result - 4) = v5;
  if ( v6[2]-- == 1 )
    return sub_15D7BC0(v4, v6);
  return result;
}

