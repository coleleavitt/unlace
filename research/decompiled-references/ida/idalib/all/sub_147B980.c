__int64 __fastcall sub_147B980(__int64 a1, __int64 a2)
{
  __int16 v2; // bx
  int v3; // ebp
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r13
  __int16 v10; // ax
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // [rsp+Ch] [rbp-5Ch]
  int *v16; // [rsp+10h] [rbp-58h]

  v16 = (int *)(a1 + 16);
  for ( result = a2 + 64; *(_WORD *)(a1 + 32) == 367; ++*(_DWORD *)(a2 + 16) )
  {
    while ( 1 )
    {
      v7 = *(__int64 **)(a1 + 8);
      HIBYTE(v2) &= 0xFCu;
      v8 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v7, v16);
      v15 = *(_DWORD *)(a1 + 40);
      v9 = sub_15D92D0(*(_QWORD *)(a2 + 40), 80);
      v10 = sub_F963B0(v8, 0, 6);
      *(_QWORD *)v9 = v8;
      *(_WORD *)(v9 + 32) = v10;
      v11 = v3;
      BYTE1(v11) = BYTE1(v3) & 0xFC;
      *(_DWORD *)(v9 + 24) = v15;
      *(_DWORD *)(v9 + 28) = v15;
      v3 = v11;
      LOBYTE(v11) = *(_BYTE *)(v9 + 35);
      *(_QWORD *)(v9 + 56) &= 0x7F800000uLL;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_BYTE *)(v9 + 34) = -10;
      *(_QWORD *)(v9 + 40) = 0;
      *(_BYTE *)(v9 + 35) = (2 * ((v2 & 0x200) != 0)) | BYTE1(v11) & 1 | v11 & 0xFC;
      *(_QWORD *)(v9 + 48) = 0;
      v12 = sub_15D7D80(v9);
      v13 = *(unsigned int *)(a2 + 60);
      *(_QWORD *)(v9 + 72) = v12;
      v14 = *(unsigned int *)(a2 + 56);
      if ( v14 + 1 > v13 )
      {
        sub_2237220(a2 + 48, a2 + 64, v14 + 1, 8);
        v14 = *(unsigned int *)(a2 + 56);
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v14) = v9;
      result = *(unsigned int *)(a2 + 16);
      v6 = *(unsigned int *)(a2 + 20);
      ++*(_DWORD *)(a2 + 56);
      if ( result + 1 > v6 )
        break;
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * result) = v9;
      ++*(_DWORD *)(a2 + 16);
      if ( *(_WORD *)(a1 + 32) != 367 )
        return result;
    }
    sub_2237220(a2 + 8, a2 + 24, result + 1, 8);
    result = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(result + 8LL * *(unsigned int *)(a2 + 16)) = v9;
  }
  return result;
}
