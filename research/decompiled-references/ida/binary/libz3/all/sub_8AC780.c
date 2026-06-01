__int64 __fastcall sub_8AC780(__int64 a1, unsigned int *a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 result; // rax
  int *v9; // rdx
  int v10; // edx
  unsigned int v11; // [rsp+Ch] [rbp-1Ch]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v4 + 8656);
  if ( !v5 || (v6 = *a2, (unsigned int)v6 >= *(_DWORD *)(v5 - 4)) || !*(_QWORD *)(v5 + 8 * v6) )
  {
    sub_B6F780(v4);
    v6 = *a2;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  }
  v7 = *(_QWORD *)(v5 + 8 * v6);
  result = sub_B39350(v7, *(unsigned int *)(a1 + 8));
  if ( (_DWORD)result == -1 )
    result = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v7);
  v9 = *(int **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( v9 )
    v10 = *v9;
  else
    v10 = -1;
  if ( *(_DWORD *)(a1 + 8) == v10 )
  {
    v11 = result;
    sub_8AC610(a1, (__int64)a2, a3);
    return v11;
  }
  return result;
}

