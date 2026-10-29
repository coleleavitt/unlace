bool __fastcall sub_B74AF0(__int64 a1)
{
  int v2; // eax
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx

  if ( (*(_DWORD *)(a1 + 40) & 7) != 6 )
    return 0;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v2 != 1 && v2 != 3 && v2 != 2 && v2 != 4 )
    return 0;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v4 & 4) == 0 )
  {
    if ( (*(_BYTE *)(sub_B8EAA0(v5) + 8) & 0x7F) == 0 )
      goto LABEL_9;
    return 0;
  }
  if ( (*(_BYTE *)(sub_B8EAA0(*v5) + 8) & 0x7F) != 0 )
    return 0;
LABEL_9:
  v6 = sub_B8C330(a1);
  if ( sub_A8C0E0(v6, a1) )
    return 0;
  v9 = (__int64 *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *v9;
  if ( *(_BYTE *)(*v9 + 16) != 26 )
    v10 = sub_F63050(*v9, a1, v7, v8);
  if ( *(_WORD *)(v10 + 22) != 2 || *(char *)(v10 + 19) < 0 )
    return 0;
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v11 = (_QWORD *)*v11;
  v12 = sub_B8EAA0(v11);
  if ( !v12 )
    BUG();
  v13 = *(_QWORD *)&byte_8[*(_QWORD *)(v10 + 56) & 0xFFFFFFFFFFFFFFF0LL];
  return (v13 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v13 | (unsigned __int8)*(_QWORD *)(v10 + 56)) & 7) == *(_QWORD *)(*(_QWORD *)(v12 + 48) + 19056LL);
}
