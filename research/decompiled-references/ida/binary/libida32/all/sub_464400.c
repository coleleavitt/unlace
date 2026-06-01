unsigned __int64 __fastcall sub_464400(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  _QWORD *v6; // r13
  _DWORD *ph; // rax
  int v8; // edx
  unsigned int v9; // ebx
  unsigned __int64 dbctx_id; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, unsigned int); // rax
  unsigned int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // r15
  unsigned __int64 v24; // rdx
  unsigned int v25; // ebp
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-80h]
  _QWORD *v30; // [rsp+28h] [rbp-60h]
  int v31[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v3 = a1;
  v32 = __readfsqword(0x28u);
  if ( sub_443A40() )
    return v32 - __readfsqword(0x28u);
  v30 = *(_QWORD **)(switch_dbctx(*(int *)(a2 + 8)) + 1480);
  v6 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
  ph = (_DWORD *)get_ph();
  v8 = ph[1];
  if ( v8 == 13 )
  {
LABEL_6:
    v9 = ph[17];
    goto LABEL_7;
  }
  if ( v8 != 12 )
  {
    if ( v8 != 15 )
      goto LABEL_13;
    goto LABEL_6;
  }
  v9 = ph[18] - 1;
LABEL_7:
  if ( v9 != -1 )
  {
    dbctx_id = -1;
    if ( get_dbctx_qty() )
      dbctx_id = (int)get_dbctx_id();
    v11 = sub_4586A0(v30, a3[1], 0, -1);
    if ( v11 == -1 )
      v11 = a3[1];
    v12 = *a3;
    v31[1] = v11;
    v13 = *(unsigned int *)(a1 + 12);
    v31[0] = v12;
    sub_504030(*(_QWORD *)(a1 + 32), v13, *(unsigned int *)(a2 + 12), v9, v31);
    if ( (_DWORD)dbctx_id != -1 && dbctx_id < get_dbctx_qty() && (unsigned __int8)sub_3E8690() )
      switch_dbctx(dbctx_id);
  }
LABEL_13:
  v14 = *(_QWORD *)(a1 + 32);
  v15 = *(_QWORD *)(v14 + 56);
  if ( v15
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v15 + 8LL))(
         v15,
         v14,
         *(unsigned int *)(v3 + 12),
         *(unsigned int *)(a2 + 12),
         a3) )
  {
    switch_dbctx(*(int *)(v3 + 8));
  }
  v28 = sub_4586A0(v6, *a3, 0, -1);
  v16 = sub_4586A0(v30, *a3, 0, -1);
  v17 = a3[1];
  v18 = v16;
  if ( v16 == -1 )
  {
LABEL_32:
    if ( v28 >= v17 )
      return v32 - __readfsqword(0x28u);
    goto LABEL_20;
  }
LABEL_17:
  if ( v17 < v18 )
    goto LABEL_32;
  if ( v28 >= v18 )
  {
    v24 = v17;
    v22 = v18;
    v23 = v3;
    goto LABEL_29;
  }
  v17 = v18;
LABEL_20:
  v19 = v28;
  do
  {
    v20 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v3 + 88LL);
    if ( v20 == sub_4591B0 )
    {
      if ( !sub_443A40() )
      {
        if ( (sub_458D90(*(_QWORD *)(v3 + 32), (unsigned int *)v31, v19, *(_DWORD *)(v3 + 12), 0) & 0x600) != 0 )
          sub_457D00(*(_QWORD *)(v3 + 32), *(_DWORD *)(v3 + 12), v19, 4);
        v21 = ea2node((unsigned int)v19);
        netnode_supdel(v21, 15, 65);
        set_name(v19, (void *)&byte_22CD811);
        set_name(v19, (void *)&byte_22CD811);
        sub_3CB960((unsigned int)v19);
      }
    }
    else
    {
      v20(v3, v19);
    }
    v19 = sub_4586A0(v6, v19, 1u, v17);
  }
  while ( v19 < v17 );
  v22 = v17;
  v23 = v3;
  v24 = a3[1];
LABEL_29:
  while ( v22 < v24 )
  {
    v25 = sub_462A00(*(_QWORD *)(v23 + 32), *(_DWORD *)(v23 + 12), *(_DWORD *)(a2 + 12), v22, 0);
    v26 = sub_4586A0(v30, v25, 0, -1);
    v18 = v26;
    if ( v28 != -1 )
    {
      v27 = sub_4586A0(v6, v25, 0, v26);
      v3 = v23;
      v17 = a3[1];
      v28 = v27;
      if ( v18 != -1 )
        goto LABEL_17;
      goto LABEL_32;
    }
    if ( v26 == -1 )
      return v32 - __readfsqword(0x28u);
    v24 = a3[1];
    if ( v24 < v26 )
      return v32 - __readfsqword(0x28u);
    v22 = v26;
  }
  return v32 - __readfsqword(0x28u);
}

