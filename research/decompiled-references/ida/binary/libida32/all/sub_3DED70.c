__int64 __fastcall sub_3DED70(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  bool v10; // zf
  unsigned int v11; // r15d
  char refinfo; // dl
  __int64 result; // rax
  __int64 v14; // r9
  int v15; // esi
  __int64 frame_var; // rax
  __int64 v17; // r13
  unsigned int tinfo_property4; // eax
  int v19; // eax
  int v20; // r13d
  char v21; // al
  __int64 v22; // rsi
  unsigned int enum_id; // eax
  char v25; // [rsp+8h] [rbp-F0h]
  int v27; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v28; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+20h] [rbp-D8h] BYREF
  __int64 tinfo_property; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-C8h] BYREF
  void *v32; // [rsp+40h] [rbp-B8h]
  __int128 v33; // [rsp+48h] [rbp-B0h]
  void *ptr; // [rsp+58h] [rbp-A0h]
  __int128 v35; // [rsp+60h] [rbp-98h]
  __int128 v36; // [rsp+70h] [rbp-88h] BYREF
  __int64 v37; // [rsp+90h] [rbp-68h]
  int v38; // [rsp+98h] [rbp-60h]
  __int64 v39; // [rsp+A0h] [rbp-58h]
  char v40; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+B8h] [rbp-40h]

  v10 = a3[1] == 5;
  v41 = __readfsqword(0x28u);
  if ( v10 && (a7 & 0x80u) != 0 )
  {
    if ( !under_debugger )
      interr(76);
    goto LABEL_36;
  }
  v25 = 1;
  v11 = sub_5605C0(*(_QWORD *)(a1 + 1480), *(_DWORD *)(a2 + 8), (_DWORD)a3, a7, (a7 >> 2) & 1, 0, (__int64)&v28);
  if ( (a7 & 0x200) == 0 )
    v25 = (unsigned __int8)get_aflags(a4) >> 7;
  if ( !(unsigned __int8)is_off(a5, *a3) )
  {
    if ( (unsigned __int8)is_stkvar(a5, *a3) )
    {
      if ( (*(_BYTE *)(a1 + 770) & 0x40) != 0 )
      {
        v19 = sub_375980(0x3Du);
        if ( !v19 )
          sub_375320((__int64)"Request ph.get_stkvar_scale_factor should be implemented");
        if ( v19 <= 0 )
          sub_375320((__int64)"Invalid return code from ph.get_stkvar_scale_factor request");
        v11 *= v19;
      }
      v29 = 0;
      frame_var = get_frame_var(&v29, &v27, a2, a3, v11);
      v17 = frame_var;
      if ( frame_var != -1 )
      {
        v31[1] = 0;
        v32 = nullptr;
        ptr = nullptr;
        v37 = 1;
        v38 = -1;
        v39 = 0;
        v40 = 0;
        v31[0] = frame_var;
        v33 = 0;
        v35 = 0;
        v36 = 0;
        find_tinfo_udt_member((int)v31);
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(v36, 289);
        if ( (get_tinfo_property(tinfo_property, 2) & 0x2F) == 0xD )
        {
          clear_tinfo_t(&tinfo_property);
          tinfo_property4 = get_tinfo_property4(v29, 297, v17, 0, 0, 0);
          sub_3DAA80(a2, *a3, v27 - (v31[0] >> 3), a6, v25 & 1, tinfo_property4);
        }
        else
        {
          clear_tinfo_t(&tinfo_property);
        }
        clear_tinfo_t(&v36);
        if ( ptr )
        {
          *(_QWORD *)&v35 = 0;
          qfree(ptr);
        }
        if ( v32 )
        {
          *(_QWORD *)&v33 = 0;
          qfree(v32);
        }
      }
      clear_tinfo_t(&v29);
      return 0xFFFFFFFFLL;
    }
    v20 = sub_55DB60(a1, a4, *a3, a5, v11, v28, a7);
    v21 = is_stroff(a5, *a3);
    v22 = *a3;
    if ( v21 )
    {
      sub_3DAA80(a2, v22, v20, a6, v25 & 1, a4);
      return 0xFFFFFFFFLL;
    }
    if ( (unsigned __int8)is_enum(a5, v22) )
    {
      enum_id = get_enum_id(v31, a4, *a3);
      sub_3DEBB0(a1, *(_DWORD *)(a2 + 8), enum_id, v20, v31[0], v28);
      return 0xFFFFFFFFLL;
    }
    if ( !under_debugger )
      interr(544);
LABEL_36:
    BUG();
  }
  refinfo = get_refinfo(v31, *(unsigned int *)(a2 + 8), *a3);
  result = 0xFFFFFFFFLL;
  if ( refinfo )
  {
    v14 = (unsigned int)(char)a3[2];
    v15 = *(_DWORD *)(a2 + 8);
    if ( (a7 & 0x100) != 0 )
      v14 = (unsigned int)(char)a3[3];
    return add_refinfo_dref(a2, (unsigned int)(v14 + v15), v31, v11, a6, v14);
  }
  return result;
}

