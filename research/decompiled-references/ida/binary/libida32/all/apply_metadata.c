unsigned __int64 __fastcall apply_metadata(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 func; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall **v10)(); // rdi
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  unsigned int i; // ebx
  __int64 flags; // rax
  __int64 v15; // rbp
  unsigned int j; // r15d
  int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 k; // rbp
  __int64 v20; // [rsp+8h] [rbp-B0h]
  int v21; // [rsp+18h] [rbp-A0h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  __int64 (__fastcall **v24)(); // [rsp+30h] [rbp-88h] BYREF
  __int128 v25; // [rsp+38h] [rbp-80h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  __int64 v27; // [rsp+50h] [rbp-68h]
  __int64 v28; // [rsp+58h] [rbp-60h]
  int v29; // [rsp+60h] [rbp-58h]
  __int64 v30; // [rsp+68h] [rbp-50h]
  int v31; // [rsp+70h] [rbp-48h]
  char v32; // [rsp+74h] [rbp-44h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v3 = a3 & 1;
  v21 = a1;
  v33 = __readfsqword(0x28u);
  v23 = qword_2CA1698;
  func = get_func(a1);
  v20 = func;
  if ( func )
  {
    v5 = *(_QWORD *)(func + 8);
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
        *(_QWORD *)(v20 + 8) = v7;
        update_func(v20);
        goto LABEL_7;
      }
    }
    else
    {
      sub_7B8EB0((unsigned int *)v20);
      if ( !v3 )
      {
        v5 = *(_QWORD *)(v20 + 8);
        goto LABEL_4;
      }
    }
    set_name(a1, (void *)&byte_22CD811);
    set_tinfo((unsigned int)a1, 0);
    clr_abits((unsigned int)a1, 3254779904LL);
    v24 = nullptr;
    *(_QWORD *)((char *)&v25 + 4) = 0;
    func_tail_iterator_set(&v24, v20, 0xFFFFFFFFLL);
    v10 = v24;
    LODWORD(v25) = -1;
    if ( v24 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)v10;
        v12 = *((_DWORD *)v10 + 1);
        for ( i = *(_DWORD *)v10; i < v12; i = next_that(i, v12, sub_7B5B90, 0) )
        {
          flags = get_flags_ex(i, 0);
          v15 = flags;
          if ( (v11 < i || (flags & 0x800) != 0)
            && (set_cmt(i, &byte_22CD811, 0), set_cmt(i, &byte_22CD811, 1), v11 < i)
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
        if ( (int)v25 + 1 >= *((_DWORD *)v24 + 26) )
        {
          lock_func_range(v24, 0);
          break;
        }
        LODWORD(v25) = v25 + 1;
        if ( v17 >= 0 )
          v10 = (__int64 (__fastcall **)())((char *)v24[14] + 8 * v17);
      }
    }
    set_func_cmt(v20, &byte_22CD811, 0);
    set_func_cmt(v20, &byte_22CD811, 1);
    v18 = 0;
    for ( k = sub_59F910(v23, v20); v18 < *(unsigned int *)(v20 + 40); ++v18 )
    {
      if ( (get_aflags(*(unsigned int *)(k + 8 * v18)) & 2) != 0 )
        del_stkpnt(v20, *(unsigned int *)(k + 8 * v18));
    }
    del_frame(v20);
    v5 = *(_QWORD *)(v20 + 8);
    goto LABEL_4;
  }
  if ( v3 )
  {
    set_name(a1, (void *)&byte_22CD811);
    set_tinfo((unsigned int)a1, 0);
    clr_abits((unsigned int)a1, 3254779904LL);
  }
LABEL_7:
  if ( *(_QWORD *)(a2 + 8) > 1u )
    set_name(v21, *(void **)a2);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  *(_QWORD *)&v25 = a2 + 32;
  *((_QWORD *)&v25 + 1) = *(_QWORD *)(a2 + 32);
  v26 = *(_QWORD *)(a2 + 40) + *((_QWORD *)&v25 + 1);
  v24 = off_2B11578;
  v30 = v20;
  v31 = v21;
  v32 = a3 & 1;
  sub_7D8380(&v24);
  return v33 - __readfsqword(0x28u);
}

