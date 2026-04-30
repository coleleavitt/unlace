unsigned __int64 __fastcall sub_2D50E0(const char *a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // r14
  int tinfo_property4; // ebx
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  int tinfo_udt_member; // eax
  __int64 local_types_tlc; // r15
  unsigned int place_class_id; // eax
  __int64 place_class; // rax
  __int64 v14; // r14
  int tinfo_property; // eax
  _QWORD *v17; // [rsp+18h] [rbp-120h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-118h] BYREF
  char v19; // [rsp+30h] [rbp-108h]
  __int64 v20; // [rsp+38h] [rbp-100h]
  __int64 v21; // [rsp+40h] [rbp-F8h]
  int v22; // [rsp+48h] [rbp-F0h]
  __int64 v23; // [rsp+50h] [rbp-E8h]
  _QWORD v24[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+70h] [rbp-C8h]
  __int128 v26; // [rsp+78h] [rbp-C0h]
  __int64 v27; // [rsp+88h] [rbp-B0h]
  __int128 v28; // [rsp+90h] [rbp-A8h]
  _OWORD v29[3]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-68h]
  int v31; // [rsp+D8h] [rbp-60h]
  __int64 v32; // [rsp+E0h] [rbp-58h]
  char v33; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+F8h] [rbp-40h]

  v4 = a3;
  tinfo_property4 = a2;
  v34 = __readfsqword(0x28u);
  v17 = nullptr;
  if ( a3 == -1 )
    v4 = 0;
  if ( (unsigned __int8)get_type_by_tid(&v17, a2) && (get_tinfo_property(v17, 2) & 0x2F) == 0xD )
  {
    v8 = (__int64)v17;
    v9 = v24;
    v24[1] = 0;
    v25 = 0;
    v27 = 0;
    v30 = 1;
    v31 = -1;
    v32 = 0;
    v33 = 0;
    v24[0] = 8 * v4;
    v26 = 0;
    v28 = 0;
    v29[0] = 0;
    tinfo_udt_member = find_tinfo_udt_member(v24, v17, 0);
    if ( tinfo_udt_member != -1 )
    {
      v9 = v17;
      v8 = 297;
      tinfo_property4 = get_tinfo_property4(v17, 297, tinfo_udt_member, 0, 0, 0);
    }
    local_types_tlc = get_local_types_tlc(v9, v8);
    place_class_id = get_place_class_id("tiplace_t");
    place_class = get_place_class(0, 0, place_class_id);
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
    tinfo_property = get_tinfo_property(v17, 7);
    *(_DWORD *)(v14 + 12) = tinfo_property;
    v21 = 0xFFFFFFFFLL;
    v22 = tinfo_property;
    v18[0] = lineslist_udt_tiplace_t___vtable;
    v18[1] = local_types_tlc;
    v19 = 1;
    v20 = v14;
    v23 = v24[0];
    sub_2D42D0(v18, (__int64)a1, tinfo_property4, a4, 0);
    if ( v14 )
      qfree(v14, a1);
    clear_tinfo_t(v29);
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27, a1);
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25, a1);
    }
  }
  clear_tinfo_t(&v17);
  return v34 - __readfsqword(0x28u);
}
