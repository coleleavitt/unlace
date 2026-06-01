void __fastcall sub_498E30(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 *v11; // rbp
  __int64 v12; // r14
  __int128 v13; // [rsp-20h] [rbp-78h]
  __int64 v15; // [rsp+8h] [rbp-50h]

  v10 = (a2 - a1 + 1) / 2;
  v11 = &a1[v10];
  v12 = (8 * v10) >> 3;
  v15 = a2 - v11;
  if ( v10 <= a4 )
  {
    sub_498450(a1, v11, a3, a5);
    sub_498450(v11, a2, a3, a5);
    sub_494DE0(a1, v11, a2, v12, v15, a3);
  }
  else
  {
    sub_498E30(a1, v11, a3, a4, a5, a6);
    sub_498E30(v11, a2, a3, a4, a5, a6);
    *((_QWORD *)&v13 + 1) = a5;
    *(_QWORD *)&v13 = a4;
    sub_496900(a1, v11, a2, v12, v15, a3, v13);
  }
}

