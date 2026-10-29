void __fastcall sub_2031390(__int64 a1, const void *a2, size_t a3, __int64 a4, char a5)
{
  bool v7; // zf
  __int64 v9; // rdi
  __int64 v10; // rbp
  size_t v11; // rax
  __int64 v12; // rax

  if ( a4 || !a5 )
  {
    v7 = *(_BYTE *)(a1 + 8) == 0;
    v9 = *(_QWORD *)a1;
    if ( v7 )
      v9 = sub_995540(v9, *(const char **)(a1 + 16));
    else
      *(_BYTE *)(a1 + 8) = 0;
    v10 = sub_9954E0(v9, a2, a3);
    v11 = j__strlen(": ");
    v12 = sub_9954E0(v10, ": ", v11);
    sub_227B910(v12, a4);
  }
}
