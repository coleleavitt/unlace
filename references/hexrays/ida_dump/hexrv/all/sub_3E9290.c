void __fastcall sub_3E9290(__int64 a1, int a2, unsigned int a3, double a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v8; // rax
  int v9; // edx
  int v10; // edi
  __int64 v11; // rsi
  __int64 v12; // rdx

  v4 = a2;
  v5 = (int)a3;
  v8 = *(_QWORD *)(a1 + 832);
  v9 = *(unsigned __int16 *)(a1 + 842);
  v10 = *(_DWORD *)(v8 + 84);
  v11 = *(int *)(v8 + 64);
  if ( (*(_DWORD *)(a1 + 844) & 6) == 4 )
    sub_3E8D60(a1, 1u, v9, v4, v11, v5, v10);
  else
    sub_3E8D60(a1, 2u, v9, v11, v5, v4, v10);
  v12 = *(_QWORD *)(a1 + 152);
  if ( *(_BYTE *)(a1 + 185) )
    v12 <<= *(_QWORD *)(a1 + 192);
  if ( v12 )
    sub_3E91E0(a1, a3, v12, a4);
}
