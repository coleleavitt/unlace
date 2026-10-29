__int64 __fastcall sub_147BEC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int16 v3; // ax
  int v4; // r15d
  bool v5; // r12
  bool v6; // r14
  __int64 v7; // rbx
  __int16 v8; // ax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rcx

  v2 = 0;
  v3 = *(_WORD *)(a1 + 32);
  if ( (unsigned __int16)(v3 - 7) > 0xCu && v3 != 1 )
    v2 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 16);
  v5 = v3 == 158;
  v6 = (unsigned __int16)(v3 - 406) <= 8u;
  v7 = sub_15D92D0(*(_QWORD *)(a2 + 40), 80);
  v8 = sub_F963B0(v2, 0, 6);
  *(_QWORD *)(v7 + 56) &= 0x7F800000uLL;
  *(_WORD *)(v7 + 32) = v8;
  LOBYTE(v8) = *(_BYTE *)(v7 + 35);
  *(_QWORD *)v7 = v2;
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 24) = v4;
  *(_DWORD *)(v7 + 28) = v4;
  *(_BYTE *)(v7 + 34) = -10;
  *(_BYTE *)(v7 + 35) = (2 * v6) | v5 | v8 & 0xFC;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  v9 = sub_15D7D80(v7);
  v10 = *(unsigned int *)(a2 + 60);
  *(_QWORD *)(v7 + 72) = v9;
  v11 = *(unsigned int *)(a2 + 56);
  if ( v11 + 1 > v10 )
  {
    sub_2237220(a2 + 48, a2 + 64, v11 + 1, 8);
    v11 = *(unsigned int *)(a2 + 56);
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11) = v7;
  result = *(unsigned int *)(a2 + 16);
  v13 = *(unsigned int *)(a2 + 20);
  ++*(_DWORD *)(a2 + 56);
  if ( result + 1 > v13 )
  {
    sub_2237220(a2 + 8, a2 + 24, result + 1, 8);
    result = *(unsigned int *)(a2 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * result) = v7;
  ++*(_DWORD *)(a2 + 16);
  return result;
}
