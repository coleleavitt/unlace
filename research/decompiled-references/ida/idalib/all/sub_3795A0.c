__int64 __fastcall sub_3795A0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  int tinfo_udt_member; // eax
  __int64 v5; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-C8h] BYREF
  void *v7; // [rsp+20h] [rbp-B8h]
  __int128 v8; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A0h]
  __int128 v10; // [rsp+40h] [rbp-98h]
  _OWORD v11[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v12; // [rsp+80h] [rbp-58h]
  int v13; // [rsp+88h] [rbp-50h]
  __int64 v14; // [rsp+90h] [rbp-48h]
  char v15; // [rsp+98h] [rbp-40h]
  unsigned __int64 v16; // [rsp+A8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v5 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  if ( (unsigned __int8)get_type_by_tid(&v5, a1[1]) )
  {
    v3 = a1[5];
    v6[1] = 0;
    v7 = nullptr;
    ptr = nullptr;
    v12 = 1;
    v13 = -1;
    v14 = 0;
    v15 = 0;
    v6[0] = 8 * v3;
    v8 = 0;
    v10 = 0;
    v11[0] = 0;
    tinfo_udt_member = find_tinfo_udt_member((int)v6);
    if ( tinfo_udt_member != -1 )
      *(_QWORD *)(a2 + 8) = (unsigned int)set_tinfo_property4(&v5, 15, tinfo_udt_member, a1[9], 0, 0) == 0;
    clear_tinfo_t(v11);
    if ( ptr )
    {
      *(_QWORD *)&v10 = 0;
      qfree(ptr);
    }
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v7);
    }
  }
  clear_tinfo_t(&v5);
  return 0;
}
