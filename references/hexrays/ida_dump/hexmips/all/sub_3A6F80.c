_BOOL8 __fastcall sub_3A6F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v8; // r12
  int v9; // ebx
  __int64 *v10; // rdx
  char *v11; // rax
  int v12; // r13d
  __int64 v13; // rdi
  int v14; // r14d
  __int64 v15; // rbp
  __int64 ph; // rax
  int v17; // ecx
  bool (__fastcall *v18)(int, unsigned int); // rax
  __int64 v19; // r13
  void (__fastcall *v20)(__int128 *, __int128 *, __int64); // rax
  int v21; // r14d
  __int64 flags; // rax
  char v23; // dl
  __int64 v24; // rax
  unsigned int v25; // ebp
  int v26; // r13d
  __int64 v27; // rdi
  __int64 tinfo_property; // rsi
  int tinfo_size; // r14d
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // eax
  bool v33; // cc
  __int64 v34; // rax
  __int64 *v35; // rdx
  char v36; // dl
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 tinfo_tid; // rbx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 i; // r12
  __int64 v47; // rbx
  int tinfo_udt_member; // r13d
  __int64 tinfo_property4; // rbx
  __int64 v50; // rax
  __int64 v51; // rsi
  unsigned __int64 v52; // [rsp+0h] [rbp-2C8h]
  bool v53; // [rsp+1Ah] [rbp-2AEh]
  char v54; // [rsp+1Bh] [rbp-2ADh]
  unsigned int v55; // [rsp+1Ch] [rbp-2ACh]
  __int64 v56; // [rsp+28h] [rbp-2A0h] BYREF
  __int64 v57; // [rsp+30h] [rbp-298h] BYREF
  __int128 v58; // [rsp+38h] [rbp-290h]
  __int64 v59; // [rsp+50h] [rbp-278h] BYREF
  __int128 v60; // [rsp+58h] [rbp-270h]
  _QWORD v61[2]; // [rsp+70h] [rbp-258h] BYREF
  __int64 v62; // [rsp+80h] [rbp-248h]
  __int128 v63; // [rsp+88h] [rbp-240h]
  __int64 v64; // [rsp+98h] [rbp-230h]
  __int128 v65; // [rsp+A0h] [rbp-228h]
  _OWORD v66[3]; // [rsp+B0h] [rbp-218h] BYREF
  __int64 v67; // [rsp+E0h] [rbp-1E8h]
  int v68; // [rsp+E8h] [rbp-1E0h]
  __int64 v69; // [rsp+F0h] [rbp-1D8h]
  char v70; // [rsp+F8h] [rbp-1D0h]
  __int128 v71; // [rsp+100h] [rbp-1C8h] BYREF
  __m128i v72; // [rsp+110h] [rbp-1B8h]
  __int128 v73; // [rsp+120h] [rbp-1A8h] BYREF
  __int64 v74; // [rsp+130h] [rbp-198h]
  __int64 v75; // [rsp+138h] [rbp-190h]
  __int64 v76; // [rsp+140h] [rbp-188h]
  char v77; // [rsp+148h] [rbp-180h] BYREF
  _BYTE v78[319]; // [rsp+149h] [rbp-17Fh]
  _QWORD v79[8]; // [rsp+288h] [rbp-40h] BYREF

  v4 = *(_DWORD *)(a2 + 8);
  v79[0] = __readfsqword(0x28u);
  v5 = a2;
  if ( v4 == 59 )
  {
    v8 = *(_QWORD *)a2;
    v9 = 1;
    if ( *(_QWORD *)a2 != -1 )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( v4 > 0x3B )
  {
    if ( v4 != 60 )
      return 0;
    v8 = *(_QWORD *)a2;
    v9 = 2;
    if ( *(_QWORD *)a2 != -1 )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( v4 == 57 )
  {
    v9 = 5;
    if ( (unsigned int)sub_2894B0(*(_QWORD *)(a2 + 24)) == -1 )
      return 0;
  }
  else
  {
    if ( v4 != 58 )
      return 0;
    v6 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v6 + 8) != 61 || sub_2511B0(*(__int64 **)(v6 + 24), (_QWORD *)(v6 + 48)) < 0 )
      return 0;
    if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0xF) == 0xB )
    {
      v9 = 3;
    }
    else
    {
      if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0xF) != 0xA )
        return 0;
      v9 = 4;
    }
  }
  v8 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 == -1 )
  {
    if ( *(_DWORD *)(a2 + 8) != 58
      || (v35 = *(__int64 **)(a2 + 24), (unsigned int)(*((_DWORD *)v35 + 2) - 59) > 1)
      || (v8 = *v35, *v35 == -1) )
    {
LABEL_10:
      v10 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      if ( (unsigned int)(*((_DWORD *)v10 + 2) - 2) > 0xD )
        return 0;
      v8 = *v10;
      if ( *v10 == -1 )
        return 0;
    }
  }
