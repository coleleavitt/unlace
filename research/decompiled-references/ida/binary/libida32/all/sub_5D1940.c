__int64 __fastcall sub_5D1940(_QWORD *a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned __int8 v9; // bp
  unsigned __int8 v10; // r12
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  unsigned __int8 v22; // al
  __int64 v23; // rax

  v3 = a1[49];
  v4 = a1[48];
  v5 = v4 + 16 * v3 - 16;
  v6 = *(_QWORD *)v5;
  if ( v3 )
  {
    a1[49] = v3 - 1;
    v7 = v4 + 16 * (v3 - 1) - 16;
    v8 = *(_QWORD *)v7;
    v9 = *(_BYTE *)(v7 + 8);
    v10 = *(_BYTE *)(v7 + 9);
    if ( v3 != 1 )
      a1[49] = v3 - 2;
  }
  else
  {
    v9 = *(_BYTE *)(v5 + 8);
    v10 = *(_BYTE *)(v5 + 9);
    v8 = *(_QWORD *)v5;
  }
  v11 = getinf(59);
  v12 = v10;
  if ( v9 < v11 )
  {
    v8 = extend_sign(v8, v9, v10);
    v22 = getinf(59);
    v12 = v10;
    v9 = v22;
  }
  if ( a2 )
  {
    v13 = v8 << v6;
  }
  else
  {
    v20 = v8 >> v6;
    v21 = (unsigned __int64)v8 >> v6;
    if ( !v10 )
      v20 = v21;
    v13 = v20;
  }
  v14 = extend_sign(v13, v9, v12);
  v15 = a1[48];
  v16 = v14;
  v17 = a1[49];
  if ( a1[50] < (unsigned __int64)(v17 + 1) )
  {
    v23 = qvector_reserve(a1 + 48, v15, v17 + 1, 16);
    a1[48] = v23;
    v15 = v23;
    v17 = a1[49];
  }
  v18 = 16 * v17 + v15;
  *(_QWORD *)v18 = v16;
  *(_BYTE *)(v18 + 8) = v9;
  *(_BYTE *)(v18 + 9) = v10;
  ++a1[49];
  return 0;
}

