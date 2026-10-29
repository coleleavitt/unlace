__int64 __fastcall sub_C4FC60(__int64 **a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  __int64 *v7; // rdi
  unsigned int v8; // r14d
  void *v9; // r13
  void *v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-80h] BYREF
  __int64 v13; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-70h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[8]; // [rsp+40h] [rbp-40h] BYREF

  v14[0] = 0;
  v7 = *a1;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  v16[0] = 0;
  v16[1] = 0;
  v17[0] = 1;
  v17[1] = 0;
  v8 = 5;
  if ( (unsigned __int8)sub_C4E470((__int64)v7, a2, a3, a4, &v12, &v13, (__int64)v14, (__int64)v16) )
  {
    sub_C4EDF0(*a1, v12, v13, (__int64)v14, (int)v16, a5);
    v8 = 3;
  }
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v16);
  sub_182CBA0(v9, v17);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v10, v15);
  return v8;
}

