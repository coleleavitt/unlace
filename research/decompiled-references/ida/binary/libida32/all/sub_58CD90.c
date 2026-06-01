__int64 __fastcall sub_58CD90(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        unsigned int *a9)
{
  unsigned int v12; // r12d
  int v13; // r8d
  int v14; // r9d
  int v15; // edi
  __int64 v16; // rax
  int v17; // esi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // ebx
  int idcv_attr; // eax
  unsigned int v26; // r13d
  char v27; // bl
  int v28; // r8d
  __int64 v29; // rdi
  int v30; // esi
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // al
  __int64 v37; // rdi
  int v38; // r8d
  __int64 v39; // rdi
  int v40; // esi
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  char v45; // al
  __int64 v46; // rax
  __int64 custom_argloc; // rax
  __int64 v48; // rsi
  int v49; // edi
  __int64 *v50; // r12
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r15
  unsigned __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rsi
  int v59; // esi
  __int64 v60; // rdi
  _QWORD *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  char v65; // al
  __int64 v66; // rax
  __int64 *v67; // [rsp+0h] [rbp-D8h]
  unsigned int v68; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v69; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v70; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v71; // [rsp+10h] [rbp-C8h]
  __int64 v72; // [rsp+10h] [rbp-C8h]
  int v73; // [rsp+20h] [rbp-B8h]
  unsigned int v74; // [rsp+24h] [rbp-B4h]
  __int64 v77; // [rsp+48h] [rbp-90h] BYREF
  __int64 v78; // [rsp+50h] [rbp-88h] BYREF
  __int64 v79; // [rsp+58h] [rbp-80h]
  char v80[8]; // [rsp+60h] [rbp-78h] BYREF
  __int128 v81; // [rsp+68h] [rbp-70h]
  __int64 v82; // [rsp+78h] [rbp-60h]
  char v83; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v84; // [rsp+98h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  v80[0] = 2;
  v78 = 0;
  v79 = 0;
  v82 = 0;
  v81 = 0;
  v71 = sub_588570(a1, a9);
  v74 = a5 + a6;
  if ( a5 >= a5 + a6 )
  {
    v26 = 1;
    goto LABEL_69;
  }
  v12 = a5 + 1;
  v67 = &v77;
  v73 = a7 * a5;
  while ( 1 )
  {
    v77 = 0;
    v68 = v12 - 1;
    copy_tinfo_t(v67);
    v15 = *(_DWORD *)(a1 + 16);
    v16 = *(_QWORD *)(a1 + 8);
    if ( v15 > 0 )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = *(_QWORD **)(v16 + 32);
        if ( !v18 )
          break;
        v19 = v18[1];
        if ( !v19 )
          break;
        ++v17;
        v16 = *v18 + 56 * v19 - 56;
        if ( v15 == v17 )
          goto LABEL_8;
      }
      if ( !under_debugger )
        interr(3441);
LABEL_87:
      BUG();
    }
LABEL_8:
    v20 = *(__int64 **)(v16 + 32);
    v21 = v20[1];
    v22 = *v20;
    if ( v20[2] < (unsigned __int64)(v21 + 1) )
    {
      v46 = qvector_reserve(v20, v22, v21 + 1, 56);
      *v20 = v46;
      v21 = v20[1];
      v22 = v46;
    }
    v23 = v22 + 56 * v21;
    *(_QWORD *)v23 = 0;
    *(_QWORD *)(v23 + 24) = 0;
    *(_DWORD *)(v23 + 48) = 0;
    *(_OWORD *)(v23 + 8) = 0;
    *(_OWORD *)(v23 + 32) = 0;
    ++v20[1];
    v24 = *a9 & 1;
    if ( v24 )
      break;
    qsnprintf((int)&v83, 16, (int)"%d", v68, v13, v14, (char)v67);
    idcv_attr = get_idcv_attr();
    if ( idcv_attr == 1538 )
    {
      v48 = *a9 & 4;
      if ( (*a9 & 4) != 0 || (*a9 & 2) == 0 )
      {
        set_qerrno(1242, v48);
        goto LABEL_68;
      }
      v49 = *(_DWORD *)(a1 + 16);
      v50 = *(__int64 **)(a1 + 8);
      if ( v49 > 0 )
      {
        while ( 1 )
        {
          v51 = (_QWORD *)v50[4];
          if ( !v51 )
            break;
          v52 = v51[1];
          if ( !v52 )
            break;
          LODWORD(v48) = v48 + 1;
          v50 = (__int64 *)(*v51 + 56 * v52 - 56);
          if ( v49 == (_DWORD)v48 )
            goto LABEL_52;
        }
        if ( !under_debugger )
          interr(3441);
        goto LABEL_87;
      }
LABEL_52:
      v53 = (_QWORD *)v50[4];
      if ( v53 )
      {
        v54 = v53[1];
        if ( v54 )
          v50 = (__int64 *)(*v53 + 56 * v54 - 56);
      }
      v55 = v50[1];
      if ( v55 )
      {
        v56 = v55 + 1;
        v57 = v50[1];
        v58 = *v50;
        --v55;
        if ( v50[2] >= v56 )
        {
LABEL_57:
          v50[1] = v56;
          *(_BYTE *)(v58 + v57) = 0;
          *(_BYTE *)(*v50 + v55) = 63;
          v50[3] = (v50[1] == 0) + v50[1] - 1;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, v50) )
          {
LABEL_58:
            v59 = *(_DWORD *)(a1 + 16);
            v60 = *(_QWORD *)(a1 + 8);
            if ( v59 > 0 )
            {
              while ( 1 )
              {
                v61 = *(_QWORD **)(v60 + 32);
                if ( !v61 )
                  break;
                v62 = v61[1];
                if ( !v62 )
                  break;
                ++v24;
                v60 = *v61 + 56 * v62 - 56;
                if ( v59 == v24 )
                  goto LABEL_62;
              }
              if ( !under_debugger )
                interr(3441);
              goto LABEL_87;
            }
LABEL_62:
            sub_587E10(v60, *(_DWORD *)(a1 + 56));
            v63 = *(_QWORD *)(a1 + 32);
            if ( !v63 )
              sub_587060();
            v64 = v63 - 1;
            v65 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v63 - 1);
            *(_QWORD *)(a1 + 32) = v64;
            if ( v65 )
              --*(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 48) += (*(char *)(a1 + 56) < 0) + 1;
            goto LABEL_66;
          }
