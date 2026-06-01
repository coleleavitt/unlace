/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B588
// Address: 0x000000000042B588

//----- (000000000042B588) ----------------------------------------------------
__int64 __fastcall sub_42B588(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x21
  char *v7; // x0
  __int64 v8; // x3
  char *v9; // x1
  __int64 v10; // x21
  __int64 v11; // x1
  char *v12; // x0
  char *v13; // x1

  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(char **)(v6 + 24);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(v6 + 40) )
  {
    v7 = (char *)sub_491288(v6 + 24, *(void **)(v6 + 24), v8 + 1, 0x28u);
    *(_QWORD *)(v6 + 24) = v7;
    v8 = *(_QWORD *)(v6 + 32);
  }
  v9 = &v7[40 * v8];
  *((_QWORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 3) = 0;
  *((_QWORD *)v9 + 4) = 0;
  ++*(_QWORD *)(v6 + 32);
  *(_QWORD *)v9 = a3;
  *((_QWORD *)v9 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(v10 + 88);
  if ( (unsigned __int64)(v11 + 1) > *(_QWORD *)(v10 + 96) )
  {
    v12 = (char *)sub_491288(v10 + 80, *(void **)(v10 + 80), v11 + 1, 0x18u);
    *(_QWORD *)(v10 + 80) = v12;
    v11 = *(_QWORD *)(v10 + 88);
  }
  else
  {
    v12 = *(char **)(v10 + 80);
  }
  v13 = &v12[24 * v11];
  *(_QWORD *)v13 = 0;
  *((_QWORD *)v13 + 1) = 0;
  *((_QWORD *)v13 + 2) = 0;
  ++*(_QWORD *)(v10 + 88);
  return sub_42ABB0(*(_QWORD *)(a1 + 8), (__int64)v13, *(_DWORD *)(a1 + 24), *(_DWORD *)(a2 + 4));
}
