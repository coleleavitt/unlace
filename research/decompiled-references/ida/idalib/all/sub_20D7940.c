void __fastcall sub_20D7940(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // rdx
  int v3; // r13d
  _BYTE *v4; // rbp
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  size_t v10; // rax
  const char *v11; // rbp
  size_t v12; // rax
  size_t v13; // rax

  if ( !*(_BYTE *)(a1 + 28) )
  {
    *(_BYTE *)(a1 + 28) = 1;
    v3 = sub_20D77A0(a1, (__int64)a2);
    v4 = v2;
    if ( !v2 )
    {
LABEL_16:
      *(_BYTE *)(a1 + 28) = 0;
      return;
    }
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v5 == sub_20CEB40 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 64LL))(v2, a2);
    else
      v5((__int64)a2, (__int64)v2);
    v6 = v4[10] & 3;
    if ( v6 == 2 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v4 + 8LL))(v4, a2) )
        goto LABEL_18;
    }
    else if ( v6 )
    {
      goto LABEL_7;
    }
    v13 = j__strlen(" ");
    sub_20D1ED0(a2, v13, " ");
LABEL_18:
    v6 = v4[10] & 3;
    if ( v6 == 2 )
    {
      v7 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v4 + 8LL))(v4, a2);
LABEL_8:
      if ( v7
        || ((v8 = v4[10] & 0xC, v8 != 8)
          ? (v9 = v8 == 0)
          : (v9 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v4 + 16LL))(v4, a2)),
            v9) )
      {
        v10 = j__strlen("(");
        sub_20D1ED0(a2, v10, "(");
      }
      v11 = "&";
      if ( v3 )
        v11 = "&&";
      v12 = j__strlen(v11);
      sub_20D1ED0(a2, v12, v11);
      goto LABEL_16;
    }
LABEL_7:
    v7 = v6 == 0;
    goto LABEL_8;
  }
}
