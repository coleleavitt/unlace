void *__fastcall sub_4EA810(
        char *src,
        char *a2,
        char *a3,
        void *a4,
        void *a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 v13; // rax
  __int64 v16; // [rsp+0h] [rbp-48h]
  char *srca; // [rsp+8h] [rbp-40h]

  v13 = (((a2 - src) >> 3) + 1) / 2;
  v16 = 8 * v13;
  if ( v13 <= (__int64)a4 )
    return sub_4EA780(src, &src[8 * v13], a2, a3, a5, a6, a7, a8, a9, a10);
  srca = &src[8 * v13];
  sub_4EA810(src, (_DWORD)src + 8 * v13, (int)a3, a4, (__int64)a5, a6);
  sub_4EA810(srca, (int)a2, (int)a3, a4, (__int64)a5, a6);
  return sub_4E9C20(src, srca, (__int64 *)a2, v16 >> 3, (a2 - srca) >> 3, a3, a7, a8, a9, a10, a4, a5, a6);
}
