_BOOL8 __fastcall sub_F67B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9

  if ( (*(_BYTE *)(a1 + 17) & 4) != 0 )
    return 0;
  for ( i = a1; ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v8 = sub_F62E70(i);
    if ( !v8 )
      break;
    i = v8;
  }
  if ( sub_F62670(i, nullptr, a3, a4, a5, a6) )
    return 0;
  if ( sub_F61140(i, 0, v9, v10, v11, v12) )
    return 1;
  v15 = *(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (unsigned int)(v16 - 57) <= 1 )
    return 1;
  if ( (_BYTE)v16 != 48 )
    return 0;
  v19 = sub_F60E90(*(_QWORD **)(v15 + 24), 0, v16, v15, v13, v14);
  if ( (*((_BYTE *)v19 + 28) & 0x7Fu) - 59 > 2 )
    return 1;
  sub_7052B0((__int64 *)(v19[13] + 96LL), v19[13], v17, v18, v20, v21);
  return (*(_BYTE *)(v19[16] + 1LL) & 0x10) != 0;
}
