__int64 __fastcall sub_18BD220(_QWORD **a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 *v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx

  if ( !sub_F58060(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL)) )
    return 0;
  v7 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v8) = sub_F58060(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
  v5 = v8;
  if ( !(_BYTE)v8 )
    return 0;
  v11 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 14 )
  {
    v12 = *v7;
    if ( *(_BYTE *)(*v7 + 16) == 14 )
    {
LABEL_7:
      a2 = *(_QWORD *)(v11 + 32);
      goto LABEL_8;
    }
    v21 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) != 14 )
    {
      v12 = 0;
      goto LABEL_7;
    }
    goto LABEL_19;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14 )
  {
    v11 = sub_F63050(v11, a2, v9, v10);
    v12 = *v7;
    if ( *(_BYTE *)(*v7 + 16) == 14 )
      goto LABEL_14;
    v21 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) != 14 )
    {
      v12 = 0;
LABEL_14:
      if ( v11 )
        goto LABEL_7;
LABEL_8:
      if ( v12 )
        a3 = *(_QWORD *)(v12 + 32);
      goto LABEL_10;
    }
LABEL_19:
    v12 = sub_F63050(v12, a2, v21, v10);
    goto LABEL_14;
  }
  v12 = *v7;
  if ( *(_BYTE *)(*v7 + 16) == 14 )
    goto LABEL_8;
  v22 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v22 + 16) == 14 )
  {
    v12 = sub_F63050(*v7, a2, v22, v10);
    goto LABEL_8;
  }
LABEL_10:
  v13 = sub_A62D20(*a1, a2);
  v14 = (__int64)*a1;
  v15 = a3;
  v16 = v13;
  v17 = sub_A62D20(*a1, a3);
  v19 = sub_21F90D0(v14, v15, v18);
  v20 = sub_21F90C0();
  if ( v16 != v19 || v17 != v20 )
  {
    LOBYTE(v5) = v16 != v20;
    LOBYTE(v20) = v17 != v19;
    return ((unsigned int)v20 | v5) ^ 1;
  }
  return v5;
}
