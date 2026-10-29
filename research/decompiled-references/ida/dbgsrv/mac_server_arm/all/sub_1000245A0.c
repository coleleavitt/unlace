/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000245A0
// Address: 0x00000001000245A0

//----- (00000001000245A0) ----------------------------------------------------
__int64 __fastcall sub_1000245A0(__int64 a1)
{
  _QWORD *v2; // x1
  unsigned __int64 v3; // x8
  __int64 v4; // x20
  int v5; // w21
  int v6; // w22
  int v7; // w23
  _QWORD *v8; // x1
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x21
  _QWORD *v12; // x1
  __int64 v13; // x8
  int v14; // w8
  int v15; // w8
  int v16; // w21

  v2 = *(_QWORD **)(a1 + 296);
  v3 = *(_QWORD *)(a1 + 304);
  v4 = *((unsigned int *)v2 + v3 - 1);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 304) = v3 - 1;
    v5 = *((_DWORD *)v2 + v3 - 2);
    if ( v3 == 1 )
    {
      v3 = 0;
      v6 = *((_DWORD *)v2 - 1);
    }
    else
    {
      *(_QWORD *)(a1 + 304) = v3 - 2;
      v6 = *((_DWORD *)v2 + v3 - 3);
      if ( v3 == 2 )
      {
        v3 = 0;
      }
      else
      {
        v3 -= 3LL;
        *(_QWORD *)(a1 + 304) = v3;
      }
    }
  }
  else
  {
    v5 = *((_DWORD *)v2 - 1);
    v6 = v5;
  }
  v7 = v4 + 4;
  if ( *(_QWORD *)(a1 + 312) <= v3 )
  {
    v2 = qvector_reserve((_QWORD *)(a1 + 296), v2, v3 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v2;
    v3 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v2 + v3) = v7;
  v8 = *(_QWORD **)(a1 + 296);
  v9 = *(_QWORD *)(a1 + 304);
  v10 = v9 + 1;
  *(_QWORD *)(a1 + 304) = v9 + 1;
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v9 + 2) )
  {
    v8 = qvector_reserve((_QWORD *)(a1 + 296), v8, v9 + 2, 4u);
    *(_QWORD *)(a1 + 296) = v8;
    v10 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v8 + v10) = v5;
  ++*(_QWORD *)(a1 + 304);
  if ( v5 )
  {
    *(_BYTE *)(a1 + 212) = -85;
    v11 = *(_QWORD *)(a1 + 200);
    v12 = *(_QWORD **)v11;
    v13 = *(_QWORD *)(v11 + 8);
    if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v13 + 1) )
    {
      v12 = qvector_reserve(*(_QWORD **)(a1 + 200), v12, v13 + 1, 1u);
      *(_QWORD *)v11 = v12;
      v13 = *(_QWORD *)(v11 + 8);
    }
    *((_BYTE *)v12 + v13) = -85;
    ++*(_QWORD *)(v11 + 8);
    v14 = *(_DWORD *)(a1 + 208);
    *(_DWORD *)(a1 + 208) = v14 + 1;
    v15 = v6 - v14;
    v16 = v15 - 5;
    sub_1000218E0((_QWORD *)a1, v15 - 5);
    sub_1000218E0((_QWORD *)a1, SHIWORD(v16));
  }
  sub_10002CBF8(*(_QWORD **)(a1 + 200), v4, *(_DWORD *)(a1 + 208) - v7);
  return 0;
}
