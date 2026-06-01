__int64 __fastcall sub_14F7BE0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int *v4; // r12
  __int64 v6; // rax
  __int64 v8; // rbp
  __int64 *v9; // rdi

  v4 = (int *)(a1 + 16);
  v6 = sub_18C8840(*(_QWORD *)(a1 + 96), a1 + 16, 0, a4);
  if ( v6 == 1 )
    return 1;
  v8 = v6;
  v9 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v9, v4);
  return sub_19D7B40(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, v8 & 0xFFFFFFFFFFFFFFFELL);
}
