/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A8120
// Address: 0x080A8120

//----- (080A8120) --------------------------------------------------------
int __cdecl sub_80A8120(int a1, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  int v4; // eax
  char *v5; // ebx
  char *v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char *v11; // eax
  _DWORD *v12; // [esp+4h] [ebp-20h]

  v2 = *(_DWORD **)(a1 + 4);
  v3 = *(_DWORD **)(a1 + 8);
  v4 = v2[14];
  v5 = (char *)v2[13];
  if ( v2[15] < (unsigned int)(v4 + 1) )
  {
    v12 = *(_DWORD **)(a1 + 8);
    v11 = (char *)sub_80CF920((int)(v2 + 13), v5, v4 + 1, 0x64u);
    v3 = v12;
    v2[13] = v11;
    v5 = v11;
    v4 = v2[14];
  }
  v6 = &v5[100 * v4];
  *(_DWORD *)v6 = 0;
  *((_DWORD *)v6 + 24) = 0;
  memset(
    (void *)((unsigned int)(v6 + 4) & 0xFFFFFFFC),
    0,
    4 * ((unsigned int)&v6[-((unsigned int)(v6 + 4) & 0xFFFFFFFC) + 100] >> 2));
  ++v2[14];
  v7 = *(_DWORD *)(a2 + 12);
  *((_DWORD *)v6 + 1) = 0;
  *(_DWORD *)v6 = v7;
  v8 = *(_DWORD *)(a2 + 8);
  *((_DWORD *)v6 + 6) = 0;
  *((_DWORD *)v6 + 2) = v8;
  *((_DWORD *)v6 + 7) = 0;
  *((_QWORD *)v6 + 4) = *(int *)(a2 + 20);
  sub_80A7F70((int)(v6 + 12), (_QWORD *)a2, v3);
  v9 = *((_DWORD *)v6 + 4);
  *(_OWORD *)(v6 + 40) = 0;
  if ( v9 && !strncmp(*((const char **)v6 + 3), (const char *)&qword_811CFF4 - 276704, 7u) )
    *(_BYTE *)(a1 + 12) = 1;
  return 0;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
