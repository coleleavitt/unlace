unsigned __int64 __fastcall sub_7F00(__int64 a1)
{
  int v1; // eax
  char **v3; // rbx
  unsigned __int64 *segm_by_name; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 that; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 item_end; // rbp
  int flags; // eax
  unsigned __int64 *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 *i; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r12
  __int64 *v22; // rsi
  __int64 v23; // r10
  __int64 v24; // r14
  unsigned __int64 v25; // r8
  __int64 v26; // r15
  __int64 *v27; // r9
  __int64 *v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r12
  __int64 *v35; // r12
  __int64 *v36; // r14
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // r12
  unsigned __int64 v44; // rdi
  __int64 v45; // r9
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rax
  __int64 v49; // r11
  __int64 v50; // r12
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // rcx
  __int64 v53; // r13
  __int64 v54; // rax
  unsigned int v55; // eax
  unsigned __int64 v56; // rdi
  __int64 *v57; // r13
  __int64 v58; // rbp
  __int64 v59; // rbx
  unsigned __int64 v60; // r12
  int v61; // eax
  __int64 j; // rax
  int v63; // eax
  unsigned __int64 v64; // rax
  __int64 *v65; // r12
  __int64 *v66; // rcx
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  unsigned __int64 *v71; // [rsp+8h] [rbp-110h]
  __int64 *v72; // [rsp+10h] [rbp-108h]
  __int64 v73; // [rsp+18h] [rbp-100h]
  __int64 v74; // [rsp+18h] [rbp-100h]
  __int64 tinfo_tid; // [rsp+28h] [rbp-F0h]
  __int64 v76; // [rsp+38h] [rbp-E0h]
  __int64 v77; // [rsp+40h] [rbp-D8h]
  __int64 v78; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v79; // [rsp+48h] [rbp-D0h]
  __int64 *v80; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v81; // [rsp+68h] [rbp-B0h]
  __int64 idati; // [rsp+80h] [rbp-98h]
  __int64 v83; // [rsp+88h] [rbp-90h]
  __int16 v84; // [rsp+90h] [rbp-88h]
  unsigned __int64 v85; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v86; // [rsp+A8h] [rbp-70h]
  unsigned __int64 *v87; // [rsp+B0h] [rbp-68h]
  __int64 v88; // [rsp+B8h] [rbp-60h]
  __int128 v89; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v90; // [rsp+D8h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 536);
  if ( (v1 & 1) != 0 )
    return v90 - __readfsqword(0x28u);
  *(_DWORD *)(a1 + 536) = v1 | 1;
  netnode_check();
  v3 = off_27B70;
  v85 = *(unsigned int *)(a1 + 536);
  netnode_supset();
  while ( 1 )
  {
    segm_by_name = (unsigned __int64 *)get_segm_by_name();
    if ( segm_by_name )
      break;
    if ( algn_27B88 == (_BYTE *)++v3 )
      return v90 - __readfsqword(0x28u);
  }
  v5 = *segm_by_name;
  v6 = segm_by_name;
  v7 = 0;
  v71 = nullptr;
  v8 = -1;
  that = -1;
  v89 = 0;
  while ( 1 )
  {
    v10 = v6[1];
    if ( v5 >= v10 )
      break;
    v85 = that;
    v86 = v8;
    v87 = v71;
    v88 = v7;
    v5 = sub_7A50(a1, (__int64 *)&v85, v5, v10);
    that = v85;
    v8 = v86;
    v7 = v88;
    v71 = v87;
  }
  if ( v8 - that <= 0x1FF )
  {
    if ( v71 )
      qfree();
    return v90 - __readfsqword(0x28u);
  }
  if ( that < v8 )
  {
    do
    {
      while ( 1 )
      {
        item_end = get_item_end();
        flags = get_flags_ex();
        if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
          break;
        del_items();
        if ( item_end >= v8 )
          goto LABEL_17;
      }
    }
    while ( item_end < v8 );
  }
LABEL_17:
  v13 = v71;
  v14 = 0;
  v15 = 0;
  v77 = 0;
  v78 = 0;
  for ( i = &v71[v7]; that < v8; v15 = v78 )
  {
    for ( ; v13 != i; v15 = ++v78 )
    {
      v17 = *v13;
      if ( that < *v13 )
        break;
      if ( v15 != -1 )
      {
        v77 = qvector_reserve();
        v14 = v77;
        v15 = v78;
      }
      *(_QWORD *)(v14 + 8 * v15) = v17;
      ++v13;
      v14 = v77;
    }
    if ( !v15 || *(_QWORD *)(v14 + 8 * v15 - 8) < that )
    {
      if ( v15 != -1 )
      {
        v77 = qvector_reserve();
        v14 = v77;
        v15 = v78;
      }
      *(_QWORD *)(v14 + 8 * v15) = that;
      ++v78;
    }
    that = next_that();
    v14 = v77;
  }
  if ( v15 != -1 )
  {
    v77 = qvector_reserve();
    v14 = v77;
    v15 = v78;
  }
  *(_QWORD *)(v14 + 8 * v15) = v8;
  v18 = 0;
  v81 = 0;
  v19 = 1;
  v20 = 1;
  v80 = nullptr;
  v21 = v78 + 1;
  v79 = v21;
  if ( v21 <= 1 )
    goto LABEL_103;
  while ( 2 )
  {
    v22 = (__int64 *)(v77 + 8 * v19);
    v23 = *(v22 - 1);
    v24 = *v22;
    v25 = *v22 - v23;
    if ( v19 + 1 == v21 || v25 == v20 )
    {
      v29 = 1;
LABEL_54:
      sub_7820((unsigned __int64 *)&v80, v23, v25, v29);
      goto LABEL_49;
    }
    v26 = *(_QWORD *)(v77 + 8 * v19 + 8);
    if ( v25 < v20 )
    {
      v25 = v26 - v24;
      if ( v26 - v24 < v20 && v25 != 1 )
      {
        v27 = &v80[3 * v18];
        v28 = v27;
        if ( v80 != v27 )
        {
          do
          {
            if ( v25 >= *(v28 - 1) )
              break;
            if ( *(v28 - 1) % v25 )
              goto LABEL_48;
            v28 -= 3;
          }
          while ( v80 != v28 );
          if ( v28 != v27 )
          {
            if ( (((_BYTE)v27 - (_BYTE)v28) & 8) == 0 || (v28[2] = v25, v28 += 3, v27 != v28) )
            {
              do
              {
                v28[2] = v25;
                v28 += 6;
                *(v28 - 1) = v25;
              }
              while ( v27 != v28 );
            }
          }
        }
        goto LABEL_47;
      }
LABEL_48:
      *v22 = v23;
LABEL_49:
      ++v19;
      goto LABEL_50;
    }
    v30 = v19 + 6;
    v31 = v19 + 1;
    v32 = 0x7FFFFFFF;
    while ( 1 )
    {
      if ( v31 >= v21 )
      {
LABEL_62:
        if ( v32 >= v20 )
        {
LABEL_83:
          v39 = v25 % v20;
          if ( v25 % v20 > 1 && !(v20 % v39) )
          {
            v65 = &v80[3 * v18];
            v66 = v65;
            if ( v80 != v65 )
            {
              do
              {
                if ( v39 >= *(v66 - 1) )
                  break;
                if ( *(v66 - 1) % v39 )
                  goto LABEL_85;
                v66 -= 3;
              }
              while ( v80 != v66 );
              if ( v65 != v66 )
              {
                if ( (((_BYTE)v65 - (_BYTE)v66) & 8) == 0 || (v66[2] = v39, v66 += 3, v65 != v66) )
                {
                  do
                  {
                    v66[2] = v39;
                    v66 += 6;
                    *(v66 - 1) = v39;
                  }
                  while ( v65 != v66 );
                }
              }
            }
            sub_7820((unsigned __int64 *)&v80, v23, v39, v25 / v39);
            goto LABEL_49;
          }
LABEL_85:
          if ( v18 )
            goto LABEL_86;
          if ( v32 >= v25 )
            goto LABEL_47;
          if ( !v32 )
          {
            if ( v23 != v26 )
              goto LABEL_129;
            v44 = 0;
            goto LABEL_186;
          }
LABEL_162:
          v42 = 1;
          if ( v25 > 0x100 )
          {
            v47 = v26 - v23;
            if ( v32 < v26 - v23 )
            {
              v49 = 1;
              goto LABEL_180;
            }
            v44 = v26 - v23;
            goto LABEL_186;
          }
LABEL_163:
          sub_7820((unsigned __int64 *)&v80, v23, v42, v25);
          goto LABEL_49;
        }
        v34 = v26 - v23;
        if ( !((v26 - v23) % v20) )
        {
LABEL_166:
          sub_7820((unsigned __int64 *)&v80, v23, v20, v34 / v20);
          goto LABEL_167;
        }
        if ( v32 != 1 )
        {
          v35 = &v80[3 * v18];
          if ( v80 != v35 )
          {
            v73 = v24;
            v36 = &v80[3 * v18];
            do
            {
              if ( v32 >= *(v35 - 1) )
                break;
              if ( *(v35 - 1) % v32 )
              {
                v24 = v73;
                goto LABEL_76;
              }
              v35 -= 3;
            }
            while ( v80 != v35 );
            if ( v36 != v35 )
            {
              if ( (((_BYTE)v36 - (_BYTE)v35) & 8) == 0 || (v35[2] = v32, v35 += 3, v36 != v35) )
              {
                do
                {
                  v35[2] = v32;
                  v35 += 6;
                  *(v35 - 1) = v32;
                }
                while ( v36 != v35 );
              }
            }
          }
          sub_7820((unsigned __int64 *)&v80, v23, v32, v25 / v32);
          goto LABEL_49;
        }
LABEL_76:
        v37 = v19 + 1;
        v32 = 0x7FFFFFFF;
        while ( v37 < v79 )
        {
          v38 = *(_QWORD *)(v77 + 8 * v37) - *(_QWORD *)(v77 + 8 * v37 - 8);
          if ( v38 < v32 && v38 >= v20 )
          {
            if ( v20 == v38 )
            {
              v32 = v20;
              goto LABEL_83;
            }
            v32 = *(_QWORD *)(v77 + 8 * v37) - *(_QWORD *)(v77 + 8 * v37 - 8);
          }
          if ( ++v37 == v30 )
            goto LABEL_83;
        }
        goto LABEL_83;
      }
      v33 = *(_QWORD *)(v77 + 8 * v31) - *(_QWORD *)(v77 + 8 * v31 - 8);
      if ( v33 >= v32 || !v33 )
        goto LABEL_61;
      if ( v33 == 1 )
        break;
      v32 = *(_QWORD *)(v77 + 8 * v31) - *(_QWORD *)(v77 + 8 * v31 - 8);
LABEL_61:
      if ( v30 == ++v31 )
        goto LABEL_62;
    }
    if ( v20 > 1 )
    {
      v34 = v26 - v23;
      if ( !((v26 - v23) % v20) )
        goto LABEL_166;
      goto LABEL_76;
    }
    v32 = 1;
    if ( !v18 )
    {
      if ( v25 > 1 )
      {
        v32 = 1;
        goto LABEL_162;
      }
LABEL_47:
      sub_7820((unsigned __int64 *)&v80, v23, v25, 1);
      goto LABEL_49;
    }
LABEL_86:
    if ( v32 >= v25 )
      goto LABEL_47;
    v40 = v25 / v80[3 * v18 - 1];
    v41 = v25 / v40;
    v42 = v25 / v40;
    if ( !(v25 % v40) )
    {
      if ( v32 < v41 )
        goto LABEL_89;
      if ( v40 > 0x100 )
      {
        v44 = v26 - v23;
        if ( v41 == 1 )
          goto LABEL_90;
      }
      if ( v41 == 2 && v40 > 0x10000 )
        goto LABEL_89;
      v25 /= (unsigned __int64)v80[3 * v18 - 1];
      goto LABEL_163;
    }
    v43 = v41 + 1;
    if ( v32 >= v41 + 1 )
    {
      v67 = v23 - v24 + v43 * v40;
      if ( v67 < v40 && (v41 != 1 || v67 <= 0x100) && (v41 != 2 || v67 <= 0x10000) )
      {
        v68 = v25 + v40 - v43 * v40;
        v74 = v68;
        if ( (v41 || v68 <= 0x100) && (v41 != 1 || v68 <= 0x10000) )
        {
          v69 = sub_7820((unsigned __int64 *)&v80, v23, v41, v67);
          sub_7820((unsigned __int64 *)&v80, v69, v43, v74);
          goto LABEL_49;
        }
      }
    }
LABEL_89:
    v44 = v26 - v23;
LABEL_90:
    v45 = 3 * v18;
    if ( v32 >= v44 )
    {
LABEL_186:
      sub_7820((unsigned __int64 *)&v80, v23, v44, 1);
      goto LABEL_167;
    }
    v46 = v44 / v80[v45 - 1];
    v47 = v46;
    v48 = v44 / v46;
    v49 = v44 / v46;
    if ( v44 % v46 )
    {
      v50 = v48 + 1;
      if ( v32 >= v48 + 1 )
      {
        v51 = v50 * v46 + v23 - v26;
        if ( v51 < v46 && (v48 != 1 || v51 <= 0x100) && (v48 != 2 || v51 <= 0x10000) )
        {
          v52 = v44 + v46 - v50 * v46;
          v53 = v52;
          if ( (v48 || v52 <= 0x100) && (v48 != 1 || v52 <= 0x10000) )
          {
            v54 = sub_7820((unsigned __int64 *)&v80, v23, v48, v51);
            sub_7820((unsigned __int64 *)&v80, v54, v50, v53);
            goto LABEL_167;
          }
        }
      }
LABEL_129:
      v64 = v25;
      v25 = v32;
      v29 = v64 / v32;
      goto LABEL_54;
    }
    if ( v32 < v48 )
      goto LABEL_129;
LABEL_180:
    if ( v49 == 1 && v47 > 0x100 || v49 == 2 && v47 > 0x10000 )
      goto LABEL_129;
    sub_7820((unsigned __int64 *)&v80, v23, v49, v47);
LABEL_167:
    v19 += 2LL;
LABEL_50:
    v21 = v79;
    if ( v19 < v79 )
    {
      v18 = v81;
      v20 = 1;
      if ( (_QWORD)v81 )
        v20 = v80[3 * (_QWORD)v81 - 1];
      continue;
    }
    break;
  }
LABEL_103:
  v55 = *(_DWORD *)(a1 + 264);
  if ( v55 )
  {
    v76 = 0;
    v84 = 257;
    v83 = v55;
    idati = get_idati();
    if ( (unsigned __int8)create_tinfo() )
      tinfo_tid = get_tinfo_tid();
    else
      tinfo_tid = -1;
    clear_tinfo_t();
  }
  else
  {
    tinfo_tid = -1;
  }
  v56 = (unsigned __int64)v80;
  v57 = v80;
  v72 = &v80[3 * v81];
  if ( v72 != v80 )
  {
    while ( 1 )
    {
      v58 = v57[2];
      v59 = *v57;
      if ( *v57 < (unsigned __int64)v57[1] )
        break;
LABEL_148:
      v57 += 3;
      if ( v72 == v57 )
      {
        v56 = (unsigned __int64)v80;
        goto LABEL_150;
      }
    }
    v60 = v59 + v58;
    while ( 2 )
    {
      v61 = get_flags_ex();
      if ( (v61 & 0x600) == 0x400 && (v61 & 0xF0000000) == 0x50000000 )
      {
        if ( v58 == get_item_end() - v59 )
          goto LABEL_113;
        del_items();
LABEL_112:
        if ( (unsigned __int8)create_strlit() )
        {
LABEL_113:
          if ( tinfo_tid != -1 && v58 != 0 )
          {
            for ( j = get_first_dref_to(); j != -1; j = get_next_dref_to() )
            {
              v63 = get_flags_ex();
              if ( (v63 & 0x600) == 0x400
                && (v63 & 0x400) != 0
                && (v63 & 0xF0000000) != 0x60000000
                && (unsigned __int8)get_data_value()
                && v76 == v59
                && (unsigned __int8)get_data_value()
                && v58 == idati
                && (unsigned __int8)create_data() )
              {
                sub_7D60();
              }
            }
          }
        }
        else if ( next_that() != -1 )
        {
          create_strlit();
        }
      }
      else if ( v58 )
      {
        goto LABEL_112;
      }
      v59 += v58;
      if ( v60 >= v57[1] )
        goto LABEL_148;
      v60 += v58;
      continue;
    }
  }
LABEL_150:
  if ( v56 )
  {
    *(_QWORD *)&v81 = 0;
    qfree();
  }
  if ( v77 )
    qfree();
  if ( v71 )
    qfree();
  return v90 - __readfsqword(0x28u);
}
