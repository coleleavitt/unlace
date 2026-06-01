__int64 __fastcall sub_454B70(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        void *a9,
        __int64 a10,
        int a11,
        int a12,
        __int64 a13)
{
  int v13; // ebx
  _QWORD *v14; // rbp
  __int64 v15; // rdi
  __int128 v17; // kr00_16
  __int64 *v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int128 v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v13 = (int)a1;
  v14 = a1 + 203;
  v15 = *a1;
  v24 = __readfsqword(0x28u);
  v23 = 0;
  sub_630CA0(v15, 26, &v23, 16);
  v17 = v23;
  v18 = (__int64 *)sub_506150(v14);
  if ( !v18 )
    return sub_673690(v13, a7, a8, a9, a10, a11, a12, a13);
  while ( 1 )
  {
    v19 = *v18;
    v20 = a2 + v18[1];
    v21 = *v18 + a2;
    if ( v21 >= v20 || (unsigned __int64)v17 < v20 && v21 < *((_QWORD *)&v17 + 1) )
      break;
    v18 = (__int64 *)sub_505EB0(v14, v19);
    if ( !v18 )
      return sub_673690(v13, a7, a8, a9, a10, a11, a12, a13);
  }
  return 4294967285LL;
}
