void __fastcall sub_570B20(char *a1, void *a2)
{
  __int64 v2; // r12

  if ( (_BYTE *)a2 - a1 <= 2016 )
  {
    sub_562F30((__int64)a1, a2);
  }
  else
  {
    v2 = 144 * ((__int64)(0x8E38E38E38E38E39LL * (((_BYTE *)a2 - a1) >> 4)) >> 1);
    sub_570B20(a1, &a1[v2]);
    sub_570B20(&a1[v2], a2);
    sub_5709B0(
      a1,
      (__int64 *)&a1[v2],
      (__int64)a2,
      0x8E38E38E38E38E39LL * (v2 >> 4),
      0x8E38E38E38E38E39LL * (((_BYTE *)a2 - &a1[v2]) >> 4));
  }
}
