unsigned __int64 __fastcall sub_31ED50(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v5; // r12
  int flags; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 item_end; // rbp
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ph; // rax
  __int64 v17; // rcx
  double v18; // xmm0_8
  __int64 v19; // rdx
  __int64 v20; // rax
  char i; // al
  unsigned __int64 v22; // r15
  int v23; // r14d
  __int128 *v24; // rsi
  __int128 *v25; // rax
  __int64 v26; // r14
  int v27; // edx
  int v28; // edx
  int v29; // ecx
  unsigned __int64 v30; // rdx
  int v31; // esi
  int v32; // eax
  __int64 v33; // rax
  unsigned __int128 v34; // kr00_16
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-140h]
  unsigned __int8 *v37; // [rsp+8h] [rbp-140h]
  __int64 *func; // [rsp+8h] [rbp-140h]
  __int64 v39; // [rsp+10h] [rbp-138h]
  __m128i v40; // [rsp+20h] [rbp-128h] BYREF
  __m128i v41; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v42[8]; // [rsp+40h] [rbp-108h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-100h]
  __int64 v44; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-E0h]
  __int128 v46; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+80h] [rbp-C8h]
  __int64 v48; // [rsp+90h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-B0h]
  __int128 v50; // [rsp+A8h] [rbp-A0h]
  __int64 v51; // [rsp+B8h] [rbp-90h]
  __int64 v52; // [rsp+C0h] [rbp-88h]
  __int64 v53; // [rsp+C8h] [rbp-80h]
  __int64 v54; // [rsp+D0h] [rbp-78h]
  __int64 v55; // [rsp+D8h] [rbp-70h]
  __int64 v56; // [rsp+E0h] [rbp-68h]
  __int64 v57; // [rsp+E8h] [rbp-60h]
  __int64 v58; // [rsp+F0h] [rbp-58h]
  __int128 v59; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+108h] [rbp-40h]

  v5 = a3;
  v60 = __readfsqword(0x28u);
  flags = get_flags_ex(a3, 4);
  v9 = flags & 0x600;
  if ( !a4 )
    goto LABEL_11;
  v10 = v5;
  if ( v9 == 1536 )
  {
    if ( (flags & 0x10000000) == 0 )
    {
      item_end = get_item_end(v5);
      v12 = item_end - v5;
      goto LABEL_12;
    }
    v44 = 0;
    func = (__int64 *)get_func(v5);
    v45 = 0xFFFFFFFFLL;
    v20 = -1;
    v47 = -1;
    v46 = 0;
    if ( func )
      v20 = *func;
    v47 = v20;
    if ( !(unsigned __int8)func_tail_iterator_set(&v44, func, -1) )
    {
LABEL_44:
      if ( v44 )
        lock_func_range(v44, 0);
      return v60 - __readfsqword(0x28u);
    }
    while ( 1 )
    {
      v39 = v47;
      for ( i = xrefblk_t_first_from(v42, v47, 9); i; i = xrefblk_t_next_from(v42) )
      {
        v22 = v43;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) >= v43 && (unsigned __int8)is_mapped(v43) )
        {
          v23 = a4;
          if ( a4 == 1 )
          {
            v35 = get_func(v22);
            v23 = 1;
            if ( v35 )
            {
              if ( v22 == *(_QWORD *)v35 )
                v23 = ((*(_BYTE *)(v35 + 18) & 2) != 0) + 1;
            }
          }
          if ( func != (__int64 *)get_func(v22) )
            sub_31ED50(a1, a2, v22, (unsigned int)(v23 - 1));
        }
      }
      v24 = (__int128 *)v44;
      if ( v44 )
      {
        if ( (int)v45 >= 0 && (int)v45 < *(_DWORD *)(v44 + 128) )
          v24 = (__int128 *)(*(_QWORD *)(v44 + 136) + 16LL * (int)v45);
      }
      else
      {
        v24 = &v46;
      }
      rangeset_t_add(a2, v24);
      v48 = 0x800000;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0xFFFFFFFFLL;
      v55 = 0;
      v56 = 2;
      v57 = -1;
      v58 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
      v50 = -1;
      v59 = 0;
      if ( get_switch_info(&v48, v39) <= 0 || (v41 = 0, (v48 & 0x4000) != 0) && (v48 & 0x80000) == 0 )
      {
LABEL_35:
        v25 = (__int128 *)v44;
        if ( v44 )
          goto LABEL_36;
        goto LABEL_60;
      }
      v27 = (v48 & 0x10000) != 0 ? v51 : WORD2(v48);
      v28 = v27 - (((v48 & 0x20) == 0) - 1);
      v29 = v48 & 0x404;
      if ( (v48 & 0x404) != 0 )
      {
        if ( v29 == 4 )
        {
          v28 *= 4;
        }
        else if ( v29 != 1024 )
        {
          v28 *= 8;
        }
      }
      else
      {
        v28 *= 2;
      }
      v30 = si128.m128i_i64[0] + v28;
      v40 = _mm_unpacklo_epi64((__m128i)si128.m128i_u64[0], (__m128i)v30);
      if ( (v48 & 1) == 0 )
        break;
      v31 = 2;
      v32 = v48 & 0x802;
      if ( (v48 & 0x802) != 0 )
      {
        if ( v32 == 2 )
        {
          v31 = 4;
        }
        else
        {
          v31 = 1;
          if ( v32 != 2048 )
            v31 = 8;
        }
      }
      v33 = si128.m128i_i64[1] + v31 * WORD2(v48);
      v41 = _mm_unpacklo_epi64((__m128i)si128.m128i_u64[1], (__m128i)(unsigned __int64)v33);
      v34 = __PAIR128__(v33, si128.m128i_u64[1]);
      if ( si128.m128i_i64[0] < v30 )
        goto LABEL_66;
