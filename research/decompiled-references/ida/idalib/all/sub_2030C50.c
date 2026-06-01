__int64 __fastcall sub_2030C50(__int64 a1, const void *a2, size_t a3, char a4)
{
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rbp
  size_t v9; // rax
  __int64 v10; // rax
  const char *v11; // rsi
  __int64 v13; // rax
  size_t v14; // [rsp+8h] [rbp-20h]

  v6 = *(_BYTE *)(a1 + 8) == 0;
  v7 = *(_QWORD *)a1;
  if ( v6 )
  {
    v14 = a3;
    v13 = sub_995540(v7, *(const char **)(a1 + 16));
    a3 = v14;
    v7 = v13;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
  }
  v8 = sub_9954E0(v7, a2, a3);
  v9 = j__strlen(": ");
  v10 = sub_9954E0(v8, ": ", v9);
  v11 = "true";
  if ( !a4 )
    v11 = "false";
  return sub_995540(v10, v11);
}
