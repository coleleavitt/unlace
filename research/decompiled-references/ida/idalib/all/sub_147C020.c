__int64 __fastcall sub_147C020(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int16 v4; // r12
  int v5; // eax
  __int64 *v6; // rdi
  int v7; // r15d
  __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rcx

  v2 = 0;
  v4 = *(_WORD *)(a1 + 32);
  if ( (unsigned __int16)(v4 - 7) > 0xCu && v4 != 1 )
    v2 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v5;
  sub_14634E0(v6, (int *)(a1 + 16));
  v7 = *(_DWORD *)(a1 + 40);
  v8 = sub_15D92D0(*(_QWORD *)(a2 + 40), 80);
  v9 = sub_F963B0(v2, 0, 6);
  *(_QWORD *)(v8 + 56) &= 0x7F800000uLL;
  *(_WORD *)(v8 + 32) = v9;
  LOBYTE(v9) = *(_BYTE *)(v8 + 35);
  *(_QWORD *)v8 = v2;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 24) = v7;
  *(_DWORD *)(v8 + 28) = v7;
  *(_BYTE *)(v8 + 34) = -10;
  *(_BYTE *)(v8 + 35) = (2 * ((unsigned __int16)(v4 - 406) <= 8u)) | (v4 == 158) | v9 & 0xFC;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  v10 = sub_15D7D80(v8);
  v11 = *(unsigned int *)(a2 + 60);
  *(_QWORD *)(v8 + 72) = v10;
  v12 = *(unsigned int *)(a2 + 56);
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a2 + 48, a2 + 64, v12 + 1, 8);
    v12 = *(unsigned int *)(a2 + 56);
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v12) = v8;
  result = *(unsigned int *)(a2 + 16);
  v14 = *(unsigned int *)(a2 + 20);
  ++*(_DWORD *)(a2 + 56);
  if ( result + 1 > v14 )
  {
    sub_2237220(a2 + 8, a2 + 24, result + 1, 8);
    result = *(unsigned int *)(a2 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * result) = v8;
  ++*(_DWORD *)(a2 + 16);
  return result;
}
