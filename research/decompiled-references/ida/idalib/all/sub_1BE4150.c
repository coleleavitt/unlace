void *__fastcall sub_1BE4150(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int64 *v12; // r13
  int v13; // r8d
  int v14; // r9d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v10 = (a2 - a1 + 1) / 2;
  v11 = 8 * v10;
  v12 = &a1[v10];
  if ( v10 <= (__int64)a4 )
  {
    sub_1BCDF40(a1, &a1[v10], (__int64)a3, (__int64)a4, a5, a6, a7, a8);
    sub_1BCDF40(v12, a2, (__int64)a3, v16, v17, v18, a7, a8);
  }
  else
  {
    sub_1BE4150(
      (_DWORD)a1,
      (_DWORD)a1 + 8 * v10,
      (_DWORD)a3,
      (_DWORD)a4,
      a5,
      a6,
      a7,
      *((__int64 *)&a7 + 1),
      a8,
      *((__int64 *)&a8 + 1));
    sub_1BE4150(
      (_DWORD)v12,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)a4,
      v13,
      v14,
      a7,
      *((__int64 *)&a7 + 1),
      a8,
      *((__int64 *)&a8 + 1));
  }
  return sub_1BE3C90((char *)a1, (char *)v12, (char *)a2, v11 >> 3, a2 - v12, a3, a4, a7, a8);
}
