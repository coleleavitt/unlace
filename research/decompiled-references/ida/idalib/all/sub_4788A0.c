unsigned __int64 __fastcall sub_4788A0(__int64 a1, __int64 a2, unsigned __int64 *a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rbp
  _QWORD *v7; // r12
  _DWORD *ph; // rax
  int v9; // edx
  unsigned int v10; // ebx
  unsigned __int64 dbctx_id; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r15
  __int64 *v20; // rbx
  _QWORD *(__fastcall *v21)(__int64, __int64 *); // rax
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // r15
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-90h]
  _QWORD *v32; // [rsp+28h] [rbp-70h]
  int v33[4]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v5 = a1;
  v34 = __readfsqword(0x28u);
  if ( sub_457830() )
    return v34 - __readfsqword(0x28u);
  v32 = *(_QWORD **)(switch_dbctx(*(int *)(a2 + 8)) + 1672);
  v7 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
  ph = (_DWORD *)get_ph();
  v9 = ph[1];
  if ( v9 == 13 )
  {
LABEL_6:
    v10 = ph[17];
    goto LABEL_7;
  }
  if ( v9 != 12 )
  {
    if ( v9 != 15 )
      goto LABEL_13;
    goto LABEL_6;
  }
  v10 = ph[18] - 1;
LABEL_7:
  if ( v10 != -1 )
  {
    dbctx_id = -1;
    if ( get_dbctx_qty() )
      dbctx_id = (int)get_dbctx_id();
    v12 = sub_46CB10(v32, a3[1], 0, 0xFFFFFFFFFFFFFFFFLL);
    if ( v12 == -1 )
      v12 = a3[1];
    a5 = (__m128)(unsigned __int64)v12;
    v13 = *(unsigned int *)(a1 + 12);
    v14 = *(_QWORD *)(a1 + 32);
    v15 = *(unsigned int *)(a2 + 12);
    a4 = (__m128)_mm_unpacklo_epi64((__m128i)*a3, (__m128i)(unsigned __int64)v12);
    *(__m128 *)v33 = a4;
    sub_51BF30(v14, v13, v15, v10, v33);
    if ( (_DWORD)dbctx_id != -1 && dbctx_id < get_dbctx_qty() && (unsigned __int8)sub_3FB5F0() )
      switch_dbctx(dbctx_id);
  }
LABEL_13:
  v16 = *(_QWORD *)(v5 + 32);
  v17 = *(_QWORD *)(v16 + 56);
  if ( v17
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)v17 + 8LL))(
         v17,
         v16,
         *(unsigned int *)(v5 + 12),
         *(unsigned int *)(a2 + 12),
         a3) )
  {
    switch_dbctx(*(int *)(v5 + 8));
  }
  v29 = sub_46CB10(v7, *a3, 0, 0xFFFFFFFFFFFFFFFFLL);
  v18 = sub_46CB10(v32, *a3, 0, 0xFFFFFFFFFFFFFFFFLL);
  v19 = a3[1];
  if ( v18 == -1 )
  {
LABEL_32:
    if ( v29 >= v19 )
      return v34 - __readfsqword(0x28u);
    goto LABEL_20;
  }
LABEL_17:
  if ( v19 < v18 )
    goto LABEL_32;
  if ( v29 >= v18 )
  {
    v25 = v19;
    v23 = (__int64 *)v18;
    v24 = v5;
    goto LABEL_29;
  }
  v19 = v18;
LABEL_20:
  v20 = (__int64 *)v29;
  do
  {
    v21 = *(_QWORD *(__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL);
    if ( v21 == sub_46D630 )
    {
      if ( !sub_457830() )
      {
        if ( (sub_46D210(*(_QWORD *)(v5 + 32), (char **)v33, v20, *(_DWORD *)(v5 + 12), 0) & 0x600) != 0 )
          sub_46C190(*(_QWORD *)(v5 + 32), *(_DWORD *)(v5 + 12), (unsigned __int64)v20, 4);
        v22 = ea2node(v20);
        netnode_supdel(v22, 15, 65);
        set_name((int)v20, (void *)&byte_22F0C30);
        set_name((int)v20, (void *)&byte_22F0C30);
        sub_3D12D0(v20);
      }
    }
    else
    {
      v21(v5, v20);
    }
    v20 = (__int64 *)sub_46CB10(v7, (unsigned __int64)v20, 1u, v19);
  }
  while ( (unsigned __int64)v20 < v19 );
  v23 = (__int64 *)v19;
  v24 = v5;
  v25 = a3[1];
LABEL_29:
  while ( (unsigned __int64)v23 < v25 )
  {
    v26 = sub_476F80(
            *(_QWORD *)(v24 + 32),
            *(_DWORD *)(v24 + 12),
            *(_DWORD *)(a2 + 12),
            v23,
            0,
            *(double *)a4.m128_u64,
            a5);
    v27 = sub_46CB10(v32, v26, 0, 0xFFFFFFFFFFFFFFFFLL);
    v18 = v27;
    if ( v29 != -1 )
    {
      v28 = sub_46CB10(v7, v26, 0, v27);
      v5 = v24;
      v29 = v28;
      v19 = a3[1];
      if ( v18 != -1 )
        goto LABEL_17;
      goto LABEL_32;
    }
    if ( v27 == -1 )
      return v34 - __readfsqword(0x28u);
    v25 = a3[1];
    if ( v25 < v27 )
      return v34 - __readfsqword(0x28u);
    v23 = (__int64 *)v27;
  }
  return v34 - __readfsqword(0x28u);
}
