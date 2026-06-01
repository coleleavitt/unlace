void __fastcall sub_2039D00(__int64 a1, const void *a2, size_t a3, __int64 a4, char a5)
{
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v10; // rax

  if ( a4 || !a5 )
  {
    v8 = *(_BYTE *)(a1 + 8) == 0;
    v9 = *(_QWORD *)a1;
    if ( v8 )
      v9 = sub_995540(v9, *(const char **)(a1 + 16));
    else
      *(_BYTE *)(a1 + 8) = 0;
    v10 = sub_9954E0(v9, a2, a3);
    sub_995540(v10, ": ");
    sub_2039CC0(*(_QWORD *)a1, a4, *(__int64 **)(a1 + 24));
  }
}
