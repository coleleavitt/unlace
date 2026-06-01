__int64 __fastcall sub_B64420(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned int *v3; // r12
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rax

  v1 = 0x7FFFFFFF8LL;
  v2 = *(_QWORD *)(a1 + 8576);
  ++*(_DWORD *)(a1 + 52);
  if ( v2 )
    v1 = 8LL * (unsigned int)(*(_DWORD *)(v2 - 4) - 1);
  v3 = *(unsigned int **)(v2 + v1);
  v4 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8656) + 8LL * *v3);
  v5 = *v4;
  *v4 = 0;
  v6 = *(_BYTE *)(v5 + 44);
  if ( v5 == *(_QWORD *)(v5 + 24)
    && ((v6 & 0x10) == 0 || *(_QWORD *)(*(_QWORD *)(v5 + 112) + 8LL) != *(_QWORD *)(*(_QWORD *)(v5 + 120) + 8LL))
    && (*(_BYTE *)(v5 + 45) & 1) != 0 )
  {
    sub_97A460(a1 + 8712, v5);
    v6 = *(_BYTE *)(v5 + 44);
  }
  if ( (v6 & 8) == 0 && *(_DWORD *)(*(_QWORD *)v5 + 24LL) && (v6 & 0x10) == 0 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8696) + 8LL * (**((_DWORD **)v3 + 2) + 0x80000000));
    --*(_DWORD *)(v13 - 4);
  }
  sub_B392C0(v5, *(_QWORD *)(a1 + 104), 1);
  v7 = *(_QWORD *)(a1 + 8576);
  --*(_DWORD *)(*(_QWORD *)(a1 + 8664) - 4LL);
  result = *(unsigned int *)(v7 - 4);
  v9 = (unsigned int)(result - 1);
  v10 = *(_QWORD *)(v7 + 8 * v9);
  *(_DWORD *)(v7 - 4) = v9;
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 8568);
    if ( (*(_DWORD *)(v10 + 8))-- == 1 )
      return sub_15D7BC0(v11, v10);
  }
  return result;
}

