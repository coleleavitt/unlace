void __fastcall sub_2030D70(__int64 *a1, const void *a2, size_t a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rdi
  __int64 v11; // rax

  if ( !a6 || a5 )
  {
    v10 = *a1;
    if ( *((_BYTE *)a1 + 8) )
      *((_BYTE *)a1 + 8) = 0;
    else
      v10 = sub_995540(v10, (const char *)a1[2]);
    v11 = sub_9954E0(v10, a2, a3);
    sub_995540(v11, ": \"");
    sub_22449A0(a4, a5, *a1);
    sub_995540(*a1, "\"");
  }
}
