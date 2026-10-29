void __fastcall sub_3CF3E0(
        __int64 *src,
        __int64 *a2,
        char *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(_QWORD, _QWORD))
{
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // r14

  v6 = (a2 - src + 1) / 2;
  v7 = &src[v6];
  v8 = (8 * v6) >> 3;
  if ( v6 <= a4 )
  {
    sub_3CD840(src, &src[v6], a3);
    sub_3CD840(v7, a2, a3);
    sub_3CE010((char *)src, (char *)v7, (char *)a2, v8, a2 - v7, a3, a5);
  }
  else
  {
    sub_3CF3E0(src);
    sub_3CF3E0(v7);
    sub_3CEA40((char *)src, (char *)v7, (char *)a2, v8, a2 - v7, a3, a4, a5);
  }
}

