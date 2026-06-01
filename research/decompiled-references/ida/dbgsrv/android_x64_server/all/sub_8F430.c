/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F430
// Address: 0x000000000008F430

//----- (000000000008F430) ----------------------------------------------------
char __fastcall sub_8F430(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r14
  int *v4; // r9
  int *v5; // rbp
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // r15
  __int64 v14; // r12
  unsigned __int8 v15; // bp
  unsigned __int8 v16; // al
  __int64 v17; // rbx
  int *v18; // rbp
  _QWORD *v19; // rax
  int *v22; // [rsp+8h] [rbp-80h]
  int *v23; // [rsp+10h] [rbp-78h]
  __int64 v24; // [rsp+18h] [rbp-70h]
  char v25; // [rsp+20h] [rbp-68h]
  int c; // [rsp+24h] [rbp-64h]
  unsigned __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]
  __int64 v32; // [rsp+50h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 4216);
  if ( !(4 * v2) )
    return 0;
  v3 = a1;
  v27 = *(_QWORD *)(a1 + 4240) - a2;
  v4 = *(int **)(a1 + 4208);
  v28 = a1 + 4152;
  v32 = a1 + a2 + 48;
  v5 = v4;
  while ( 1 )
  {
    v6 = *v5;
    v7 = **(_QWORD **)(v3 + 24);
    v8 = 80 * v6;
    v9 = *(_QWORD *)(v7 + 80 * v6);
    v10 = *(_QWORD *)(v7 + 80 * v6 + 8);
    if ( v27 < v10 )
      v10 = v27;
    v22 = v5;
    v24 = v2;
    v23 = v4;
    v30 = *v5;
    v31 = *(_QWORD *)(v7 + 80 * v6 + 8);
    if ( *(_QWORD *)(v7 + v8 + 32) )
    {
      v11 = *(_QWORD *)(v7 + v8 + 24);
      if ( !v10 )
        break;
      goto LABEL_9;
    }
    v11 = 0;
    if ( !v10 )
      break;
LABEL_9:
    v12 = *(_DWORD *)(a1 + 32);
    v13 = 0;
    v14 = 0;
    v25 = v12;
    while ( 1 )
    {
      v15 = *(_BYTE *)(v32 + v13);
      v16 = *(_BYTE *)(v9 + v13);
      if ( (v12 & 1) == 0 )
      {
        c = v16;
        v15 = toupper(v15);
        v16 = toupper(c);
        LOBYTE(v12) = v25;
      }
      if ( v11 )
        break;
LABEL_21:
      if ( v15 != v16 )
        goto LABEL_25;
LABEL_22:
      v14 = (int)++v13;
      if ( v10 <= (int)v13 )
        goto LABEL_23;
    }
    if ( (v12 & 0x20) != 0 )
    {
      if ( ((unsigned __int8)(v16 ^ v15) & *(_BYTE *)(v11 + v14)) != 0 )
        goto LABEL_25;
      goto LABEL_22;
    }
    if ( v11 == 255 )
    {
      if ( v16 == 0xFF )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( v15 == v16 || !*(_BYTE *)(v11 + v14) )
      goto LABEL_22;
LABEL_25:
    v3 = a1;
    v18 = v22;
    v2 = v24;
    v4 = v23;
LABEL_26:
    v5 = v18 + 1;
    if ( v5 == &v4[v2] )
      return 0;
  }
LABEL_23:
  v3 = a1;
  v17 = a2 + *(_QWORD *)(a1 + 4144);
  v18 = v22;
  if ( v27 < v31 )
  {
    v19 = qalloc_or_throw(40);
    v19[2] = v17;
    v19[3] = v30;
    v19[4] = v10;
    *v19 = v28;
    v19[1] = *(_QWORD *)(a1 + 4160);
    **(_QWORD **)(a1 + 4160) = v19;
    *(_QWORD *)(a1 + 4160) = v19;
    ++*(_QWORD *)(a1 + 4168);
    v4 = *(int **)(a1 + 4208);
    v2 = *(_QWORD *)(a1 + 4216);
    goto LABEL_26;
  }
  **(_QWORD **)(a1 + 8) = v17;
  return 1;
}
