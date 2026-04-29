__int64 __fastcall sub_79D80(__int128 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5)
{
  __int64 first_dref_from; // r15
  __int64 *v7; // rbx
  int v8; // eax
  int v9; // r12d
  __int64 *func; // rax
  unsigned int tinfo; // r14d
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 ind_purged; // rax
  char v18; // al
  __int64 v19; // r14
  __int64 best_fit_member; // rax
  __int64 v21; // r11
  _QWORD *v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rbp
  __int64 v25; // r14
  _QWORD *v26; // r15
  __int64 v27; // rbp
  __int64 v28; // r12
  _QWORD *v29; // rbx
  __int64 not_tail; // rbp
  __int64 v32; // [rsp+8h] [rbp-1B0h]
  _QWORD v33[3]; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-190h] BYREF
  __int64 v35; // [rsp+30h] [rbp-188h] BYREF
  __int128 v36; // [rsp+38h] [rbp-180h]
  __int128 v37; // [rsp+48h] [rbp-170h]
  __int64 v38; // [rsp+58h] [rbp-160h]
  int v39; // [rsp+60h] [rbp-158h]
  __int64 v40[41]; // [rsp+70h] [rbp-148h] BYREF

  first_dref_from = a3;
  v7 = a4;
  v40[33] = __readfsqword(0x28u);
  v33[0] = 0;
  if ( !a4 )
    v7 = v33;
  v8 = sub_23DD0((_QWORD *)a1, a2, a3, v7);
  v9 = v8;
  if ( a5 )
    *a5 = v8;
  if ( v8 == 4 && !(unsigned __int8)sub_77B70(first_dref_from) )
    *v7 = 0;
  if ( *(_WORD *)(a2 + 24) == 16 )
  {
    if ( *(_BYTE *)(a2 + 41) == 7 )
    {
      if ( sub_7F350(a1, a2, a2 + 40) == *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) )
        goto LABEL_25;
      if ( *(_WORD *)(a2 + 24) != 16 )
        goto LABEL_9;
    }
    func = (__int64 *)get_func();
    if ( !sub_701C0(a1, func, first_dref_from, 0, 0) )
      goto LABEL_9;
LABEL_25:
    *v7 = (1 << (get_func_bitness() + 4)) / -8;
    return 1;
  }
LABEL_9:
  if ( v9 && *((_QWORD *)&a1 + 1) )
  {
    if ( v9 == 2 )
    {
      sub_6E060(a1);
    }
    else if ( (v9 & 0xFFFFFFFB) == 3 )
    {
      v16 = sub_31500(a1, 0, 0, &v34, &v35, 0, v40, 0);
      *v7 = v35 + v34 + v16;
    }
    return 1;
  }
  v13 = get_func();
  v14 = v13;
  if ( !v13 )
  {
    tinfo = getinf_flag();
    if ( (_BYTE)tinfo )
    {
      *v7 = 0;
      return 1;
    }
    v33[1] = 0;
    if ( (get_flags_ex() & 0xF00000) == 0xA00000 && (int)get_stroff_path() > 0 )
    {
      v18 = *(_BYTE *)(a2 + 41);
      if ( v18 == 4 || (v19 = 0, v18 == 2) && *(_BYTE *)(a2 + 72) )
        v19 = *(_QWORD *)(a2 + 56);
      v32 = v33[2] + v19;
      while ( 1 )
      {
        tinfo = get_tinfo();
        if ( (_BYTE)tinfo )
          goto LABEL_67;
        v34 = 0;
        if ( !(unsigned __int8)get_type_by_tid() || (get_tinfo_property() & 0x3F) != 0xD )
          goto LABEL_77;
        v39 = 1;
        v35 = 0;
        v38 = 0;
        v36 = 0;
        v37 = 0;
        if ( !(unsigned __int8)get_tinfo_details() )
          goto LABEL_68;
        best_fit_member = udt_type_data_t__get_best_fit_member();
        v21 = v35;
        if ( best_fit_member < 0 )
          goto LABEL_69;
        v22 = (_QWORD *)(v35 + 144 * best_fit_member);
        if ( (get_tinfo_property() & 0x3F) != 0x1D )
          v32 -= *v22 >> 3;
        get_tinfo_property4();
        if ( (get_tinfo_property() & 0x2F) != 0xD )
          break;
        get_strid();
        v23 = v35;
        if ( v35 )
        {
          v24 = v36;
          if ( (_QWORD)v36 )
          {
            v25 = 0;
            do
            {
              v26 = (_QWORD *)(v23 + 144 * v25);
              clear_tinfo_t();
              if ( v26[5] )
              {
                v26[6] = 0;
                qfree();
              }
              if ( v26[2] )
              {
                v26[3] = 0;
                qfree();
              }
              ++v25;
              v23 = v35;
            }
            while ( v24 != v25 );
          }
          *(_QWORD *)&v36 = 0;
          qfree();
        }
        clear_tinfo_t();
      }
      if ( (unsigned __int8)get_tinfo() )
      {
        sub_5D130(&v35);
        clear_tinfo_t();
LABEL_67:
        v35 = 0;
        copy_tinfo_t();
        tinfo = sub_698D0(&v35, v32, v7);
        clear_tinfo_t();
        goto LABEL_41;
      }
LABEL_68:
      v21 = v35;
LABEL_69:
      if ( v21 )
      {
        v27 = v36;
        v28 = 0;
        if ( (_QWORD)v36 )
        {
          do
          {
            v29 = (_QWORD *)(v21 + 144 * v28);
            clear_tinfo_t();
            if ( v29[5] )
            {
              v29[6] = 0;
              qfree();
            }
            if ( v29[2] )
            {
              v29[3] = 0;
              qfree();
            }
            ++v28;
            v21 = v35;
          }
          while ( v27 != v28 );
        }
        *(_QWORD *)&v36 = 0;
        qfree();
      }
LABEL_77:
      clear_tinfo_t();
      goto LABEL_41;
    }
    if ( (unsigned __int8)segtype() != 1 )
      first_dref_from = get_first_dref_from();
    if ( first_dref_from != -1 )
    {
      ind_purged = get_ind_purged();
      if ( ind_purged != -1 )
      {
        *v7 = ind_purged;
        tinfo = 1;
LABEL_41:
        clear_tinfo_t();
        return tinfo;
      }
      not_tail = first_dref_from;
      if ( (get_flags_ex() & 0x600) == 0x200 )
        not_tail = prev_not_tail();
      if ( (unsigned __int8)get_tinfo() )
      {
        v35 = 0;
        copy_tinfo_t();
        tinfo = sub_698D0(&v35, first_dref_from - not_tail, v7);
        clear_tinfo_t();
        goto LABEL_41;
      }
    }
    *v7 = 0;
    goto LABEL_41;
  }
  v15 = *(_QWORD *)(v13 + 48);
  if ( v15 == -1 )
    v15 = 0;
  *v7 = v15;
  if ( (*(_BYTE *)(v14 + 16) & 2) != 0 && (*(_BYTE *)(a2 + 41) == 7 || *(_WORD *)(a2 + 24) == 18) )
    *v7 += (int)get_frame_retsize() / 2;
  if ( !*(_QWORD *)(v14 + 48) && (*(_BYTE *)(v14 + 17) & 0x40) == 0 )
    return (unsigned int)getinf_flag();
  return 1;
}
