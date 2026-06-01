void __fastcall sub_3DB5C0(char *dest, char *src, char *a3, char *a4)
{
  signed __int64 v6; // r14

  v6 = a3 - src;
  sub_3DB2F0(dest, src, a4);
  sub_3DB2F0(src, a3, a4);
  if ( v6 < src - dest )
  {
    if ( v6 <= 4 )
    {
      if ( v6 == 4 )
        *(_DWORD *)a4 = *(_DWORD *)src;
    }
    else
    {
      memmove(a4, src, v6);
    }
    sub_3DB520(dest, src, a4, &a4[v6], (__int64)a3);
  }
  else
  {
    sub_3DB3D0(dest, src, a3, a4);
  }
}
