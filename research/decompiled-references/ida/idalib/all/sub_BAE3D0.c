unsigned __int64 __fastcall sub_BAE3D0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v27[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = a1;
  v9 = *(_QWORD *)(a1 + 120);
  if ( !v9 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), (__int64)a3, a4, a5, a6);
    v9 = *(_QWORD *)(a1 + 120);
  }
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v10 )
    return 0;
  if ( (*(_BYTE *)(v10 + 72) & 1) != 0 )
    sub_BA8900(a1);
  while ( 1 )
  {
    v11 = a2;
    v16 = sub_BA7A00(v7, a2, (__int64)a3, a4, a5, a6);
    if ( v16 )
      break;
    v17 = *(_QWORD *)(v7 + 120);
    if ( !v17 )
    {
      v11 = *(_QWORD *)(v7 + 96);
      sub_A794E0((__int64 *)(v11 + 88), v11, v12, v13, v14, v15);
      v17 = *(_QWORD *)(v7 + 120);
    }
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v18 )
    {
      v19 = v18;
      if ( (*(_BYTE *)(v18 + 72) & 1) != 0 )
      {
        sub_BA8900(v7);
        v19 = *(_QWORD *)(v7 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v16 = *(_QWORD *)(v19 + 56);
    }
    v27[0] = v16;
    sub_BA6800((__int64 *)v27);
    v24 = v27[0];
    if ( v27[0] )
    {
LABEL_14:
      v11 = a2;
      v16 = sub_BA7A00(v24, a2, v20, v21, v22, v23);
      if ( v16 )
        break;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v24 + 128);
        if ( !v24 )
          break;
        while ( *(char *)(v24 + 28) >= 0 )
        {
          v25 = *(_QWORD *)(v24 + 40);
          if ( (v25 & 7) == 0 && (v25 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            break;
          if ( (*(_BYTE *)(v24 + 8) & 6) == 0 )
            goto LABEL_14;
          v24 = *(_QWORD *)(v24 + 128);
          if ( !v24 )
            goto LABEL_21;
        }
      }
    }
LABEL_21:
    v7 = sub_BAB630(v7, v11, v20, v21, v22, v23);
    if ( !v7 )
      return 0;
  }
  *a3 = v7;
  return v16;
}