LABEL_12:
  v74 = -1;
  v11 = &v77;
  v75 = 0;
  v76 = 0;
  v73 = -1;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 40;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *((_QWORD *)v11 - 2) = 0;
  }
  while ( v11 != (char *)v79 );
  if ( (int)decode_insn(&v73, v8, v79, a4, 0, 0, 0.0) <= 0 )
    return 0;
  v12 = sub_3A6CF0((__int64 *)(a1 + 16), a2, 0);
  if ( v12 == 3 )
  {
    v21 = sub_CBD70(0x64u, v61, &v73) - 1;
    v55 = v21;
    if ( v21 < 0 )
      return 0;
    if ( LODWORD(v61[0]) )
      return 0;
    flags = get_flags_ex(v74, 0);
    if ( (unsigned __int8)is_defarg(flags, (unsigned int)v21) )
      return 0;
    v23 = v78[40 * v21];
    if ( v23 == 5 )
    {
      v52 = *(_QWORD *)&v78[40 * v21 + 7];
      goto LABEL_37;
    }
    if ( v23 == 4 )
    {
      v52 = *(_QWORD *)&v78[40 * v21 + 15];
      goto LABEL_37;
    }
    return 0;
  }
  v13 = v74;
  v14 = 0;
  v15 = get_flags_ex(v74, 0);
  ph = get_ph(v13);
  v17 = *(_DWORD *)(ph + 104);
  if ( (unsigned __int16)v75 >= v17 && (unsigned __int16)v75 < *(int *)(ph + 108) )
    v14 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * ((unsigned __int16)v75 - v17) + 8);
  v18 = sub_3A40B0;
  v72.m128i_i64[0] = 0;
  if ( !v12 )
    v18 = sub_3A40D0;
  v72.m128i_i64[1] = 0;
  v71 = 0;
  if ( v18 )
  {
    *(_QWORD *)&v71 = v18;
    v72 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C7C80), (__m128i)(unsigned __int64)sub_3A4220);
  }
  if ( (unsigned __int8)(v78[0] - 3) <= 1u )
  {
    v19 = 0;
  }
  else if ( (unsigned __int8)(v78[40] - 3) <= 1u )
  {
    v19 = 1;
  }
  else
  {
    v19 = 2;
    if ( (unsigned __int8)(v78[80] - 3) > 1u )
    {
      v20 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v72.m128i_i64[0];
      goto LABEL_27;
    }
  }
  v55 = v19;
  v36 = is_defarg(v15, (unsigned int)v19);
  v20 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v72.m128i_i64[0];
  if ( v36 )
  {
LABEL_27:
    if ( v20 )
      v20(&v71, &v71, 3);
    return 0;
  }
  LODWORD(v59) = v14;
  LODWORD(v61[0]) = v19;
  if ( !v72.m128i_i64[0] )
    std::__throw_bad_function_call();
  if ( !((unsigned __int8 (__fastcall *)(__int128 *, __int64 *, _QWORD *))v72.m128i_i64[1])(&v71, &v59, v61) )
  {
    if ( v72.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v72.m128i_i64[0])(&v71, &v71, 3);
    return 0;
  }
  if ( v78[40 * v19] == 4 )
  {
    v52 = *(_QWORD *)&v78[40 * v19 + 15];
    if ( v72.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v72.m128i_i64[0])(&v71, &v71, 3);
  }
  else
  {
    if ( v72.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64))v72.m128i_i64[0])(&v71, &v71, 3, 40 * v19);
    v52 = 0;
  }
