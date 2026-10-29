__int64 __fastcall sub_3799F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rsi
  __int64 tinfo_tid; // rbp
  __int64 v7; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-C8h] BYREF
  void *v9; // [rsp+20h] [rbp-B8h]
  __int128 v10; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A0h]
  __int128 v12; // [rsp+40h] [rbp-98h]
  _OWORD v13[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v14; // [rsp+80h] [rbp-58h]
  int v15; // [rsp+88h] [rbp-50h]
  __int64 v16; // [rsp+90h] [rbp-48h]
  char v17; // [rsp+98h] [rbp-40h]
  unsigned __int64 v18; // [rsp+A8h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 40);
  v18 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  get_type_by_tid(&v7, v4);
  v8[0] = v2;
  v8[1] = 0;
  v9 = nullptr;
  ptr = nullptr;
  v14 = 1;
  v15 = -1;
  v16 = 0;
  v17 = 0;
  v10 = 0;
  v12 = 0;
  v13[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member((int)v8) == -1 )
    tinfo_tid = -1;
  else
    tinfo_tid = get_tinfo_tid(v13, 0);
  clear_tinfo_t(v13);
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  clear_tinfo_t(&v7);
  *(_QWORD *)(a2 + 8) = tinfo_tid;
  return 0;
}
