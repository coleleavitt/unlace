__int16 __fastcall sub_1FC8A00(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  int v5; // esi
  _QWORD *v6; // rdi
  int v7; // eax
  int v8; // edx
  int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 *v15; // rbp
  __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned int v19; // eax
  unsigned int v20; // eax

  v4 = a1 + 32;
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 16));
  sub_1FC23C0((unsigned int *)(a1 + 232));
  v5 = *(_DWORD *)(a1 + 236);
  v6 = *(_QWORD **)(a1 + 16);
  v7 = (((*(_BYTE *)(a2 + 2) & 0x10) != 0) << *(_DWORD *)(a1 + 236)) | *(_DWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 236) = v5 + 1;
  *(_DWORD *)(a1 + 232) = v7;
  v8 = v7 | (((*(_DWORD *)a2 >> 21) & 1) << (v5 + 1));
  *(_DWORD *)(a1 + 236) = v5 + 2;
  *(_DWORD *)(a1 + 232) = v8;
  v9 = (((*(_DWORD *)a2 >> 22) & 1) << (v5 + 2)) | v8;
  *(_DWORD *)(a1 + 236) = v5 + 3;
  *(_DWORD *)(a1 + 232) = v9;
  v10 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 236) = v5 + 4;
  v11 = v9 | (BYTE2(v10) >> 7 << (v5 + 3));
  v12 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 232) = v11;
  sub_1F6F570(v6, *(_DWORD *)(a2 + 20), v12);
  sub_183F100(v4, *(_QWORD *)(a2 + 32));
  v13 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
  v14 = v13 + 8LL * *(unsigned int *)(a2 + 16);
  v15 = (__int64 *)(a2 + v13);
  v16 = (__int64 *)(a2 + v14);
  if ( a2 + v14 != a2 + v13 )
  {
    v17 = *(unsigned int *)(a1 + 40);
    do
    {
      v18 = *v15;
      if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(v4, a1 + 48, v17 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v18;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v17) = v18;
      }
      ++v15;
      v17 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v17;
    }
    while ( v16 != v15 );
  }
  v19 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    sub_9B9C90(
      *(_QWORD *)(a1 + 24),
      *(unsigned int *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36)
    | ((unsigned __int64)*(unsigned int *)(a2
                                         + 8
                                         * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1)
                                         + 32) << 32));
    v19 = *(_DWORD *)a2;
  }
  v20 = HIWORD(v19);
  if ( (v20 & 0x20) == 0 && (*(_BYTE *)(a2 + 2) & 0x10) == 0 && (v20 & 0x80u) == 0 )
  {
    LOWORD(v20) = *(_WORD *)a2 & 0x1FF;
    if ( (_WORD)v20 == 89 )
    {
      v20 = *(_DWORD *)(*(_QWORD *)a1 + 3572LL);
      *(_DWORD *)(a1 + 228) = v20;
    }
  }
  *(_DWORD *)(a1 + 224) = 186;
  return v20;
}
