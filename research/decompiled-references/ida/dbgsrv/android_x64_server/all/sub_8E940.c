/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E940
// Address: 0x000000000008E940

//----- (000000000008E940) ----------------------------------------------------
char __fastcall sub_8E940(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r14
  int *v4; // rbx
  int *v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  int v13; // edi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  unsigned __int8 v17; // bp
  unsigned __int8 v18; // al
  unsigned __int64 v19; // r13
  __int64 v20; // rbx
  int *v21; // rbp
  _QWORD *v22; // rax
  int *v25; // [rsp+10h] [rbp-88h]
  __int64 v26; // [rsp+20h] [rbp-78h]
  char v27; // [rsp+28h] [rbp-70h]
  int c; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  __int64 v33; // [rsp+50h] [rbp-48h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]
  unsigned __int64 v35; // [rsp+60h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 4216);
  if ( !(4 * v2) )
    return 0;
  v3 = a1;
  v29 = a2 - *(_QWORD *)(a1 + 4240);
  v4 = *(int **)(a1 + 4208);
  v31 = a1 + 4152;
  v30 = a1 + a2 + 49;
  v5 = v4;
  while ( 1 )
  {
    v25 = v5;
    v6 = *v5;
    v7 = **(_QWORD **)(v3 + 24);
    v8 = 80 * v6;
    v9 = *(_QWORD *)(v7 + 80 * v6 + 8);
    v10 = v9;
    if ( v29 < v9 )
      v10 = v29;
    v11 = v9 - v10 + *(_QWORD *)(v7 + 80 * v6);
    v26 = v2;
    v33 = v6;
    v34 = *(_QWORD *)(v7 + 80 * v6 + 8);
    if ( *(_QWORD *)(v7 + v8 + 32) )
    {
      v12 = *(_QWORD *)(v7 + v8 + 24) + v9 - v10;
      if ( !v10 )
        break;
      goto LABEL_9;
    }
    v12 = 0;
    if ( !v10 )
      break;
LABEL_9:
    v13 = *(_DWORD *)(a1 + 32);
    v14 = v30 - v10 - 1;
    v15 = 0;
    v16 = 0;
    v27 = v13;
    v35 = v10;
    while ( 1 )
    {
      v17 = *(_BYTE *)(v14 + v15);
      v18 = *(_BYTE *)(v11 + v15);
      if ( (v13 & 1) == 0 )
      {
        c = v18;
        v19 = v11;
        v17 = toupper(v17);
        v18 = toupper(c);
        LOBYTE(v13) = v27;
        v11 = v19;
        v10 = v35;
      }
      if ( v12 )
        break;
LABEL_21:
      if ( v17 != v18 )
        goto LABEL_25;
LABEL_22:
      v16 = (int)++v15;
      if ( v10 <= (int)v15 )
        goto LABEL_23;
    }
    if ( (v13 & 0x20) != 0 )
    {
      if ( ((unsigned __int8)(v18 ^ v17) & *(_BYTE *)(v12 + v16)) != 0 )
        goto LABEL_25;
      goto LABEL_22;
    }
    if ( v12 == 255 )
    {
      if ( v18 == 0xFF )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( v17 == v18 || !*(_BYTE *)(v12 + v16) )
      goto LABEL_22;
LABEL_25:
    v3 = a1;
    v21 = v25;
    v2 = v26;
LABEL_26:
    v5 = v21 + 1;
    if ( v5 == &v4[v2] )
      return 0;
  }
LABEL_23:
  v3 = a1;
  v20 = a2 + *(_QWORD *)(a1 + 4144);
  v21 = v25;
  if ( v29 < v34 )
  {
    v22 = qalloc_or_throw(40);
    v22[2] = v20 - v34;
    v22[3] = v33;
    v22[4] = v10;
    *v22 = v31;
    v22[1] = *(_QWORD *)(a1 + 4160);
    **(_QWORD **)(a1 + 4160) = v22;
    *(_QWORD *)(a1 + 4160) = v22;
    ++*(_QWORD *)(a1 + 4168);
    v4 = *(int **)(a1 + 4208);
    v2 = *(_QWORD *)(a1 + 4216);
    goto LABEL_26;
  }
  **(_QWORD **)(a1 + 8) = v20 - v10;
  return 1;
}
