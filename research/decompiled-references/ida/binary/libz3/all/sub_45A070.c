void __fastcall sub_45A070(char *src, char *a2, char *a3, __int64 a4)
{
  __int64 v6; // rax
  char *v7; // r12
  __int64 v8; // r14

  v6 = (((a2 - src) >> 3) + 1) / 2;
  v7 = &src[8 * v6];
  v8 = (8 * v6) >> 3;
  if ( v6 <= a4 )
  {
    sub_4592F0(src, &src[8 * v6], a3);
    sub_4592F0(v7, a2, a3);
    sub_459620(src, v7, a2, v8, (a2 - v7) >> 3, a3);
  }
  else
  {
    sub_45A070(src);
    sub_45A070(v7);
    sub_459830(src, v7, a2, v8, (a2 - v7) >> 3, a3, a4);
  }
}

