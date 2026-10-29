unsigned __int64 __fastcall generate_deref_chain(_QWORD *a1, __int64 a2, __int64 *a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v9[13]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  char v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v6 = *a3;
  v13 = __readfsqword(0x28u);
  v12 = a4;
  *(_QWORD *)v9 = v6;
  v7 = *(__int64 *)((char *)a3 + 5);
  v11 = 0;
  *(_QWORD *)&v9[5] = v7;
  v10 = 0;
  sub_3FF580((__int64)v9, a2, (__int64)a3, a4, a5, a6);
  sub_3FF610((__int64)v9, a1, a2);
  return v13 - __readfsqword(0x28u);
}
