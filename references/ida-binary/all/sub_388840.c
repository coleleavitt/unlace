__int64 __fastcall sub_388840(int *a1, __int64 *a2, __int64 a3, char *a4, double a5)
{
  __int64 v7; // rdi
  __int64 v9; // rdx
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 not_tail; // r14
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned __int64 *v17; // rax
  __int64 *func; // rax
  __int64 v19; // r13
  char v20; // r12
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned __int64 v24; // r12
  _QWORD *v25; // rax
  unsigned int v26; // r13d
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // r12d
  __int64 qword; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 *v39; // rax
  __int64 v40; // [rsp+0h] [rbp-1B8h]
  __int64 v41; // [rsp+8h] [rbp-1B0h]
  __int128 v42; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v43; // [rsp+20h] [rbp-198h]
  __int64 v44; // [rsp+28h] [rbp-190h]
  __int64 v45; // [rsp+30h] [rbp-188h]
  char v46; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v47; // [rsp+178h] [rbp-40h] BYREF

  v47 = __readfsqword(0x28u);
  if ( dword_8CC5F0 >= 0 )
    return 0;
  v7 = *a2;
  if ( *a2 )
  {
    a2[1] = 0;
    a5 = qfree(v7, (const char *)a2);
    *a2 = 0;
    a2[2] = 0;
  }
  if ( !(unsigned int)sub_23E9C0(*a1, a2, a3, a4, a5) )
  {
    v11 = sub_23F1C0((__int64)a1, -1, a5, v9, v10);
    v40 = v11;
    v12 = v11;
    if ( !v11 )
      return 0;
    if ( sub_1E73C0(0x3F1u, a2, (unsigned int)*a1, sub_23F5C0, v11) <= 0 )
    {
      if ( dword_8BA58C == -1 )
        return 0;
      v13 = -1;
      not_tail = sub_23DB80(*(_QWORD *)(v12 + 32LL * dword_8BA594 + 8), v12, dword_8BA594, a5);
      if ( dword_8BA58C != -1 )
        v13 = sub_23DB80(*(_QWORD *)(v12 + 32LL * dword_8BA58C + 8), v12, (unsigned int)dword_8BA58C, a5);
      v15 = (__int64 *)getseg(v13);
      if ( !v15 )
        return 0;
      v16 = *v15;
      v43 = -1;
      v44 = 0;
      v45 = 0;
      v41 = v16;
      v17 = (unsigned __int64 *)&v46;
      v42 = -1;
      do
      {
        *(_WORD *)v17 = 0;
        v17 += 5;
        *((_WORD *)v17 - 19) = 0;
        *((_WORD *)v17 - 18) = 0;
        *((_DWORD *)v17 - 2) = 0;
        *((_WORD *)v17 - 17) = 0;
        *((_OWORD *)v17 - 2) = 0;
        *(v17 - 2) = 0;
      }
      while ( &v47 != v17 );
      while ( 1 )
      {
LABEL_15:
        func = (__int64 *)get_func(not_tail);
        if ( func )
        {
          v19 = *func;
          v20 = 1;
        }
        else
        {
          v39 = (__int64 *)getseg(not_tail);
          if ( !v39 )
            return 1;
          v19 = *v39;
          v20 = 0;
        }
        v21 = a2[1];
        v22 = *a2;
        if ( a2[2] < (unsigned __int64)(v21 + 1) )
        {
          v37 = qvector_reserve(a2, v22, v21 + 1, 32);
          *a2 = v37;
          v22 = v37;
          v21 = a2[1];
        }
        v23 = 32 * v21 + v22;
        *(_BYTE *)(v23 + 24) = v20;
        *(_QWORD *)v23 = not_tail;
        *(_QWORD *)(v23 + 8) = v19;
        *(_QWORD *)(v23 + 16) = v13;
        ++a2[1];
        v24 = v13 + (-(__int64)((unsigned __int8)getinf_flag(3, 4) == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8;
        set_debug_name(v13, "saved_fp");
        set_debug_name(v24, "retaddr");
        v25 = (_QWORD *)getseg(v13);
        if ( !v25 || *v25 != v41 )
          break;
        v26 = dword_8BA594;
        v27 = (unsigned __int8)getinf_flag(3, 4) ? get_qword(v24) : (unsigned int)get_dword(v24);
        v28 = sub_23DB80(v27, v40, v26, 0.0);
        if ( !(unsigned __int8)is_mapped(v28) )
          break;
        not_tail = v28 - 1;
        if ( (get_flags_ex(v28 - 1, 4) & 0x200) != 0 )
        {
          if ( (get_flags_ex(v28 - 1, 4) & 0x600) == 0x200 )
            not_tail = prev_not_tail(v28 - 1);
        }
        else
        {
          not_tail = v28 - 16;
          while ( 1 )
          {
            v38 = decode_insn(&v42, not_tail, v29, v30, v31, v32, 0.0);
            v29 = v38;
            if ( v38 == (_DWORD)v28 - (_DWORD)not_tail )
            {
              if ( (unsigned __int8)is_call_insn(&v42) )
                break;
            }
            if ( v28 == ++not_tail )
              goto LABEL_27;
          }
          create_insn(not_tail, 0);
        }
LABEL_27:
        v33 = dword_8BA58C;
        if ( (unsigned __int8)getinf_flag(3, 4) )
          qword = get_qword(v13);
        else
          qword = (unsigned int)get_dword(v13);
        v13 = sub_23DB80(qword, v40, v33, 0.0);
        v35 = *a2;
        v36 = *a2 + 32 * a2[1];
        if ( v36 != *a2 )
        {
          while ( *(_QWORD *)(v35 + 16) != v13 )
          {
            v35 += 32;
            if ( v35 == v36 )
              goto LABEL_15;
          }
          return 1;
        }
      }
    }
  }
  return 1;
}
