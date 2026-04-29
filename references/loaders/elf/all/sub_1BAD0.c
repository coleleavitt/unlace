__int64 __fastcall sub_1BAD0(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // r15
  __int64 v3; // r13
  unsigned int v4; // eax
  __int64 qword; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // r9
  int v14; // r13d
  unsigned __int64 v15; // r15
  unsigned __int8 v16; // r14
  __int64 dword; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // r14
  __int64 *v22; // rdi
  __int64 *v23; // rsi
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+18h] [rbp-80h]
  __int64 v36; // [rsp+20h] [rbp-78h]
  __int64 v37; // [rsp+28h] [rbp-70h]
  __int64 v38; // [rsp+30h] [rbp-68h] BYREF
  __m128i si128; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+48h] [rbp-50h]
  __int64 v41; // [rsp+50h] [rbp-48h]
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 404) == 0;
  v42 = __readfsqword(0x28u);
  v2 = a1;
  if ( v1 )
    sub_1AEA0(a1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 376) - 2) <= 1 )
    set_name(*(_QWORD *)(a1 + 388) - *(_QWORD *)(a1 + 396), ".TOC.start", 257);
  v3 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v3 + 552) & 3) == 2 )
    goto LABEL_10;
  v4 = sub_3BD30(v3 + 80, 16);
  if ( !v4 )
    goto LABEL_10;
  qword = v3 + 80;
  v6 = sub_3BD50(v3 + 80, v4);
  if ( !v6 )
    goto LABEL_10;
  v7 = *(_QWORD *)(v6 + 16);
  v8 = *(_QWORD *)(v6 + 32);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 16) + 511LL) == 102 )
  {
    v33 = 8;
    v10 = v7 + 8;
    v11 = 3;
    goto LABEL_17;
  }
  if ( v8 <= 0x17 )
    goto LABEL_10;
  v10 = v7 + 16;
  qword = v7 + 16;
  if ( get_qword(v7 + 16) || *(_WORD *)(v3 + 520) == 1 )
  {
    if ( v8 <= 0x1F )
      goto LABEL_10;
    qword = v7 + 16;
    if ( get_entry(v7 + 16) != -1 )
      goto LABEL_16;
    qword = v7 + 16;
    if ( v8 > 0x2F )
    {
      qword = v7 + 24;
      if ( get_entry(v7 + 24) != -1 )
        goto LABEL_63;
      qword = v7 + 32;
      if ( get_entry(v7 + 32) != -1 || (qword = get_qword(v7 + 16), (unsigned __int8)segtype(qword) == 2) )
      {
LABEL_16:
        v33 = 16;
        v11 = 2;
        goto LABEL_17;
      }
      v32 = get_qword(v7 + 24);
      qword = v7 + 32;
      if ( (unsigned __int8)segtype(v32) == 2 )
      {
LABEL_63:
        v33 = 24;
        v10 = v7 + 24;
        v11 = 1;
        goto LABEL_17;
      }
    }
    qword = get_qword(qword);
    if ( (unsigned __int8)segtype(qword) != 2 )
      goto LABEL_10;
    goto LABEL_16;
  }
  v33 = 24;
  v10 = v7 + 24;
  v11 = 1;