LABEL_68:
          v26 = 0;
          clear_tinfo_t(v67);
LABEL_69:
          v28 = *(_DWORD *)(a1 + 16);
          v29 = *(_QWORD *)(a1 + 8);
          if ( v28 > 0 )
          {
LABEL_17:
            v30 = 0;
            while ( 1 )
            {
              v31 = *(_QWORD **)(v29 + 32);
              if ( !v31 )
                break;
              v32 = v31[1];
              if ( !v32 )
                break;
              ++v30;
              v29 = *v31 + 56 * v32 - 56;
              if ( v28 == v30 )
                goto LABEL_21;
            }
            if ( !under_debugger )
              interr(3441);
            goto LABEL_87;
          }
LABEL_21:
          sub_587E10(v29, *(_DWORD *)(a1 + 56));
          v33 = *(_QWORD *)(a1 + 32);
          if ( !v33 )
            sub_587060();
          v34 = v33 - 1;
          v35 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v33 - 1);
          *(_QWORD *)(a1 + 32) = v34;
          if ( v35 )
            --*(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 48) += (*(char *)(a1 + 56) < 0) + 1;
          goto LABEL_25;
        }
      }
      else
      {
        v58 = *v50;
        v56 = 2;
        v57 = 1;
        if ( (unsigned __int64)v50[2] >= 2 )
          goto LABEL_57;
      }
      v72 = v57;
      v70 = v56;
      v66 = qvector_reserve(v50, v58, v56, 1);
      *v50 = v66;
      v57 = v72;
      v58 = v66;
      v56 = v70;
      goto LABEL_57;
    }
    if ( idcv_attr )
      goto LABEL_58;
LABEL_13:
    v26 = sub_58A550(a1, (__int64)v80, v67, a9, 0);
    if ( (v71 & ((unsigned __int8)v26 ^ 1)) != 0 )
    {
      v69 = v71 & (v26 ^ 1);
      v27 = 0;
      v26 = 0;
      if ( (unsigned int)get_qerrno() == 1645 )
      {
        set_qerrno(0, v80);
        *(_DWORD *)(a1 + 48) = 0;
        v26 = v69;
        v27 = v12 < v74;
        *a9 &= ~0x40000000u;
        goto LABEL_15;
      }
LABEL_39:
      *(_DWORD *)(a1 + 48) = 0;
      *a9 &= ~0x40000000u;
      goto LABEL_15;
    }
    v27 = v26 & (v12 < v74);
    if ( v71 )
      goto LABEL_39;
LABEL_15:
    ++v12;
    clear_tinfo_t(v67);
    v73 += a7;
    if ( !v27 )
    {
      v28 = *(_DWORD *)(a1 + 16);
      v29 = *(_QWORD *)(a1 + 8);
      if ( v28 > 0 )
        goto LABEL_17;
      goto LABEL_21;
    }
  }
  v37 = *a2;
  if ( (_DWORD)v37 == 6 )
  {
    LODWORD(v78) = 6;
    LODWORD(v79) = a2[2] + v73;
LABEL_42:
    v80[0] = 8;
    *(_QWORD *)&v81 = &v78;
    goto LABEL_13;
  }
  if ( (int)v37 > 6 )
  {
    custom_argloc = retrieve_custom_argloc(v37, v22);
    if ( custom_argloc )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned int *, __int64, _QWORD, _QWORD))(custom_argloc + 64))(
             &v78,
             v67,
             a2,
             a3,
             v68,
             a7) )
      {
        goto LABEL_42;
      }
    }
  }
  v38 = *(_DWORD *)(a1 + 16);
  v39 = *(_QWORD *)(a1 + 8);
  v40 = 0;
  if ( v38 > 0 )
  {
    while ( 1 )
    {
      v41 = *(_QWORD **)(v39 + 32);
      if ( !v41 )
        break;
      v42 = v41[1];
      if ( !v42 )
        break;
      ++v40;
      v39 = *v41 + 56 * v42 - 56;
      if ( v38 == v40 )
        goto LABEL_32;
    }
    if ( !under_debugger )
      interr(3441);
    goto LABEL_87;
  }
LABEL_32:
  sub_587E10(v39, *(_DWORD *)(a1 + 56));
  v43 = *(_QWORD *)(a1 + 32);
  if ( !v43 )
    sub_587060();
  v44 = v43 - 1;
  v45 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v43 - 1);
  *(_QWORD *)(a1 + 32) = v44;
  if ( v45 )
    --*(_DWORD *)(a1 + 16);
  if ( *(char *)(a1 + 56) < 0 )
    v24 = 2;
  *(_DWORD *)(a1 + 48) += v24;
LABEL_66:
  v26 = 0;
  clear_tinfo_t(v67);
LABEL_25:
  free_idcv(v80);
  cleanup_argloc(&v78);
  return v26;
}

