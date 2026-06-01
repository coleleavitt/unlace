__int64 __fastcall sub_B07A90(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r12
  size_t v7; // r15
  const void *v8; // rsi
  size_t v9; // rax
  void *v10; // rdi
  size_t v11; // r15
  size_t v12; // rax
  size_t v13; // r15
  __int64 v14; // rax
  const char *v15; // rsi
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rbp
  size_t v19; // r15
  const void *v20; // rsi
  size_t v21; // rax
  void *v22; // rdi
  size_t v23; // r15
  size_t v24; // rax
  size_t v25; // r15
  __int64 v26; // rax
  __int64 v28; // rax
  void *v29; // rdi
  size_t v30; // rax
  __int64 v31; // rax
  void *v32; // rdi
  size_t v33; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v3 )
  {
    sub_995540(a2, "[[gnu::abi_tag");
    sub_995540(a2, &byte_22F0C30);
    v16 = *(_QWORD *)(a1 + 48);
    v17 = v16 + 16LL * *(unsigned int *)(a1 + 40);
    if ( v16 == v17 )
    {
      sub_995540(a2, &byte_22F0C30);
LABEL_39:
      v15 = "]]";
      return sub_995540(a2, v15);
    }
    sub_995540(a2, "(");
    while ( 1 )
    {
      v24 = j__strlen("\"");
      v29 = *(void **)(a2 + 32);
      v25 = v24;
      v30 = *(_QWORD *)(a2 + 24) - (_QWORD)v29;
      if ( v25 <= v30 )
      {
        v18 = a2;
        if ( v25 )
        {
          memcpy(v29, "\"", v25);
          v28 = *(_QWORD *)(a2 + 24);
          v29 = (void *)(v25 + *(_QWORD *)(a2 + 32));
          *(_QWORD *)(a2 + 32) = v29;
          v30 = v28 - (_QWORD)v29;
        }
        v19 = *(_QWORD *)(v16 + 8);
        v20 = *(const void **)v16;
        if ( v19 > v30 )
        {
LABEL_36:
          v18 = sub_227BF10(v18, v20, v19);
          goto LABEL_29;
        }
      }
      else
      {
        v26 = sub_227BF10(a2, "\"", v25);
        v19 = *(_QWORD *)(v16 + 8);
        v20 = *(const void **)v16;
        v29 = *(void **)(v26 + 32);
        v18 = v26;
        if ( v19 > *(_QWORD *)(v26 + 24) - (_QWORD)v29 )
          goto LABEL_36;
      }
      if ( v19 )
      {
        memcpy(v29, v20, v19);
        *(_QWORD *)(v18 + 32) += v19;
      }
LABEL_29:
      v21 = j__strlen("\"");
      v22 = *(void **)(v18 + 32);
      v23 = v21;
      if ( v21 > *(_QWORD *)(v18 + 24) - (_QWORD)v22 )
      {
        v16 += 16;
        sub_227BF10(v18, "\"", v21);
        if ( v16 == v17 )
          goto LABEL_38;
      }
      else
      {
        if ( v21 )
        {
          memcpy(v22, "\"", v21);
          *(_QWORD *)(v18 + 32) += v23;
        }
        v16 += 16;
        if ( v16 == v17 )
        {
LABEL_38:
          sub_995540(a2, &byte_22F0C30);
          sub_995540(a2, ")");
          goto LABEL_39;
        }
      }
      sub_995540(a2, ", ");
    }
  }
  sub_995540(a2, "__attribute__((abi_tag");
  sub_995540(a2, &byte_22F0C30);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = v4 + 16LL * *(unsigned int *)(a1 + 40);
  if ( v4 != v5 )
  {
    sub_995540(a2, "(");
    while ( 1 )
    {
      v12 = j__strlen("\"");
      v32 = *(void **)(a2 + 32);
      v13 = v12;
      v33 = *(_QWORD *)(a2 + 24) - (_QWORD)v32;
      if ( v13 <= v33 )
      {
        v6 = a2;
        if ( v13 )
        {
          memcpy(v32, "\"", v13);
          v31 = *(_QWORD *)(a2 + 24);
          v32 = (void *)(v13 + *(_QWORD *)(a2 + 32));
          *(_QWORD *)(a2 + 32) = v32;
          v33 = v31 - (_QWORD)v32;
        }
        v7 = *(_QWORD *)(v4 + 8);
        v8 = *(const void **)v4;
        if ( v33 < v7 )
        {
LABEL_18:
          v6 = sub_227BF10(v6, v8, v7);
          goto LABEL_11;
        }
      }
      else
      {
        v14 = sub_227BF10(a2, "\"", v13);
        v7 = *(_QWORD *)(v4 + 8);
        v8 = *(const void **)v4;
        v32 = *(void **)(v14 + 32);
        v6 = v14;
        if ( *(_QWORD *)(v14 + 24) - (_QWORD)v32 < v7 )
          goto LABEL_18;
      }
      if ( v7 )
      {
        memcpy(v32, v8, v7);
        *(_QWORD *)(v6 + 32) += v7;
      }
LABEL_11:
      v9 = j__strlen("\"");
      v10 = *(void **)(v6 + 32);
      v11 = v9;
      if ( v9 > *(_QWORD *)(v6 + 24) - (_QWORD)v10 )
      {
        v4 += 16;
        sub_227BF10(v6, "\"", v9);
        if ( v5 == v4 )
          goto LABEL_20;
      }
      else
      {
        if ( v9 )
        {
          memcpy(v10, "\"", v9);
          *(_QWORD *)(v6 + 32) += v11;
        }
        v4 += 16;
        if ( v5 == v4 )
        {
LABEL_20:
          sub_995540(a2, &byte_22F0C30);
          sub_995540(a2, ")");
          goto LABEL_21;
        }
      }
      sub_995540(a2, ", ");
    }
  }
  sub_995540(a2, &byte_22F0C30);
LABEL_21:
  v15 = "))";
  return sub_995540(a2, v15);
}
