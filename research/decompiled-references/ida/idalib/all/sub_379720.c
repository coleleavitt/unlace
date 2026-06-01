__int64 __fastcall sub_379720(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rsi
  int tinfo_udt_member; // eax
  _BOOL8 v6; // r13
  __int64 v8; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-C8h] BYREF
  void *v10; // [rsp+20h] [rbp-B8h]
  __int128 v11; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A0h]
  __int128 v13; // [rsp+40h] [rbp-98h]
  _OWORD v14[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v15; // [rsp+80h] [rbp-58h]
  int v16; // [rsp+88h] [rbp-50h]
  __int64 v17; // [rsp+90h] [rbp-48h]
  char v18; // [rsp+98h] [rbp-40h]
  unsigned __int64 v19; // [rsp+A8h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 40);
  v19 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  get_type_by_tid(&v8, v4);
  v9[0] = v2;
  v9[1] = 0;
  v10 = nullptr;
  ptr = nullptr;
  v15 = 1;
  v16 = -1;
  v17 = 0;
  v18 = 0;
  v11 = 0;
  v13 = 0;
  v14[0] = 0;
  tinfo_udt_member = find_tinfo_udt_member((int)v9);
  v6 = 0;
  if ( tinfo_udt_member != -1 )
    v6 = (unsigned int)set_tinfo_property4(&v8, 10, tinfo_udt_member, tinfo_udt_member + 1LL, 0, 0) == 0;
  clear_tinfo_t(v14);
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  clear_tinfo_t(&v8);
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
