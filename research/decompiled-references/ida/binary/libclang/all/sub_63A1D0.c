_QWORD *__fastcall sub_63A1D0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // rax
  _QWORD v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = a3;
  v8[0] = a2;
  v6 = sub_B03D80(v8);
  *a1 = 49;
  a1[2] = v4;
  a1[3] = a4;
  a1[1] = v6 & 0xFFFFFFFFFFFFFFF9LL | 4;
  return a1;
}

