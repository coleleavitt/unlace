__int64 __fastcall sub_1BD10(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  __int64 v8; // r12
  int dword; // r9d
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // r8d
  char v24; // al
  char v25; // bl
  char v26; // al
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  const char *v31; // rsi
  __int64 v32; // [rsp+8h] [rbp-90h]
  unsigned __int8 v33; // [rsp+8h] [rbp-90h]
  int v34; // [rsp+8h] [rbp-90h]
  int v35; // [rsp+8h] [rbp-90h]
  int v36; // [rsp+8h] [rbp-90h]
  int v37; // [rsp+14h] [rbp-84h]
  unsigned __int8 v40; // [rsp+37h] [rbp-61h]
  unsigned int v41; // [rsp+38h] [rbp-60h]
  char v42; // [rsp+3Ch] [rbp-5Ch]
  const char *v43; // [rsp+40h] [rbp-58h] BYREF
  __int128 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v8 = a4;
  v45 = __readfsqword(0x28u);
  dword = get_dword(a4);
  if ( (a7 & 2) != 0 )
  {
    v34 = dword;
    create_data(v8, 0x20000000, 4, -1);
    dword = v34;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) != 13 )
      goto LABEL_3;
  }
  else if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) != 13 )
  {
    goto LABEL_3;
  }
  v35 = dword;
  v26 = getinf_flag(3, 2);
  dword = v35;
  if ( v26 && v35 < 0 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & ((v35 & 0x7FFFFFFF) + a5);
    v28 = get_dword(v27);
    dword = v28;
    if ( (a7 & 2) != 0 )
    {
      v36 = v28;
      v44 = 0;
      v43 = nullptr;
      sub_8A10((__int64 *)&v43, (__int64)"forwards to %a\n", v27, v29, v30, v28);
      v31 = s1;
      if ( (_QWORD)v44 )
        v31 = v43;
      set_cmt(v8, v31, 0);
      create_data(v27, 0x20000000, 4, -1);
      dword = v36;
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree(v43);
        dword = v36;
      }
    }
    v8 = v27;
  }
LABEL_3:
  v11 = v8 + 4;
  if ( dword > 0 )
  {
    v41 = dword;
    v12 = a5;
    v37 = 0;
    v42 = a6;
    while ( 1 )
    {
      v40 = is_loaded(v11);
      if ( !v40 )
        return 0;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v12 + (unsigned int)get_dword(v11));
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v12 + (unsigned int)get_dword(v11 + 4));
      if ( v15 >= v16 )
        goto LABEL_30;
      v17 = get_dword(v11 + 8);
      v32 = v17;
      if ( v17 > 1 || (unsigned __int8)get_fixups(0, v11 + 8, 4) )
        v32 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v12 + v32);
      v18 = get_dword(v11 + 12);
      v19 = v18;
      if ( v18 || (unsigned __int8)get_fixups(0, v11 + 12, 4) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v12 + v19);
        if ( (a7 & 2) != 0 )
          goto LABEL_20;
      }
      else
      {
        v13 = -1;
        if ( (a7 & 2) != 0 )
        {
LABEL_20:
          sub_13520(a1, v11, 3, 16, 1);
          if ( (unsigned __int8)is_loaded(v15) && (get_flags_ex(v15, 4, v20) & 0x600) == 0 )
            create_insn(v15, 0);
          if ( (unsigned __int8)is_loaded(v32) && (get_flags_ex(v32, 4, v21) & 0x600) == 0 )
            create_insn(v32, 0);
        }
      }
      v11 += 16;
      v14 = v16;
      if ( a2 >= v15 )
        v15 = a2;
      if ( a3 <= v16 )
        v14 = a3;
      if ( v15 < v14 )
        sub_F340(a1, v15, v14, v13, v32);
      if ( ++v37 >= v41 )
      {
LABEL_30:
        v22 = v40;
        if ( !v42 )
          return v22;
        if ( !(unsigned __int8)is_loaded(v11) )
          return 0;
        v24 = get_dword(v11);
        v22 = v40;
        v25 = v24;
        if ( (a7 & 2) != 0 )
        {
          create_data(v11, 0x20000000, 4, -1);
          v22 = v40;
        }
        if ( (v25 & 4) != 0 )
        {
          v33 = v22;
          if ( !(unsigned __int8)is_loaded(v11 + 4) || !(unsigned __int8)is_loaded(v11 + 8) )
            return 0;
          v22 = v33;
          if ( (a7 & 2) != 0 )
          {
            create_data(v11 + 4, 0x20000000, 8, -1);
            return v33;
          }
        }
        return v22;
      }
    }
  }
  return 0;
}
