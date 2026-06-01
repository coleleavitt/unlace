__int64 __fastcall sub_14F7C60(__int64 a1, unsigned int a2)
{
  int *v2; // r12
  __int64 v4; // rax
  __int64 v6; // rbp
  __int64 *v7; // rdi

  v2 = (int *)(a1 + 16);
  v4 = sub_18F1880(*(_QWORD *)(a1 + 96), a1 + 16, 0);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v7, v2);
  return sub_19D7B40(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, v6 & 0xFFFFFFFFFFFFFFFELL);
}
