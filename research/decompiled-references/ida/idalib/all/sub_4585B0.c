__int64 __fastcall sub_4585B0(__int64 a1, int a2, int a3, int a4, unsigned int *a5)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned int v7; // eax
  _QWORD ***v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *i; // r14
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  _WORD *v16; // rax
  __int64 v17; // r13
  __int64 v18; // r12
  char v19; // bp
  __int64 v20; // r9
  __int64 v21; // rdi
  unsigned int v22; // eax
  _QWORD **v23; // rdx
  _QWORD *v24; // rbx
  _QWORD *v25; // r13
  _QWORD *v26; // rsi
  _QWORD *v27; // rdx
  char v28; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v29; // [rsp+8h] [rbp-30h]

  v5 = a3;
  v29 = __readfsqword(0x28u);
  if ( a2 == 1 )
  {
    v22 = *a5;
    if ( *a5 > 0x2F )
    {
      v23 = *((_QWORD ***)a5 + 1);
      *((_QWORD *)a5 + 1) = v23 + 1;
    }
    else
    {
      v23 = (_QWORD **)(*((_QWORD *)a5 + 2) + v22);
      *a5 = v22 + 8;
    }
    v24 = (_QWORD *)**v23;
    v25 = &v24[2 * (*v23)[1]];
    while ( v25 != v24 )
    {
      v26 = v24;
      v24 += 2;
      sub_4584C0(a1, v26, v5);
    }
    return v29 - __readfsqword(0x28u);
  }
  v6 = a4;
  if ( a2 != 6 )
  {
    if ( !a2 )
    {
      v7 = *a5;
      if ( *a5 > 0x2F )
      {
        v8 = *((_QWORD ****)a5 + 1);
        *((_QWORD *)a5 + 1) = v8 + 1;
      }
      else
      {
        v8 = (_QWORD ***)(*((_QWORD *)a5 + 2) + v7);
        *a5 = v7 + 8;
      }
      v9 = **v8;
      for ( i = &v9[2 * (_QWORD)(*v8)[1]]; i != v9; v9 += 2 )
        sub_458530(a1, v9, v5, v6);
    }
    return v29 - __readfsqword(0x28u);
  }
  v12 = *a5;
  if ( *a5 > 0x2F )
  {
    v27 = *((_QWORD **)a5 + 1);
    v16 = v27 + 1;
    *((_QWORD *)a5 + 1) = v27 + 1;
    v15 = *v27;
  }
  else
  {
    v13 = *((_QWORD *)a5 + 2);
    v14 = v12 + 8;
    *a5 = v14;
    v15 = *(_QWORD *)(v13 + v12);
    if ( (unsigned int)v14 <= 0x2F )
    {
      v16 = (_WORD *)(v14 + v13);
      *a5 = v12 + 16;
      goto LABEL_12;
    }
    v16 = *((_WORD **)a5 + 1);
  }
  *((_QWORD *)a5 + 1) = v16 + 4;
LABEL_12:
  if ( (~*v16 & 0x600) != 0 )
    return v29 - __readfsqword(0x28u);
  v17 = *(_QWORD *)(a1 + 8 * v6 + 56);
  v18 = *(_QWORD *)(a1 + 8 * v5 + 56);
  switch_dbctx(*(int *)(v17 + 8));
  v19 = netnode_charval(*(_QWORD *)(v17 + 96), v15, 256);
  switch_dbctx(*(int *)(v18 + 8));
  v21 = *(_QWORD *)(v18 + 96);
  if ( v19 )
  {
    v28 = v19;
    netnode_supset(v21, v15, &v28, 1, 256, v20);
    return v29 - __readfsqword(0x28u);
  }
  return netnode_supdel(v21, v15, 256);
}
