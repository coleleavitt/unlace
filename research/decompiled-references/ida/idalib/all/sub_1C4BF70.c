void __fastcall sub_1C4BF70(
        __int64 *a1,
        char *a2,
        char *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(void **, __int64 *))
{
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // [rsp+8h] [rbp-40h]

  v8 = (__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)a1) >> 3) + 1) / 2;
  v9 = &a1[3 * v8];
  v10 = 24 * v8;
  if ( v8 <= a4 )
  {
    sub_1C4BD00((__int64)a1, (char *)&a1[3 * v8], a3, a5);
    sub_1C4BD00((__int64)v9, a2, a3, a5);
  }
  else
  {
    sub_1C4BF70(a1, &a1[3 * v8], a3);
    sub_1C4BF70(v9, a2, a3);
  }
  sub_1C49D70(
    a1,
    v9,
    (__int64 *)a2,
    0xAAAAAAAAAAAAAAABLL * (v10 >> 3),
    0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v9) >> 3),
    a3,
    a4,
    (__int64 (__fastcall *)(__int64 *, char *))a5);
}
