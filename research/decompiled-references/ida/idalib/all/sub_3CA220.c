unsigned __int64 __fastcall sub_3CA220(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD **)(a1 + 1672);
  v12 = __readfsqword(0x28u);
  v7 = 0;
  if ( a3 != -1 )
    v7 = sub_3B9DC0(v6, a3) + 1;
  v10 = v7;
  v8 = -1;
  if ( a2 != -1 )
    v8 = sub_3B9DC0(v6, a2);
  v11 = v8;
  sub_7BE7C0(&v11, a1, 3, &v10, 8, 65);
  if ( a4 )
    sub_411350(v6, a2, a3, 3);
  return v12 - __readfsqword(0x28u);
}
