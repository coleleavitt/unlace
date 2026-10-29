void *__fastcall sub_489020(__int64 *dest, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int128 v12; // [rsp-20h] [rbp-68h]
  __int64 v13; // [rsp+0h] [rbp-48h]
  __int64 *desta; // [rsp+8h] [rbp-40h]

  v9 = (a2 - dest + 1) / 2;
  v13 = 8 * v9;
  if ( v9 <= a4 )
    return sub_4880B0(dest, &dest[v9], a2, a3, a5, a6);
  desta = &dest[v9];
  sub_489020(dest);
  sub_489020(desta);
  *((_QWORD *)&v12 + 1) = a5;
  *(_QWORD *)&v12 = a4;
  return sub_488B50((char *)dest, desta, a2, v13 >> 3, a2 - desta, a3, v12, a6);
}
