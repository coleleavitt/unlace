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
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v26; // rbp
  __int64 v27; // rbx
  int v28; // [rsp+0h] [rbp-C8h]
  __int64 v29; // [rsp+0h] [rbp-C8h]
  int v32; // [rsp+24h] [rbp-A4h]
  __int64 v33; // [rsp+28h] [rbp-A0h]
  _QWORD v34[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v35; // [rsp+40h] [rbp-88h]
  __int128 v36; // [rsp+48h] [rbp-80h]
  __int64 v37; // [rsp+60h] [rbp-68h]
  __int64 v38; // [rsp+68h] [rbp-60h]
  __int128 v39; // [rsp+70h] [rbp-58h]
  __int64 v40; // [rsp+80h] [rbp-48h]
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  j = 1;
  v41 = __readfsqword(0x28u);
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
      v40 = -1;
      v37 = 0;
      v38 = 0xFFFFFFFFLL;
      v39 = 0;
      v40 = *v7;
      for ( i = func_tail_iterator_set(); i; i = func_item_iterator_next() )
        sub_373080(*(_QWORD *)(a3 + 1496), v40);
      v10 = v7[2] & 0x10;
      del_frame();
      if ( v10 )
        v7[2] |= 0x10uLL;
      sub_CFF70();
      reanalyze_function();
      if ( !(unsigned __int8)sub_1CF3F0((_QWORD *)(a3 + 8)) )
        goto LABEL_46;
      v40 = *v7;
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
      v35 = 0;
      v36 = 0;
      v13 = (int)v12;
      v28 = v12;
      if ( (_DWORD)v12 )
      {
        v34[0] = 0;
        v34[1] = 0;
        v14 = qvector_reserve();
        v15 = v36;
        v35 = v14;
        v16 = v14;
        if ( (unsigned __int64)v36 < v13 )
        {
          while ( 1 )
          {
            *(_DWORD *)(16 * v15 + v16) = 0;
            copy_argloc();
            if ( v13 == ++v15 )
              break;
            v16 = v35;
          }
        }
        *(_QWORD *)&v36 = v13;
        cleanup_argloc();
        v32 = *(_DWORD *)(a3 + 116);
        v33 = *(_QWORD *)(a3 + 136);
        if ( v28 > 0 )
        {
          v17 = 0;
          v18 = 0;
          v29 = 16 * ((unsigned int)(v28 - 1) + 1LL);
          do
          {
            sub_1C7740(v34, a3, v18 + *(_QWORD *)(a3 + 432), *(_DWORD *)(v18 + *(_QWORD *)(a3 + 432) + 88));
            copy_argloc();
            v18 += 104;
            v17 += 16;
            cleanup_argloc();
          }
          while ( v29 != v17 );
        }
        v19 = v33 + v32;
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
          sub_1C6010((__int64)v34, a3, v35 + 16 * v21, v22[22]);
          copy_argloc();
          ++v20;
          cleanup_argloc();
          v21 = v20;
        }
        while ( (unsigned __int64)v20 < *(_QWORD *)(a3 + 440) );
      }
LABEL_38:
      if ( v35 )
      {
        v23 = v36;
        if ( (_QWORD)v36 )
        {
          v24 = 0;
          do
          {
            ++v24;
            cleanup_argloc();
          }
          while ( v23 != v24 );
        }
        *(_QWORD *)&v36 = 0;
        qfree();
      }
      if ( !v37 )
        goto LABEL_2;
      lock_func_range();
      if ( *(_QWORD *)(a3 + 8) )
        goto LABEL_3;
    }
    if ( v35 )
    {
      v26 = v36;
      v27 = 0;
      if ( (_QWORD)v36 )
      {
        do
        {
          ++v27;
          cleanup_argloc();
        }
        while ( v26 != v27 );
      }
      *(_QWORD *)&v36 = 0;
      qfree();
    }
LABEL_47:
    if ( v37 )
      lock_func_range();
  }
  return 0;
}
