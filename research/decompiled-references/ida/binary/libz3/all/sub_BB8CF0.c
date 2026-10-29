__int64 __fastcall sub_BB8CF0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v3; // r13
  unsigned int *v4; // r12
  unsigned int *v6; // [rsp+0h] [rbp-48h] BYREF
  _QWORD **v7[8]; // [rsp+8h] [rbp-40h] BYREF

  v7[0] = nullptr;
  v6 = nullptr;
  sub_BB8720(a1, a3, (__int64 *)v7, &v6);
  v3 = v7[0];
  v4 = v6;
  sub_BB18F0(a1, a2, &v6, v7);
  if ( v3 )
    sub_186B220(v3 - 1);
  if ( v4 )
    sub_186B220(v4 - 2);
  return a2;
}

