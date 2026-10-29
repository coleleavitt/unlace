void __fastcall sub_49DB20(char *dest, char *a2, char *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  char *v7; // r14

  v5 = (((a2 - dest) >> 3) + 1) / 2;
  v6 = 8 * v5;
  v7 = &dest[8 * v5];
  if ( v5 <= a4 )
  {
    sub_49D260(dest, &dest[8 * v5], a2, a3);
  }
  else
  {
    sub_49DB20(dest);
    sub_49DB20(v7);
    sub_49D6C0(dest, v7, a2, v6 >> 3, (a2 - v7) >> 3, (unsigned __int64 *)a3, a4);
  }
}
