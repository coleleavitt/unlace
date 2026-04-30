__int64 __fastcall exc_chooser_t__::vfunc_11(__int64 a1, __int64 a2)
{
  const char *v4; // rsi
  int v5; // edx
  __int64 result; // rax
  char *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi

  v4 = "HIDECANCEL\nAre you sure you want to delete the selected exception(s)?";
  v5 = sub_1698A0(-1, (int)"HIDECANCEL\nAre you sure you want to delete the selected exception(s)?");
  result = 0;
  if ( v5 == 1 )
  {
    do
    {
      v7 = (char *)(qword_8CC2F0 + 56LL * *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8) - 8));
      v8 = *((_QWORD *)v7 + 4);
      if ( v8 )
      {
        *((_QWORD *)v7 + 5) = 0;
        qfree(v8, v4);
      }
      v9 = *((_QWORD *)v7 + 1);
      if ( v9 )
      {
        *((_QWORD *)v7 + 2) = 0;
        qfree(v9, v4);
      }
      v4 = v7 + 56;
      memmove(v7, v7 + 56, qword_8CC2F0 + 56 * xmmword_8CC2F8 - (_QWORD)v7 - 56);
      *(_QWORD *)&xmmword_8CC2F8 = xmmword_8CC2F8 - 1;
    }
    while ( (unsigned __int8)sub_49F220(a2) );
    *(_BYTE *)(a1 + 180) = 1;
    sub_49F270(a1, a2, **(_QWORD **)a2);
    return 1;
  }
  return result;
}
