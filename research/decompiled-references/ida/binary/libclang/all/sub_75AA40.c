__int64 __fastcall sub_75AA40(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  size_t v7; // rdx
  const void *v8; // rsi
  void *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  size_t v13; // rdx
  const void *v14; // rsi
  void *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  const char *v18; // rsi
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rax
  size_t v23; // rdx
  const void *v24; // rsi
  void *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // [rsp+0h] [rbp-48h]
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+8h] [rbp-40h]
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+8h] [rbp-40h]

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  if ( v3 == 1 )
  {
    sub_5FF0F0(a2, "[[gnu::target_clones");
    sub_5FF0F0(a2, &byte_3B9466E);
    v20 = *(_QWORD *)(a1 + 40);
    v21 = v20 + 16LL * *(unsigned int *)(a1 + 36);
    if ( v20 != v21 )
    {
      sub_5FF0F0(a2, "(");
      while ( 1 )
      {
        v22 = sub_5FF0F0(a2, "\"");
        v23 = *(_QWORD *)(v20 + 8);
        v24 = *(const void **)v20;
        v25 = *(void **)(v22 + 32);
        v26 = v22;
        if ( *(_QWORD *)(v22 + 24) - (_QWORD)v25 >= v23 )
        {
          if ( v23 )
          {
            v32 = v22;
            v29 = *(_QWORD *)(v20 + 8);
            memcpy(v25, v24, v23);
            v26 = v32;
            *(_QWORD *)(v32 + 32) += v29;
          }
        }
        else
        {
          v26 = sub_26240F0(v22, v24, v23);
        }
        v20 += 16;
        sub_5FF0F0(v26, "\"");
        if ( v21 == v20 )
          break;
        sub_5FF0F0(a2, ", ");
      }
      goto LABEL_21;
    }
LABEL_35:
    sub_5FF0F0(a2, &byte_3B9466E);
    goto LABEL_22;
  }
  if ( v3 == 2 )
  {
    sub_5FF0F0(a2, "[[gnu::target_clones");
    sub_5FF0F0(a2, &byte_3B9466E);
    v4 = *(_QWORD *)(a1 + 40);
    v5 = v4 + 16LL * *(unsigned int *)(a1 + 36);
    if ( v4 != v5 )
    {
      sub_5FF0F0(a2, "(");
      while ( 1 )
      {
        v6 = sub_5FF0F0(a2, "\"");
        v7 = *(_QWORD *)(v4 + 8);
        v8 = *(const void **)v4;
        v9 = *(void **)(v6 + 32);
        v17 = v6;
        if ( *(_QWORD *)(v6 + 24) - (_QWORD)v9 >= v7 )
        {
          if ( v7 )
          {
            v31 = v6;
            v28 = *(_QWORD *)(v4 + 8);
            memcpy(v9, v8, v7);
            v17 = v31;
            *(_QWORD *)(v31 + 32) += v28;
          }
        }
        else
        {
          v17 = sub_26240F0(v6, v8, v7);
        }
        v4 += 16;
        sub_5FF0F0(v17, "\"");
        if ( v5 == v4 )
          break;
        sub_5FF0F0(a2, ", ");
      }
LABEL_21:
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_5FF0F0(a2, ")");
LABEL_22:
      v18 = "]]";
      return sub_5FF0F0(a2, v18);
    }
    goto LABEL_35;
  }
  sub_5FF0F0(a2, "__attribute__((target_clones");
  sub_5FF0F0(a2, &byte_3B9466E);
  v10 = *(_QWORD *)(a1 + 40);
  v11 = v10 + 16LL * *(unsigned int *)(a1 + 36);
  if ( v10 == v11 )
  {
    sub_5FF0F0(a2, &byte_3B9466E);
  }
  else
  {
    sub_5FF0F0(a2, "(");
    while ( 1 )
    {
      v12 = sub_5FF0F0(a2, "\"");
      v13 = *(_QWORD *)(v10 + 8);
      v14 = *(const void **)v10;
      v15 = *(void **)(v12 + 32);
      v16 = v12;
      if ( *(_QWORD *)(v12 + 24) - (_QWORD)v15 >= v13 )
      {
        if ( v13 )
        {
          v30 = v12;
          v27 = *(_QWORD *)(v10 + 8);
          memcpy(v15, v14, v13);
          v16 = v30;
          *(_QWORD *)(v30 + 32) += v27;
        }
      }
      else
      {
        v16 = sub_26240F0(v12, v14, v13);
      }
      v10 += 16;
      sub_5FF0F0(v16, "\"");
      if ( v11 == v10 )
        break;
      sub_5FF0F0(a2, ", ");
    }
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_5FF0F0(a2, ")");
  }
  v18 = "))";
  return sub_5FF0F0(a2, v18);
}

