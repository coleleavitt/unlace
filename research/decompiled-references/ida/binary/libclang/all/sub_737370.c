__int64 __fastcall sub_737370(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r14
  char v15; // bp
  const char *v16; // rsi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r14
  char v28; // bp
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // r14
  char v39; // [rsp+Fh] [rbp-69h] BYREF
  __int64 v40; // [rsp+10h] [rbp-68h] BYREF
  int v41; // [rsp+18h] [rbp-60h]
  __int64 v42; // [rsp+20h] [rbp-58h]
  __int64 v43; // [rsp+30h] [rbp-48h] BYREF
  __int64 v44; // [rsp+38h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 30);
  v39 = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      sub_5FF0F0(a2, "[[clang::diagnose_as_builtin");
      v39 = 0;
      sub_5FF0F0(a2, "(");
      v5 = sub_5FF0F0(a2, &byte_3B9466E);
      v6 = *(_QWORD *)(a1 + 40);
      v7 = *(_QWORD *)(v6 + 40);
      v8 = *(unsigned int *)(v6 + 24);
      v9 = *(_QWORD *)(v6 + 160);
      v40 = v7;
      v41 = v8;
      v42 = v9;
      sub_7928F0(&v43, &v40, v8, v7, v10, v11);
      v12 = sub_26240F0(v5, v43, v44);
      sub_5FF0F0(v12, &byte_3B9466E);
      std::string::_M_dispose();
      sub_5FF0F0(a2, &byte_3B9466E);
      v13 = *(_QWORD *)(a1 + 56);
      v14 = v13 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v13 != v14 )
      {
        do
        {
          v13 += 4;
          sub_722380(a2, &v39);
          sub_26238A0(a2, *(unsigned int *)(v13 - 4));
        }
        while ( v14 != v13 );
        goto LABEL_7;
      }
LABEL_17:
      sub_5FF0F0(a2, &byte_3B9466E);
      goto LABEL_18;
    }
    sub_5FF0F0(a2, "__attribute__((diagnose_as_builtin");
    v39 = 0;
    sub_5FF0F0(a2, "(");
    v18 = sub_5FF0F0(a2, &byte_3B9466E);
    v19 = *(_QWORD *)(a1 + 40);
    v20 = *(_QWORD *)(v19 + 40);
    v21 = *(unsigned int *)(v19 + 24);
    v22 = *(_QWORD *)(v19 + 160);
    v40 = v20;
    v41 = v21;
    v42 = v22;
    sub_7928F0(&v43, &v40, v21, v20, v23, v24);
    v25 = sub_26240F0(v18, v43, v44);
    sub_5FF0F0(v25, &byte_3B9466E);
    std::string::_M_dispose();
    sub_5FF0F0(a2, &byte_3B9466E);
    v26 = *(_QWORD *)(a1 + 56);
    v27 = v26 + 4LL * *(unsigned int *)(a1 + 48);
    if ( v26 == v27 )
    {
      sub_5FF0F0(a2, &byte_3B9466E);
    }
    else
    {
      do
      {
        v26 += 4;
        sub_722380(a2, &v39);
        sub_26238A0(a2, *(unsigned int *)(v26 - 4));
      }
      while ( v27 != v26 );
      v28 = v39;
      sub_5FF0F0(a2, &byte_3B9466E);
      if ( v28 )
        goto LABEL_13;
    }
    sub_5FF0F0(a2, ")");
LABEL_13:
    v16 = "))";
    return sub_5FF0F0(a2, v16);
  }
  sub_5FF0F0(a2, "[[clang::diagnose_as_builtin");
  v39 = 0;
  sub_5FF0F0(a2, "(");
  v29 = sub_5FF0F0(a2, &byte_3B9466E);
  v30 = *(_QWORD *)(a1 + 40);
  v31 = *(_QWORD *)(v30 + 40);
  v32 = *(unsigned int *)(v30 + 24);
  v33 = *(_QWORD *)(v30 + 160);
  v40 = v31;
  v41 = v32;
  v42 = v33;
  sub_7928F0(&v43, &v40, v32, v31, v34, v35);
  v36 = sub_26240F0(v29, v43, v44);
  sub_5FF0F0(v36, &byte_3B9466E);
  std::string::_M_dispose();
  sub_5FF0F0(a2, &byte_3B9466E);
  v37 = *(_QWORD *)(a1 + 56);
  v38 = v37 + 4LL * *(unsigned int *)(a1 + 48);
  if ( v37 == v38 )
    goto LABEL_17;
  do
  {
    v37 += 4;
    sub_722380(a2, &v39);
    sub_26238A0(a2, *(unsigned int *)(v37 - 4));
  }
  while ( v38 != v37 );
LABEL_7:
  v15 = v39;
  sub_5FF0F0(a2, &byte_3B9466E);
  if ( !v15 )
LABEL_18:
    sub_5FF0F0(a2, ")");
  v16 = "]]";
  return sub_5FF0F0(a2, v16);
}

