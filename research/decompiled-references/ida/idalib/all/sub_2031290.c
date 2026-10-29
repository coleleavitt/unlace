void __fastcall sub_2031290(__int64 a1, const void *a2, size_t a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbp
  size_t v9; // rax
  __int64 v10; // rax

  if ( a4 )
  {
    v7 = *(_QWORD *)a1;
    if ( *(_BYTE *)(a1 + 8) )
      *(_BYTE *)(a1 + 8) = 0;
    else
      v7 = sub_995540(v7, *(const char **)(a1 + 16));
    v8 = sub_9954E0(v7, a2, a3);
    v9 = j__strlen(": ");
    v10 = sub_9954E0(v8, ": ", v9);
    sub_227B910(v10, a4);
  }
}
