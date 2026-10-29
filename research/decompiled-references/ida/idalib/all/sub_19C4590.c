__int64 __fastcall sub_19C4590(
        __int64 a1,
        __int64 *a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned __int64 v16; // r12
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 i; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx

  v8 = a2;
  v10 = *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 34 )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v29 + 16) != 34 )
      return 0;
    v10 = sub_F63050(*(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v29, a6);
    if ( !v10 )
      return 0;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 35;
  if ( (unsigned int)v12 > 1 )
    v11 = sub_F63050(v11, a2, v12, a6);
  v13 = *(_QWORD *)(v11 + 24);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 13 && ((*(_WORD *)(v14 + 18) >> 3) & 0x1FF) == 0x1E9 )
  {
    v15 = *(_QWORD *)(a1 + 248);
    v16 = *(_QWORD *)(v15 + 1520);
    v17 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_7;
    v26 = sub_A8A250(*(_QWORD **)(a1 + 248));
    v28 = *(_QWORD *)(v26 + 48);
    if ( !v28 )
      goto LABEL_31;
LABEL_19:
    v16 = v28 & 0xFFFFFFFFFFFFFFF0LL;
    v17 = (__int64 *)v16;
    goto LABEL_7;
  }
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v25 + 16) != 13 || ((*(_WORD *)(v25 + 18) >> 3) & 0x1FF) != 0x1EA )
    return 0;
  v15 = *(_QWORD *)(a1 + 248);
  v16 = *(_QWORD *)(v15 + 1528);
  v17 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    goto LABEL_7;
  v26 = sub_A8A180(*(_QWORD **)(a1 + 248));
  v28 = *(_QWORD *)(v26 + 48);
  if ( v28 )
    goto LABEL_19;
LABEL_31:
  a2 = (__int64 *)v26;
  v16 = sub_A7AA70(v15, v26, v27, a6, a7, a8);
  v17 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_7:
  v18 = *v17;
  if ( *(_BYTE *)(v18 + 16) != 34 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) != 34 || (v18 = sub_F63050(v18, a2, v31, a6)) == 0 )
    {
LABEL_14:
      *v8 = sub_160A600(a1, *v8 & 0xFFFFFFFFFFFFFFFELL, v16, 1u, 0, 0, a3, a4, 0);
      return 1;
    }
  }
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = (unsigned int)*(unsigned __int8 *)(v19 + 16) - 35;
  if ( (unsigned int)v20 > 1 )
    v19 = sub_F63050(v19, a2, v20, a6);
  for ( i = *(_QWORD *)(v19 + 24); ; i = *(_QWORD *)(v22 + 24) )
  {
    v22 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v23 = *(unsigned __int8 *)(v22 + 16);
    if ( (unsigned int)(v23 - 35) > 1 )
      break;
    if ( (_BYTE)v23 == 36 )
      goto LABEL_13;
LABEL_26:
    ;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
    return 0;
  v30 = sub_F63050(v22, a2, v23, a6);
  v22 = v30;
  if ( !v30 )
    return 0;
  v23 = *(unsigned __int8 *)(v30 + 16);
  if ( (_BYTE)v23 != 36 )
    goto LABEL_26;
LABEL_13:
  if ( sub_F62610(v22, (__int64)a2, v23, a6, a7, a8) )
    goto LABEL_14;
  return 0;
}
