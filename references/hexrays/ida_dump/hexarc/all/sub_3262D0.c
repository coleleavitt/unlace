__int64 __fastcall sub_3262D0(__int128 *a1, _QWORD *a2, __int64 a3, char a4)
{
  unsigned int tinfo_udt_member; // ebx
  __int128 v6; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+10h] [rbp-98h]
  __int128 v8; // [rsp+18h] [rbp-90h]
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int128 v10; // [rsp+30h] [rbp-78h]
  _OWORD v11[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+78h] [rbp-30h]
  __int64 v14; // [rsp+80h] [rbp-28h]
  char v15; // [rsp+88h] [rbp-20h]
  unsigned __int64 v16; // [rsp+98h] [rbp-10h]

  v16 = __readfsqword(0x28u);
  v13 = -1;
  if ( !a1 )
    a1 = &v6;
  v7 = 0;
  v6 = 0;
  v9 = 0;
  v12 = 1;
  v14 = 0;
  v15 = 0;
  v8 = 0;
  v10 = 0;
  v11[0] = 0;
  *(_QWORD *)a1 = a3;
  tinfo_udt_member = find_tinfo_udt_member(a1, *a2, (a4 & 2) == 0 ? 536870914 : 805306370);
  clear_tinfo_t(v11);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return tinfo_udt_member;
}
