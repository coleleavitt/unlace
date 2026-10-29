__int64 __fastcall sub_15EB680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v6; // rax
  __int64 *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v11; // r12
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r14
  bool v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+0h] [rbp-E0h]
  __int64 v23; // [rsp+10h] [rbp-D0h] BYREF
  _BYTE v24[200]; // [rsp+18h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    return 1;
  v6 = (__int64 **)sub_B8C3D0(a3, a2, a3, a4, a5, a6);
  v7 = *v6;
  v8 = (unsigned __int64)&(*v6)[*((unsigned int *)v6 + 2)];
  if ( (unsigned __int64)v7 < v8 )
  {
    v9 = v7;
    while ( *(_WORD *)(*v9 + 36) != 158 )
    {
      if ( (__int64 *)v8 == ++v9 )
        return 1;
    }
    if ( (__int64 *)v8 == v9 )
      return 1;
LABEL_12:
    v11 = *v7;
    if ( *(_WORD *)(*v7 + 36) != 158 )
    {
      v12 = v7 + 1;
      do
        v11 = *v12++;
      while ( *(_WORD *)(v11 + 36) != 158 );
    }
    sub_168B9F0(v24, a1 + 8, *(unsigned int *)(a2 + 24), 3245, 0);
    v13 = sub_15DD120((__int64)v24, a2);
    v14 = v13;
    if ( *(_BYTE *)(v13 + 120) )
    {
      sub_15D6640((unsigned __int8 **)(v13 + 32), v11);
      v15 = 1;
      if ( (*(_BYTE *)(a2 + 35) & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      if ( *(_BYTE *)(v13 + 132) )
      {
        v16 = sub_168B9E0(v13);
        v20 = *(_QWORD *)(v14 + 16);
        if ( v20 )
        {
          v22 = v16;
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
          v16 = v22;
        }
        v23 = v20;
        v21 = sub_1587BC0(v16, &v23, v16, v17, v18, v19);
        sub_15D6640((unsigned __int8 **)(*v21 + 32LL * *(unsigned int *)(v14 + 128) + 8), v11);
      }
      v15 = 1;
      if ( (*(_BYTE *)(a2 + 35) & 2) != 0 )
        goto LABEL_18;
    }
    v15 = (*(_BYTE *)(v11 + 35) & 2) != 0;
LABEL_18:
    LOBYTE(v23) = v15;
    sub_1588420(v14, (unsigned __int8 *)&v23);
    sub_15F7200(v24);
    sub_168B9F0(v24, a1 + 8, *(unsigned int *)(v11 + 24), 5839, 0);
    sub_15F7200(v24);
    return 0;
  }
  if ( v7 != (__int64 *)v8 )
  {
    while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 158 )
    {
      v8 += 8LL;
      if ( v7 == (__int64 *)v8 )
        return 1;
    }
    goto LABEL_12;
  }
  return 1;
}
