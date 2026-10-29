unsigned __int64 __fastcall apply_metadata(void *a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 func; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall **v10)(); // rdi
  __int64 (__fastcall *v11)(); // r13
  unsigned __int64 v12; // r12
  __int64 (__fastcall *i)(); // rbx
  __int64 flags; // rax
  __int64 v15; // rbp
  unsigned int j; // r15d
  int v17; // eax
  unsigned __int64 v18; // rbx
  _QWORD *k; // rbp
  __int64 v20; // [rsp+0h] [rbp-C8h]
  __int64 v23; // [rsp+28h] [rbp-A0h]
  __int64 (__fastcall **v24)(); // [rsp+30h] [rbp-98h] BYREF
  __int64 v25; // [rsp+38h] [rbp-90h]
  __int128 v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+50h] [rbp-78h]
  __int64 v28; // [rsp+58h] [rbp-70h]
  int v29; // [rsp+60h] [rbp-68h]
  __int64 v30; // [rsp+68h] [rbp-60h]
  void *v31; // [rsp+70h] [rbp-58h]
  char v32; // [rsp+78h] [rbp-50h]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v3 = a3 & 1;
  v33 = __readfsqword(0x28u);
  v23 = qword_2CCB598;
  func = get_func(a1);
  v20 = func;
  if ( func )
  {
    v5 = *(_QWORD *)(func + 16);
    if ( (v5 & 0x10000) != 0 )
    {
      if ( !v3 )
      {
LABEL_4:
        v6 = v5;
        v7 = v5 & 0xFFFFFFFFFFFEFFFFLL;
        v8 = v6 | 0x10000;
        if ( (a3 & 0x10000) == 0 )
          v7 = v8;
        *(_QWORD *)(v20 + 16) = v7;
        update_func(v20);
        goto LABEL_7;
      }
    }
    else
    {
      sub_7DC260((_QWORD *)v20);
      if ( !v3 )
      {
        v5 = *(_QWORD *)(v20 + 16);
        goto LABEL_4;
      }
    }
    set_name((int)a1, (void *)&byte_22F0C30);
    set_tinfo(a1, 0);
    clr_abits(a1, -1040187392);
    v24 = nullptr;
    v26 = 0;
    func_tail_iterator_set(&v24, v20, -1);
    v10 = v24;
    LODWORD(v25) = -1;
    if ( v24 )
    {
      while ( 1 )
      {
        v11 = *v10;
        v12 = (unsigned __int64)v10[1];
        for ( i = *v10; (unsigned __int64)i < v12; i = (__int64 (__fastcall *)())next_that(i, v12, sub_7D8F60, 0) )
        {
          flags = get_flags_ex(i, 0);
          v15 = flags;
          if ( ((unsigned __int64)v11 < (unsigned __int64)i || (flags & 0x800) != 0)
            && (set_cmt(i, &byte_22F0C30, 0), set_cmt(i, &byte_22F0C30, 1), (unsigned __int64)v11 < (unsigned __int64)i)
            || (v15 & 0x2000) != 0 )
          {
            delete_extra_cmts(i, 1000);
            delete_extra_cmts(i, 2000);
          }
          for ( j = 0; j != 8; ++j )
          {
            while ( !(unsigned __int8)is_defarg(v15, j) )
            {
              if ( ++j == 8 )
                goto LABEL_22;
            }
            clr_op_type(i, j);
          }
LABEL_22:
          ;
        }
        v10 = v24;
        if ( !v24 )
          break;
        v17 = v25 + 1;
        if ( (int)v25 + 1 >= *((_DWORD *)v24 + 32) )
        {
          lock_func_range(v24, 0);
          break;
        }
        LODWORD(v25) = v25 + 1;
        if ( v17 >= 0 )
          v10 = (__int64 (__fastcall **)())((char *)v24[17] + 16 * v17);
      }
    }
    set_func_cmt(v20, &byte_22F0C30, 0);
    set_func_cmt(v20, &byte_22F0C30, 1);
    v18 = 0;
    for ( k = (_QWORD *)sub_5B9D70(v23, v20); v18 < *(unsigned int *)(v20 + 68); k += 2 )
    {
      if ( (get_aflags(*k) & 2) != 0 )
        del_stkpnt(v20, *k);
      ++v18;
    }
    del_frame(v20);
    v5 = *(_QWORD *)(v20 + 16);
    goto LABEL_4;
  }
  if ( v3 )
  {
    set_name((int)a1, (void *)&byte_22F0C30);
    set_tinfo(a1, 0);
    clr_abits(a1, -1040187392);
  }
LABEL_7:
  if ( *(_QWORD *)(a2 + 8) > 1u )
    set_name((int)a1, *(void **)a2);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v25 = a2 + 32;
  *(_QWORD *)&v26 = *(_QWORD *)(a2 + 32);
  *((_QWORD *)&v26 + 1) = *(_QWORD *)(a2 + 40) + v26;
  v24 = off_2B3B518;
  v30 = v20;
  v31 = a1;
  v32 = a3 & 1;
  sub_7FB500(&v24);
  return v33 - __readfsqword(0x28u);
}