LABEL_37:
  v57 = 0;
  v24 = *(_QWORD *)a2;
  v58 = 0;
  v53 = v24 != -1 && v8 != v24;
  if ( v53 )
    return 0;
  v54 = 0;
  v25 = 0;
  v26 = 0;
LABEL_39:
  v27 = *(_QWORD *)(v5 + 24);
  if ( (unsigned int)(v9 - 1) <= 1 )
  {
    while ( 1 )
    {
      v61[0] = 0;
      v61[0] = get_tinfo_property(*(_QWORD *)(v27 + 48), 10);
      if ( (get_tinfo_property(v61[0], 2) & 0x3F) == 0xD )
      {
        v37 = *(_DWORD *)(v5 + 32);
        if ( v52 < v37 + v25 + v26 )
          goto LABEL_119;
        v26 += v37;
      }
      v38 = v58;
      v39 = v57;
      if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
      {
        v57 = qvector_reserve(&v57, v57, v58 + 1, 8);
        v39 = v57;
        v38 = v58;
      }
      *(_QWORD *)(v39 + 8 * v38) = v5;
      *(_QWORD *)&v58 = v58 + 1;
      clear_tinfo_t(v61);
      if ( v9 == 2 )
        break;
      v54 = 1;
LABEL_45:
      v5 = *(_QWORD *)(v5 + 24);
      v32 = *(_DWORD *)(v5 + 8);
      v33 = v32 <= 0x3B;
      if ( v32 == 59 )
        goto LABEL_83;
LABEL_46:
      if ( v33 )
      {
        if ( v32 == 57 )
        {
          if ( (unsigned int)sub_2894B0(*(_QWORD *)(v5 + 24)) == -1 )
            goto LABEL_50;
          v9 = 5;
        }
        else
        {
          if ( v32 != 58 )
            goto LABEL_50;
          v34 = *(_QWORD *)(v5 + 32);
          if ( *(_DWORD *)(v34 + 8) != 61 || sub_2511B0(*(__int64 **)(v34 + 24), (_QWORD *)(v34 + 48)) < 0 )
            goto LABEL_50;
          if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 48LL), 2) & 0xF) == 0xB )
          {
            v9 = 3;
          }
          else
          {
            if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 48LL), 2) & 0xF) != 0xA )
              goto LABEL_50;
            v9 = 4;
          }
        }
      }
      else
      {
        if ( v32 != 60 )
          goto LABEL_50;
        v9 = 2;
      }
