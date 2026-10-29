/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436E60
// Address: 0x0000000000436E60

//----- (0000000000436E60) ----------------------------------------------------
__int64 __fastcall sub_436E60(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x1
  _BYTE *v4; // x0
  __int64 v5; // x2
  char *v6; // x1
  size_t v7; // x2
  __int64 v8; // x20
  __int64 v9; // x1
  _BYTE *v10; // x0

  *(_BYTE *)(a1 + 212) = -86;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD *)(v2 + 8);
  if ( (unsigned __int64)(v3 + 1) > *(_QWORD *)(v2 + 16) )
  {
    v4 = sub_491288(v2, *(void **)v2, v3 + 1, 1u);
    *(_QWORD *)v2 = v4;
    v3 = *(_QWORD *)(v2 + 8);
  }
  else
  {
    v4 = *(_BYTE **)v2;
  }
  v4[v3] = -86;
  ++*(_QWORD *)(v2 + 8);
  v5 = *(_QWORD *)(a1 + 48);
  ++*(_DWORD *)(a1 + 208);
  if ( v5 )
  {
    v6 = *(char **)(a1 + 40);
    v7 = v5 - 1;
  }
  else
  {
    v7 = 0;
    v6 = (char *)&qword_4B2D48;
  }
  sub_436CF8(a1, v6, v7);
  v8 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = 1;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (unsigned __int64)(v9 + 1) > *(_QWORD *)(v8 + 16) )
  {
    v10 = sub_491288(v8, *(void **)v8, v9 + 1, 1u);
    *(_QWORD *)v8 = v10;
    v9 = *(_QWORD *)(v8 + 8);
  }
  else
  {
    v10 = *(_BYTE **)v8;
  }
  v10[v9] = 1;
  ++*(_QWORD *)(v8 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
