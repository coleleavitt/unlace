__int64 __fastcall sub_C05730(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  unsigned int *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v12; // r13
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d

  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
  if ( v5 == sub_C049D0 )
  {
    v6 = *(unsigned int **)(v4 + 24);
    if ( !v6
      || (v7 = *v6, (_DWORD)v7 == -1)
      || (_DWORD)v7 == 4
      || (v8 = a1[12]) == 0
      || (unsigned int)v7 >= *(_DWORD *)(v8 - 4)
      || (v9 = *(_QWORD *)(v8 + 8 * v7)) == 0 )
    {
      v9 = a1[14];
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v10 = v5((__int64)a1, v4);
  }
  if ( *(_DWORD *)(a2 + 32) )
  {
    v12 = sub_186B270(0x38u);
    sub_13478B0(v12, a1[1], *(unsigned int *)(a2 + 32));
    sub_1349280(v12, v10, v13, v14, v15, v16);
    sub_135F980(a1, a2, v12);
  }
  else
  {
    sub_135F9B0(a1, a2, v10);
  }
  return v10;
}

