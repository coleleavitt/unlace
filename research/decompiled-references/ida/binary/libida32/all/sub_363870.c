unsigned __int64 __fastcall sub_363870(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  int item_end; // eax
  int v7; // r12d
  int v8; // eax
  __int64 v10; // rcx
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  __int64 opinfo; // rax
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-D0h]
  __int64 v17; // [rsp+0h] [rbp-D0h]
  unsigned int not_tail; // [rsp+Ch] [rbp-C4h]
  unsigned int v19; // [rsp+1Ch] [rbp-B4h] BYREF
  unsigned int *v20; // [rsp+20h] [rbp-B0h] BYREF
  int v21; // [rsp+28h] [rbp-A8h]
  __int64 v22; // [rsp+30h] [rbp-A0h] BYREF
  int v23; // [rsp+38h] [rbp-98h]
  char v24; // [rsp+3Ch] [rbp-94h]
  __int64 v25; // [rsp+40h] [rbp-90h] BYREF
  int v26; // [rsp+48h] [rbp-88h] BYREF
  void *v27; // [rsp+50h] [rbp-80h]
  int *v28; // [rsp+58h] [rbp-78h]
  int *v29; // [rsp+60h] [rbp-70h]
  __int64 v30; // [rsp+68h] [rbp-68h]
  void *ptr; // [rsp+70h] [rbp-60h]
  __int128 v32; // [rsp+78h] [rbp-58h]
  __int64 v33; // [rsp+88h] [rbp-48h]
  unsigned __int64 v34; // [rsp+98h] [rbp-38h]

  v4 = a1[1].m128i_u32[0];
  v34 = __readfsqword(0x28u);
  not_tail = v4;
  v5 = qword_2CA1698;
  item_end = get_item_end(v4, a2, a3, a4);
  v19 = v4;
  v23 = item_end;
  v7 = item_end;
  v28 = &v26;
  v22 = v5;
  v24 = a2;
  v26 = 0;
  v27 = nullptr;
  v29 = &v26;
  v30 = 0;
  ptr = nullptr;
  v20 = &v19;
  v32 = 0;
  v33 = sub_359200(&v25, (__int64)&v26, &v20) + 40;
  a1[5].m128i_i64[1] = (__int64)&v22;
  v8 = a1[3].m128i_i32[3] & 0x600;
  if ( v8 != 1024 )
  {
    if ( !v8 || (unsigned __int8)is_debugger_on() && (unsigned __int8)is_debugger_memory(v4) )
      goto LABEL_3;
    if ( (get_flags_ex(v4, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(v4);
    v10 = a1[3].m128i_u32[3];
    v21 = -1;
    v20 = (unsigned int *)(&dword_0 + 1);
    if ( !(unsigned __int8)sub_3612C0((__int64)a1, not_tail, v7 - not_tail, v10, 0, (__int64)&v20, 0, nullptr, nullptr) )
LABEL_3:
      sub_35C880((__int64)a1, not_tail);
    if ( ptr )
    {
      *(_QWORD *)&v32 = 0;
      qfree(ptr);
    }
    goto LABEL_6;
  }
  sub_3CE940(v5);
  v11 = v4;
  v12 = v7 - v4;
  opinfo = get_opinfo(v33 + 88, v4, 0, a1[3].m128i_u32[3]);
  v14 = v33;
  *(_BYTE *)(v33 + 293) = opinfo != 0;
  if ( !opinfo )
  {
    v11 = v4;
LABEL_14:
    v20 = (unsigned int *)(&dword_0 + 1);
    v21 = -1;
    if ( get_array_parameters(&v20, v4) <= 0 )
    {
      v15 = a1[1].m128i_u32[0];
      if ( v4 != (_DWORD)v15 )
        get_array_parameters(&v20, v15);
    }
    sub_3612C0((__int64)a1, v4, v12, a1[3].m128i_u32[3], v11, (__int64)&v20, 3, nullptr, nullptr);
    goto LABEL_16;
  }
  if ( (a1[3].m128i_i32[3] & 0x600) != 0x400 || (a1[3].m128i_i32[3] & 0xF0000000) != 0x60000000 )
    goto LABEL_14;
  v11 = *(_DWORD *)(v14 + 88);
  if ( (_BYTE)a2 )
  {
    v16 = v14;
    add_dref(v4, v11, 3);
    v14 = v16;
  }
  v17 = v14;
  if ( (get_aflags(v4) & 0x80000) == 0
    || !(unsigned __int8)getinf_flag(2, 2) && (*(_BYTE *)(a1[30].m128i_i64[0] + 328) & 0x10) == 0 )
  {
    goto LABEL_14;
  }
  if ( (unsigned int)nbits(v4) - 1 > 7 )
    goto LABEL_14;
  if ( !(unsigned __int8)sub_362F60(a1, v4, v12, a1[3].m128i_u32[3]) )
  {
    if ( (a1[3].m128i_i8[13] & 0xC0) != 0 && *(_QWORD *)(a1[30].m128i_i64[0] + 384) && *(_QWORD *)(v17 + 272) > 1u )
      sub_35CCB0(a1, *(_QWORD *)(v17 + 264));
    goto LABEL_14;
  }
LABEL_16:
  if ( (_QWORD)v32 )
  {
    if ( !under_debugger )
      interr(3027);
    BUG();
  }
  if ( ptr )
    qfree(ptr);
LABEL_6:
  sub_359930(v27);
  return v34 - __readfsqword(0x28u);
}

