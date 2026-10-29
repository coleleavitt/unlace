void __fastcall sub_805410(char *src, char *a2, char *a3, __int64 a4)
{
  __int64 v6; // rax
  char *v7; // r12
  __int64 v8; // r14

  v6 = (((a2 - src) >> 3) + 1) / 2;
  v7 = &src[8 * v6];
  v8 = (8 * v6) >> 3;
  if ( v6 <= a4 )
  {
    sub_8044C0(src, &src[8 * v6], a3);
    sub_8044C0(v7, a2, a3);
    sub_8041D0(src, v7, a2, v8, (a2 - v7) >> 3, a3);
  }
  else
  {
    sub_805410(src);
    sub_805410(v7);
    sub_804B00(src, v7, a2, v8, (a2 - v7) >> 3, (__int64 *)a3, a4);
  }
}

