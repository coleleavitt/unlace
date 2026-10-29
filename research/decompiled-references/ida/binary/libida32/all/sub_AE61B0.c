__int64 __fastcall sub_AE61B0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  const char *v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int *v8; // rax
  size_t v9; // rdx
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int *v20; // rax
  size_t v21; // rdx
  const char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE v28[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v28[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_F83A90(a1);
  else
    v4 = v3 >> 4;
  switch ( v4 )
  {
    case 0:
      v17 = "__attribute__((argument_with_type_tag";
      goto LABEL_13;
    case 1:
    case 2:
      v5 = "[[clang::argument_with_type_tag";
      goto LABEL_5;
    case 3:
      v17 = "__attribute__((pointer_with_type_tag";
LABEL_13:
      sub_971800(a2, v17);
      sub_AD7BA0(a2, v28);
      v18 = sub_971800(a2, &byte_22CD811);
      v19 = *(_QWORD *)(a1 + 40);
      if ( v19 )
      {
        v20 = *(unsigned int **)(v19 + 16);
        v21 = *v20;
        v22 = (const char *)(v20 + 4);
      }
      else
      {
        v22 = &byte_22CD811;
        v21 = j__strlen(&byte_22CD811);
      }
      v23 = sub_9717A0(v18, v22, v21);
      sub_971800(v23, &byte_22CD811);
      sub_AD7BA0(a2, v28);
      v24 = sub_971800(a2, &byte_22CD811);
      v25 = sub_2257BD0(v24, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
      sub_971800(v25, &byte_22CD811);
      sub_AD7BA0(a2, v28);
      v26 = sub_971800(a2, &byte_22CD811);
      v27 = sub_2257BD0(v26, *(_DWORD *)(a1 + 52) & 0x3FFFFFFF);
      sub_971800(v27, &byte_22CD811);
      if ( !v28[0] )
        sub_971800(a2, ")");
      return sub_971800(a2, "))");
    case 4:
    case 5:
      v5 = "[[clang::pointer_with_type_tag";
LABEL_5:
      sub_971800(a2, v5);
      sub_AD7BA0(a2, v28);
      v6 = sub_971800(a2, &byte_22CD811);
      v7 = *(_QWORD *)(a1 + 40);
      if ( v7 )
      {
        v8 = *(unsigned int **)(v7 + 16);
        v9 = *v8;
        v10 = (const char *)(v8 + 4);
      }
      else
      {
        v10 = &byte_22CD811;
        v9 = j__strlen(&byte_22CD811);
      }
      v11 = sub_9717A0(v6, v10, v9);
      sub_971800(v11, &byte_22CD811);
      sub_AD7BA0(a2, v28);
      v12 = sub_971800(a2, &byte_22CD811);
      v13 = sub_2257BD0(v12, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
      sub_971800(v13, &byte_22CD811);
      sub_AD7BA0(a2, v28);
      v14 = sub_971800(a2, &byte_22CD811);
      v15 = sub_2257BD0(v14, *(_DWORD *)(a1 + 52) & 0x3FFFFFFF);
      sub_971800(v15, &byte_22CD811);
      if ( !v28[0] )
        sub_971800(a2, ")");
      return sub_971800(a2, "]]");
  }
}

