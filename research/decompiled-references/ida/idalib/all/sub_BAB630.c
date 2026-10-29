__int64 __fastcall sub_BAB630(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 i; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax

  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
  {
    a2 = *(_QWORD *)(a1 + 96);
    sub_A794E0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
    v6 = *(_QWORD *)(a1 + 120);
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v7 )
    return 0;
  if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
  {
    sub_BA8900(a1);
    v26 = *(_QWORD *)(a1 + 120);
    if ( !v26 )
    {
      a2 = *(_QWORD *)(a1 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, v24, a4, a5, v25);
      v26 = *(_QWORD *)(a1 + 120);
    }
    v7 = v26 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      return 0;
  }
  if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
  {
    sub_BA8900(a1);
    v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v8 = *(_QWORD **)(v7 + 8);
  if ( !v8 )
    return 0;
  v9 = *(_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 35;
  if ( (unsigned int)v10 > 1 )
  {
    v9 = sub_F63050(v9, a2, v10, a4);
    if ( !v9 )
      return 0;
  }
  for ( i = *(_QWORD *)(v9 + 24); ; i = *(_QWORD *)(v12 + 24) )
  {
    v12 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(unsigned __int8 *)(v12 + 16);
    if ( (unsigned int)(v13 - 35) > 1 )
      break;
    if ( (_BYTE)v13 == 36 )
      goto LABEL_12;
LABEL_29:
    ;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
    return 0;
  v27 = sub_F63050(v12, a2, v13, a4);
  v12 = v27;
  if ( !v27 )
    return 0;
  v13 = *(unsigned __int8 *)(v27 + 16);
  if ( (_BYTE)v13 != 36 )
    goto LABEL_29;
LABEL_12:
  v14 = sub_F62610(v12, a2, v13, a4, a5);
  v19 = v14;
  if ( !v14 )
    return 0;
  v20 = *(_QWORD *)(v14 + 120);
  if ( !v20 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(v19 + 96) + 88LL), *(_QWORD *)(v19 + 96), v15, v16, v17, v18);
    v20 = *(_QWORD *)(v19 + 120);
  }
  v21 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v21 )
    return v19;
  v22 = *v21;
  if ( v22 )
    return v22;
  return v19;
}