LABEL_71:
      if ( *(_QWORD *)v5 == v8 )
        goto LABEL_39;
      if ( *(_QWORD *)v5 != -1 )
        goto LABEL_50;
      v27 = *(_QWORD *)(v5 + 24);
      if ( (unsigned int)(v9 - 1) > 1 )
        goto LABEL_40;
    }
  }
  else
  {
LABEL_40:
    if ( v9 == 5 )
    {
      v40 = sub_2894B0(v27);
      if ( v52 >= v40 + v25 + v26 )
      {
        v25 += v40;
        v5 = **(_QWORD **)(v5 + 32);
        v32 = *(_DWORD *)(v5 + 8);
        v33 = v32 <= 0x3B;
        if ( v32 != 59 )
          goto LABEL_46;
LABEL_83:
        v9 = 1;
        goto LABEL_71;
      }
    }
    else
    {
      v61[0] = 0;
      tinfo_property = get_tinfo_property(*(_QWORD *)(v27 + 48), 13);
      v61[0] = tinfo_property;
      tinfo_size = get_tinfo_size(0, tinfo_property, 0);
      v30 = *(_QWORD *)(v5 + 32);
      if ( *(_DWORD *)(v30 + 8) != 61 )
        sub_3A4230(0.0, 0, tinfo_property);
      v31 = tinfo_size * sub_2511B0(*(__int64 **)(v30 + 24), (_QWORD *)(v30 + 48));
      if ( v52 < v31 + v25 + v26 )
      {
LABEL_119:
        clear_tinfo_t(v61);
      }
      else
      {
        v25 += v31;
        if ( v9 != 4 )
        {
          clear_tinfo_t(v61);
          goto LABEL_45;
        }
        v41 = v58;
        v42 = v57;
        if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
        {
          v57 = qvector_reserve(&v57, v57, v58 + 1, 8);
          v42 = v57;
          v41 = v58;
        }
        *(_QWORD *)(v42 + 8 * v41) = v5;
        *(_QWORD *)&v58 = v58 + 1;
        clear_tinfo_t(v61);
      }
    }
LABEL_50:
    if ( !v54 )
      goto LABEL_52;
  }
  if ( v26 + v25 == v52 )
  {
    v59 = 0;
    v60 = 0;
    sub_3A6C90(&v56, (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 + 8 * v58 - 8) + 24LL) + 48LL));
    tinfo_tid = get_tinfo_tid(&v56, 1);
    if ( tinfo_tid != -1 )
    {
      v44 = v60;
      v45 = v59;
      if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
      {
        v59 = qvector_reserve(&v59, v59, v60 + 1, 8);
        v45 = v59;
        v44 = v60;
      }
      *(_QWORD *)(v45 + 8 * v44) = tinfo_tid;
      *(_QWORD *)&v60 = v60 + 1;
      for ( i = v57 + 8 * v58; i != v57; i -= 8 )
      {
        v47 = *(_QWORD *)(i - 8);
        if ( *(_DWORD *)(v47 + 8) != 58 )
        {
          sub_3A6C90(v61, (_QWORD *)(*(_QWORD *)(v47 + 24) + 48LL));
          copy_tinfo_t(&v56, v61);
          clear_tinfo_t(v61);
          v61[1] = 0;
          v62 = 0;
          v64 = 0;
          v67 = 1;
          v68 = -1;
          v69 = 0;
          v70 = 0;
          v63 = 0;
          v65 = 0;
          v66[0] = 0;
          v61[0] = *(unsigned int *)(v47 + 32);
          tinfo_udt_member = find_tinfo_udt_member(
                               v61,
                               v56,
                               (*(_DWORD *)(v47 + 56) & 0x100) == 0 ? 536870914 : 805306370);
          if ( tinfo_udt_member == -1
            || (get_tinfo_property(v56, 2) & 0x3F) == 0xD && v61[0] != 8LL * *(unsigned int *)(v47 + 32) )
          {
LABEL_113:
            sub_9DC90(v61);
            goto LABEL_114;
          }
          if ( (get_tinfo_property(v56, 2) & 0x3F) == 0x1D )
          {
            tinfo_property4 = get_tinfo_property4(v56, 297, tinfo_udt_member, 0, 0, 0);
            if ( tinfo_property4 == -1 )
              goto LABEL_113;
            v50 = v60;
            v51 = v59;
            if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
            {
              v59 = qvector_reserve(&v59, v59, v60 + 1, 8);
              v51 = v59;
              v50 = v60;
            }
            *(_QWORD *)(v51 + 8 * v50) = tinfo_property4;
            *(_QWORD *)&v60 = v60 + 1;
          }
          clear_tinfo_t(v66);
          if ( v64 )
          {
            *(_QWORD *)&v65 = 0;
            qfree(v64);
          }
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree(v62);
          }
        }
      }
      if ( (unsigned __int8)op_stroff(&v73, v55, v59, (unsigned int)v60, -(__int64)v25) )
        set_abits(v74, 128);
LABEL_114:
      v53 = 1;
    }
    clear_tinfo_t(&v56);
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree(v59);
    }
  }
LABEL_52:
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  return v53;
}
