/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448088
// Address: 0x0000000000448088

//----- (0000000000448088) ----------------------------------------------------
__int64 __fastcall sub_448088(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // x22
  unsigned __int64 v7; // x1
  __int64 v8; // x3
  __int64 v9; // x20
  void *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  char *v13; // x4
  __int64 *v14; // x0
  char *v16; // x0
  __int64 v17[4]; // [xsp+48h] [xbp-28h] BYREF

  v4 = a1 + 72;
  v8 = *(_QWORD *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 88);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(void **)(a1 + 72);
  if ( v8 + 1 > v7 )
  {
    v10 = sub_491288(v4, v10, v8 + 1, 4u);
    *(_QWORD *)(a1 + 72) = v10;
    v8 = *(_QWORD *)(v4 + 8);
  }
  *((_DWORD *)v10 + v8) = v9;
  v17[1] = 0;
  v17[2] = 0;
  v11 = *(_QWORD *)(v4 + 8);
  LOBYTE(v17[0]) = 2;
  *(_QWORD *)(v4 + 8) = v11 + 1;
  v17[3] = 0;
  sub_4488B8(v17, a3);
  v12 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(v12 + 1) > *(_QWORD *)(a1 + 40) )
  {
    v16 = (char *)sub_491288(a1 + 24, *(void **)(a1 + 24), v12 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v16;
    v13 = v16;
    v12 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v13 = *(char **)(a1 + 24);
  }
  v14 = (__int64 *)&v13[32 * v12];
  *(_BYTE *)v14 = 2;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  sub_4488B8(v14, v17);
  ++*(_QWORD *)(a1 + 32);
  sub_448310(v17);
  return sub_447D60((_QWORD *)a1, nullptr, nullptr, a2);
}
