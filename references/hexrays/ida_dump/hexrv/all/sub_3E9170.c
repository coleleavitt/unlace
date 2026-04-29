unsigned int *__fastcall sub_3E9170(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  int v7; // r9d
  __int64 v8; // rsi
  __int64 v10; // [rsp-10h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 832);
  v4 = a2;
  v5 = a3;
  v6 = *(unsigned __int16 *)(a1 + 842);
  v7 = *(_DWORD *)(v3 + 84);
  v8 = *(int *)(v3 + 64);
  if ( (*(_DWORD *)(a1 + 844) & 6) == 4 )
    return sub_3E8D60(a1, 1u, v6, v4, v8, v5, v7);
  sub_3E8D60(a1, 2u, v6, v8, v5, v4, v7);
  return (unsigned int *)v10;
}
