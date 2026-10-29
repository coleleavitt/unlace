_QWORD *__fastcall sub_20D4860(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r12
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  _BYTE *v6; // rdi
  char v7; // al
  _BYTE *v8; // rdi
  char v9; // al
  _BYTE *v10; // rdi
  char v11; // al
  char v12; // al
  size_t v13; // rax
  size_t v14; // rsi
  char *v15; // rdx
  size_t v17; // rax
  __int64 v18; // r13
  size_t v19; // rax
  __int64 v20; // rcx
  size_t v21; // rax
  size_t v22; // rax
  _QWORD v23[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v4 + 8) == 11 )
  {
    v18 = *(_QWORD *)(v4 + 16);
    if ( *(_BYTE *)(v18 + 8) == 8 )
    {
      v19 = j__strlen("objc_object");
      v20 = *(_QWORD *)(v18 + 24);
      v23[0] = *(_QWORD *)(v18 + 16);
      v23[1] = v20;
      if ( v19 == v23[0] && !sub_FD4B10((__int64)v23, v19, "objc_object") )
      {
        v21 = j__strlen("id<");
        sub_20D1ED0(a2, v21, "id<");
        sub_20D1ED0(a2, *(_QWORD *)(v4 + 24), *(const void **)(v4 + 32));
        v22 = j__strlen(">");
        v15 = ">";
        v14 = v22;
        return sub_20D1ED0(a2, v14, v15);
      }
    }
  }
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v5 == sub_20CEB40 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, a2);
  else
    v5((__int64)a2, v4);
  v6 = *(_BYTE **)(a1 + 16);
  v7 = v6[10] & 3;
  if ( v7 == 2 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v6 + 8LL))(v6, a2) )
      goto LABEL_6;
  }
  else if ( v7 )
  {
    goto LABEL_16;
  }
  v17 = j__strlen(" ");
  sub_20D1ED0(a2, v17, " ");
LABEL_6:
  v8 = *(_BYTE **)(a1 + 16);
  v7 = v8[10] & 3;
  if ( v7 == 2 )
  {
    v9 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v8 + 8LL))(v8, a2);
    goto LABEL_8;
  }
LABEL_16:
  v9 = v7 == 0;
LABEL_8:
  if ( v9
    || ((v10 = *(_BYTE **)(a1 + 16), v11 = v10[10] & 0xC, v11 == 8)
      ? (v12 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v10 + 16LL))(v10, a2))
      : (v12 = v11 == 0),
        v12) )
  {
    v13 = j__strlen("(");
    sub_20D1ED0(a2, v13, "(");
  }
  v14 = 1;
  v15 = (char *)"*";
  return sub_20D1ED0(a2, v14, v15);
}
