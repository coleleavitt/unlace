void __fastcall sub_565840(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 *v8; // [rsp+8h] [rbp-40h]

  v5 = (__int64)(0x8E38E38E38E38E39LL * (((__int64)a2 - a1) >> 4) + 1) / 2;
  v6 = 144 * v5;
  if ( v5 <= a4 )
  {
    sub_563790(a1, (char *)(a1 + 144 * v5), a2, a3);
  }
  else
  {
    v8 = (unsigned __int64 *)(a1 + 144 * v5);
    sub_565840(a1, v8, a3);
    sub_565840(v8, a2, a3);
    sub_5648D0(
      a1,
      v8,
      (__int64)a2,
      0x8E38E38E38E38E39LL * (v6 >> 4),
      0x8E38E38E38E38E39LL * (((_BYTE *)a2 - (_BYTE *)v8) >> 4),
      a3,
      a4);
  }
}
