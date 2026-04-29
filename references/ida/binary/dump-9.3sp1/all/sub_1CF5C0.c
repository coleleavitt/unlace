__int64 __fastcall sub_1CF5C0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  char j; // bp
  __int64 *func; // rax
  __int64 *v7; // r12
  int v8; // eax
  char i; // al
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r12
  int v20; // r13d
  __int64 v21; // rdx
  _DWORD *v22; // r14
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v27; // rdi
  __int64 v28; // rbp
  __int64 v29; // rbx
  int v30; // [rsp+0h] [rbp-C8h]
  __int64 v31; // [rsp+0h] [rbp-C8h]
  int v34; // [rsp+24h] [rbp-A4h]
  __int64 v35; // [rsp+28h] [rbp-A0h]
  _QWORD v36[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v37; // [rsp+40h] [rbp-88h] BYREF
  __int128 v38; // [rsp+48h] [rbp-80h]
  __int64 v39; // [rsp+60h] [rbp-68h]
  __int64 v40; // [rsp+68h] [rbp-60h]
  __int128 v41; // [rsp+70h] [rbp-58h]
  __int64 v42; // [rsp+80h] [rbp-48h]
  unsigned __int64 v43; // [rsp+88h] [rbp-40h]

  j = 1;
  v43 = __readfsqword(0x28u);
  *a2 = 0;
LABEL_2:
  if ( *(_QWORD *)(a3 + 8) )
  {
LABEL_3:
    func = (__int64 *)get_func();
    *(_QWORD *)(a3 + 8) = func;
    v7 = func;
    if ( !func )
      goto LABEL_45;
    if ( func[1] - *func != 1 )
      goto LABEL_5;
LABEL_50:
    *a2 = 0;
  }
  else
  {
    while ( 1 )
    {
LABEL_45:
      v7 = nullptr;
LABEL_5:
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a3);
      *a2 = v8;
      if ( !v8 )
        return 1;
      if ( !*(_QWORD *)(a3 + 8) )
        goto LABEL_50;
      if ( j != 1 || !v7 )
        return 0;
      v42 = -1;
      v39 = 0;
      v40 = 0xFFFFFFFFLL;
      v41 = 0;
      v42 = *v7;
      for ( i = func_tail_iterator_set(); i; i = func_item_iterator_next() )
        sub_373080(*(_QWORD *)(a3 + 1496), v42);
      v10 = v7[2] & 0x10;
      del_frame();
      if ( v10 )
        v7[2] |= 0x10uLL;
      sub_CFF70();
      reanalyze_function();
      if ( !(unsigned __int8)sub_1CF3F0((_QWORD *)(a3 + 8)) )
        goto LABEL_46;
      v42 = *v7;
      for ( j = func_tail_iterator_set(); j; j = func_item_iterator_next() )
        generate_disasm_line();
      if ( !(unsigned __int8)sub_1CF3F0((_QWORD *)(a3 + 8)) )
      {
LABEL_46:
        *a2 = -18;
        goto LABEL_47;
      }
      if ( !*(_QWORD *)(a3 + 8) )
        goto LABEL_47;
      v11 = get_func();
      *(_QWORD *)(a3 + 8) = v11;
      if ( !v11 )
        goto LABEL_47;
      v12 = *(_QWORD *)(a3 + 440);
      v37 = 0;
      v38 = 0;
      v13 = (int)v12;
      v30 = v12;
      if ( (_DWORD)v12 )
      {
        v36[0] = 0;
        v36[1] = 0;
        v14 = qvector_reserve((__int64)&v37, 0, (int)v12, 16);
        v15 = v38;
        v37 = v14;
        v16 = v14;
        if ( (unsigned __int64)v38 < v13 )
        {
          while ( 1 )
          {
            *(_DWORD *)(16 * v15 + v16) = 0;
            copy_argloc();
            if ( v13 == ++v15 )
              break;
            v16 = v37;
          }
        }
        *(_QWORD *)&v38 = v13;
        cleanup_argloc();
        v34 = *(_DWORD *)(a3 + 116);
        v35 = *(_QWORD *)(a3 + 136);
        if ( v30 > 0 )
        {
          v17 = 0;
          v18 = 0;
          v31 = 16 * ((unsigned int)(v30 - 1) + 1LL);
          do
          {
            sub_1C7740(v36, a3, v18 + *(_QWORD *)(a3 + 432), *(unsigned int *)(v18 + *(_QWORD *)(a3 + 432) + 88));
            copy_argloc();
            v18 += 104;
            v17 += 16;
            cleanup_argloc();
          }
          while ( v31 != v17 );
        }
        v19 = v35 + v34;
      }
      else
      {
        v19 = *(_QWORD *)(a3 + 136) + *(int *)(a3 + 116);
      }
      v20 = sub_1CF000(a3, a4, 0, nullptr);
      *a2 = v20;
      if ( v20 )
        break;
      if ( *(_QWORD *)(a3 + 136) + *(int *)(a3 + 116) != v19 && *(_QWORD *)(a3 + 440) )
      {
        v21 = 0;
        do
        {
          while ( 1 )
          {
            v22 = (_DWORD *)(*(_QWORD *)(a3 + 432) + 104 * v21);
            if ( (unsigned int)(*v22 - 3) > 1 )
              break;
            v21 = ++v20;
            if ( (unsigned __int64)v20 >= *(_QWORD *)(a3 + 440) )
              goto LABEL_38;
          }
          sub_1C6010((__int64)v36, a3, v37 + 16 * v21, (unsigned int)v22[22]);
          copy_argloc();
          ++v20;
          cleanup_argloc();
          v21 = v20;
        }
        while ( (unsigned __int64)v20 < *(_QWORD *)(a3 + 440) );
      }
LABEL_38:
      v23 = v37;
      if ( v37 )
      {
        v24 = v38;
        if ( (_QWORD)v38 )
        {
          v25 = 0;
          do
          {
            ++v25;
            cleanup_argloc();
            v23 = v37;
          }
          while ( v24 != v25 );
        }
        *(_QWORD *)&v38 = 0;
        qfree(v23);
      }
      if ( !v39 )
        goto LABEL_2;
      lock_func_range();
      if ( *(_QWORD *)(a3 + 8) )
        goto LABEL_3;
    }
    v27 = v37;
    if ( v37 )
    {
      v28 = v38;
      v29 = 0;
      if ( (_QWORD)v38 )
      {
        do
        {
          ++v29;
          cleanup_argloc();
          v27 = v37;
        }
        while ( v28 != v29 );
      }
      *(_QWORD *)&v38 = 0;
      qfree(v27);
    }
LABEL_47:
    if ( v39 )
      lock_func_range();
  }
  return 0;
}
