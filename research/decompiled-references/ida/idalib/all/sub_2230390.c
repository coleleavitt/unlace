char **__fastcall sub_2230390(
        char **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const void **a9,
        const void **a10)
{
  char *v10; // rax
  const void **v12[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v13; // [rsp+20h] [rbp-28h]

  v13 = 261;
  v12[0] = a9;
  v12[1] = a10;
  v10 = sub_22301F0(24, v12);
  *((_QWORD *)v10 + 1) = a7;
  *(_QWORD *)v10 = &off_2BEB130;
  *((_QWORD *)v10 + 2) = a8 + a7;
  *a1 = v10;
  return a1;
}
