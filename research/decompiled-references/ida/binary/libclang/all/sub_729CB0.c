__int64 __fastcall sub_729CB0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  const char *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int *v8; // rdx
  size_t v9; // rsi
  const char *v10; // rdx
  size_t v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int *v22; // rdx
  size_t v23; // rsi
  const char *v24; // rdx
  size_t v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v31[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  switch ( v4 )
  {
    case 0:
      v19 = "__attribute__((argument_with_type_tag";
      goto LABEL_14;
    case 1:
    case 2:
      v5 = "[[clang::argument_with_type_tag";
      goto LABEL_5;
    case 3:
      v19 = "__attribute__((pointer_with_type_tag";
LABEL_14:
      sub_5FF0F0(a2, v19);
      v31[0] = 0;
      sub_5FF0F0(a2, "(");
      v20 = sub_5FF0F0(a2, &byte_3B9466E);
      v21 = *(_QWORD *)(a1 + 40);
      if ( v21 )
      {
        v22 = *(unsigned int **)(v21 + 16);
        v23 = *v22;
        v24 = (const char *)(v22 + 4);
        v25 = v23;
      }
      else
      {
        v24 = &byte_3B9466E;
        v25 = 0;
      }
      v26 = sub_722320(v20, v24, v25);
      sub_5FF0F0(v26, &byte_3B9466E);
      sub_722380(a2, v31);
      v27 = sub_5FF0F0(a2, &byte_3B9466E);
      v28 = sub_26238A0(v27, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
      sub_5FF0F0(v28, &byte_3B9466E);
      sub_722380(a2, v31);
      v29 = sub_5FF0F0(a2, &byte_3B9466E);
      v30 = sub_26238A0(v29, *(_DWORD *)(a1 + 52) & 0x3FFFFFFF);
      sub_5FF0F0(v30, &byte_3B9466E);
      if ( !v31[0] )
        sub_5FF0F0(a2, ")");
      v17 = "))";
      return sub_5FF0F0(a2, v17);
    case 4:
    case 5:
      v5 = "[[clang::pointer_with_type_tag";
LABEL_5:
      sub_5FF0F0(a2, v5);
      v31[0] = 0;
      sub_5FF0F0(a2, "(");
      v6 = sub_5FF0F0(a2, &byte_3B9466E);
      v7 = *(_QWORD *)(a1 + 40);
      if ( v7 )
      {
        v8 = *(unsigned int **)(v7 + 16);
        v9 = *v8;
        v10 = (const char *)(v8 + 4);
        v11 = v9;
      }
      else
      {
        v10 = &byte_3B9466E;
        v11 = 0;
      }
      v12 = sub_722320(v6, v10, v11);
      sub_5FF0F0(v12, &byte_3B9466E);
      sub_722380(a2, v31);
      v13 = sub_5FF0F0(a2, &byte_3B9466E);
      v14 = sub_26238A0(v13, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
      sub_5FF0F0(v14, &byte_3B9466E);
      sub_722380(a2, v31);
      v15 = sub_5FF0F0(a2, &byte_3B9466E);
      v16 = sub_26238A0(v15, *(_DWORD *)(a1 + 52) & 0x3FFFFFFF);
      sub_5FF0F0(v16, &byte_3B9466E);
      if ( !v31[0] )
        sub_5FF0F0(a2, ")");
      v17 = "]]";
      return sub_5FF0F0(a2, v17);
  }
}

