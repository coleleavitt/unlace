void __fastcall sub_F09300(__int64 a1, const char *a2)
{
  const char *v3; // rbp
  __int64 v4; // rbx
  size_t v5; // rax
  void *v6; // rdi
  size_t v7; // r13
  const char *v8; // rax
  const char *v9; // r13
  size_t v10; // rax
  void *v11; // rdi
  size_t v12; // r14

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 1096);
  v5 = j__strlen(" ");
  v6 = *(void **)(v4 + 32);
  v7 = v5;
  if ( v5 > *(_QWORD *)(v4 + 24) - (_QWORD)v6 )
  {
    a2 = " ";
    v4 = sub_22581D0(v4, " ", v5);
  }
  else if ( v5 )
  {
    a2 = " ";
    memcpy(v6, " ", v5);
    *(_QWORD *)(v4 + 32) += v7;
  }
  v8 = (const char *)sub_10A9100(((unsigned __int8)v3[2] >> 3) & 0xF, a2);
  v9 = v8;
  if ( !v8 )
    goto LABEL_7;
  v10 = j__strlen(v8);
  v11 = *(void **)(v4 + 32);
  v12 = v10;
  if ( v10 > *(_QWORD *)(v4 + 24) - (_QWORD)v11 )
  {
    sub_22581D0(v4, v9, v10);
    goto LABEL_7;
  }
  if ( !v10 )
  {
LABEL_7:
    if ( v3[2] >= 0 )
      return;
LABEL_11:
    sub_F068D0(a1, **((_QWORD **)v3 + 2));
    return;
  }
  memcpy(v11, v9, v10);
  *(_QWORD *)(v4 + 32) += v12;
  if ( v3[2] < 0 )
    goto LABEL_11;
}

