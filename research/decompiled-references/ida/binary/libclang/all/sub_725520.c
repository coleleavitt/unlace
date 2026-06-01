__int64 __fastcall sub_725520(__int64 a1, __int64 a2)
{
  int v3; // eax
  _QWORD *v4; // rcx
  _QWORD *v5; // r12
  _QWORD *v6; // r15
  _BYTE *v7; // rax
  __int64 v8; // rbp
  size_t v9; // rdx
  const char *v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // r12
  _QWORD *v13; // r15
  _BYTE *v14; // rax
  __int64 v15; // rbp
  size_t v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // rdx
  _BYTE *v21; // rax
  _BYTE *v22; // rdi
  _BYTE *v23; // rdx
  _BYTE *v24; // rax
  _BYTE *v25; // rdi
  __int64 v26; // [rsp+8h] [rbp-40h]
  __int64 v27; // [rsp+8h] [rbp-40h]

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  if ( v3 )
  {
    sub_5FF0F0(a2, "[[gnu::abi_tag");
    sub_5FF0F0(a2, &byte_3B9466E);
    v11 = *(_QWORD **)(a1 + 40);
    v12 = &v11[2 * *(unsigned int *)(a1 + 36)];
    if ( v11 == v12 )
    {
      sub_5FF0F0(a2, &byte_3B9466E);
LABEL_31:
      v10 = "]]";
      return sub_5FF0F0(a2, v10);
    }
    v13 = *(_QWORD **)(a1 + 40);
    sub_5FF0F0(a2, "(");
    while ( 1 )
    {
      v14 = *(_BYTE **)(a2 + 32);
      if ( *(_BYTE **)(a2 + 24) == v14 )
      {
        v19 = sub_26240F0(a2, "\"", 1);
        v22 = *(_BYTE **)(v19 + 32);
        v15 = v19;
      }
      else
      {
        *v14 = 34;
        v15 = a2;
        v22 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 1LL);
        *(_QWORD *)(a2 + 32) = v22;
      }
      v21 = *(_BYTE **)(v15 + 24);
      v16 = v13[1];
      if ( v21 - v22 >= v16 )
      {
        if ( v16 )
        {
          v26 = v13[1];
          memcpy(v22, (const void *)*v13, v16);
          v20 = (_BYTE *)(*(_QWORD *)(v15 + 32) + v26);
          *(_QWORD *)(v15 + 32) = v20;
          v21 = *(_BYTE **)(v15 + 24);
          v22 = v20;
        }
        if ( v21 != v22 )
        {
LABEL_23:
          v13 += 2;
          *v22 = 34;
          ++*(_QWORD *)(v15 + 32);
          if ( v12 == v13 )
            goto LABEL_30;
          goto LABEL_24;
        }
      }
      else
      {
        v15 = sub_26240F0(v15, *v13, v16);
        v22 = *(_BYTE **)(v15 + 32);
        if ( *(_BYTE **)(v15 + 24) != v22 )
          goto LABEL_23;
      }
      v13 += 2;
      sub_26240F0(v15, "\"", 1);
      if ( v12 == v13 )
      {
LABEL_30:
        sub_5FF0F0(a2, &byte_3B9466E);
        sub_5FF0F0(a2, ")");
        goto LABEL_31;
      }
LABEL_24:
      sub_5FF0F0(a2, ", ");
    }
  }
  sub_5FF0F0(a2, "__attribute__((abi_tag");
  sub_5FF0F0(a2, &byte_3B9466E);
  v4 = *(_QWORD **)(a1 + 40);
  v5 = &v4[2 * *(unsigned int *)(a1 + 36)];
  if ( v4 != v5 )
  {
    v6 = *(_QWORD **)(a1 + 40);
    sub_5FF0F0(a2, "(");
    while ( 1 )
    {
      v7 = *(_BYTE **)(a2 + 32);
      if ( *(_BYTE **)(a2 + 24) == v7 )
      {
        v18 = sub_26240F0(a2, "\"", 1);
        v25 = *(_BYTE **)(v18 + 32);
        v8 = v18;
      }
      else
      {
        *v7 = 34;
        v8 = a2;
        v25 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 1LL);
        *(_QWORD *)(a2 + 32) = v25;
      }
      v24 = *(_BYTE **)(v8 + 24);
      v9 = v6[1];
      if ( v24 - v25 >= v9 )
      {
        if ( v9 )
        {
          v27 = v6[1];
          memcpy(v25, (const void *)*v6, v9);
          v23 = (_BYTE *)(*(_QWORD *)(v8 + 32) + v27);
          *(_QWORD *)(v8 + 32) = v23;
          v24 = *(_BYTE **)(v8 + 24);
          v25 = v23;
        }
        if ( v25 != v24 )
        {
LABEL_9:
          v6 += 2;
          *v25 = 34;
          ++*(_QWORD *)(v8 + 32);
          if ( v5 == v6 )
            goto LABEL_16;
          goto LABEL_10;
        }
      }
      else
      {
        v8 = sub_26240F0(v8, *v6, v9);
        v25 = *(_BYTE **)(v8 + 32);
        if ( v25 != *(_BYTE **)(v8 + 24) )
          goto LABEL_9;
      }
      v6 += 2;
      sub_26240F0(v8, "\"", 1);
      if ( v5 == v6 )
      {
LABEL_16:
        sub_5FF0F0(a2, &byte_3B9466E);
        sub_5FF0F0(a2, ")");
        goto LABEL_17;
      }
LABEL_10:
      sub_5FF0F0(a2, ", ");
    }
  }
  sub_5FF0F0(a2, &byte_3B9466E);
LABEL_17:
  v10 = "))";
  return sub_5FF0F0(a2, v10);
}

