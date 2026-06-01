__int64 __fastcall sub_149900(int *a1, __int64 *a2)
{
  int v4; // ebp
  int not_tail; // r12d
  int *v6; // rax
  unsigned __int64 *v7; // rax
  int *func; // rax
  int v9; // r14d
  char v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  _DWORD *v14; // rax
  int v15; // r13d
  unsigned int v16; // edi
  int v17; // r13d
  int v18; // r13d
  unsigned int qword; // edi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // r15d
  int *v24; // rax
  __int64 v25; // [rsp+0h] [rbp-128h]
  int v26; // [rsp+Ch] [rbp-11Ch]
  char v27; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int64 v28; // [rsp+E8h] [rbp-40h] BYREF

  v28 = __readfsqword(0x28u);
  if ( dword_2515A4 >= 0 )
    return 0;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  if ( !(unsigned int)sub_CDC80(*a1, a2) )
  {
    v25 = sub_CE480((__int64)a1, -1);
    if ( !v25 )
      return 0;
    if ( sub_9E220() <= 0 )
    {
      if ( dword_244114 == -1 )
        return 0;
      v4 = -1;
      not_tail = sub_CCE60(*(_DWORD *)(v25 + 32LL * dword_24411C + 8), v25, dword_24411C);
      if ( dword_244114 != -1 )
        v4 = sub_CCE60(*(_DWORD *)(v25 + 32LL * dword_244114 + 8), v25, dword_244114);
      v6 = (int *)getseg();
      if ( !v6 )
        return 0;
      v26 = *v6;
      v7 = (unsigned __int64 *)&v27;
      do
      {
        *(_WORD *)v7 = 0;
        v7 += 3;
        *((_WORD *)v7 - 11) = 0;
        *((_WORD *)v7 - 10) = 0;
        *((_DWORD *)v7 - 1) = 0;
        *((_WORD *)v7 - 9) = 0;
        *(v7 - 2) = 0;
        *((_DWORD *)v7 - 2) = 0;
      }
      while ( v7 != &v28 );
      while ( 1 )
      {
LABEL_15:
        func = (int *)get_func();
        if ( func )
        {
          v9 = *func;
          v10 = 1;
        }
        else
        {
          v24 = (int *)getseg();
          if ( !v24 )
            return 1;
          v9 = *v24;
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
        v13 = 16 * v11 + v12;
        *(_DWORD *)v13 = not_tail;
        *(_DWORD *)(v13 + 4) = v9;
        *(_DWORD *)(v13 + 8) = v4;
        *(_BYTE *)(v13 + 12) = v10;
        ++a2[1];
        getinf_flag();
        set_debug_name();
        set_debug_name();
        v14 = (_DWORD *)getseg();
        if ( !v14 || *v14 != v26 )
          break;
        v15 = dword_24411C;
        v16 = (unsigned __int8)getinf_flag() ? get_qword() : get_dword();
        v17 = sub_CCE60(v16, v25, v15);
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
          v23 = 16;
          do
          {
            not_tail = v17 - v23;
            if ( (unsigned int)decode_insn() == v23 && (unsigned __int8)is_call_insn() )
            {
              create_insn();
              goto LABEL_27;
            }
            --v23;
          }
          while ( v23 );
          not_tail = v17;
        }
LABEL_27:
        v18 = dword_244114;
        if ( (unsigned __int8)getinf_flag() )
          qword = get_qword();
        else
          qword = get_dword();
        v4 = sub_CCE60(qword, v25, v18);
        v20 = *a2;
        v21 = *a2 + 16 * a2[1];
        if ( v21 != *a2 )
        {
          while ( *(_DWORD *)(v20 + 8) != v4 )
          {
            v20 += 16;
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

