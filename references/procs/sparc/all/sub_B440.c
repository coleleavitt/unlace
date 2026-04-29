unsigned __int64 __fastcall sub_B440(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        char a4,
        unsigned __int8 a5,
        double a6)
{
  __int64 v11; // r12
  __int64 flags; // kr00_8
  unsigned __int64 result; // rax
  __int64 v14; // r12
  char v15; // al
  __int64 v16; // rcx
  unsigned int v17; // r13d
  unsigned __int16 v18; // ax
  __int64 v19; // rsi
  int v20; // ecx
  __int64 v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 not_tail; // r15

  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
  v11 = flags;
  result = a3[1];
  switch ( a3[1] )
  {
    case 2u:
      v14 = *((_QWORD *)a3 + 2) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v15 = sub_EE50(*(unsigned __int16 *)(a2 + 24));
      v16 = 1;
      if ( v15 )
      {
        v17 = a5 + 2;
        if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 93) > 1u )
          v16 = v17;
      }
      insn_add_dref(a2, v14, (unsigned int)(char)a3[2], v16);
      return insn_create_op_data(a2, v14, (unsigned int)(char)a3[2], a3[5]);
    case 3u:
      goto LABEL_3;
    case 4u:
      sub_B2E0(a1, a2, *a3, *((unsigned __int16 *)a3 + 3), *((_QWORD *)a3 + 2), flags, a6);
      result = sub_A5C0(a2, *a3);
      v11 = result;
LABEL_3:
      if ( !a4 )
      {
        if ( (unsigned __int8)op_adds_xrefs(v11, *a3) )
        {
          v23 = insn_add_off_drefs(a2, a3, (unsigned int)a5 + 2, 132);
          if ( v23 != -1 )
            insn_create_op_data(a2, v23, (unsigned int)(char)a3[2], a3[5]);
        }
        result = getinf_flag(10, 512);
        if ( (_BYTE)result )
        {
          result = get_auto_state();
          if ( (_DWORD)result == 40 )
          {
            result = *((_WORD *)a3 + 3) & 0xFFEF;
            if ( (*((_WORD *)a3 + 3) & 0xFFEF) == 0xE )
            {
              result = is_defarg(v11, *a3);
              if ( !(_BYTE)result )
              {
                result = insn_create_stkvar(a2, a3, *((_QWORD *)a3 + 2), 1);
                if ( (_BYTE)result )
                  return op_stkvar(*(_QWORD *)(a2 + 16), *a3);
              }
            }
          }
        }
      }
      return result;
    case 5u:
      if ( a5 )
      {
        v18 = *(_WORD *)(a2 + 24);
        v19 = *a3;
        if ( v18 == 163 )
        {
          if ( !(unsigned __int8)is_defarg(flags, v19) && (unsigned int)get_auto_state() == 40 )
          {
            v25 = *((_QWORD *)a3 + 1);
            if ( v25 != -1 )
            {
              v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v25;
              if ( (unsigned __int8)is_mapped(v26) == 1 )
              {
                v19 = *a3;
                if ( v26 > 0xFFF )
                {
                  op_offset(*(_QWORD *)(a2 + 16), v19, 2, -1, 0, 0);
                  v27 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
                  LODWORD(v19) = *a3;
                  v11 = v27;
                }
                goto LABEL_34;
              }
            }
          }
          goto LABEL_33;
        }
        if ( v18 > 0xA3u )
        {
          if ( v18 == 173 || v18 == 178 )
          {
            v20 = *(unsigned __int16 *)(a2 + 86);
            goto LABEL_32;
          }
        }
        else if ( v18 == 1 || v18 == 88 )
        {
          v20 = *(unsigned __int16 *)(a2 + 46);
LABEL_32:
          v11 = sub_B2E0(a1, a2, v19, v20, *((_QWORD *)a3 + 1), flags, a6);
LABEL_33:
          LODWORD(v19) = *a3;
        }
LABEL_34:
        sub_A5C0(a2, v19);
        result = op_adds_xrefs(v11, *a3);
        if ( (_BYTE)result )
          return insn_add_off_drefs(a2, a3, 1, 4);
        return result;
      }
      if ( under_debugger )
        BUG();
      interr(10109);
      return sub_B8C0();
    case 7u:
      v21 = *((_QWORD *)a3 + 2) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( (get_flags_ex(v21, 4) & 0x600) == 0x200 )
      {
        if ( (get_flags_ex(v21, 4) & 0x600) == 0x200 )
        {
          not_tail = prev_not_tail(v21, 4, v28, v29, v30, v31, a6);
          if ( (~((unsigned __int16)get_flags_ex(not_tail, 4) >> 8) & 6) == 0 && not_tail + 4 == v21 )
          {
            del_items(not_tail, 0, 1, 0);
            auto_mark_range(not_tail, not_tail + 1, 20);
          }
        }
        else
        {
          get_flags_ex(v21, 4);
        }
      }
      if ( !(unsigned __int8)has_insn_feature(*(unsigned __int16 *)(a2 + 24), 2) )
      {
        v24 = 19;
        return insn_add_cref(a2, v21, (unsigned int)(char)a3[2], v24);
      }
      v22 = *(_QWORD *)(a2 + 16);
      result = v21 - 4 - v22;
      if ( result > 8 )
      {
        if ( !(unsigned __int8)func_does_return(v21) )
          *(_BYTE *)(a1 + 300) = 0;
        auto_apply_type(*(_QWORD *)(a2 + 16), v21);
        v24 = 17;
        return insn_add_cref(a2, v21, (unsigned int)(char)a3[2], v24);
      }
      if ( (flags & 0x800) == 0 )
        return set_cmt(v22, "mov %pc, %o7", 0);
      return result;
    default:
      return flags;
  }
}
