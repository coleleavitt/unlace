char __fastcall sub_179B380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
    goto LABEL_4;
  v7 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    v8 = sub_B8EAA0(*(_QWORD *)(v7 + 8));
    if ( (*(_BYTE *)(v8 + 8) & 0x7F) == 0 )
      return v8;
    goto LABEL_4;
  }
  v8 = sub_B8EAA0(v7);
  if ( (*(_BYTE *)(v8 + 8) & 0x7F) != 0 )
  {
LABEL_4:
    v9 = sub_A7A420(*(_QWORD *)(a1 + 248), a2, a3, a4, a5, a6);
    LOBYTE(v8) = sub_B94A80(v9 + 40, a2, v10, v11, v12, v13);
  }
  return v8;
}
