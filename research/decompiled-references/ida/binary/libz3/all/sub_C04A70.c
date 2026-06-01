__int64 __fastcall sub_C04A70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rax
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi

  v3 = *(unsigned int **)(a2 + 24);
  if ( !v3 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 112) + 24LL))(
             *(_QWORD *)(a1 + 112),
             a2,
             a3);
  v5 = *v3;
  if ( (_DWORD)v5 == 4 || (_DWORD)v5 == -1 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 112) + 24LL))(
             *(_QWORD *)(a1 + 112),
             a2,
             a3);
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 && (unsigned int)v5 < *(_DWORD *)(v7 - 4) && (v8 = *(_QWORD *)(v7 + 8 * v5)) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2, a3);
  else
    return 0;
}

