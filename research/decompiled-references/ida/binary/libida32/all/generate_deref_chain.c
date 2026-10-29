unsigned __int64 __fastcall generate_deref_chain(_QWORD *a1, __int64 a2, __int64 *a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v9[13]; // [rsp+0h] [rbp-58h] BYREF
  int v10; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+20h] [rbp-38h]
  char v13; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v6 = *a3;
  v14 = __readfsqword(0x28u);
  v10 = 0;
  *(_QWORD *)v9 = v6;
  v7 = *(__int64 *)((char *)a3 + 5);
  v11 = 0;
  *(_QWORD *)&v9[5] = v7;
  v12 = 0;
  v13 = a4;
  sub_3EC530((__int64)v9, a2, (__int64)a3, a4, a5, a6);
  sub_3EC5D0((__int64)v9, a1, a2);
  return v14 - __readfsqword(0x28u);
}

