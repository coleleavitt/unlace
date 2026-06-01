__int64 __fastcall sub_AAA6E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  _QWORD *v5; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 result; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r15
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = sub_F63600(*v5);
  if ( !v9 )
    return 0;
  v13 = sub_F60F10(v9, v5, v10, v11, v12);
  v14 = v13;
  if ( (*(_BYTE *)(v13 + 29) & 1) == 0 )
    return 0;
  v16 = sub_B8C3D0(v13);
  v17 = *(__int64 **)v16;
  v18 = *(_QWORD *)v16 + 8LL * *(unsigned int *)(v16 + 8);
  if ( *(_QWORD *)v16 >= v18 )
  {
    if ( v17 == (__int64 *)v18 )
      return 0;
    if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 380 )
    {
      v20 = (__int64 *)(v18 + 8);
      while ( v20 != v17 )
      {
        v21 = *v20++;
        if ( *(_WORD *)(v21 + 36) == 380 )
          goto LABEL_16;
      }
      return 0;
    }
  }
  else
  {
    v19 = *(__int64 **)v16;
    while ( *(_WORD *)(*v19 + 36) != 380 )
    {
      if ( (__int64 *)v18 == ++v19 )
        return 0;
    }
    if ( (__int64 *)v18 == v19 )
      return 0;
  }
LABEL_16:
  v22 = sub_B7E900(v14);
  if ( !v22 )
    return 0;
LABEL_17:
  v25[0] = *(_QWORD *)(v22 + 48);
  v23 = sub_6D5440(v25);
  result = sub_AA91B0(a1, v23, a3, a4, a5, 0);
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    while ( 1 )
    {
      v24 = *(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v22 = v24;
      if ( !v24 )
        return 0;
      if ( (*(_BYTE *)(v24 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_17;
    }
  }
  return result;
}
