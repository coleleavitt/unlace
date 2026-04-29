__int64 __fastcall sub_380880(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  unsigned __int64 v4; // r15
  _QWORD *v6; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 func; // rax
  __int16 flags; // ax
  unsigned __int64 not_tail; // rcx
  __int64 v18; // rdi
  __int64 (*v19)(); // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v27[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v6 = *(_QWORD **)(a1 + 8);
  v26 = a2;
  v28[3] = (__int64 *)__readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_7;
  v8 = 24;
  v9 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 )
  {
LABEL_3:
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 24);
      v8 = v9 + 24;
      if ( a2 < v10 )
      {
        v9 = *(_QWORD *)(v9 + 8);
        goto LABEL_3;
      }
      if ( v10 >= a2 )
        break;
      v9 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_7;
    }
    if ( v6 == (_QWORD *)v9 )
      goto LABEL_7;
  }
  if ( (*(_BYTE *)(v8 + 56) & 0x3F) == 0x30 )
  {
    v6 = (_QWORD *)v9;
  }
  else
  {
    if ( !a4 || sub_32CB80((_BYTE *)(v9 + 80), *(_QWORD *)a1) )
      return v8 + 8;
    v4 = v26;
    v6 = (_QWORD *)v9;
  }
LABEL_7:
  v11 = *(_QWORD *)(a1 + 40);
  if ( !v11 )
    goto LABEL_14;
  v12 = a1 + 32;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_QWORD *)(v11 + 24);
      if ( *(_QWORD *)(v11 + 32) < v4 )
        break;
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v13 )
        goto LABEL_12;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v14 );
LABEL_12:
  if ( a1 + 32 == v12 || v4 < *(_QWORD *)(v12 + 32) )
  {
LABEL_14:
    v27[0] = 0;
    get_tinfo();
    func = get_func();
    if ( func && *(_QWORD *)func == v26 && *(char *)(func + 16) < 0 )
    {
      v27[1] = -1;
      if ( calc_thunk_func_target() == -1 || !(unsigned __int8)get_tinfo() )
        not_tail = v26;
      else
        not_tail = v26;
    }
    else
    {
      flags = get_flags_ex();
      not_tail = v26;
      if ( (flags & 0x600) == 0x200 )
        not_tail = prev_not_tail();
      if ( v26 != not_tail )
      {
        get_tinfo();
        not_tail = v26;
      }
    }
    v18 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
    v19 = *(__int64 (**)())(*(_QWORD *)v18 + 152LL);
    if ( v19 != sub_339280 )
    {
      ((void (__fastcall *)(__int64, unsigned __int64, _QWORD *))v19)(v18, not_tail, v27);
      if ( LOBYTE(v27[0]) )
      {
        a3 = 1;
LABEL_42:
        if ( !sub_32CB80(v27, *(_QWORD *)a1) )
        {
          sub_369F00(a1 + 24, v26);
          if ( v25 )
          {
            *(_QWORD *)(operator new(0x28u) + 32) = v26;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(a1 + 64);
          }
          v28[0] = (_QWORD *)&dword_30;
          copy_tinfo_t();
          clear_tinfo_t();
        }
        v11 = (unsigned __int64)(v6 + 4);
        if ( *(_QWORD **)(a1 + 8) == v6 )
        {
          v28[0] = (__int64 *)&v26;
          v11 = sub_37ED50((__m128i *)(a1 + 8), &v26, v28) + 32;
        }
        v23 = v27[0];
        v24 = *(_QWORD *)(v11 + 48);
        *(_DWORD *)(v11 + 56) = a3;
        *(_QWORD *)(v11 + 48) = v23;
        v27[0] = v24;
        clear_tinfo_t();
        return v11;
      }
      not_tail = v26;
    }
    sub_338B00(not_tail);
    if ( LOBYTE(v27[0]) )
    {
      a3 = 1;
    }
    else
    {
      if ( a3 == 3 )
        v20 = guess_tinfo();
      else
        v20 = sub_338DC0(*(_QWORD *)a1, v26, v27);
      if ( v20 )
      {
        sub_369F00(a1 + 72, v26);
        if ( v21 )
        {
          *(_QWORD *)(operator new(0x28u) + 32) = v26;
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(a1 + 112);
        }
      }
      else
      {
        v28[0] = (_QWORD *)&dword_30;
        copy_tinfo_t();
        clear_tinfo_t();
      }
      if ( a3 <= 1 )
        a3 = 3;
    }
    goto LABEL_42;
  }
  return v11;
}
