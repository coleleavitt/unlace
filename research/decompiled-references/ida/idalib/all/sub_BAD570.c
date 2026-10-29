__int64 __fastcall sub_BAD570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 result; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rdx
  __int64 *v21; // r14
  __int64 *v22; // rbx

  v6 = a3;
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 120);
  if ( v8 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v9 )
      goto LABEL_3;
    return 0;
  }
  sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
  v9 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    return 0;
LABEL_3:
  if ( (*(_BYTE *)(v9 + 72) & 1) != 0 )
    sub_BA8900(a1);
  v14 = sub_BAAD60(a1 + 48, a2, v6, a4, a5, a6);
  if ( v14 )
    return v14;
  v16 = sub_BAB440(a1, a2, v10, v11, v12, v13);
  v21 = v20;
  v22 = (__int64 *)v16;
  if ( (__int64 *)v16 == v20 )
    return v14;
  while ( 1 )
  {
    result = sub_BAD2F0(*v22, a2, v7, v17, v18, v19);
    if ( result )
      break;
    if ( v21 == ++v22 )
      return v14;
  }
  return result;
}
