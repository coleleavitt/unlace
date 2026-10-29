char __fastcall sub_F67430(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax

  if ( (*(_BYTE *)(a1 + 17) & 4) != 0 )
    return 0;
  v6 = 0x600180000004000LL;
  v7 = a1;
  while ( 2 )
  {
    v8 = *(_QWORD *)(a2 + 2320);
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(unsigned __int8 *)(v9 + 16);
    if ( (*(_BYTE *)(v8 + 1) & 0x20) != 0 && (_BYTE)v10 == 13 )
    {
      if ( ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) != 0x1B3 )
        goto LABEL_10;
      return 1;
    }
    if ( (_BYTE)v10 == 6 )
      return 0;
    while ( 1 )
    {
LABEL_10:
      if ( (unsigned __int8)(*(_BYTE *)(v7 + 16) - 2) <= 4u )
        goto LABEL_9;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        break;
      v12 = sub_F62E70(v7);
      if ( !v12 )
        break;
      v7 = v12;
LABEL_9:
      v7 = *(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    }
    if ( sub_F62670(v7, nullptr, v10, v8, a5, a6) )
      return 0;
    if ( sub_F61140(v7, 0, v13, v14, v15, v16) )
      return 1;
    v18 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v19 = *(unsigned __int8 *)(v18 + 16);
    if ( (unsigned __int8)v19 <= 0x3Au )
    {
      if ( _bittest64(&v6, v19) )
        return 1;
      if ( (_BYTE)v19 == 48 )
      {
        v20 = sub_F60E90(*(_QWORD **)(v18 + 24), 0, v18, v17, a5, a6);
        if ( (*((_BYTE *)v20 + 28) & 0x7Fu) - 59 <= 2 )
          return sub_BA4170((__int64)v20);
        return 1;
      }
    }
    if ( *(_BYTE *)(v7 + 16) == 7 )
    {
LABEL_21:
      v21 = *(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v7 = *(_QWORD *)v21;
      if ( (*(_BYTE *)(*(_QWORD *)v21 + 17LL) & 4) != 0 )
        return 0;
      continue;
    }
    break;
  }
  if ( (_BYTE)v19 == 7 )
  {
    v22 = sub_F62E70(v7);
    if ( v22 )
    {
      v7 = v22;
      goto LABEL_21;
    }
  }
  return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 16;
}