LABEL_17:
  v12 = v7 + v8;
  if ( (unsigned int)(*(_DWORD *)(v2 + 376) - 2) > 1 )
  {
    v13 = -1;
    if ( v12 < v10 )
      goto LABEL_10;
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(v2 + 388);
  if ( v12 >= v10 )
  {
LABEL_19:
    v34 = v3;
    v14 = v11;
    v36 = v2;
    v15 = v7 + v8;
    v35 = v13;
    while ( 1 )
    {
      if ( v14 == 2 )
        goto LABEL_21;
      if ( v14 != 3 )
        break;
      create_data(v7, 0x20000000, 4, -1);
      v12 = 0x20000000;
      v16 = 2;
      create_data(v7 + 4, 0x20000000, 4, -1);
      qword = v7;
      dword = (unsigned int)get_dword(v7, 0x20000000, v27, v28, v29);
LABEL_22:
      if ( !dword && *(_WORD *)(v34 + 520) != 1 )
        goto LABEL_41;
      qword = dword;
      if ( !(unsigned __int8)is_loaded(dword) )
        goto LABEL_41;
      v12 = 0;
      qword = dword;
      if ( !(unsigned int)create_insn(dword, 0) )
        goto LABEL_41;
      if ( !(unsigned __int8)get_fixup(0, v7) )
        op_offset(v7, 0, v16, -1, 0, 0);
      if ( (get_flags_ex(dword, 4) & 0x4000) == 0 )
        sub_40E60(v36, dword, v7, ".", "");
      if ( (get_flags_ex(v7, 4) & 0x4000) == 0 )
        sub_40E60(v36, v7, dword, "", "_opd");
      auto_mark_range(dword, dword + 1, 20);
      auto_mark_range(dword, dword + 1, 30);
      if ( v14 == 3 )
      {
        v22 = (__int64 *)(v7 + 4);
        v23 = (_QWORD *)(&dword_0 + 2);
        v21 = (unsigned int)get_dword(v7 + 4, dword + 1, v18, v19, v20);
        v24 = sub_1AD60(v7 + 4, 2u, v21);
      }
      else
      {
        v37 = v7 + 8;
        v21 = get_qword(v7 + 8);
        if ( *(_DWORD *)(v36 + 376) && *(_QWORD *)(v36 + 388) == v21 )
        {
          op_offset(v37, 0, 9, -1, 0, *(_QWORD *)(v36 + 396));
          v38 = 0;
          v40 = 0;
          v41 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_6BEB0);
          goto LABEL_55;
        }
        v22 = (__int64 *)(v7 + 8);
        v23 = (_QWORD *)byte_9;
        v24 = sub_1AD60(v37, 9u, v21);
      }
      v38 = 0;
      v40 = 0;
      v41 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_6BEB0);
      if ( v24 )
      {
        v37 = v7 + 8;
LABEL_55:
        v23 = (__int64 *)v37;
        v22 = &v38;
        if ( (unsigned __int8)get_fixup(&v38, v37) && (v38 & 0x400000000LL) == 0 )
        {
          v22 = (__int64 *)v37;
          v23 = &v38;
          HIDWORD(v38) |= 4u;
          set_fixup(v37, &v38);
        }
      }
      if ( *(_DWORD *)(get_ph(v22, v23, v25) + 4) != 15 )
      {
        if ( under_debugger )
          BUG();
        interr(10247);
LABEL_70:
        sub_1AAC0();
      }
      v12 = dword;
      qword = 3010;
      sub_101F0(0xBC2u, dword, v21);
      v26 = -1;
      if ( v35 == v21 )
        v26 = v35;
      v35 = v26;
LABEL_41:
      v7 = v10;
      if ( v15 < v10 + v33 )
      {
        v13 = v35;
        v2 = v36;
        goto LABEL_47;
      }
      v10 += v33;
    }
    create_data(v7 + 16, 805306368, 8, -1);
LABEL_21:
    create_data(v7, 805306368, 8, -1);
    v12 = 805306368;
    v16 = 9;
    create_data(v7 + 8, 805306368, 8, -1);
    qword = v7;
    dword = get_qword(v7);
    goto LABEL_22;
  }
LABEL_47:
  if ( v13 != -1 )
  {
    v30 = *(_QWORD *)(v2 + 396);
    v31 = *(_QWORD *)(v2 + 388);
    if ( *(_DWORD *)(get_ph(qword, v12, v11) + 4) != 15 )
      goto LABEL_70;
    sub_101F0(0xBB9u, v31, v30);
  }
LABEL_10:
  sub_1B3C0(v2);
  return 1;
}