LABEL_58:
      if ( (unsigned __int64)v34 >= *((_QWORD *)&v34 + 1) )
        goto LABEL_35;
      rangeset_t_add(a2, &v41);
      v25 = (__int128 *)v44;
      if ( v44 )
      {
LABEL_36:
        if ( (int)v45 >= 0 && (int)v45 < *((_DWORD *)v25 + 32) )
          v25 = (__int128 *)(*((_QWORD *)v25 + 17) + 16LL * (int)v45);
        goto LABEL_39;
      }
LABEL_60:
      v25 = &v46;
LABEL_39:
      v26 = *((_QWORD *)v25 + 1);
      if ( (get_flags_ex(v26, 4) & 0x10000) != 0 )
        sub_31ED50(a1, a2, v26, (unsigned int)(a4 - 1));
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree(v58);
      }
      if ( !(unsigned __int8)func_item_iterator_next(&v44, sub_31EC70, 0) )
        goto LABEL_44;
    }
    if ( si128.m128i_i64[0] >= v30 )
      goto LABEL_35;
LABEL_66:
    rangeset_t_add(a2, &v40);
    v34 = (unsigned __int128)v41;
    goto LABEL_58;
  }
  item_end = get_item_end(v5);
  v12 = item_end - v5;
  while ( 1 )
  {
    v48 = v5;
    si128.m128i_i64[0] = item_end;
    rangeset_t_add(a2, &v48);
    if ( (unsigned int)sub_33BBE0(a1, v5) != 3 )
      break;
    v5 = v12 == 4 ? (unsigned int)get_dword(v5, v5, v13, v14) : get_qword(v5);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < v5 || !(unsigned __int8)is_mapped(v5) )
      break;
    v9 = get_flags_ex(v5, 4) & 0x600;
LABEL_11:
    v10 = v5;
    v36 = v9;
    item_end = get_item_end(v5);
    v12 = item_end - v5;
    if ( v36 == 1536 )
    {
LABEL_12:
      ph = get_ph(v10);
      v17 = *(_QWORD *)(ph + 96);
      if ( v17 && *(_BYTE *)v17 )
      {
        v37 = *(unsigned __int8 **)(ph + 96);
        v18 = put_bytes(v5, *(_QWORD *)(v17 + 8));
        create_insn(v5, 0, v19, v18);
        v12 = *v37;
      }
    }
  }
  return v60 - __readfsqword(0x28u);
}
