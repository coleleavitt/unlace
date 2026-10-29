void *__fastcall sub_4EA780(
        char *src,
        char *a2,
        char *a3,
        char *a4,
        void *a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  sub_4EA680(src, a2, a4, (__int64)a5, a6, a7, a8, a9, a10);
  sub_4EA680(a2, a3, a4, (__int64)a5, a6, a7, a8, a9, a10);
  return sub_4E6B50(src, a2, (__int64 *)a3, (a2 - src) >> 3, (a3 - a2) >> 3, a4, a7, a8, a9, a10, a5, a6);
}
