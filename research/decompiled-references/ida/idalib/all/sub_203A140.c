void __fastcall sub_203A140(__int64 a1, const void *a2, size_t a3, __int64 a4)
{
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // rax

  if ( a4 )
  {
    v7 = *(_BYTE *)(a1 + 8) == 0;
    v8 = *(_QWORD *)a1;
    if ( v7 )
      v8 = sub_995540(v8, *(const char **)(a1 + 16));
    else
      *(_BYTE *)(a1 + 8) = 0;
    v9 = sub_9954E0(v8, a2, a3);
    sub_995540(v9, ": ");
    sub_2039CC0(*(_QWORD *)a1, a4, *(__int64 **)(a1 + 24));
  }
}
