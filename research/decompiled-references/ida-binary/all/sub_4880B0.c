void *__fastcall sub_4880B0(__int64 *dest, __int64 *src, __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int128 v11; // [rsp-10h] [rbp-58h]

  sub_487BE0(dest, src, a4, a5, a6);
  sub_487BE0(src, a3, a4, a5, a6);
  *((_QWORD *)&v11 + 1) = a6;
  *(_QWORD *)&v11 = a5;
  return sub_487E20(dest, src, a3, src - dest, a3 - src, a4, v11);
}
