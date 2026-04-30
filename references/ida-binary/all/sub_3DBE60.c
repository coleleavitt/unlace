void __fastcall sub_3DBE60(char *dest, char *a2, char *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  char *v7; // r14

  v5 = (((a2 - dest) >> 2) + 1) / 2;
  v6 = 4 * v5;
  v7 = &dest[4 * v5];
  if ( v5 <= a4 )
  {
    sub_3DB5C0(dest, &dest[4 * v5], a2, a3);
  }
  else
  {
    sub_3DBE60(dest);
    sub_3DBE60(v7);
    sub_3DBA10(dest, v7, a2, v6 >> 2, (a2 - v7) >> 2, (int *)a3, a4);
  }
}
