__int64 __fastcall sub_14A080(int *a1, __int64 *a2)
{
  __int64 v4; // rbp
  __int64 not_tail; // r14
  __int64 *v6; // rax
  unsigned __int64 *v7; // rax
  __int64 *func; // rax
  __int64 v9; // r13
  char v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  _QWORD *v14; // rax
  int v15; // r13d
  __int64 v16; // rdi
  __int64 v17; // r12
  int v18; // r12d
  __int64 qword; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-1B8h]
  __int64 v25; // [rsp+8h] [rbp-1B0h]
  char v26; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v27; // [rsp+178h] [rbp-40h] BYREF

  v27 = __readfsqword(0x28u);
  if ( dword_25274C >= 0 )
    return 0;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  if ( !(unsigned int)sub_CF240(*a1, a2) )
  {
    v24 = sub_CFA40((__int64)a1, -1);
    if ( !v24 )
      return 0;
    if ( sub_9E360() <= 0 )
    {
      if ( dword_24516C == -1 )
        return 0;
      v4 = -1;
      not_tail = sub_CE400(*(_QWORD *)(v24 + 32LL * dword_245174 + 8), v24, dword_245174);
      if ( dword_24516C != -1 )
        v4 = sub_CE400(*(_QWORD *)(v24 + 32LL * dword_24516C + 8), v24, dword_24516C);
      v6 = (__int64 *)getseg();
      if ( !v6 )
        return 0;
      v25 = *v6;
      v7 = (unsigned __int64 *)&v26;
      do
      {
        *(_WORD *)v7 = 0;
        v7 += 5;
        *((_WORD *)v7 - 19) = 0;
        *((_WORD *)v7 - 18) = 0;
        *((_DWORD *)v7 - 2) = 0;
        *((_WORD *)v7 - 17) = 0;
        *((_OWORD *)v7 - 2) = 0;
        *(v7 - 2) = 0;
      }
      while ( &v27 != v7 );
      while ( 1 )
      {
LABEL_15:
        func = (__int64 *)get_func();
        if ( func )
        {
          v9 = *func;
          v10 = 1;
        }
        else
        {
          v23 = (__int64 *)getseg();
          if ( !v23 )
            return 1;
          v9 = *v23;
          v10 = 0;
        }
        v11 = a2[1];
        v12 = *a2;
        if ( a2[2] < (unsigned __int64)(v11 + 1) )
        {
          v22 = qvector_reserve();
          *a2 = v22;
          v12 = v22;
          v11 = a2[1];
        }
        v13 = 32 * v11 + v12;
        *(_BYTE *)(v13 + 24) = v10;
        *(_QWORD *)v13 = not_tail;
        *(_QWORD *)(v13 + 8) = v9;
        *(_QWORD *)(v13 + 16) = v4;
        ++a2[1];
        getinf_flag();
        set_debug_name();
        set_debug_name();
        v14 = (_QWORD *)getseg();
        if ( !v14 || *v14 != v25 )
          break;
        v15 = dword_245174;
        v16 = (unsigned __int8)getinf_flag() ? get_qword() : (unsigned int)get_dword();
        v17 = sub_CE400(v16, v24, v15);
        if ( !(unsigned __int8)is_mapped() )
          break;
        not_tail = v17 - 1;
        if ( (get_flags_ex() & 0x200) != 0 )
        {
          if ( (get_flags_ex() & 0x600) == 0x200 )
            not_tail = prev_not_tail();
        }
        else
        {
          not_tail = v17 - 16;
          while ( (unsigned int)decode_insn() != (_DWORD)v17 - (_DWORD)not_tail || !(unsigned __int8)is_call_insn() )
          {
            if ( v17 == ++not_tail )
              goto LABEL_27;
          }
          create_insn();
        }
LABEL_27:
        v18 = dword_24516C;
        if ( (unsigned __int8)getinf_flag() )
          qword = get_qword();
        else
          qword = (unsigned int)get_dword();
        v4 = sub_CE400(qword, v24, v18);
        v20 = *a2;
        v21 = *a2 + 32 * a2[1];
        if ( v21 != *a2 )
        {
          while ( *(_QWORD *)(v20 + 16) != v4 )
          {
            v20 += 32;
            if ( v20 == v21 )
              goto LABEL_15;
          }
          return 1;
        }
      }
    }
  }
  return 1;
}

