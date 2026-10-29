bool __fastcall sub_17137E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int8 v18; // al
  __int64 v19; // rax

  v6 = *(_QWORD *)(a1 + 176);
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 232) + 1LL) & 8) != 0 )
  {
    v18 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( ((v18 + 52) & 0x7Fu) <= 1 || (v7 = (unsigned int)v18 - 53, v19 = a2, (unsigned int)v7 <= 1) )
      v19 = sub_B72ED0(a2);
    if ( (*(_WORD *)(v19 + 30) & 0x83A) != 0 )
      goto LABEL_4;
    return 0;
  }
  if ( !sub_1713700(a1, a2, a3, a4, a5, a6) )
    return 0;
  v6 = *(_QWORD *)(a1 + 176);
LABEL_4:
  v8 = sub_17040B0(*(_QWORD *)(v6 + 248), a2, v7, a4, a5, a6);
  if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v9 = v8;
  v10 = sub_A71450(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 248LL), v8) & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)v10;
  v13 = v10;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34) <= 2u )
    return 1;
  if ( *(_BYTE *)(v12 + 16) == 34 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 35;
    if ( (unsigned int)v16 > 1 )
      v15 = sub_F63050(v15, v9, v16, v11);
    if ( !(*(_BYTE *)(v15 + 19) >> 2) )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v17 + 16) == 13 && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x1E9 )
        return 1;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 232LL) + 1LL) & 8) == 0 )
    return 0;
  return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48;
}
