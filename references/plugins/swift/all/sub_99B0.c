__int64 __fastcall sub_99B0(__int64 a1, __int64 a2)
{
  __int64 member; // rbx
  _QWORD v4[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v5; // [rsp+10h] [rbp-A8h]
  __int128 v6; // [rsp+18h] [rbp-A0h]
  __int64 v7; // [rsp+28h] [rbp-90h]
  __int128 v8; // [rsp+30h] [rbp-88h]
  _OWORD v9[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v10; // [rsp+70h] [rbp-48h]
  int v11; // [rsp+78h] [rbp-40h]
  __int64 v12; // [rsp+80h] [rbp-38h]
  char v13; // [rsp+88h] [rbp-30h]
  unsigned __int64 v14; // [rsp+98h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0;
  v7 = 0;
  v10 = 1;
  v11 = -1;
  v12 = 0;
  v13 = 0;
  v6 = 0;
  v8 = 0;
  v9[0] = 0;
  member = udt_type_data_t__find_member(a1, v4, 0);
  clear_tinfo_t(v9);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return member;
}
