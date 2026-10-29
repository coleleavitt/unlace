unsigned __int16 __fastcall sub_147B5E0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v3; // r13d
  __int64 *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int16 v8; // ax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int16 result; // ax
  int v17; // [rsp+4h] [rbp-44h]
  int *v18; // [rsp+8h] [rbp-40h]

  v18 = (int *)(a1 + 16);
  while ( 1 )
  {
    result = *(_WORD *)(a1 + 32);
    if ( result < 0x141u )
      break;
    if ( result > 0x146u )
    {
      result -= 385;
      if ( result > 4u )
        break;
    }
    v5 = *(__int64 **)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v5, v18);
    v17 = *(_DWORD *)(a1 + 40);
    v7 = sub_15D92D0(*(_QWORD *)(a2 + 40), 80);
    v8 = sub_F963B0(v6, 0, 6);
    v9 = v2;
    *(_QWORD *)v7 = v6;
    *(_WORD *)(v7 + 32) = v8;
    v10 = v3;
    BYTE1(v9) = BYTE1(v2) & 0xFC;
    BYTE1(v10) = BYTE1(v3) & 0xFC;
    *(_DWORD *)(v7 + 24) = v17;
    v2 = v9;
    *(_DWORD *)(v7 + 28) = v17;
    v3 = v10;
    LOBYTE(v10) = *(_BYTE *)(v7 + 35);
    *(_QWORD *)(v7 + 56) &= 0x7F800000uLL;
    *(_BYTE *)(v7 + 34) = -10;
    *(_QWORD *)(v7 + 8) = 0;
    *(_QWORD *)(v7 + 16) = 0;
    *(_BYTE *)(v7 + 35) = (2 * ((v9 & 0x200) != 0)) | BYTE1(v10) & 1 | v10 & 0xFC;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    v11 = sub_15D7D80(v7);
    v12 = *(unsigned int *)(a2 + 60);
    *(_QWORD *)(v7 + 72) = v11;
    v13 = *(unsigned int *)(a2 + 56);
    if ( v13 + 1 > v12 )
    {
      sub_2237220(a2 + 48, a2 + 64, v13 + 1, 8);
      v13 = *(unsigned int *)(a2 + 56);
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v13) = v7;
    v14 = *(unsigned int *)(a2 + 16);
    v15 = *(unsigned int *)(a2 + 20);
    ++*(_DWORD *)(a2 + 56);
    if ( v14 + 1 > v15 )
    {
      sub_2237220(a2 + 8, a2 + 24, v14 + 1, 8);
      v14 = *(unsigned int *)(a2 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v14) = v7;
    ++*(_DWORD *)(a2 + 16);
  }
  return result;
}
