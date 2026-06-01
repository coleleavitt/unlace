__int64 __fastcall sub_3E4AA0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  bool v10; // zf
  __int64 v11; // r15
  char refinfo; // dl
  __int64 result; // rax
  __int64 v14; // r9
  __int64 frame_var; // rax
  __int64 v16; // r13
  __int64 tinfo_property4; // rax
  int v18; // eax
  __int64 v19; // r13
  char v20; // al
  __int64 v21; // rsi
  __int64 enum_id; // rax
  char v24; // [rsp+8h] [rbp-100h]
  __int64 v26; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v28; // [rsp+20h] [rbp-E8h] BYREF
  __int64 tinfo_property; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v30[2]; // [rsp+30h] [rbp-D8h] BYREF
  void *v31; // [rsp+40h] [rbp-C8h]
  __int128 v32; // [rsp+48h] [rbp-C0h]
  void *ptr; // [rsp+58h] [rbp-B0h]
  __int128 v34; // [rsp+60h] [rbp-A8h]
  _OWORD v35[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-68h]
  int v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  char v39; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]

  v10 = a3[1] == 5;
  v40 = __readfsqword(0x28u);
  if ( v10 && (a7 & 0x80u) != 0 )
  {
    if ( !under_debugger )
      interr(76);
    goto LABEL_36;
  }
  v24 = 1;
  v11 = sub_579E80(*(_QWORD *)(a1 + 1672), *(_QWORD *)(a2 + 16), (_DWORD)a3, a7, (a7 >> 2) & 1, 0, (__int64)&v26);
  if ( (a7 & 0x200) == 0 )
    v24 = (unsigned __int8)get_aflags(a4) >> 7;
  if ( !(unsigned __int8)is_off(a5, *a3) )
  {
    if ( (unsigned __int8)is_stkvar(a5, *a3) )
    {
      if ( (*(_BYTE *)(a1 + 938) & 0x40) != 0 )
      {
        v18 = sub_3792E0(0x3Du);
        if ( !v18 )
          sub_378C70((__int64)"Request ph.get_stkvar_scale_factor should be implemented");
        if ( v18 <= 0 )
          sub_378C70((__int64)"Invalid return code from ph.get_stkvar_scale_factor request");
        v11 *= v18;
      }
      v28 = 0;
      frame_var = get_frame_var(&v28, &v27, a2, a3, v11);
      v16 = frame_var;
      if ( frame_var != -1 )
      {
        v30[1] = 0;
        v31 = nullptr;
        ptr = nullptr;
        v36 = 1;
        v37 = -1;
        v38 = 0;
        v39 = 0;
        v30[0] = frame_var;
        v32 = 0;
        v34 = 0;
        v35[0] = 0;
        find_tinfo_udt_member((int)v30);
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(*(_QWORD *)&v35[0], 289);
        if ( (get_tinfo_property(tinfo_property, 2) & 0x2F) == 0xD )
        {
          clear_tinfo_t(&tinfo_property);
          tinfo_property4 = get_tinfo_property4(v28, 297, v16, 0, 0, 0);
          sub_3E0940(a2, *a3, v27 - (v30[0] >> 3), a6, v24 & 1, tinfo_property4);
        }
        else
        {
          clear_tinfo_t(&tinfo_property);
        }
        clear_tinfo_t(v35);
        if ( ptr )
        {
          *(_QWORD *)&v34 = 0;
          qfree(ptr);
        }
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree(v31);
        }
      }
      clear_tinfo_t(&v28);
      return -1;
    }
    v19 = sub_577530(a1, a4, *a3, a5, v11, v26, a7);
    v20 = is_stroff(a5, *a3);
    v21 = *a3;
    if ( v20 )
    {
      sub_3E0940(a2, v21, v19, a6, v24 & 1, a4);
      return -1;
    }
    if ( (unsigned __int8)is_enum(a5, v21) )
    {
      enum_id = get_enum_id(v30, a4, *a3);
      sub_3E48D0(a1, *(_QWORD *)(a2 + 16), enum_id, v19, v30[0], v26);
      return -1;
    }
    if ( !under_debugger )
      interr(544);
LABEL_36:
    BUG();
  }
  refinfo = get_refinfo(v30, *(_QWORD *)(a2 + 16), *a3);
  result = -1;
  if ( refinfo )
  {
    v14 = (unsigned int)(char)a3[2];
    if ( (a7 & 0x100) != 0 )
      v14 = (unsigned int)(char)a3[3];
    return add_refinfo_dref(a2, *(_QWORD *)(a2 + 16) + (char)v14, v30, v11, a6, v14);
  }
  return result;
}
