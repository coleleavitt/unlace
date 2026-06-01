__int64 __fastcall sub_5E2AF0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  v1 = *(_QWORD *)(a1 + 448);
  v2 = *(_QWORD *)(a1 + 152);
  v3 = *(_QWORD *)(a1 + 440);
  if ( *(_QWORD *)(a1 + 456) < (unsigned __int64)(v1 + 1) )
  {
    v24 = qvector_reserve(a1 + 440, v3, v1 + 1, 8);
    *(_QWORD *)(a1 + 440) = v24;
    v3 = v24;
    v1 = *(_QWORD *)(a1 + 448);
  }
  *(_QWORD *)(v3 + 8 * v1) = v2;
  v4 = *(_QWORD *)(a1 + 448);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = *(_QWORD *)(a1 + 440);
  v7 = v4 + 1;
  v8 = v4 + 2;
  *(_QWORD *)(a1 + 448) = v7;
  if ( *(_QWORD *)(a1 + 456) < v8 )
  {
    v28 = qvector_reserve(a1 + 440, v6, v8, 8);
    *(_QWORD *)(a1 + 440) = v28;
    v6 = v28;
    v7 = *(_QWORD *)(a1 + 448);
  }
  *(_QWORD *)(v6 + 8 * v7) = v5;
  v9 = *(_QWORD *)(a1 + 176);
  ++*(_QWORD *)(a1 + 448);
  v10 = *(_DWORD *)(a1 + 220);
  v11 = *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)(a1 + 184) < (unsigned __int64)(v9 + 1) )
  {
    v27 = qvector_reserve(a1 + 168, v11, v9 + 1, 1);
    *(_QWORD *)(a1 + 168) = v27;
    v11 = v27;
    v9 = *(_QWORD *)(a1 + 176);
  }
  *(_BYTE *)(v11 + v9) = v10;
  v12 = *(_QWORD *)(a1 + 176);
  v13 = *(_DWORD *)(a1 + 216);
  v14 = *(_QWORD *)(a1 + 168);
  v15 = v12 + 1;
  v16 = v12 + 2;
  *(_QWORD *)(a1 + 176) = v15;
  if ( *(_QWORD *)(a1 + 184) < v16 )
  {
    v26 = qvector_reserve(a1 + 168, v14, v16, 1);
    *(_QWORD *)(a1 + 168) = v26;
    v14 = v26;
    v15 = *(_QWORD *)(a1 + 176);
  }
  *(_BYTE *)(v14 + v15) = v13;
  v17 = *(_QWORD *)(a1 + 176);
  v18 = *(_BYTE *)(a1 + 753);
  v19 = *(_QWORD *)(a1 + 168);
  v20 = v17 + 1;
  v21 = v17 + 2;
  *(_QWORD *)(a1 + 176) = v20;
  if ( *(_QWORD *)(a1 + 184) < v21 )
  {
    v25 = qvector_reserve(a1 + 168, v19, v21, 1);
    *(_QWORD *)(a1 + 168) = v25;
    v19 = v25;
    v20 = *(_QWORD *)(a1 + 176);
  }
  *(_BYTE *)(v19 + v20) = v18;
  v22 = *(_QWORD *)(a1 + 128);
  ++*(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 152) = v22;
  *(_DWORD *)(v22 + 80) |= 2u;
  *(_BYTE *)(a1 + 753) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  return 0;
}
