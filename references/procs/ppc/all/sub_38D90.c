unsigned __int64 __fastcall sub_38D90(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v5; // eax
  __int16 v6; // cx
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  char v9; // r15
  unsigned __int8 *v10; // r13
  unsigned int v11; // r14d
  __int64 flags; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // rax
  unsigned int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rdi
  unsigned int v32; // eax
  unsigned __int8 *v33; // r13
  __int64 v34; // r13
  unsigned int v35; // eax
  __int64 *v36; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+18h] [rbp-50h]
  __int64 v39; // [rsp+20h] [rbp-48h]
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v3 = *(unsigned __int16 *)(a2 + 24);
  v40 = __readfsqword(0x28u);
  LOWORD(v5) = sub_35600(v3);
  v7 = v5;
  if ( (_WORD)v5 == 0xFFFF || (v5 & 0x400) == 0 || (v8 = 50, v9 = 1, !_bittest64(&v8, v7)) )
  {
    if ( v6 != 285 )
      return v40 - __readfsqword(0x28u);
    v9 = 0;
  }
  v10 = (unsigned __int8 *)(a2 + 120);
  if ( !*(_BYTE *)(a2 + 121) )
    v10 = (unsigned __int8 *)(a2 + 80);
  v11 = *v10;
  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
  v13 = v11;
  if ( (unsigned __int8)op_adds_xrefs(flags, v11) )
  {
    v18 = *(_WORD *)(a2 + 24) == 285;
    v36 = nullptr;
    v38 = 0;
    v39 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_77D70);
    if ( v18
      || (v13 = *(_QWORD *)(a2 + 16) + (char)v10[2], (unsigned __int8)get_fixup(&v36, v13)) && (BYTE4(v36) & 4) == 0 )
    {
      v32 = sub_48680(v10, v13, v14, v15, v16, v17, v36, si128.m128i_i64[0], si128.m128i_i64[1], v38, v39);
      insn_add_off_drefs(a2, v10, 1, v32);
      return v40 - __readfsqword(0x28u);
    }
  }
  if ( !v9 )
    return v40 - __readfsqword(0x28u);
  v19 = a2 + 80;
  if ( !*(_BYTE *)(a2 + 121) )
    v19 = a2 + 40;
  v20 = *(unsigned __int16 *)(v19 + 6);
  if ( (_WORD)v20 == 1 )
    return v40 - __readfsqword(0x28u);
  v21 = *(_QWORD *)(a2 + 16);
  LOBYTE(v38) = 0;
  v36 = nullptr;
  si128 = 0;
  if ( (unsigned __int8)sub_5B9B0(a1, &v36, v21, v20, 0xFFFFFFFFLL, 0) && (_BYTE)v38 )
  {
    if ( si128.m128i_i64[0] == 1 || (v22 = v36 + 3, 24 * si128.m128i_i64[0] == 24) )
    {
LABEL_29:
      v33 = (unsigned __int8 *)(v19 + 40);
      if ( (v7 & 0xF) == 1 )
      {
        if ( (v7 & 0x800) != 0 || (v25 = a2, !(unsigned __int8)sub_385F0(a1, a2, &v36, v33)) )
        {
          v25 = a2;
          sub_38980(a1, a2, &v36, v33, v7);
          v30 = v36;
          if ( !v36 )
            return v40 - __readfsqword(0x28u);
          goto LABEL_23;
        }
      }
      else
      {
        v25 = a2;
        sub_382C0(a1, a2, (__int64)&v36, (__int64)v33, v7);
      }
      goto LABEL_22;
    }
    while ( *v36 == *v22 )
    {
      v22 += 3;
      if ( &v36[3 * si128.m128i_i64[0]] == v22 )
        goto LABEL_29;
    }
  }
  v23 = *(unsigned __int8 *)(v19 + 40);
  v24 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
  v25 = v23;
  if ( (unsigned __int8)op_adds_xrefs(v24, v23) )
  {
    v34 = v19 + 40;
    v35 = sub_48680(v34, v23, v26, v27, v28, v29, v36, si128.m128i_i64[0], si128.m128i_i64[1], v38, v39);
    v25 = v34;
    insn_add_off_drefs(a2, v34, 1, v35);
  }
LABEL_22:
  v30 = v36;
  if ( v36 )
  {
LABEL_23:
    si128.m128i_i64[0] = 0;
    qfree(v30, v25, v26, 0.0);
  }
  return v40 - __readfsqword(0x28u);
}
