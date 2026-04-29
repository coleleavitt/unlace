__int64 __fastcall sub_B400(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v8; // rbp
  unsigned __int8 v9; // al
  int v11; // r14d
  int v12; // r13d
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  unsigned __int8 v21; // r12
  __int64 flags; // rax
  __int64 v23; // r14
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // r15
  unsigned int v39; // r13d
  __int64 v40; // r14
  unsigned __int8 v41; // al
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r12
  unsigned int dword; // eax
  unsigned int v51; // r12d
  unsigned int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // edx
  __int64 v56; // r12
  __int64 v57; // r12
  unsigned __int8 default_reftype; // al
  char *v59[45]; // [rsp-170h] [rbp-1E8h] BYREF
  __int64 v60; // [rsp+8h] [rbp-70h]
  __int64 v61; // [rsp+10h] [rbp-68h] BYREF
  __int64 v62; // [rsp+18h] [rbp-60h]
  unsigned __int64 v63; // [rsp+38h] [rbp-40h]

  v8 = a2;
  v9 = a3[1];
  v63 = __readfsqword(0x28u);
  v11 = a4;
  v12 = a5;
  switch ( v9 )
  {
    case 1u:
    case 3u:
      return v63 - __readfsqword(0x28u);
    case 2u:
      if ( !(_DWORD)a5 )
        goto LABEL_8;
      v21 = *a3;
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)op_adds_xrefs(flags, v21) )
        return v63 - __readfsqword(0x28u);
      return insn_add_off_drefs(a2, a3, 1, 192);
    case 4u:
      sub_8880(a2, *a3);
      if ( v11 )
        return v63 - __readfsqword(0x28u);
      v23 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      v24 = *((_WORD *)a3 + 3);
      if ( v24 == 89 )
      {
        if ( (unsigned __int8)is_defarg(v23, *a3)
          && (!(unsigned __int8)is_off(v23, 0) || !(unsigned __int8)get_refinfo(&v61, *(_QWORD *)(a2 + 16), *a3) || v62) )
        {
          netnode_supdel(*(_QWORD *)(a1 + 248), *(_QWORD *)(a2 + 16), 321);
          goto LABEL_19;
        }
        v42 = *(_QWORD *)(a2 + 8) + 4LL;
        if ( a3[5] == 2 )
          v42 &= 0xFFFFFFFFFFFFFFFCLL;
        v43 = v42 + *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
        v44 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( v43 != v44 )
        {
          v44 &= v43;
          if ( v43 == -1 )
            v44 = -1;
        }
        v45 = (unsigned int)(char)a3[2];
        if ( v12 )
        {
          if ( *(_WORD *)(a2 + 24) == 57 )
          {
            insn_add_dref(a2, v44, v45, 1);
LABEL_48:
            v60 = *(_QWORD *)(a2 + 16);
            v46 = ea2node(v44);
            v47 = *(_QWORD *)(a1 + 248);
            v61 = v46;
            netnode_supset(v47, v60, &v61, 8, 321);
            v48 = get_flags_ex(v44, 0);
            v49 = v48;
            if ( a3[5] == 2
              && (!(unsigned __int8)is_defarg(v48, 0)
               || (unsigned __int8)is_off(v49, 0) && (unsigned __int8)get_refinfo(&v61, v44, 0) && !v62) )
            {
              dword = get_dword(v44);
              if ( (unsigned __int8)is_mapped(dword) )
              {
                if ( !(unsigned __int8)is_defarg(v49, 0) )
                {
                  v57 = *(_QWORD *)a2;
                  default_reftype = get_default_reftype(v44);
                  op_offset(v44, 0, default_reftype, -1, v57, 0);
                }
                v51 = (char)a3[2];
                v52 = get_dword(v44);
                insn_add_dref(a2, v52, v51, 1);
              }
            }
            goto LABEL_19;
          }
          insn_add_dref(a2, v44, v45, 3);
        }
        else
        {
          insn_add_dref(a2, v44, v45, 2);
        }
        insn_create_op_data(a2, v44, (unsigned int)(char)a3[2], a3[5]);
        goto LABEL_48;
      }
      if ( v24 != 15 )
      {
LABEL_18:
        if ( v24 == 80 && !(unsigned __int8)is_defarg(v23, *a3) )
        {
          v55 = *((unsigned __int16 *)a3 + 3);
          qmemcpy(v59, (const void *)a2, sizeof(v59));
          if ( (unsigned __int8)sub_AD00(
                                  a1,
                                  (char *)&v61,
                                  v55,
                                  nullptr,
                                  v53,
                                  v54,
                                  (char)v59[0],
                                  (int)v59[1],
                                  v59[2],
                                  (unsigned __int16)v59[3],
                                  (int)v59[4],
                                  (__int64)v59[5],
                                  (__int64)v59[6],
                                  (__int64)v59[7],
                                  (int)v59[8],
                                  (int)v59[9],
                                  (__int64)v59[10]) )
          {
            v56 = v61;
            if ( (unsigned __int8)is_mapped(v61 + *((_QWORD *)a3 + 2)) )
              op_offset(*(_QWORD *)(a2 + 16), *a3, 130, -1, v56, 0);
          }
        }
        goto LABEL_19;
      }
      if ( !(unsigned __int8)getinf_flag(10, 512)
        || (unsigned int)get_auto_state() != 40
        || (unsigned __int8)is_defarg(v23, *a3) )
      {
        v24 = *((_WORD *)a3 + 3);
        goto LABEL_18;
      }
      if ( get_func(*(_QWORD *)(a2 + 16)) && (unsigned __int8)insn_create_stkvar(a2, a3, *((_QWORD *)a3 + 2), 1) )
        op_stkvar(*(_QWORD *)(a2 + 16), *a3);
