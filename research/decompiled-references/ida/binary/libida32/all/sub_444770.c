__int64 __fastcall sub_444770(__int64 a1, int a2, int a3, int a4, int *a5)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned int v7; // eax
  unsigned int ***v8; // rdx
  unsigned int *v9; // rbx
  unsigned int *i; // r14
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _WORD *v16; // rax
  __int64 v17; // r13
  __int64 v18; // r12
  char v19; // bp
  __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned int ***v22; // rdx
  unsigned int *v23; // rbx
  unsigned int *v24; // r13
  unsigned int *v25; // rsi
  _DWORD *v26; // rdx
  char v27; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-30h]

  v5 = a3;
  v28 = __readfsqword(0x28u);
  if ( a2 == 1 )
  {
    v21 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v22 = *((unsigned int ****)a5 + 1);
      *((_QWORD *)a5 + 1) = v22 + 1;
    }
    else
    {
      v22 = (unsigned int ***)(*((_QWORD *)a5 + 2) + v21);
      *a5 = v21 + 8;
    }
    v23 = **v22;
    v24 = &v23[2 * (_QWORD)(*v22)[1]];
    while ( v24 != v23 )
    {
      v25 = v23;
      v23 += 2;
      sub_444680(a1, v25, v5);
    }
    return v28 - __readfsqword(0x28u);
  }
  v6 = a4;
  if ( a2 != 6 )
  {
    if ( !a2 )
    {
      v7 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v8 = *((unsigned int ****)a5 + 1);
        *((_QWORD *)a5 + 1) = v8 + 1;
      }
      else
      {
        v8 = (unsigned int ***)(*((_QWORD *)a5 + 2) + v7);
        *a5 = v7 + 8;
      }
      v9 = **v8;
      for ( i = &v9[2 * (_QWORD)(*v8)[1]]; i != v9; v9 += 2 )
        sub_4446F0(a1, v9, v5, v6);
    }
    return v28 - __readfsqword(0x28u);
  }
  v12 = *a5;
  if ( (unsigned int)*a5 > 0x2F )
  {
    v26 = *((_DWORD **)a5 + 1);
    v16 = v26 + 2;
    *((_QWORD *)a5 + 1) = v26 + 2;
    v15 = *v26;
  }
  else
  {
    v13 = *((_QWORD *)a5 + 2);
    v14 = v12 + 8;
    *a5 = v14;
    v15 = *(_DWORD *)(v13 + v12);
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
    return v28 - __readfsqword(0x28u);
  v17 = *(_QWORD *)(a1 + 8 * v6 + 56);
  v18 = *(_QWORD *)(a1 + 8 * v5 + 56);
  switch_dbctx(*(int *)(v17 + 8));
  v19 = netnode_charval(*(unsigned int *)(v17 + 96), v15, 256);
  switch_dbctx(*(int *)(v18 + 8));
  v20 = *(unsigned int *)(v18 + 96);
  if ( v19 )
  {
    v27 = v19;
    netnode_supset(v20, v15, &v27, 1, 256);
    return v28 - __readfsqword(0x28u);
  }
  return netnode_supdel(v20, v15, 256);
}

