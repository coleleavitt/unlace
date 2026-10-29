__int64 __fastcall sub_B64F60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // edx

  v3 = (__int64 *)(*(_QWORD *)(a1 + 8856) + 8LL * (*(_DWORD *)(a2 + 4LL * a3 + 8) ^ 1u));
  result = *v3;
  if ( !*v3
    || (v5 = *(unsigned int *)(result - 12),
        v6 = *(_DWORD *)(result - 12),
        v5 + 8 >= (unsigned __int64)*(unsigned int *)(result - 8)) )
  {
    sub_9676E0(v3);
    result = *v3;
    v5 = *(unsigned int *)(*v3 - 12);
    v6 = *(_DWORD *)(*v3 - 12);
  }
  *(_QWORD *)(result + v5) = a2;
  *(_DWORD *)(result - 12) = v6 + 8;
  return result;
}

