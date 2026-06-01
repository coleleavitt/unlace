void __fastcall sub_B87A90(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int8 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  unsigned __int64 v20; // rax
  __int64 *v21; // r14
  __int64 *v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 *v26; // r14
  __int64 *v27; // rax
  __int64 *i; // r15
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 j; // r14
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // r14
  __int64 *v38; // rbp
  __int64 v39; // rdi
  __int64 v40; // [rsp+2Ch] [rbp-10h]
  __int64 v41; // [rsp+34h] [rbp-8h]

  while ( a1 )
  {
    v41 = v7;
    v40 = v6;
    v8 = a3;
    v9 = a4;
    v10 = a1;
    v11 = a2;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x17 )
    {
      if ( a4 )
      {
        v12 = sub_B86C90(a1, *(_QWORD *)(a2 + 40), (*(_BYTE *)(a2 + 58) & 2) != 0, 1, a5, a6);
        if ( a2 != v12 )
        {
          if ( v12 )
          {
LABEL_6:
            sub_B85BD0(v8, v12);
            return;
          }
        }
      }
      v36 = *(__int64 **)(a1 + 104);
      v37 = &v36[*(unsigned int *)(a1 + 112)];
      if ( v37 != v36 )
      {
        v38 = *(__int64 **)(a1 + 104);
        do
        {
          v39 = *v38++;
          sub_B87A90(v39, a2, v8, v9);
        }
        while ( v37 != v38 );
      }
      return;
    }
    v13 = *(_BYTE *)(a2 + 58);
    v14 = *(_QWORD *)(a2 + 40);
    v12 = sub_B86C90(a1, v14, (v13 & 2) != 0, 1, a5, a6);
    if ( v11 != v12 && v12 )
      goto LABEL_6;
    v19 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( v19 == 19 )
    {
      v20 = sub_B867E0(a1, v14, v15, v16, v17, v18);
      v16 = v9;
      v21 = (__int64 *)v15;
      v22 = (__int64 *)v20;
      if ( v20 != v15 )
      {
        do
        {
          v23 = *v22;
          v14 = v11;
          ++v22;
          sub_B87A90(v23, v11, v8, v9);
        }
        while ( v21 != v22 );
      }
      v19 = *(_BYTE *)(v10 + 28) & 0x7F;
    }
    if ( v19 != 20 )
      return;
    v24 = *(_QWORD *)(v10 + 120);
    if ( v24 )
    {
      v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v25 )
        goto LABEL_23;
    }
    else
    {
      v14 = *(_QWORD *)(v10 + 96);
      sub_A557A0((__int64 *)(v14 + 88), v14, v15, v16, v17, v18);
      v15 = *(_QWORD *)(v10 + 120);
      v25 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        if ( v15 )
          goto LABEL_23;
        v26 = nullptr;
LABEL_35:
        v14 = *(_QWORD *)(v10 + 96);
        sub_A557A0((__int64 *)(v14 + 88), v14, v15, v16, v17, v18);
        v25 = *(_QWORD *)(v10 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_36;
      }
    }
    if ( (*(_BYTE *)(v25 + 72) & 1) == 0 )
    {
      v15 = *(_QWORD *)(v25 + 16);
      v26 = (__int64 *)(v15 + 8LL * *(unsigned int *)(v25 + 24));
LABEL_18:
      if ( (*(_BYTE *)(v25 + 72) & 1) != 0 )
      {
        sub_B84BC0(v10);
        v25 = *(_QWORD *)(v10 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v27 = *(__int64 **)(v25 + 16);
      goto LABEL_21;
    }
    sub_B84BC0(v10);
    v15 = *(_QWORD *)(v10 + 120);
    v25 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    v14 = *(unsigned int *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 24);
    v16 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v26 = (__int64 *)(v16 + 8 * v14);
    if ( !v15 )
      goto LABEL_35;
LABEL_36:
    if ( v25 )
      goto LABEL_18;
    v27 = nullptr;
LABEL_21:
    v16 = v9;
    for ( i = v27; v26 != i; ++i )
    {
      v29 = *i;
      v14 = v11;
      sub_B87A90(v29, v11, v8, v9);
    }
LABEL_23:
    for ( j = sub_B86FC0(v10, v14, v15, v16, v17, v18); j; j = *(_QWORD *)(j + 128) )
    {
      v14 = v11;
      sub_B87A90(j, v11, v8, v9);
    }
    v35 = sub_B878F0(v10, v14, v30, v31, v32, v33);
    if ( !v35 )
      return;
    a3 = v8;
    a2 = v11;
    a4 = 1;
    a1 = v35;
    v6 = v40;
    v7 = v41;
  }
}

