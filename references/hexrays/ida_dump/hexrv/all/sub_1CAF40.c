__int64 __fastcall sub_1CAF40(__int64 a1, _DWORD *a2, __int64 a3, unsigned __int64 a4)
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
  _DWORD *v17; // rdi
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // r12
  int v21; // r13d
  __int64 v22; // rdx
  _DWORD *v23; // r14
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // [rsp+0h] [rbp-C8h]
  __int64 v34; // [rsp+0h] [rbp-C8h]
  int v37; // [rsp+24h] [rbp-A4h]
  __int64 v38; // [rsp+28h] [rbp-A0h]
  _QWORD v39[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v40; // [rsp+40h] [rbp-88h] BYREF
  __int128 v41; // [rsp+48h] [rbp-80h]
  _QWORD v42[2]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v43; // [rsp+70h] [rbp-58h]
  __int64 v44; // [rsp+80h] [rbp-48h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  j = 1;
  v45 = __readfsqword(0x28u);
  *a2 = 0;
LABEL_2:
  if ( *(_QWORD *)(a3 + 8) )
  {
LABEL_3:
    func = (__int64 *)get_func(*(_QWORD *)(a3 + 40));
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
      v44 = -1;
      v42[0] = 0;
      v42[1] = 0xFFFFFFFFLL;
      v43 = 0;
      v44 = *v7;
      for ( i = func_tail_iterator_set(v42, v7, -1); i; i = func_item_iterator_next(v42, sub_1B3B30, 0) )
        sub_36DE00(*(_QWORD *)(a3 + 1496), v44);
      v10 = v7[2] & 0x10;
      del_frame(v7);
      if ( v10 )
        v7[2] |= 0x10uLL;
      sub_CBAB0(0x3Bu, v7);
      reanalyze_function(v7, 0, -1, 0);
      if ( !(unsigned __int8)sub_1CAD70((__int64 *)(a3 + 8)) )
        goto LABEL_46;
      v44 = *v7;
      for ( j = func_tail_iterator_set(v42, v7, -1); j; j = func_item_iterator_next(v42, sub_1B3B30, 0) )
        generate_disasm_line(0, v44, 0);
      if ( !(unsigned __int8)sub_1CAD70((__int64 *)(a3 + 8)) )
      {
LABEL_46:
        *a2 = -18;
        goto LABEL_47;
      }
      if ( !*(_QWORD *)(a3 + 8) )
        goto LABEL_47;
      v11 = get_func(*(_QWORD *)(a3 + 40));
      *(_QWORD *)(a3 + 8) = v11;
      if ( !v11 )
        goto LABEL_47;
      v12 = *(_QWORD *)(a3 + 440);
      v40 = 0;
      v41 = 0;
      v13 = (int)v12;
      v33 = v12;
      if ( (_DWORD)v12 )
      {
        v39[0] = 0;
        v39[1] = 0;
        v14 = qvector_reserve(&v40, 0, (int)v12, 16);
        v15 = v41;
        v40 = v14;
        v16 = v14;
        if ( (unsigned __int64)v41 < v13 )
        {
          while ( 1 )
          {
            v17 = (_DWORD *)(16 * v15 + v16);
            *v17 = 0;
            copy_argloc(v17, v39);
            if ( v13 == ++v15 )
              break;
            v16 = v40;
          }
        }
        *(_QWORD *)&v41 = v13;
        cleanup_argloc(v39);
        v37 = *(_DWORD *)(a3 + 116);
        v38 = *(_QWORD *)(a3 + 136);
        if ( v33 > 0 )
        {
          v18 = 0;
          v19 = 0;
          v34 = 16 * ((unsigned int)(v33 - 1) + 1LL);
          do
          {
            sub_1C30C0(v39, a3, v19 + *(_QWORD *)(a3 + 432), *(_DWORD *)(v19 + *(_QWORD *)(a3 + 432) + 88));
            copy_argloc(v18 + v40, v39);
            v19 += 104;
            v18 += 16;
            cleanup_argloc(v39);
          }
          while ( v34 != v18 );
        }
        v20 = v38 + v37;
      }
      else
      {
        v20 = *(_QWORD *)(a3 + 136) + *(int *)(a3 + 116);
      }
      v21 = sub_1CA980(a3, a4, 0, nullptr);
      *a2 = v21;
      if ( v21 )
        break;
      if ( *(_QWORD *)(a3 + 136) + *(int *)(a3 + 116) != v20 && *(_QWORD *)(a3 + 440) )
      {
        v22 = 0;
        do
        {
          while ( 1 )
          {
            v23 = (_DWORD *)(*(_QWORD *)(a3 + 432) + 104 * v22);
            if ( (unsigned int)(*v23 - 3) > 1 )
              break;
            v22 = ++v21;
            if ( (unsigned __int64)v21 >= *(_QWORD *)(a3 + 440) )
              goto LABEL_38;
          }
          sub_1C1990((__int64)v39, a3, v40 + 16 * v22, v23[22]);
          copy_argloc(v23, v39);
          ++v21;
          cleanup_argloc(v39);
          v22 = v21;
        }
        while ( (unsigned __int64)v21 < *(_QWORD *)(a3 + 440) );
      }
LABEL_38:
      v24 = v40;
      if ( v40 )
      {
        v25 = v41;
        if ( (_QWORD)v41 )
        {
          v26 = 0;
          do
          {
            v27 = v26++;
            cleanup_argloc(16 * v27 + v24);
            v24 = v40;
          }
          while ( v25 != v26 );
        }
        *(_QWORD *)&v41 = 0;
        qfree(v24);
      }
      if ( !v42[0] )
        goto LABEL_2;
      lock_func_range(v42[0], 0);
      if ( *(_QWORD *)(a3 + 8) )
        goto LABEL_3;
    }
    v29 = v40;
    if ( v40 )
    {
      v30 = v41;
      v31 = 0;
      if ( (_QWORD)v41 )
      {
        do
        {
          v32 = v31++;
          cleanup_argloc(16 * v32 + v29);
          v29 = v40;
        }
        while ( v30 != v31 );
      }
      *(_QWORD *)&v41 = 0;
      qfree(v29);
    }
LABEL_47:
    if ( v42[0] )
      lock_func_range(v42[0], 0);
  }
  return 0;
}
