_QWORD *__fastcall sub_B68690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0 )
    return sub_A71BE0(*(_QWORD *)(a1 + 88), a1, a3, a4, a5, a6);
  v7 = sub_B68580(a1);
  return sub_A71BE0(*(_QWORD *)(v7 + 88), a1, v8, v9, v10, v11);
}

