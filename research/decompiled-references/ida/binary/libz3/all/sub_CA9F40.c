_DWORD *__fastcall sub_CA9F40(int *a1, int *a2, int *a3, __int64 a4)
{
  __int64 v7; // rax
  int *v8; // rbp
  __int64 v9; // rbx

  v7 = (__int64)(0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)a1) >> 3) + 1) / 2;
  v8 = &a1[10 * v7];
  v9 = 0xCCCCCCCCCCCCCCCDLL * ((40 * v7) >> 3);
  if ( v7 <= a4 )
  {
    sub_CA81D0(a1, &a1[10 * v7], a3);
    sub_CA81D0(v8, a2, a3);
    return sub_CA8C90(a1, v8, (__int64)a2, v9, 0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)v8) >> 3), a3);
  }
  else
  {
    sub_CA9F40(a1, &a1[10 * v7], a3, a4);
    sub_CA9F40(v8, a2, a3, a4);
    return sub_CA9250(
             (char *)a1,
             (char *)v8,
             (__int64)a2,
             v9,
             0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)v8) >> 3),
             a3,
             a4);
  }
}

