char *__fastcall deserialize_insn(__int64 a1, __int64 a2)
{
  int v2; // eax
  char v3; // dl
  char *v4; // rax
  char v5; // dl
  char *v6; // rax
  __int64 v7; // rbp
  int v8; // r12d
  char v9; // dl
  char *v10; // rax
  char v11; // dl
  char *v12; // rax
  char v13; // dl
  char *v14; // rax
  char v15; // dl
  char *v16; // rax
  char v17; // dl
  char *v18; // rax
  __int64 v19; // rax
  char v20; // dl
  char *v21; // rax
  char v22; // dl
  char *v23; // rax
  char v24; // dl
  char *v25; // rax
  char v26; // dl
  char *result; // rax

  *(_QWORD *)a1 = unpack_dq(a2) - 1;
  *(_QWORD *)(a1 + 8) = unpack_dq(a2) - 1;
  *(_QWORD *)(a1 + 16) = unpack_dq(a2) - 1;
  *(_WORD *)(a1 + 24) = unpack_dw(a2, *(_QWORD *)(a2 + 8));
  *(_WORD *)(a1 + 26) = unpack_dw(a2, *(_QWORD *)(a2 + 8));
  v2 = unpack_dd(a2);
  v3 = 0;
  *(_DWORD *)(a1 + 28) = v2;
  v4 = *(char **)a2;
  if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
    v3 = *v4++;
  *(_QWORD *)a2 = v4;
  *(_BYTE *)(a1 + 32) = v3;
  v5 = 0;
  v6 = *(char **)a2;
  if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
    v5 = *v6++;
  *(_QWORD *)a2 = v6;
  v7 = a1 + 40;
  v8 = 0;
  *(_BYTE *)(a1 + 33) = v5;
  *(_WORD *)(a1 + 34) = unpack_dw(a2, *(_QWORD *)(a2 + 8));
  do
  {
    *(_BYTE *)v7 = v8;
    v9 = 0;
    v10 = *(char **)a2;
    if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      v9 = *v10++;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(v7 + 1) = v9;
    v11 = 0;
    v12 = *(char **)a2;
    if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      v11 = *v12++;
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(v7 + 2) = v11;
    v13 = 0;
    v14 = *(char **)a2;
    if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      v13 = *v14++;
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(v7 + 3) = v13;
    v15 = 0;
    v16 = *(char **)a2;
    if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      v15 = *v16++;
    *(_QWORD *)a2 = v16;
    *(_BYTE *)(v7 + 4) = v15;
    v17 = 0;
    v18 = *(char **)a2;
    if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      v17 = *v18++;
    *(_QWORD *)a2 = v18;
    *(_BYTE *)(v7 + 5) = v17;
    *(_WORD *)(v7 + 6) = unpack_dw(a2, *(_QWORD *)(a2 + 8));
    *(_QWORD *)(v7 + 8) = unpack_dq(a2) - 1;
    *(_QWORD *)(v7 + 16) = unpack_dq(a2) - 1;
    v19 = unpack_dq(a2);
    v20 = 0;
    *(_QWORD *)(v7 + 24) = v19 - 1;
    v21 = *(char **)a2;
    if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      v20 = *v21++;
    *(_QWORD *)a2 = v21;
    *(_BYTE *)(v7 + 32) = v20;
    v22 = 0;
    v23 = *(char **)a2;
    if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      v22 = *v23++;
    *(_QWORD *)a2 = v23;
    *(_BYTE *)(v7 + 33) = v22;
    v24 = 0;
    v25 = *(char **)a2;
    if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      v24 = *v25++;
    *(_QWORD *)a2 = v25;
    *(_BYTE *)(v7 + 34) = v24;
    v26 = 0;
    result = *(char **)a2;
    if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      v26 = *result++;
    ++v8;
    *(_QWORD *)a2 = result;
    v7 += 40;
    *(_BYTE *)(v7 - 5) = v26;
  }
  while ( v8 != 8 );
  return result;
}
