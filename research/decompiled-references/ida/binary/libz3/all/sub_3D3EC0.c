void __fastcall sub_3D3EC0(char *src, char *a2, char *a3, __int64 a4)
{
  __int64 v6; // rax
  char *v7; // r12
  __int64 v8; // r14

  v6 = (((a2 - src) >> 3) + 1) / 2;
  v7 = &src[8 * v6];
  v8 = (8 * v6) >> 3;
  if ( v6 <= a4 )
  {
    sub_3D2DD0(src, &src[8 * v6], a3);
    sub_3D2DD0(v7, a2, a3);
    sub_3D3100(src, v7, a2, v8, (a2 - v7) >> 3, a3);
  }
  else
  {
    sub_3D3EC0(src);
    sub_3D3EC0(v7);
    sub_3D39D0(src, v7, a2, v8, (a2 - v7) >> 3, a3, a4);
  }
}

