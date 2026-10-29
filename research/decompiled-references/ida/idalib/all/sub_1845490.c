_BOOL8 __fastcall sub_1845490(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    return 0;
  v5 = sub_A71450(*(_QWORD *)(a1 + 248), a3);
  v10 = sub_F63270(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL), a3, v6, v7, v8, v9);
  v15 = v10;
  if ( v10 )
  {
    v16 = v10[16];
    if ( !v16 )
    {
      sub_7052B0((__int64 *)(v15[13] + 96LL), v15[13], v11, v12, v13, v14);
      v16 = v15[16];
      if ( !v16 )
        return 0;
    }
    v17 = *(_QWORD *)(v16 + 88);
    if ( v17 && (*(_BYTE *)(v17 + 74) & 2) == 0 )
    {
      sub_7052B0((__int64 *)(v15[13] + 96LL), v15[13], v11, v12, v13, v14);
      return (*(_BYTE *)(v15[16] + 1LL) & 8) != 0;
    }
  }
  return 0;
}
