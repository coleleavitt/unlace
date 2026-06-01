void __fastcall sub_2030E00(__int64 *a1, const void *a2, size_t a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // rax

  if ( a5 )
  {
    v9 = *a1;
    if ( *((_BYTE *)a1 + 8) )
      *((_BYTE *)a1 + 8) = 0;
    else
      v9 = sub_995540(v9, (const char *)a1[2]);
    v10 = sub_9954E0(v9, a2, a3);
    sub_995540(v10, ": \"");
    sub_22449A0(a4, a5, *a1);
    sub_995540(*a1, "\"");
  }
}
