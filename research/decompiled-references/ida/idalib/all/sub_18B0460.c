bool __fastcall sub_18B0460(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) != 0 )
    return 0;
  v4 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(unsigned __int8 *)(v5 + 16);
  if ( (_BYTE)v6 != 42 )
  {
    a4 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(a4 + 16) == 42 )
    {
      v5 = sub_F63050(v5, a2, v6, a4);
      if ( v5 )
        goto LABEL_3;
      v5 = *(_QWORD *)v4;
      LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)v4 + 16LL);
    }
    if ( (_BYTE)v6 != 33 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v9 + 16) != 33 )
        return 0;
      v5 = sub_F63050(v5, a2, v9, a4);
      if ( !v5 )
        return 0;
    }
  }
LABEL_3:
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) != 26 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) == 26 )
    {
      v11 = sub_F63050(v7, a2, v10, a4);
      if ( v11 )
        return (*(_BYTE *)(v11 + 19) & 0x1E) != 0;
    }
    return 0;
  }
  return (*(_BYTE *)(v7 + 19) & 0x1E) != 0;
}
