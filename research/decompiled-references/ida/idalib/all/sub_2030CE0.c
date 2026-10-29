void __fastcall sub_2030CE0(__int64 a1, const void *a2, size_t a3, char a4, char a5)
{
  bool v7; // zf
  __int64 v9; // rdi
  __int64 v10; // rbp
  size_t v11; // rax
  const char *v12; // rsi
  __int64 v13; // rdi

  if ( a5 != a4 )
  {
    v7 = *(_BYTE *)(a1 + 8) == 0;
    v9 = *(_QWORD *)a1;
    if ( v7 )
      v9 = sub_995540(v9, *(const char **)(a1 + 16));
    else
      *(_BYTE *)(a1 + 8) = 0;
    v10 = sub_9954E0(v9, a2, a3);
    v11 = j__strlen(": ");
    v12 = "true";
    v13 = sub_9954E0(v10, ": ", v11);
    if ( !a4 )
      v12 = "false";
    sub_995540(v13, v12);
  }
}
