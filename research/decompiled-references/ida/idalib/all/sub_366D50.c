unsigned __int64 __fastcall sub_366D50(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 item_end; // rax
  __int64 v7; // r12
  int v8; // eax
  __int64 v10; // rcx
  void *v11; // r15
  unsigned __int64 v12; // r12
  __int64 opinfo; // rax
  _QWORD *v14; // r8
  __int64 v15; // rsi
  _QWORD *v16; // [rsp+0h] [rbp-D0h]
  _QWORD *v17; // [rsp+0h] [rbp-D0h]
  __int64 not_tail; // [rsp+8h] [rbp-C8h]
  unsigned __int64 v19; // [rsp+18h] [rbp-B8h] BYREF
  unsigned __int64 *v20; // [rsp+20h] [rbp-B0h] BYREF
  int v21; // [rsp+28h] [rbp-A8h]
  _QWORD v22[2]; // [rsp+30h] [rbp-A0h] BYREF
  char v23; // [rsp+40h] [rbp-90h]
  __int64 v24; // [rsp+48h] [rbp-88h] BYREF
  __int64 v25; // [rsp+50h] [rbp-80h] BYREF
  void *v26; // [rsp+58h] [rbp-78h]
  __int64 *v27; // [rsp+60h] [rbp-70h]
  __int64 *v28; // [rsp+68h] [rbp-68h]
  __int64 v29; // [rsp+70h] [rbp-60h]
  void *ptr; // [rsp+78h] [rbp-58h]
  __int128 v31; // [rsp+80h] [rbp-50h]
  _QWORD *v32; // [rsp+90h] [rbp-40h]
  unsigned __int64 v33; // [rsp+98h] [rbp-38h]

  v4 = a1[1].m128i_u64[0];
  v33 = __readfsqword(0x28u);
  not_tail = v4;
  v5 = qword_2CCB598;
  item_end = get_item_end(v4, a2, a3, a4);
  v19 = v4;
  v7 = item_end;
  v27 = &v25;
  v22[1] = item_end;
  v22[0] = v5;
  v23 = a2;
  LODWORD(v25) = 0;
  v26 = nullptr;
  v28 = &v25;
  v29 = 0;
  ptr = nullptr;
  v20 = &v19;
  v31 = 0;
  v32 = sub_35C600(&v24, &v25, &v20) + 5;
  a1[5].m128i_i64[1] = (__int64)v22;
  v8 = a1[3].m128i_i32[3] & 0x600;
  if ( v8 != 1024 )
  {
    if ( !v8 || (unsigned __int8)is_debugger_on() && (unsigned __int8)is_debugger_memory(v4) )
      goto LABEL_3;
    if ( (get_flags_ex(v4, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(v4);
    v10 = a1[3].m128i_u32[3];
    v20 = (_QWORD *)(&dword_0 + 1);
    v21 = -1;
    if ( !(unsigned __int8)sub_364730(
                             (__int64)a1,
                             not_tail,
                             v7 - not_tail,
                             v10,
                             nullptr,
                             (__int64)&v20,
                             0,
                             nullptr,
                             nullptr) )
LABEL_3:
      sub_35FC30((__int64)a1, not_tail);
    if ( ptr )
    {
      *(_QWORD *)&v31 = 0;
      qfree(ptr);
    }
    goto LABEL_6;
  }
  sub_3D43D0(v5);
  v11 = (void *)v4;
  v12 = v7 - v4;
  opinfo = get_opinfo(v32 + 11, v4, 0, a1[3].m128i_u32[3]);
  v14 = v32;
  *((_BYTE *)v32 + 437) = opinfo != 0;
  if ( !opinfo )
  {
    v11 = (void *)v4;
LABEL_14:
    v20 = (_QWORD *)(&dword_0 + 1);
    v21 = -1;
    if ( get_array_parameters(&v20, v4) <= 0 )
    {
      v15 = a1[1].m128i_i64[0];
      if ( v4 != v15 )
        get_array_parameters(&v20, v15);
    }
    sub_364730((__int64)a1, v4, v12, a1[3].m128i_u32[3], v11, (__int64)&v20, 3, nullptr, nullptr);
    goto LABEL_16;
  }
  if ( (a1[3].m128i_i32[3] & 0x600) != 0x400 || (a1[3].m128i_i32[3] & 0xF0000000) != 0x60000000 )
    goto LABEL_14;
  v11 = (void *)v14[11];
  if ( (_BYTE)a2 )
  {
    v16 = v14;
    add_dref(v4, v14[11], 3);
    v14 = v16;
  }
  v17 = v14;
  if ( (get_aflags(v4) & 0x80000) == 0
    || !(unsigned __int8)getinf_flag(2, 2) && (*(_BYTE *)(a1[39].m128i_i64[1] + 328) & 0x10) == 0 )
  {
    goto LABEL_14;
  }
  if ( (unsigned int)nbits(v4) - 1 > 7 )
    goto LABEL_14;
  if ( !(unsigned __int8)sub_366400(a1, v4, v12, a1[3].m128i_u32[3]) )
  {
    if ( (a1[3].m128i_i8[13] & 0xC0) != 0 && *(_QWORD *)(a1[39].m128i_i64[1] + 384) && v17[52] > 1u )
      sub_360080(a1, v17[51]);
    goto LABEL_14;
  }
LABEL_16:
  if ( (_QWORD)v31 )
  {
    if ( !under_debugger )
      interr(3027);
    BUG();
  }
  if ( ptr )
    qfree(ptr);
LABEL_6:
  sub_35CC10(v26);
  return v33 - __readfsqword(0x28u);
}
