__int64 __fastcall sub_1527850(__int64 a1)
{
  unsigned __int8 v1; // bp
  __int64 v2; // rax
  unsigned int v4; // eax
  unsigned int v5; // r12d
  int *v6; // rsi
  __int64 *v7; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)v2 <= 2 )
    v1 = byte_2619244[(unsigned int)v2];
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = (int *)(a1 + 16);
  v7 = *(__int64 **)(a1 + 8);
  if ( !v4 )
    v4 = v5;
  *(_DWORD *)(a1 + 40) = v4;
  sub_14634E0(v7, v6);
  return sub_1666CF0(*(_QWORD *)(a1 + 96), v5, v1);
}