LABEL_19:
      v25 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)op_adds_xrefs(v25, *a3) )
        return v63 - __readfsqword(0x28u);
      v26 = insn_add_off_drefs(a2, a3, 2 - ((unsigned int)(v12 == 0) - 1), 196);
      if ( v26 == -1 )
        return v63 - __readfsqword(0x28u);
      v27 = a3[5];
      v28 = (unsigned int)(char)a3[2];
      return insn_create_op_data(v8, v26, v28, v27);
    case 5u:
      if ( !(_DWORD)a5 )
        goto LABEL_8;
      sub_8880(a2, *a3);
      v13 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( (unsigned __int8)is_defarg(v13, *a3) )
        goto LABEL_4;
      v37 = *((_QWORD *)a3 + 1);
      if ( a3[5] != 2 || v37 == -1 )
        goto LABEL_34;
      if ( (unsigned __int8)is_mapped(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v37) )
        goto LABEL_35;
      v37 = *((_QWORD *)a3 + 1);
LABEL_34:
      if ( sub_F240(a1, (unsigned int)v37) )
      {
LABEL_35:
        v38 = *(_QWORD *)(a2 + 16);
        v39 = *a3;
        v40 = *(_QWORD *)a2;
        v41 = get_default_reftype(v38);
        op_offset(v38, v39, v41, -1, v40, 0);
        v13 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      }
LABEL_4:
      if ( (unsigned __int8)op_adds_xrefs(v13, *a3) )
        insn_add_off_drefs(a2, a3, 1, 64);
      v14 = netnode_altval(*(_QWORD *)(a1 + 248), *(_QWORD *)(a2 + 16), 321);
      v15 = node2ea(v14);
      v16 = v15;
      if ( !v15 )
        return v63 - __readfsqword(0x28u);
      insn_add_dref(a2, v15, (unsigned int)(char)a3[2], 3);
      v27 = a3[5];
      v28 = (unsigned int)(char)a3[2];
      v26 = v16;
      return insn_create_op_data(v8, v26, v28, v27);
    case 7u:
      v29 = *(_QWORD *)(a1 + 32);
      v30 = *(_QWORD *)(v29 + 16);
      v31 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
      if ( v31 != v30 )
      {
        v30 &= v31;
        if ( v31 == -1 )
          v30 = -1;
      }
      v32 = has_insn_feature(*(unsigned __int16 *)(a2 + 24), 2, v29, a4, a5, a6);
      v36 = 19;
      if ( v32 )
      {
        if ( !(unsigned __int8)has_insn_feature(*(unsigned __int16 *)(a2 + 24), 0x8000, v33, 19, v34, v35)
          && !(unsigned __int8)func_does_return(v30) )
        {
          *(_DWORD *)(a1 + 3168) = 0;
        }
        v36 = 17;
      }
      return insn_add_cref(a2, v30, (unsigned int)(char)a3[2], v36);
    default:
LABEL_8:
      v18 = *(_QWORD *)(a1 + 16);
      v19 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v20 = *(_DWORD *)(v18 + 104);
      if ( v19 >= v20 && v19 < *(_DWORD *)(v18 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v18 + 112) + 16LL * (v19 - v20));
      return sub_9380((__int64)"%a: %s,%d: bad optype %d", a7, *(const char **)(v8 + 16), a2, *a3);
  }
}
