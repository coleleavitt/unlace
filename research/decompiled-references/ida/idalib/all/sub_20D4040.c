_QWORD *__fastcall sub_20D4040(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  _BYTE *v5; // rdi
  char v6; // al
  char v7; // al
  _BYTE *v8; // rdi
  char v9; // al
  char v10; // al
  size_t v11; // rax
  _BYTE *v12; // rbp
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  size_t v14; // rax
  __int64 (__fastcall *v15)(__int64, __int64); // rax

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  else
    v4((__int64)a2, v3);
  v5 = *(_BYTE **)(a1 + 24);
  v6 = v5[10] & 3;
  if ( v6 == 2 )
    v7 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v5 + 8LL))(v5, a2);
  else
    v7 = v6 == 0;
  if ( v7
    || ((v8 = *(_BYTE **)(a1 + 24), v9 = v8[10] & 0xC, v9 != 8)
      ? (v10 = v9 == 0)
      : (v10 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v8 + 16LL))(v8, a2)),
        v10) )
  {
    v14 = j__strlen("(");
    sub_20D1ED0(a2, v14, "(");
    v12 = *(_BYTE **)(a1 + 16);
    v13 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v13 != sub_20CEB40 )
      goto LABEL_10;
  }
  else
  {
    v11 = j__strlen(" ");
    sub_20D1ED0(a2, v11, " ");
    v12 = *(_BYTE **)(a1 + 16);
    v13 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v13 != sub_20CEB40 )
    {
LABEL_10:
      v13((__int64)a2, (__int64)v12);
      goto LABEL_13;
    }
  }
  (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v12 + 64LL))(v12, a2);
LABEL_13:
  if ( (v12[9] & 0xC0) != 0x40 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v15 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v12 + 72LL))(v12, a2);
    else
      v15((__int64)a2, (__int64)v12);
  }
  return sub_20D1ED0(a2, 3u, "::*");
}
