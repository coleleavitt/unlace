__int64 __fastcall sub_379F90(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v7; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+10h] [rbp-B8h] BYREF
  void *v9; // [rsp+20h] [rbp-A8h]
  __int128 v10; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+38h] [rbp-90h]
  __int128 v12; // [rsp+40h] [rbp-88h]
  _OWORD v13[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v14; // [rsp+80h] [rbp-48h]
  int v15; // [rsp+88h] [rbp-40h]
  __int64 v16; // [rsp+90h] [rbp-38h]
  char v17; // [rsp+98h] [rbp-30h]
  unsigned __int64 v18; // [rsp+A8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  get_type_by_tid(&v7, v3);
  if ( (_BYTE)v7 && (unsigned int)get_tinfo_property(v7, 16) )
  {
    v9 = nullptr;
    ptr = nullptr;
    v14 = 1;
    v15 = -1;
    v16 = 0;
    v17 = 0;
    v8 = 0;
    v10 = 0;
    v12 = 0;
    v13[0] = 0;
    find_tinfo_udt_member((int)&v8);
    v4 = v8;
    clear_tinfo_t(v13);
    v5 = v4 >> 3;
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
  }
  else
  {
    v5 = -1;
  }
  clear_tinfo_t(&v7);
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
