void __fastcall sub_7BF8C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int8 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // al
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 *v17; // r14
  __int64 *i; // r15
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // r14
  __int64 *v22; // rax
  __int64 *v23; // r15
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 j; // r14
  __int64 v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // r14
  __int64 *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-40h]
  __int64 v35; // [rsp+30h] [rbp-10h]
  __int64 v36; // [rsp+38h] [rbp-8h]

  while ( a1 )
  {
    v36 = v5;
    v35 = v4;
    v6 = a4;
    v7 = a3;
    v8 = a1;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x15 )
    {
      if ( a4
        && (v9 = sub_7BDA60(a1, *(_QWORD *)(a2 + 40), (*(_BYTE *)(a2 + 58) & 2) != 0, 1), (v10 = v9) != 0)
        && a2 != v9 )
      {
        v11 = *(unsigned int *)(v7 + 8);
        if ( *(unsigned int *)(v7 + 12) < (unsigned __int64)(v11 + 1) )
        {
          sub_25D6060(v7, v7 + 16, v11 + 1, 8);
          v11 = *(unsigned int *)(v7 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v7 + 8 * v11) = v10;
        ++*(_DWORD *)(v7 + 8);
      }
      else
      {
        v28 = *(__int64 **)(a1 + 104);
        v29 = &v28[*(unsigned int *)(a1 + 112)];
        if ( v29 != v28 )
        {
          v30 = *(__int64 **)(a1 + 104);
          do
          {
            v31 = *v30++;
            sub_7BF8C0(v31, a2, v7, v6);
          }
          while ( v29 != v30 );
        }
      }
      return;
    }
    v12 = sub_7BDA60(a1, *(_QWORD *)(a2 + 40), (*(_BYTE *)(a2 + 58) & 2) != 0, 1);
    if ( a2 != v12 && v12 )
    {
      v32 = *(unsigned int *)(v7 + 8);
      if ( *(unsigned int *)(v7 + 12) < (unsigned __int64)(v32 + 1) )
      {
        v34 = v12;
        sub_25D6060(v7, v7 + 16, v32 + 1, 8);
        v32 = *(unsigned int *)(v7 + 8);
        v12 = v34;
      }
      *(_QWORD *)(*(_QWORD *)v7 + 8 * v32) = v12;
      ++*(_DWORD *)(v7 + 8);
      return;
    }
    v13 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( v13 == 17 )
    {
      v14 = *(_QWORD *)(a1 + 104);
      if ( v14 )
      {
        if ( v14 <= 7 )
          return;
LABEL_15:
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = *(__int64 **)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        v17 = &v16[*(unsigned int *)(v15 + 16)];
LABEL_16:
        for ( i = v16; v17 != i; ++i )
        {
          v19 = *i;
          sub_7BF8C0(v19, a2, v7, v6);
        }
      }
      else
      {
        sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v14 = *(_QWORD *)(a1 + 104);
        if ( v14 > 7 )
          goto LABEL_15;
        if ( !v14 )
        {
          sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
          v33 = *(_QWORD *)(a1 + 104);
          if ( v33 > 7 )
          {
            v17 = nullptr;
            v16 = *(__int64 **)((v33 & 0xFFFFFFFFFFFFFFF8LL) + 8);
            goto LABEL_16;
          }
        }
      }
      v13 = *(_BYTE *)(v8 + 28) & 0x7F;
    }
    if ( v13 != 18 )
      return;
    v20 = *(_QWORD *)(v8 + 120);
    if ( v20 )
    {
      if ( v20 <= 7 )
        goto LABEL_35;
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v8 + 96) + 88LL), *(_QWORD *)(v8 + 96));
      v20 = *(_QWORD *)(v8 + 120);
      if ( v20 <= 7 )
      {
        if ( v20 )
          goto LABEL_35;
        v21 = 0;
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v8 + 96) + 88LL), *(_QWORD *)(v8 + 96));
        v20 = *(_QWORD *)(v8 + 120);
        if ( v20 <= 7 )
          goto LABEL_48;
        goto LABEL_24;
      }
    }
    if ( (*(_BYTE *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    {
      sub_7B7DB0(v8);
      v20 = *(_QWORD *)(v8 + 120);
      v21 = *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 24);
      if ( v20 )
      {
        if ( v20 <= 7 )
        {
          if ( !v21 )
            goto LABEL_35;
          v22 = nullptr;
LABEL_26:
          v23 = v22;
          do
          {
            v24 = *v23++;
            sub_7BF8C0(v24, a2, v7, v6);
          }
          while ( (__int64 *)v21 != v23 );
          v20 = *(_QWORD *)(v8 + 120);
LABEL_29:
          if ( v20 )
          {
LABEL_30:
            if ( v20 <= 7 )
              goto LABEL_35;
            goto LABEL_31;
          }
LABEL_49:
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v8 + 96) + 88LL), *(_QWORD *)(v8 + 96));
          v20 = *(_QWORD *)(v8 + 120);
          goto LABEL_30;
        }
      }
      else
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v8 + 96) + 88LL), *(_QWORD *)(v8 + 96));
        v20 = *(_QWORD *)(v8 + 120);
        if ( v20 <= 7 )
        {
          if ( v21 )
          {
            v22 = nullptr;
            goto LABEL_26;
          }
LABEL_48:
          if ( v20 )
            goto LABEL_35;
          goto LABEL_49;
        }
      }
    }
    else
    {
      v21 = *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 24);
    }
LABEL_24:
    if ( (*(_BYTE *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    {
      sub_7B7DB0(v8);
      v20 = *(_QWORD *)(v8 + 120);
      v22 = *(__int64 **)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      if ( v22 != (__int64 *)v21 )
        goto LABEL_26;
      goto LABEL_29;
    }
    v22 = *(__int64 **)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    if ( (__int64 *)v21 != v22 )
      goto LABEL_26;
LABEL_31:
    v25 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v25 + 72) & 1) != 0 )
    {
      sub_7B7DB0(v8);
      v25 = *(_QWORD *)(v8 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    for ( j = *(_QWORD *)(v25 + 56); j; j = *(_QWORD *)(j + 128) )
      sub_7BF8C0(j, a2, v7, v6);
LABEL_35:
    v27 = sub_7BACE0(v8);
    if ( !v27 )
      return;
    a3 = v7;
    a4 = 1;
    a1 = v27;
    v4 = v35;
    v5 = v36;
  }
}

