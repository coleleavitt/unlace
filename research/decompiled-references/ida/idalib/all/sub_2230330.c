char **__fastcall sub_2230330(char **a1, __int64 a2, __int64 a3, const void **a4, const void **a5)
{
  char *v6; // rax
  const void **v8[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v9; // [rsp+20h] [rbp-28h]

  v9 = 261;
  v8[0] = a4;
  v8[1] = a5;
  v6 = sub_22301F0(24, v8);
  *((_QWORD *)v6 + 1) = a2;
  *(_QWORD *)v6 = &off_2BEB130;
  *((_QWORD *)v6 + 2) = a3 + a2;
  *a1 = v6;
  return a1;
}
