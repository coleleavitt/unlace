/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96028
// Address: 0x0000000000096028

//----- (0000000000096028) ----------------------------------------------------
__int64 __fastcall sub_96028(__int64 a1, __int64 a2)
{
  __int64 v2; // x22
  __int64 v5; // x8
  pthread_mutex_t *v6; // x0
  char *align; // x0
  char *v8; // x23
  _QWORD *v9; // x2
  int v10; // w8
  const char *v11; // x0

  v2 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v2 + 112);
  v6 = (pthread_mutex_t *)(v2 + 104);
  if ( *(_QWORD *)(v2 + 120) >= (unsigned __int64)(v5 + 1) )
  {
    align = (char *)v6->__align;
  }
  else
  {
    align = (char *)qvector_reserve(v6, *(void **)(v2 + 104), v5 + 1, 0x78u);
    v5 = *(_QWORD *)(v2 + 112);
    *(_QWORD *)(v2 + 104) = align;
  }
  v8 = &align[120 * v5];
  *((_QWORD *)v8 + 3) = 0;
  *((_QWORD *)v8 + 4) = 0;
  *((_QWORD *)v8 + 5) = 0;
  *((_QWORD *)v8 + 6) = 0;
  *((_QWORD *)v8 + 13) = 0;
  *((_QWORD *)v8 + 14) = 0;
  *((_QWORD *)v8 + 11) = 0;
  *((_QWORD *)v8 + 12) = 0;
  *((_QWORD *)v8 + 9) = 0;
  *((_QWORD *)v8 + 10) = 0;
  *((_QWORD *)v8 + 7) = 0;
  *((_QWORD *)v8 + 8) = 0;
  *(_QWORD *)v8 = 0;
  *((_QWORD *)v8 + 1) = 0;
  *((_QWORD *)v8 + 2) = 0;
  ++*(_QWORD *)(v2 + 112);
  v9 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)v8 = *(unsigned int *)(a2 + 12);
  v10 = *(_DWORD *)(a2 + 8);
  *((_QWORD *)v8 + 5) = 0;
  *((_DWORD *)v8 + 2) = v10;
  *((_QWORD *)v8 + 6) = *(int *)(a2 + 20);
  sub_8A33C((__int128 *)v8 + 1, (_QWORD *)a2, v9);
  *((_QWORD *)v8 + 7) = 0;
  *((_QWORD *)v8 + 8) = 0;
  if ( *((_QWORD *)v8 + 3) )
    v11 = *((const char **)v8 + 2);
  else
    v11 = &byte_F154B;
  if ( !strncmp(v11, ".debug_", 7u) )
    *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
// F154B: using guessed type char byte_F154B;
