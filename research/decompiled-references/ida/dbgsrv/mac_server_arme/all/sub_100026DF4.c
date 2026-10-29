/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026DF4
// Address: 0x0000000100026DF4

//----- (0000000100026DF4) ----------------------------------------------------
__int64 __fastcall sub_100026DF4(__int64 a1)
{
  __int64 v1; // x30
  __int64 v3; // x20
  _QWORD *v4; // x1
  __int64 v5; // x8
  _QWORD *v6; // x1
  int v7; // w20
  __int64 v8; // x8
  __int64 v9; // x20
  _QWORD *v10; // x1
  __int64 v11; // x8
  __int64 v12; // x20
  _QWORD *v13; // x1
  __int64 v14; // x8
  __int64 v15; // x20
  _QWORD *v16; // x1
  __int64 v17; // x8
  __int64 v18; // x20
  _QWORD *v19; // x1
  __int64 v20; // x8

  if ( *(_QWORD *)(a1 + 304) )
  {
    *(_BYTE *)(a1 + 212) = -85;
    v3 = *(_QWORD *)(a1 + 200);
    v4 = *(_QWORD **)v3;
    v5 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v3 + 16) < (unsigned __int64)(v5 + 1) )
    {
      v4 = qvector_reserve(*(_QWORD **)(a1 + 200), v4, v5 + 1, 1u);
      *(_QWORD *)v3 = v4;
      v5 = *(_QWORD *)(v3 + 8);
    }
    *((_BYTE *)v4 + v5) = -85;
    ++*(_QWORD *)(v3 + 8);
    v6 = *(_QWORD **)(a1 + 248);
    v7 = *(_DWORD *)(a1 + 208) + 1;
    *(_DWORD *)(a1 + 208) = v7;
    v8 = *(_QWORD *)(a1 + 256);
    if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v8 + 1) )
    {
      v6 = qvector_reserve((_QWORD *)(a1 + 248), v6, v8 + 1, 4u);
      *(_QWORD *)(a1 + 248) = v6;
      v8 = *(_QWORD *)(a1 + 256);
    }
    *((_DWORD *)v6 + v8) = v7;
    ++*(_QWORD *)(a1 + 256);
    v9 = *(_QWORD *)(a1 + 200);
    v10 = *(_QWORD **)v9;
    v11 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(v9 + 16) < (unsigned __int64)(v11 + 1) )
    {
      v10 = qvector_reserve(*(_QWORD **)(a1 + 200), v10, v11 + 1, 1u);
      *(_QWORD *)v9 = v10;
      v11 = *(_QWORD *)(v9 + 8);
    }
    *((_BYTE *)v10 + v11) = 0;
    ++*(_QWORD *)(v9 + 8);
    ++*(_DWORD *)(a1 + 208);
    v12 = *(_QWORD *)(a1 + 200);
    v13 = *(_QWORD **)v12;
    v14 = *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)(v12 + 16) < (unsigned __int64)(v14 + 1) )
    {
      v13 = qvector_reserve(*(_QWORD **)(a1 + 200), v13, v14 + 1, 1u);
      *(_QWORD *)v12 = v13;
      v14 = *(_QWORD *)(v12 + 8);
    }
    *((_BYTE *)v13 + v14) = 0;
    ++*(_QWORD *)(v12 + 8);
    ++*(_DWORD *)(a1 + 208);
    v15 = *(_QWORD *)(a1 + 200);
    v16 = *(_QWORD **)v15;
    v17 = *(_QWORD *)(v15 + 8);
    if ( *(_QWORD *)(v15 + 16) < (unsigned __int64)(v17 + 1) )
    {
      v16 = qvector_reserve(*(_QWORD **)(a1 + 200), v16, v17 + 1, 1u);
      *(_QWORD *)v15 = v16;
      v17 = *(_QWORD *)(v15 + 8);
    }
    *((_BYTE *)v16 + v17) = 0;
    ++*(_QWORD *)(v15 + 8);
    ++*(_DWORD *)(a1 + 208);
    v18 = *(_QWORD *)(a1 + 200);
    v19 = *(_QWORD **)v18;
    v20 = *(_QWORD *)(v18 + 8);
    if ( *(_QWORD *)(v18 + 16) < (unsigned __int64)(v20 + 1) )
    {
      v19 = qvector_reserve(*(_QWORD **)(a1 + 200), v19, v20 + 1, 1u);
      *(_QWORD *)v18 = v19;
      v20 = *(_QWORD *)(v18 + 8);
    }
    *((_BYTE *)v19 + v20) = 0;
    ++*(_QWORD *)(v18 + 8);
    ++*(_DWORD *)(a1 + 208);
    return 0;
  }
  else
  {
    if ( ((v1 ^ (2 * v1)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return set_qerrno();
  }
}
// 100026FEC: variable 'v1' is possibly undefined
