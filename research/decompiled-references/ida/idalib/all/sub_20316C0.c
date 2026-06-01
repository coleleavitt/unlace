void __fastcall sub_20316C0(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6)
{
  bool v9; // zf
  __int64 v11; // rdi
  __int64 v12; // rax
  const void *v13; // rax
  size_t v14; // rdx

  if ( a4 || !a6 )
  {
    v9 = *((_BYTE *)a1 + 8) == 0;
    v11 = *a1;
    if ( v9 )
      v11 = sub_995540(v11, (const char *)a1[2]);
    else
      *((_BYTE *)a1 + 8) = 0;
    v12 = sub_9954E0(v11, a2, a3);
    sub_995540(v12, ": ");
    v13 = (const void *)a5(a4);
    if ( v14 )
      sub_9954E0(*a1, v13, v14);
    else
      sub_227B910(*a1, a4);
  }
}
