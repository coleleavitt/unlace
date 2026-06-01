void __fastcall sub_49D260(char *dest, char *src, char *a3, char *a4)
{
  signed __int64 v6; // r14

  v6 = a3 - src;
  sub_49C5C0(dest, src, a4);
  sub_49C5C0(src, a3, a4);
  if ( v6 < src - dest )
  {
    if ( v6 <= 8 )
    {
      if ( v6 == 8 )
        *(_QWORD *)a4 = *(_QWORD *)src;
    }
    else
    {
      memmove(a4, src, v6);
    }
    sub_49D1C0(dest, src, a4, &a4[v6], (__int64)a3);
  }
  else
  {
    sub_49C870(dest, src, a3, a4);
  }
}
