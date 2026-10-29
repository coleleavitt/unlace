bool __fastcall sub_1BC9C10(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  bool result; // al
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int16 v11; // bp
  __int64 v12; // rax
  __int16 v13; // bp
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx

  v3 = *(_QWORD *)(sub_B8C1B0(a1 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v4 )
    BUG();
  v5 = *(_QWORD *)(v4 + 64);
  result = 0;
  if ( v5 && (*(_BYTE *)(v5 + 10) & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(sub_B96F60(v4 - 64) + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v10 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 25;
    if ( (unsigned int)v10 > 1 )
      v7 = sub_F63050(v7, a2, v10, v8);
    v11 = *(_WORD *)(v7 + 20);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = (unsigned __int8)v11 >> 2;
    v14 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 25;
    if ( (unsigned int)v14 > 1 )
      v12 = sub_F63050(v12, a2, v14, v8);
    v15 = *(_QWORD *)(sub_F68450(*(_QWORD *)(*(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFFF0LL), a2, v14, v8, v9)
                    & 0xFFFFFFFFFFFFFFF0LL);
    v17 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 25;
    if ( (unsigned int)v17 > 1 )
      v15 = sub_F63050(v15, a2, v17, v16);
    return v13 != ((*(_WORD *)(v15 + 20) >> 2) & 0x3F);
  }
  return result;
}
