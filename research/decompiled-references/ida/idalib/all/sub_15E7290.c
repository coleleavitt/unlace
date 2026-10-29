__int64 __fastcall sub_15E7290(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v7; // rax
  __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v12; // r12
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+0h] [rbp-E0h]
  __int64 v24; // [rsp+10h] [rbp-D0h] BYREF
  _BYTE v25[200]; // [rsp+18h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    return 1;
  v7 = (__int64 **)sub_B8C3D0(a4, a2, a3, a4, a5, a6);
  v8 = *v7;
  v9 = (unsigned __int64)&(*v7)[*((unsigned int *)v7 + 2)];
  if ( (unsigned __int64)v8 < v9 )
  {
    v10 = v8;
    while ( *(_WORD *)(*v10 + 36) != 278 )
    {
      if ( (__int64 *)v9 == ++v10 )
        return 1;
    }
    if ( (__int64 *)v9 == v10 )
      return 1;
LABEL_12:
    v12 = *v8;
    if ( *(_WORD *)(*v8 + 36) != 278 )
    {
      v13 = v8 + 1;
      do
        v12 = *v13++;
      while ( *(_WORD *)(v12 + 36) != 278 );
    }
    sub_168B9F0(v25, a2 + 8, *(unsigned int *)(a3 + 24), 3245, 0);
    v14 = sub_15DD120((__int64)v25, a3);
    v15 = v14;
    if ( *(_BYTE *)(v14 + 120) )
    {
      sub_15D6640((unsigned __int8 **)(v14 + 32), v12);
      v16 = 1;
      if ( (*(_BYTE *)(a3 + 35) & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      if ( *(_BYTE *)(v14 + 132) )
      {
        v17 = sub_168B9E0(v14);
        v21 = *(_QWORD *)(v15 + 16);
        if ( v21 )
        {
          v23 = v17;
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
          v17 = v23;
        }
        v24 = v21;
        v22 = sub_1587BC0(v17, &v24, v17, v18, v19, v20);
        sub_15D6640((unsigned __int8 **)(*v22 + 32LL * *(unsigned int *)(v15 + 128) + 8), v12);
      }
      v16 = 1;
      if ( (*(_BYTE *)(a3 + 35) & 2) != 0 )
        goto LABEL_18;
    }
    v16 = (*(_BYTE *)(v12 + 35) & 2) != 0;
LABEL_18:
    LOBYTE(v24) = v16;
    sub_1588420(v15, (unsigned __int8 *)&v24);
    sub_15F7200(v25);
    sub_168B9F0(v25, a2 + 8, *(unsigned int *)(v12 + 24), 5839, 0);
    sub_15F7200(v25);
    return 0;
  }
  if ( v8 != (__int64 *)v9 )
  {
    while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 278 )
    {
      v9 += 8LL;
      if ( v8 == (__int64 *)v9 )
        return 1;
    }
    goto LABEL_12;
  }
  return 1;
}
