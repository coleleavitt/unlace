__int64 __fastcall sub_7C15B0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 (__fastcall *v5)(_QWORD); // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  v4 = a3;
  v5 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
  if ( v5 != sub_7C55E0 )
  {
    result = ((__int64 (__fastcall *)(__int64, _QWORD))v5)(a1, a4);
LABEL_10:
    if ( (_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a1 + 160);
  if ( !v6 )
  {
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * a4);
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(v6 + 880);
  result = *(unsigned int *)(v6 + 888);
  if ( *(_DWORD *)(v7 + 4LL * (a4 >> 1)) >= (unsigned int)result )
    return result;
LABEL_4:
  v9 = *(_QWORD *)(a1 + 872);
  if ( !v9 || (v10 = *(unsigned int *)(v9 - 4), (_DWORD)v10 == *(_DWORD *)(v9 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 872));
    v9 = *(_QWORD *)(a1 + 872);
    v10 = *(unsigned int *)(v9 - 4);
  }
  *(_DWORD *)(v9 + 4 * v10) = v4;
  ++*(_DWORD *)(v9 - 4);
  result = *(unsigned int *)(a2 + 8 * v4 + 76);
  if ( *(_DWORD *)(a1 + 992) < (unsigned int)result )
    *(_DWORD *)(a1 + 992) = result;
  return result;
}

