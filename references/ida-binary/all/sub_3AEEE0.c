__int64 __fastcall sub_3AEEE0(const char *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 udm_by_tid; // rax
  __int64 v9; // rdi
  unsigned int v10; // r14d
  const char *tinfo_property4; // rsi
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 local_types_tlc; // rax
  unsigned int tinfo_property; // eax
  __int64 v16; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-B8h]
  __int128 v20; // [rsp+28h] [rbp-B0h]
  __int64 v21; // [rsp+38h] [rbp-A0h]
  __int128 v22; // [rsp+40h] [rbp-98h]
  _OWORD v23[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-58h]
  int v25; // [rsp+88h] [rbp-50h]
  __int64 v26; // [rsp+90h] [rbp-48h]
  char v27; // [rsp+98h] [rbp-40h]
  unsigned __int64 v28; // [rsp+A8h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( a1 == (const char *)-1LL )
    return 1;
  if ( (unsigned __int8)is_mapped(a1) )
    return (unsigned __int8)sub_192AA0(a2, (__int64)a1, a3, 1u);
  v18 = 0;
  v16 = 0;
  v19 = 0;
  v21 = 0;
  v24 = 1;
  v25 = -1;
  v26 = 0;
  v27 = 0;
  v20 = 0;
  v22 = 0;
  v23[0] = 0;
  udm_by_tid = get_udm_by_tid(&v16, &v18, a1);
  v9 = v16;
  v10 = udm_by_tid;
  if ( !(_BYTE)v16 )
  {
    if ( !(unsigned __int8)get_type_by_tid(&v16, a1) )
    {
      clear_tinfo_t(v23);
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v21, a1);
      }
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree(v19, a1);
      }
      clear_tinfo_t(&v16);
      return 1;
    }
    goto LABEL_23;
  }
  if ( udm_by_tid != -1 )
  {
    if ( get_tinfo_property4(v16, 300, 0, 0, 0, 0) == -1 )
    {
      v17 = -2;
      local_types_tlc = get_local_types_tlc(v9, 300);
      tinfo_property4 = (const char *)&v17;
      v3 = 0;
      if ( !(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, __int64))(*(_QWORD *)local_types_tlc
                                                                                           + 104LL))(
              local_types_tlc,
              &v17,
              &v16,
              v10,
              -1) )
        goto LABEL_11;
      tinfo_property = get_tinfo_property(v16, 7);
      tinfo_property4 = (const char *)&v17;
      v13 = sub_3CE4E0(tinfo_property, &v17);
      goto LABEL_24;
    }
    v9 = v16;
  }
  if ( get_tinfo_property4(v9, 300, 0, 0, 0, 0) == -1 )
  {
LABEL_23:
    v12 = get_tinfo_property(v16, 7);
    tinfo_property4 = nullptr;
    v13 = sub_3CE4E0(v12, 0);
LABEL_24:
    v3 = v13 != 0;
    goto LABEL_11;
  }
  tinfo_property4 = (const char *)get_tinfo_property4(v16, 300, 0, 0, 0, 0);
  v3 = (unsigned __int8)sub_192AA0(a2, (__int64)tinfo_property4, 0, 1u);
LABEL_11:
  clear_tinfo_t(v23);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, tinfo_property4);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, tinfo_property4);
  }
  clear_tinfo_t(&v16);
  return v3;
}
