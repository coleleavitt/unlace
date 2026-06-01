__int64 __fastcall sub_B0EEA0(__int64 a1, __int64 a2)
{
  int v3; // eax
  int *v4; // rbp
  int *v5; // r14
  const char *v6; // rdi
  char *v7; // r12
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // rax
  size_t v11; // rax
  void *v12; // rdi
  size_t v13; // r12
  __int64 v14; // r15
  int v15; // eax
  int *v16; // rbp
  int *v17; // r14
  const char *v18; // rdi
  char *v19; // r12
  size_t v20; // rax
  __int64 v21; // r12
  size_t v22; // rax
  size_t v23; // rax
  void *v24; // rdi
  size_t v25; // r12
  __int64 v26; // r15
  int v27; // eax
  const char *v28; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  if ( !v3 )
  {
    sub_995540(a2, "__attribute__((callable_when");
    sub_995540(a2, &byte_22F0C30);
    v4 = *(int **)(a1 + 48);
    v5 = &v4[*(unsigned int *)(a1 + 40)];
    if ( v4 != v5 )
    {
      sub_995540(a2, "(");
      while ( 1 )
      {
        v11 = j__strlen("\"");
        v12 = *(void **)(a2 + 32);
        v13 = v11;
        if ( v11 > *(_QWORD *)(a2 + 24) - (_QWORD)v12 )
        {
          v14 = sub_227BF10(a2, "\"", v11);
        }
        else
        {
          v14 = a2;
          if ( v11 )
          {
            memcpy(v12, "\"", v11);
            *(_QWORD *)(a2 + 32) += v13;
          }
        }
        v15 = *v4;
        if ( *v4 == 1 )
          break;
        if ( v15 )
        {
          if ( v15 != 2 )
            return sub_B0F220();
          v6 = "unconsumed";
          goto LABEL_7;
        }
        v7 = "unknown";
        v6 = "unknown";
LABEL_8:
        v8 = j__strlen(v6);
        ++v4;
        v9 = sub_9954E0(v14, v7, v8);
        v10 = j__strlen("\"");
        sub_9954E0(v9, "\"", v10);
        if ( v4 == v5 )
        {
          sub_995540(a2, &byte_22F0C30);
          sub_995540(a2, ")");
          goto LABEL_34;
        }
        sub_995540(a2, ", ");
      }
      v6 = "consumed";
LABEL_7:
      v7 = (char *)v6;
      goto LABEL_8;
    }
    sub_995540(a2, &byte_22F0C30);
LABEL_34:
    v28 = "))";
    return sub_995540(a2, v28);
  }
  if ( v3 == 1 )
  {
    sub_995540(a2, "[[clang::callable_when");
    sub_995540(a2, &byte_22F0C30);
    v16 = *(int **)(a1 + 48);
    v17 = &v16[*(unsigned int *)(a1 + 40)];
    if ( v16 == v17 )
    {
      sub_995540(a2, &byte_22F0C30);
LABEL_37:
      v28 = "]]";
      return sub_995540(a2, v28);
    }
    sub_995540(a2, "(");
    while ( 1 )
    {
      v23 = j__strlen("\"");
      v24 = *(void **)(a2 + 32);
      v25 = v23;
      if ( v23 > *(_QWORD *)(a2 + 24) - (_QWORD)v24 )
      {
        v26 = sub_227BF10(a2, "\"", v23);
      }
      else
      {
        v26 = a2;
        if ( v23 )
        {
          memcpy(v24, "\"", v23);
          *(_QWORD *)(a2 + 32) += v25;
        }
      }
      v27 = *v16;
      if ( *v16 == 1 )
        break;
      if ( v27 )
      {
        if ( v27 != 2 )
          return sub_B0F220();
        v18 = "unconsumed";
        goto LABEL_22;
      }
      v19 = "unknown";
      v18 = "unknown";
LABEL_23:
      v20 = j__strlen(v18);
      ++v16;
      v21 = sub_9954E0(v26, v19, v20);
      v22 = j__strlen("\"");
      sub_9954E0(v21, "\"", v22);
      if ( v16 == v17 )
      {
        sub_995540(a2, &byte_22F0C30);
        sub_995540(a2, ")");
        goto LABEL_37;
      }
      sub_995540(a2, ", ");
    }
    v18 = "consumed";
LABEL_22:
    v19 = (char *)v18;
    goto LABEL_23;
  }
  return sub_B0F220();
}
