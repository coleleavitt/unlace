__int64 __fastcall sub_14A0480(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // ebp
  int v5; // r12d
  __int64 result; // rax
  __int64 *v7; // rdi
  __int64 v8; // r13
  __int16 v9; // ax
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  bool v17; // [rsp+0h] [rbp-58h]
  __int64 v18; // [rsp+0h] [rbp-58h]
  __int64 v19; // [rsp+8h] [rbp-50h]
  int v20; // [rsp+14h] [rbp-44h]
  int *i; // [rsp+18h] [rbp-40h]

  v5 = *(unsigned __int16 *)(a1 + 32);
  for ( i = (int *)(a1 + 16); ; ++*(_DWORD *)(a2 + 16) )
  {
    if ( (_WORD)v5 != 397 )
    {
      result = (unsigned int)(v5 - 398);
      if ( (unsigned __int16)(v5 - 398) > 1u )
        break;
    }
    v7 = *(__int64 **)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v7, i);
    v17 = (_WORD)v5 == 158;
    v20 = *(_DWORD *)(a1 + 40);
    BYTE1(v2) &= 0xFCu;
    v19 = sub_15D92D0(*(_QWORD *)(a2 + 40), 80);
    v9 = sub_F963B0(v8, 0, 6);
    v10 = ((unsigned __int16)(v5 - 406) <= 8u) << 9;
    *(_QWORD *)v19 = v8;
    *(_WORD *)(v19 + 32) = v9;
    LOBYTE(v9) = *(_BYTE *)(v19 + 35);
    *(_DWORD *)(v19 + 24) = v20;
    LODWORD(v8) = v17 << 8;
    *(_DWORD *)(v19 + 28) = v20;
    *(_QWORD *)(v19 + 56) &= 0x7F800000uLL;
    v3 = v10 | v8 | v3 & 0xFFFFFCFF;
    v2 |= v10 | v8;
    *(_QWORD *)(v19 + 8) = 0;
    *(_QWORD *)(v19 + 16) = 0;
    *(_BYTE *)(v19 + 34) = -10;
    *(_QWORD *)(v19 + 40) = 0;
    *(_QWORD *)(v19 + 48) = 0;
    *(_BYTE *)(v19 + 35) = (2 * ((v3 & 0x200) != 0)) | BYTE1(v2) & 1 | v9 & 0xFC;
    v11 = sub_15D7D80(v19);
    v12 = v19;
    v13 = *(unsigned int *)(a2 + 60);
    *(_QWORD *)(v19 + 72) = v11;
    v14 = *(unsigned int *)(a2 + 56);
    if ( v14 + 1 > v13 )
    {
      sub_2237220(a2 + 48, a2 + 64, v14 + 1, 8);
      v14 = *(unsigned int *)(a2 + 56);
      v12 = v19;
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v14) = v12;
    v15 = *(unsigned int *)(a2 + 16);
    v16 = *(unsigned int *)(a2 + 20);
    ++*(_DWORD *)(a2 + 56);
    if ( v15 + 1 > v16 )
    {
      v18 = v12;
      sub_2237220(a2 + 8, a2 + 24, v15 + 1, 8);
      v15 = *(unsigned int *)(a2 + 16);
      v12 = v18;
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v15) = v12;
    v5 = *(unsigned __int16 *)(a1 + 32);
  }
  return result;
}
