__int64 __fastcall sub_17A6B10(_QWORD *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _BYTE *v11; // rax
  unsigned __int64 v12; // rax
  _BYTE *v14; // rax
  unsigned __int64 v15; // rax
  char v16; // dl
  unsigned __int64 *v17; // rax
  __int64 *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 *i; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _BYTE *v26[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a3;
  if ( (*(_BYTE *)(a1[29] + 96LL) & 0x10) != 0 && (a2[29] & 1) != 0 )
  {
    v17 = sub_B8C3D0((__int64)a2, (__int64)a2, a3, a4, a5, a6);
    v18 = (__int64 *)*v17;
    v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
    if ( *v17 < v19 )
    {
      v25 = *v17;
      while ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 64 )
      {
        v25 += 8LL;
        if ( v19 == v25 )
          goto LABEL_3;
      }
      if ( v19 != v25 )
        return 0;
    }
    else if ( v18 != (__int64 *)v19 )
    {
      if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 64 )
        return 0;
      for ( i = (__int64 *)(v19 + 8); i != v18; ++i )
      {
        v21 = *i;
        if ( *(_WORD *)(v21 + 36) == 64 )
          return 0;
      }
    }
  }
LABEL_3:
  if ( (unsigned __int8)sub_B8E180((unsigned __int64)(a2 + 72)) )
    return 3;
  v10 = a1[29];
  if ( (*(_BYTE *)(v10 + 68) & 8) != 0 )
  {
    v11 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
    v12 = sub_B062C0(v11);
    if ( BYTE4(v12) )
    {
      if ( !(_DWORD)v12 )
        return 2;
    }
    else if ( !*(_DWORD *)(a1[95] + 24LL) )
    {
      goto LABEL_41;
    }
    if ( (unsigned __int8)sub_B7D390((__int64)a2, (__int64)v26, 0, v7)
      && v26[0]
      && (v26[0][84] & 0x20) == 0
      && (int)sub_A7BFC0(a1[31], v26[0]) > 2 )
    {
      return 0;
    }
LABEL_41:
    if ( !v6 )
    {
      v16 = *(_BYTE *)(a1[29] + 60LL) & 0x10;
      goto LABEL_18;
    }
    return 2;
  }
  if ( *(_DWORD *)(v10 + 64) > 0x2Du )
  {
    v14 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
    v15 = sub_B062C0(v14);
    if ( BYTE4(v15) && (_DWORD)v15 == 1 )
      return 2;
    v10 = a1[29];
  }
  v16 = *(_BYTE *)(v10 + 60) & 0x10;
  if ( v6 )
  {
    v7 = *(unsigned int *)(v10 + 64);
    if ( (_DWORD)v7 )
    {
      if ( v16 )
        goto LABEL_28;
      return 0;
    }
  }
LABEL_18:
  if ( !v16 )
    return 4;
LABEL_28:
  v22 = sub_178EA20(a1[83], (__int64)a2, nullptr, v7, v8, v9);
  if ( (*(_BYTE *)(a1[29] + 89LL) & 4) != 0 )
  {
    if ( v22 != 2 )
      goto LABEL_30;
    return 1;
  }
  if ( v22 <= 1 )
    return 1;
LABEL_30:
  if ( (unsigned __int8)sub_B7D390((__int64)a2, (__int64)v26, 0, v23)
    && v26[0]
    && (v26[0][84] & 0x20) == 0
    && (int)sub_A7BFC0(a1[31], v26[0]) > 2 )
  {
    return 0;
  }
  if ( (a2[28] & 0x7F) != 0x24 || !sub_AED5B0((__int64)a2) )
    return 4;
  v24 = sub_B72690((__int64)(a2 + 72));
  if ( !v24 )
    BUG();
  if ( (*(_BYTE *)(v24 - 36) & 0x7Fu) - 60 > 1 || (unsigned int)sub_B97260(v24 - 64) - 3 > 1 )
    return 4;
  return 0;
}
