void __fastcall sub_2031410(__int64 a1, const void *a2, size_t a3, unsigned int a4, char a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbp
  size_t v10; // rax
  __int64 v11; // rax

  if ( a4 || !a5 )
  {
    v8 = *(_QWORD *)a1;
    if ( *(_BYTE *)(a1 + 8) )
      *(_BYTE *)(a1 + 8) = 0;
    else
      v8 = sub_995540(v8, *(const char **)(a1 + 16));
    v9 = sub_9954E0(v8, a2, a3);
    v10 = j__strlen(": ");
    v11 = sub_9954E0(v9, ": ", v10);
    sub_227B910(v11, a4);
  }
}
