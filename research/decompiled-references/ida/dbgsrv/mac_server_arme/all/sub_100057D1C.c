/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100057D1C
// Address: 0x0000000100057D1C

//----- (0000000100057D1C) ----------------------------------------------------
void __fastcall sub_100057D1C(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned __int64 v6; // x8
  __int64 v7; // x23
  __int64 v8; // x24
  char *v9; // x25
  __int64 v10; // x26
  __int64 v11; // x8
  _QWORD *v12; // x27
  size_t v13; // x22
  void *v14; // x0
  int v15; // w8
  _QWORD *v16; // x26
  size_t v17; // x22
  void *v18; // x0

  sub_100057E40((char **)a1, a2);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = a2 - v6;
  if ( a2 > v6 )
  {
    v8 = 432 * v6 + 64;
    do
    {
      v9 = *(char **)a1;
      v10 = *(_QWORD *)a1 + v8;
      v11 = *a3;
      *(_QWORD *)(v10 - 56) = 0;
      v12 = (_QWORD *)(v10 - 56);
      *(_QWORD *)(v10 - 64) = v11;
      v12[1] = 0;
      v12[2] = 0;
      v13 = a3[2];
      if ( v13 )
      {
        v14 = qalloc_or_throw(a3[2]);
        *v12 = v14;
        *(_QWORD *)(v10 - 40) = v13;
        memcpy(v14, (const void *)a3[1], v13);
        *(_QWORD *)(v10 - 48) = v13;
      }
      v15 = *((_DWORD *)a3 + 8);
      *(_QWORD *)(v10 - 24) = 0;
      v16 = (_QWORD *)(v10 - 24);
      *((_DWORD *)v16 - 2) = v15;
      v16[1] = 0;
      v16[2] = 0;
      v17 = a3[6];
      if ( v17 )
      {
        v18 = qalloc_or_throw(a3[6]);
        *v16 = v18;
        *(_QWORD *)&v9[v8 - 8] = v17;
        memcpy(v18, (const void *)a3[5], v17);
        *(_QWORD *)&v9[v8 - 16] = v17;
      }
      memcpy(&v9[v8], a3 + 8, 0x170u);
      v8 += 432;
      --v7;
    }
    while ( v7 );
  }
  *(_QWORD *)(a1 + 8) = a2;
}
