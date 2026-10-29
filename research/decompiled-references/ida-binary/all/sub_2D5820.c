void __fastcall sub_2D5820(const char *a1, const char *a2, __int64 a3, int *a4)
{
  const char *v4; // rbx
  __int64 v7; // r14
  unsigned int place_class_id; // eax
  __int64 place_class; // rax
  _DWORD *v10; // r13
  int v11; // eax
  int v12; // esi
  const char *v13; // [rsp+18h] [rbp-140h] BYREF
  __int64 v14; // [rsp+20h] [rbp-138h] BYREF
  __int128 v15; // [rsp+28h] [rbp-130h]
  _QWORD v16[2]; // [rsp+40h] [rbp-118h] BYREF
  char v17; // [rsp+50h] [rbp-108h]
  _DWORD *v18; // [rsp+58h] [rbp-100h]
  __int64 v19; // [rsp+60h] [rbp-F8h]
  int v20; // [rsp+68h] [rbp-F0h]
  __int64 v21; // [rsp+70h] [rbp-E8h]
  _QWORD v22[2]; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+90h] [rbp-C8h]
  __int128 v24; // [rsp+98h] [rbp-C0h]
  __int64 v25; // [rsp+A8h] [rbp-B0h]
  __int128 v26; // [rsp+B0h] [rbp-A8h]
  _OWORD v27[3]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-68h]
  int v29; // [rsp+F8h] [rbp-60h]
  __int64 v30; // [rsp+100h] [rbp-58h]
  char v31; // [rsp+108h] [rbp-50h]
  unsigned __int64 v32; // [rsp+118h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( !a2 )
  {
LABEL_19:
    sub_2D1400((__int64)a1, a2);
    return;
  }
  v4 = a2;
  v13 = nullptr;
  tinfo_get_func_frame(&v13, a2);
  a2 = v13;
  v22[0] = 8 * a3;
  v22[1] = 0;
  v23 = 0;
  v25 = 0;
  v28 = 1;
  v29 = -1;
  v30 = 0;
  v31 = 0;
  v24 = 0;
  v26 = 0;
  v27[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member(v22, v13, 0) == -1 )
  {
    clear_tinfo_t(v27);
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25, a2);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23, a2);
    }
    clear_tinfo_t(&v13);
    goto LABEL_19;
  }
  v14 = 0;
  v15 = 0;
  v7 = create_frame_tlc(&v13, &v14, v4);
  place_class_id = get_place_class_id("tiplace_t");
  place_class = get_place_class(0, 0, place_class_id);
  v10 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
  v10[3] = 1;
  (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v10 + 184LL))(v10, v7, v22[0]);
  v11 = v10[3];
  v12 = *a4;
  v19 = 0xFFFFFFFFLL;
  v20 = v11;
  v16[1] = v7;
  v17 = 1;
  v18 = v10;
  v16[0] = lineslist_udt_tiplace_t___vtable;
  v21 = v22[0];
  sub_2D3F20((__int64)v16, v12);
  sub_2D42D0(v16, (__int64)a1, *(_QWORD *)v4, a4, 0);
  if ( v10 )
    qfree(v10, a1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, a1);
  }
  clear_tinfo_t(v27);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, a1);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, a1);
  }
  clear_tinfo_t(&v13);
}
