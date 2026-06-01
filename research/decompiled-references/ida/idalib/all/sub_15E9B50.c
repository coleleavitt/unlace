__int64 __fastcall sub_15E9B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  unsigned __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 **v17; // rax
  __int64 *v18; // rdx
  unsigned __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r14
  bool v26; // al
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // [rsp+0h] [rbp-E0h]
  __int64 v35; // [rsp+10h] [rbp-D0h] BYREF
  _BYTE v36[200]; // [rsp+18h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    return 1;
  v8 = (__int64 **)sub_B8C3D0(a4, a2, a3, a4, a5, a6);
  v13 = *v8;
  v14 = (unsigned __int64)&(*v8)[*((unsigned int *)v8 + 2)];
  if ( (unsigned __int64)v13 >= v14 )
  {
    if ( v13 == (__int64 *)v14 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 160 )
    {
      v15 = (__int64 *)(v14 + 8);
      do
      {
        v9 = (__int64)v15;
        if ( v13 == v15 )
          goto LABEL_8;
        v16 = *v15++;
      }
      while ( *(_WORD *)(v16 + 36) != 160 );
    }
LABEL_17:
    while ( 1 )
    {
      v23 = *v13;
      if ( *(_WORD *)(*v13 + 36) == 160 )
        break;
      ++v13;
    }
    goto LABEL_18;
  }
  v9 = (__int64)v13;
  v10 = *v13;
  if ( *(_WORD *)(*v13 + 36) == 160 )
  {
LABEL_27:
    if ( v14 == v9 )
      goto LABEL_8;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v9 += 8;
    if ( v14 == v9 )
      break;
    v10 = *(_QWORD *)v9;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 160 )
      goto LABEL_27;
  }
LABEL_8:
  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    return 1;
  v17 = (__int64 **)sub_B8C3D0(a4, a2, v9, v10, v11, v12);
  v18 = *v17;
  v19 = (unsigned __int64)&(*v17)[*((unsigned int *)v17 + 2)];
  if ( (unsigned __int64)v18 >= v19 )
  {
    if ( v18 != (__int64 *)v19 )
    {
      if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 165 )
      {
        v20 = (__int64 *)(v19 + 8);
        while ( v18 != v20 )
        {
          v21 = *v20++;
          if ( *(_WORD *)(v21 + 36) == 165 )
            goto LABEL_32;
        }
        return 1;
      }
      goto LABEL_32;
    }
    return 1;
  }
  v27 = v18;
  while ( *(_WORD *)(*v27 + 36) != 165 )
  {
    if ( (__int64 *)v19 == ++v27 )
      return 1;
  }
  if ( (__int64 *)v19 == v27 )
    return 1;
LABEL_32:
  while ( 1 )
  {
    v23 = *v18;
    if ( *(_WORD *)(*v18 + 36) == 165 )
      break;
    ++v18;
  }
LABEL_18:
  sub_168B9F0(v36, a2 + 8, *(unsigned int *)(a3 + 24), 3245, 0);
  v24 = sub_15DD120((__int64)v36, a3);
  v25 = v24;
  if ( *(_BYTE *)(v24 + 120) )
  {
    sub_15D6640((unsigned __int8 **)(v24 + 32), v23);
  }
  else if ( *(_BYTE *)(v24 + 132) )
  {
    v28 = sub_168B9E0(v24);
    v32 = *(_QWORD *)(v25 + 16);
    if ( v32 )
    {
      v34 = v28;
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
      v28 = v34;
    }
    v35 = v32;
    v33 = sub_1587BC0(v28, &v35, v28, v29, v30, v31);
    sub_15D6640((unsigned __int8 **)(*v33 + 32LL * *(unsigned int *)(v25 + 128) + 8), v23);
  }
  v26 = 1;
  if ( (*(_BYTE *)(a3 + 35) & 2) == 0 )
    v26 = (*(_BYTE *)(v23 + 35) & 2) != 0;
  LOBYTE(v35) = v26;
  sub_1588420(v25, (unsigned __int8 *)&v35);
  sub_15F7200(v36);
  sub_168B9F0(v36, a2 + 8, *(unsigned int *)(v23 + 24), 5839, 0);
  sub_15F7200(v36);
  return 0;
}
