unsigned __int64 __fastcall sub_E73850(__int64 a1, __int64 i, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  unsigned __int8 *v6; // rbp
  int v7; // r14d
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 **v14; // rax
  __int64 *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // ebx
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r12
  unsigned int v27; // ebx
  __int64 *v29; // rcx
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // [rsp+Ch] [rbp-3Ch]

  v5 = i;
  v6 = *(unsigned __int8 **)(*(_QWORD *)(a1 + 8) + 17448LL);
  v7 = v6[8];
  v8 = v6[14];
  v9 = sub_F61C10(i, i, a3, a4, a5);
  if ( (*(_BYTE *)(v9 + 29) & 1) == 0 )
    goto LABEL_8;
  v14 = (__int64 **)sub_B8C3D0(v9, i, v10, v11, v12, v13);
  v15 = *v14;
  v16 = (unsigned __int64)&(*v14)[*((unsigned int *)v14 + 2)];
  if ( (unsigned __int64)v15 < v16 )
  {
    v29 = v15;
    for ( i = *v15; *(_WORD *)(*v29 + 36) != 248; i = *v29 )
    {
      if ( (__int64 *)v16 == ++v29 )
        goto LABEL_8;
    }
    if ( (__int64 *)v16 != v29 )
      goto LABEL_27;
LABEL_8:
    v19 = 0;
    goto LABEL_9;
  }
  if ( v15 == (__int64 *)v16 )
    goto LABEL_8;
  if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 248 )
  {
    v17 = (__int64 *)(v16 + 8);
    while ( v15 != v17 )
    {
      v18 = *v17++;
      if ( *(_WORD *)(v18 + 36) == 248 )
        goto LABEL_27;
    }
    goto LABEL_8;
  }
LABEL_27:
  v19 = *v15;
  if ( *(_WORD *)(*v15 + 36) != 248 )
  {
    v30 = v15 + 1;
    do
      v19 = *v30++;
    while ( *(_WORD *)(v19 + 36) != 248 );
  }
LABEL_9:
  v20 = 0;
  v21 = 1;
  v22 = (unsigned int)sub_B142D0(v19);
  v24 = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v25 = *(_QWORD *)v24;
  if ( *(_BYTE *)(*(_QWORD *)v24 + 16LL) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
    {
      v7 = 0;
      v21 = 0;
      v20 = 1;
      goto LABEL_12;
    }
    v35 = v22;
    v31 = sub_F63050(v25, i, v22, v23);
    LODWORD(v22) = v35;
    if ( !v31 )
      v7 = 0;
    v20 = v31 == 0;
    v33 = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v21 = 1 - v20;
    v25 = *(_QWORD *)v33;
    if ( *(_BYTE *)(*(_QWORD *)v33 + 16LL) != 26 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
        goto LABEL_12;
      v34 = sub_F63050(v25, i, v35, v32);
      LODWORD(v22) = v35;
      v25 = v34;
    }
  }
  if ( v25 )
    v20 -= ((int)v22 <= 0) - 1;
LABEL_12:
  if ( (_DWORD)v22 == 3 )
  {
    ++v20;
    goto LABEL_21;
  }
  if ( (int)v22 > 1 )
LABEL_21:
    ++v20;
  v26 = (unsigned int)(v7 + v20 * v8);
  if ( (unsigned int)(v21 + v20) <= 1 || (v27 = 64, !(unsigned __int8)sub_22B7EC0(v6 + 216)) )
  {
    if ( v21 )
      v27 = v6[9];
    else
      v27 = v6[15];
  }
  if ( (unsigned __int8)sub_22B7EA0(v6 + 216) )
    return v27 * ((v26 != 0) + (v26 - (unsigned __int64)(v26 != 0)) / v27);
  return v26;
}
