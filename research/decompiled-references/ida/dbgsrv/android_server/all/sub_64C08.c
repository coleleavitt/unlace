/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64C08
// Address: 0x0000000000064C08

//----- (0000000000064C08) ----------------------------------------------------
__int64 __fastcall sub_64C08(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x8
  _BYTE *v4; // x0
  __int64 v5; // x9
  const char *v6; // x1
  size_t v7; // x2
  __int64 v8; // x20
  __int64 v9; // x8
  _BYTE *v10; // x0

  v1 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -86;
  v3 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) >= (unsigned __int64)(v3 + 1) )
  {
    v4 = *(_BYTE **)v1;
  }
  else
  {
    v4 = qvector_reserve((pthread_mutex_t *)v1, *(void **)v1, v3 + 1, 1u);
    v3 = *(_QWORD *)(v1 + 8);
    *(_QWORD *)v1 = v4;
  }
  v4[v3] = -86;
  ++*(_QWORD *)(v1 + 8);
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
    v6 = *(const char **)(a1 + 40);
  else
    v6 = &byte_F154B;
  if ( v5 )
    v7 = v5 - 1;
  else
    v7 = 0;
  ++*(_DWORD *)(a1 + 208);
  sub_5EC14(a1, v6, v7);
  v8 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = 1;
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_QWORD *)(v8 + 16) >= (unsigned __int64)(v9 + 1) )
  {
    v10 = *(_BYTE **)v8;
  }
  else
  {
    v10 = qvector_reserve((pthread_mutex_t *)v8, *(void **)v8, v9 + 1, 1u);
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)v8 = v10;
  }
  v10[v9] = 1;
  ++*(_QWORD *)(v8 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
// F154B: using guessed type char byte_F154B;
