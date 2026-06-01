void __fastcall sub_4201B0(char *a1, char *a2, char *a3, __int64 a4)
{
  __int64 v6; // rax
  char *v7; // r12
  __int64 v8; // r14

  v6 = (((a2 - a1) >> 3) + 1) / 2;
  v7 = &a1[8 * v6];
  v8 = (8 * v6) >> 3;
  if ( v6 <= a4 )
  {
    sub_41FE00(a1, &a1[8 * v6], a3);
    sub_41FE00(v7, a2, a3);
    sub_41F190(a1, v7, a2, v8, (a2 - v7) >> 3, a3);
  }
  else
  {
    sub_4201B0(a1, &a1[8 * v6], a3, a4);
    sub_4201B0(v7, a2, a3, a4);
    sub_41F7A0(a1, v7, a2, v8, (a2 - v7) >> 3, a3, a4);
  }
}

