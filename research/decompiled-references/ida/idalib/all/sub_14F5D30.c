__int64 __fastcall sub_14F5D30(__int64 a1, unsigned int a2)
{
  int *v2; // rbp
  unsigned __int16 v4; // r12
  char v5; // al
  __int64 v6; // r15
  __int64 *v7; // rdi
  unsigned int v8; // r14d
  unsigned __int16 v9; // r12
  char v10; // al
  __int64 v11; // r12
  __int64 *v12; // rdi
  unsigned int v13; // ebp

  v2 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( (unsigned __int8)sub_15648A0(a1) )
    return 0;
  v4 = *(_WORD *)(a1 + 32);
  v5 = sub_141A630(v4);
  if ( v4 == 1 || v5 )
    v6 = 0;
  else
    v6 = *(_QWORD *)(a1 + 24);
  v7 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v7, v2);
  v8 = *(_DWORD *)(a1 + 40);
  if ( (unsigned __int8)sub_15648A0(a1) )
    return 0;
  v9 = *(_WORD *)(a1 + 32);
  v10 = sub_141A630(v9);
  if ( v9 == 1 || v10 )
    v11 = 0;
  else
    v11 = *(_QWORD *)(a1 + 24);
  v12 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v12, v2);
  v13 = *(_DWORD *)(a1 + 40);
  sub_1569A00(a1, 63, 15, "@compatibility_alias", 20);
  return sub_189AB30(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, v6, v8, v11, v13);
}
