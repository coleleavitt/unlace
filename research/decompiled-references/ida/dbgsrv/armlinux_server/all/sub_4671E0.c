/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4671E0
// Address: 0x00000000004671E0

//----- (00000000004671E0) ----------------------------------------------------
__int64 __fastcall sub_4671E0(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  __int64 v5; // x20
  char *v6; // x4
  __int64 v7; // x0
  char *v8; // x0
  char *v9; // x19
  _QWORD *v10; // x2
  const char *v11; // x0

  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 + 104;
  v6 = *(char **)(v4 + 104);
  v7 = *(_QWORD *)(v4 + 112);
  if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(v4 + 120) )
  {
    v8 = (char *)sub_491288(v4 + 104, *(void **)(v4 + 104), v7 + 1, 0x78u);
    *(_QWORD *)(v4 + 104) = v8;
    v6 = v8;
    v7 = *(_QWORD *)(v4 + 112);
  }
  v9 = &v6[120 * v7];
  *(_QWORD *)v9 = 0;
  *((_QWORD *)v9 + 1) = 0;
  *((_QWORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 3) = 0;
  *((_QWORD *)v9 + 4) = 0;
  *((_QWORD *)v9 + 5) = 0;
  *((_QWORD *)v9 + 6) = 0;
  *((_QWORD *)v9 + 7) = 0;
  *((_QWORD *)v9 + 8) = 0;
  *((_QWORD *)v9 + 9) = 0;
  *((_QWORD *)v9 + 10) = 0;
  *((_QWORD *)v9 + 11) = 0;
  *((_QWORD *)v9 + 12) = 0;
  *((_QWORD *)v9 + 13) = 0;
  *((_QWORD *)v9 + 14) = 0;
  ++*(_QWORD *)(v5 + 8);
  v10 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)v9 = *(unsigned int *)(a2 + 12);
  *((_DWORD *)v9 + 2) = *(_DWORD *)(a2 + 8);
  *((_QWORD *)v9 + 5) = 0;
  *((_QWORD *)v9 + 6) = *(int *)(a2 + 20);
  sub_467088((_QWORD *)v9 + 2, (__int64 *)a2, v10);
  *((_QWORD *)v9 + 7) = 0;
  *((_QWORD *)v9 + 8) = 0;
  if ( *((_QWORD *)v9 + 3) )
    v11 = *((const char **)v9 + 2);
  else
    v11 = (const char *)&qword_4B2D48;
  if ( !strncmp(v11, ".debug_", 7u) )
    *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
