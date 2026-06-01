__int64 __fastcall sub_AB8770(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  __int64 v8; // r12
  unsigned int v9; // eax
  __int64 result; // rax

  sub_B6E740(*(_QWORD *)(a1 + 16));
  sub_AB3F30(a1, a2, v3, v4, v5, v6);
  v7 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2), *(unsigned int *)(a1 + 8));
  sub_AB6BC0((__int64 *)a1, v7);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **((unsigned int **)a2 + 4));
  v9 = sub_B39350(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **((unsigned int **)a2 + 4)),
         *(unsigned int *)(a1 + 8));
  if ( v9 == -1 || v8 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v9) )
    (**(void (__fastcall ***)(__int64, __int64))a1)(a1, v8);
  result = sub_8E7030(*(_QWORD *)(a1 + 16));
  if ( !(_DWORD)result )
    return sub_AB78E0(a1, (__int64)a2);
  return result;
}

