__int64 __fastcall sub_5FC080(__int64 a1, unsigned int a2, __int64 *a3, char a4, char a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  int flags; // eax
  __int64 v12; // r9
  unsigned __int8 v14; // al
  __int64 v15; // r8
  _QWORD *v16; // rax
  unsigned __int8 v17; // al
  _QWORD *v18; // rax
  _DWORD *func; // rax
  char v20; // [rsp+4h] [rbp-1A4h]
  unsigned int tinfo_property; // [rsp+4h] [rbp-1A4h]
  unsigned int v22; // [rsp+8h] [rbp-1A0h]
  _DWORD v23[2]; // [rsp+10h] [rbp-198h] BYREF
  __int64 v24; // [rsp+18h] [rbp-190h]
  __int64 v25; // [rsp+20h] [rbp-188h]
  __int16 v26; // [rsp+28h] [rbp-180h]
  __m128i si128; // [rsp+2Ch] [rbp-17Ch]
  __int64 v28; // [rsp+40h] [rbp-168h]
  int v29; // [rsp+48h] [rbp-160h]
  __int64 v30; // [rsp+50h] [rbp-158h]
  int v31; // [rsp+58h] [rbp-150h]
  __int64 v32; // [rsp+60h] [rbp-148h]
  int v33; // [rsp+68h] [rbp-140h]
  __int64 v34; // [rsp+70h] [rbp-138h]
  int v35; // [rsp+78h] [rbp-130h]
  __int64 v36; // [rsp+80h] [rbp-128h]
  __int64 v37; // [rsp+90h] [rbp-118h] BYREF
  __int64 v38; // [rsp+98h] [rbp-110h]
  __int64 v39; // [rsp+A0h] [rbp-108h]
  _BYTE v40[192]; // [rsp+A8h] [rbp-100h] BYREF
  _QWORD v41[8]; // [rsp+168h] [rbp-40h] BYREF

  v8 = a2;
  v9 = *a3;
  v41[0] = __readfsqword(0x28u);
  if ( a5 )
  {
    tinfo_property = get_tinfo_property(v9, 21);
    if ( (unsigned int)sub_59DCB0(a2) == tinfo_property )
      goto LABEL_7;
    v14 = is_spec_ea(a2);
    if ( !(unsigned __int8)set_purged(a2, tinfo_property, v14) )
      goto LABEL_7;
    v20 = 0;
    if ( !(unsigned __int8)xrefblk_t_first_to(v23, a2, 1) )
      goto LABEL_7;
  }
  else
  {
    v20 = 0;
    if ( (*(_BYTE *)(a1 + 772) & 8) != 0 )
    {
      v8 = a2 & 0xFFFFFFFE;
      v20 = a2 & 1;
    }
    v22 = get_tinfo_property(v9, 21);
    if ( (unsigned int)sub_59DCB0(v8) == v22 )
      goto LABEL_5;
    v17 = is_spec_ea(v8);
    if ( !(unsigned __int8)set_purged(v8, v22, v17) || !(unsigned __int8)xrefblk_t_first_to(v23, v8, 1) )
      goto LABEL_5;
  }
  do
  {
    if ( (~((unsigned __int16)get_flags_ex(v23[0], 4) >> 8) & 6) == 0 )
    {
      v39 = 0;
      v37 = -1;
      v38 = 0xFFFFFFFFLL;
      v16 = v40;
      do
      {
        *(_WORD *)v16 = 0;
        v16 += 3;
        *((_WORD *)v16 - 11) = 0;
        *((_WORD *)v16 - 10) = 0;
        *((_DWORD *)v16 - 1) = 0;
        *((_WORD *)v16 - 9) = 0;
        *(v16 - 2) = 0;
        *((_DWORD *)v16 - 2) = 0;
      }
      while ( v41 != v16 );
      if ( (unsigned int)decode_insn(&v37, v23[0], v41, 0, v15, 0) && (unsigned __int8)is_call_insn(&v37) )
        auto_apply_type(v23[0], v8);
    }
  }
  while ( (unsigned __int8)xrefblk_t_next_to(v23) );
  if ( a5 )
    goto LABEL_7;
LABEL_5:
  flags = get_flags_ex(v8, 4);
  if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 || (unsigned __int8)segtype(v8) != 2 )
    goto LABEL_7;
  v37 = -1;
  v39 = 0;
  v38 = 0xFFFFFFFFLL;
  v18 = v40;
  do
  {
    *(_WORD *)v18 = 0;
    v18 += 3;
    *((_WORD *)v18 - 11) = 0;
    *((_WORD *)v18 - 10) = 0;
    *((_DWORD *)v18 - 1) = 0;
    *((_WORD *)v18 - 9) = 0;
    *(v18 - 2) = 0;
    *((_DWORD *)v18 - 2) = 0;
  }
  while ( v41 != v18 );
  if ( (int)decode_insn(&v37, v8, v41, 0, 0, v12) > 0 )
  {
    if ( v20 )
      sub_375980(0x57u, v8, 1);
    if ( (a4 & 2) != 0 )
    {
      auto_mark_range(v8, v8 + 1, 20);
      auto_mark_range(v8, v8 + 1, 30);
      sub_3A1C50(a1, v8);
    }
    else
    {
      v23[0] = v8;
      v23[1] = -1;
      v25 = 0xFFFFFFFFLL;
      v24 = 512;
      v26 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
      add_func_ex((int)v23);
      func = (_DWORD *)get_func(v8);
      if ( !func || *func != v8 )
        return 0;
    }
LABEL_7:
    sub_5FBD60(*(__int64 **)(a1 + 1480), v8, a3, a4);
    return 1;
  }
  return 0;
}

