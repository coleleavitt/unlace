unsigned __int64 __fastcall sub_18980(__int64 a1, __int64 a2, unsigned __int8 *a3, _QWORD *a4, __int64 a5, __int64 *a6)
{
  __int64 *v8; // r15
  unsigned __int8 v9; // al
  bool v10; // al
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // r12d
  unsigned __int8 default_reftype; // al
  __int64 func; // rax
  int v18; // edx
  unsigned int v19; // ebp
  __int64 v20; // rax
  bool v21; // al
  __int64 v22; // rdx
  __int64 *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 *v26; // rax
  unsigned int v27; // ebp
  __int64 flags; // rax
  bool v29; // al
  __int64 v30; // r8
  unsigned __int16 v31; // [rsp+16h] [rbp-212h]
  __int64 v32; // [rsp+18h] [rbp-210h] BYREF
  __int64 v33; // [rsp+20h] [rbp-208h] BYREF
  __int64 v34; // [rsp+28h] [rbp-200h] BYREF
  __int64 v35; // [rsp+30h] [rbp-1F8h] BYREF
  __int128 v36; // [rsp+38h] [rbp-1F0h]
  _QWORD v37[2]; // [rsp+50h] [rbp-1D8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-1C8h]
  __int64 v39; // [rsp+70h] [rbp-1B8h]
  __int128 v40; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v41; // [rsp+90h] [rbp-198h]
  __int64 v42; // [rsp+98h] [rbp-190h]
  __int64 v43; // [rsp+A0h] [rbp-188h]
  char v44; // [rsp+A8h] [rbp-180h] BYREF
  unsigned __int64 v45; // [rsp+1E8h] [rbp-40h] BYREF

  v32 = a5;
  v45 = __readfsqword(0x28u);
  v8 = a6;
  v36 = 0;
  v35 = 0;
  if ( !a6 )
    v8 = &v35;
  v9 = a3[1];
  if ( v9 == 4 )
  {
    func = get_func(*(_QWORD *)(a2 + 16));
    v18 = *((unsigned __int16 *)a3 + 3);
    if ( v18 == 2 || func && (*(_BYTE *)(func + 16) & 0x10) != 0 && v18 == 8 )
    {
      v27 = *a3;
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( (unsigned __int8)is_stkvar(flags, v27) )
      {
        v29 = sub_15A40(a2, (__int64)a3, a4);
        v30 = v32;
        v37[0] = 0;
        if ( v29 )
        {
          copy_tinfo_t(v37, a4);
          v30 = v32;
        }
        apply_tinfo_to_stkarg(a2, a3, *((_QWORD *)a3 + 2), v37, v30);
        clear_tinfo_t(v37);
      }
    }
    else
    {
      v19 = *a3;
      v20 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( (unsigned __int8)is_off(v20, v19)
        && (unsigned __int8)get_refinfo(v37, *(_QWORD *)(a2 + 16), *a3)
        && (unsigned __int8)calc_reference_data(&v33, 0, *(_QWORD *)(a2 + 16) + (char)a3[2], v37, *((_QWORD *)a3 + 2)) )
      {
        v21 = sub_15A40(a2, (__int64)a3, a4);
        v22 = v32;
        v34 = 0;
        if ( v21 )
        {
          copy_tinfo_t(&v34, a4);
          v22 = v32;
        }
        apply_once_tinfo_and_name(v33, &v34, v22);
        clear_tinfo_t(&v34);
      }
    }
  }
  else if ( v9 > 4u )
  {
    if ( v9 != 5 )
      return v45 - __readfsqword(0x28u);
    if ( (get_tinfo_property(*a4, 2) & 0xF) == 0xA && *((_QWORD *)a3 + 1) )
    {
      v12 = *a3;
      v13 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)is_defarg(v13, v12) )
      {
        v14 = *(_QWORD *)(a2 + 16);
        v15 = *a3;
        default_reftype = get_default_reftype(v14);
        op_offset(v14, v15, default_reftype, -1, 0, 0);
      }
      v37[0] = 0;
      copy_tinfo_t(v37, a4);
      if ( (unsigned __int8)remove_tinfo_pointer(v37, &v32, 0) )
        apply_once_tinfo_and_name(*((_QWORD *)a3 + 1) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), v37, v32);
      clear_tinfo_t(v37);
    }
  }
  else if ( v9 == 1 )
  {
    v31 = *((_WORD *)a3 + 3);
    v23 = (__int64 *)get_func(*(_QWORD *)(a2 + 16));
    if ( v23 )
    {
      v24 = *(_QWORD *)(a2 + 16);
      v37[0] = 0;
      v37[1] = 0xFFFFFFFFLL;
      v39 = -1;
      v25 = v24;
      v38 = 0;
      if ( v24 == -1 )
        v25 = *v23;
      v39 = v25;
      if ( (unsigned __int8)func_tail_iterator_set(v37, v23) )
      {
        v41 = -1;
        v26 = (unsigned __int64 *)&v44;
        v42 = 0;
        v43 = 0;
        v40 = -1;
        do
        {
          *(_WORD *)v26 = 0;
          v26 += 5;
          *((_WORD *)v26 - 19) = 0;
          *((_WORD *)v26 - 18) = 0;
          *((_DWORD *)v26 - 2) = 0;
          *((_WORD *)v26 - 17) = 0;
          *((_OWORD *)v26 - 2) = 0;
          *(v26 - 2) = 0;
        }
        while ( &v45 != v26 );
        while ( (unsigned __int8)func_item_iterator_decode_preceding_insn(v37, v8, &v34, &v40, 0.0)
             && (unsigned __int64)v8[1] <= 0x1000 )
        {
          if ( !(_BYTE)v34 && (unsigned __int8)sub_17AE0(a1, (__int64)&v40, v31) )
          {
            sub_18790(a1, (__int64)&v40, (__int64)a4, v32, v8);
LABEL_42:
            if ( v37[0] )
              lock_func_range(v37[0], 0);
            if ( v35 )
            {
              *(_QWORD *)&v36 = 0;
              qfree(v35);
            }
            return v45 - __readfsqword(0x28u);
          }
        }
        if ( *v23 == v39 )
        {
          add_regarg(v23, v31, a4, v32);
          goto LABEL_42;
        }
        if ( v37[0] )
          lock_func_range(v37[0], 0);
      }
      else if ( v37[0] )
      {
        lock_func_range(v37[0], 0);
      }
    }
  }
  else
  {
    if ( v9 != 2 )
      return v45 - __readfsqword(0x28u);
    v10 = sub_15A40(a2, (__int64)a3, a4);
    v37[0] = 0;
    if ( v10 )
      copy_tinfo_t(v37, a4);
    apply_once_tinfo_and_name(*((_QWORD *)a3 + 2), v37, v32);
    clear_tinfo_t(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  return v45 - __readfsqword(0x28u);
}
