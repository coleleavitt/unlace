bool __fastcall sub_B8AEB0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( (unsigned int)sub_B84340(a1, (__int64)a2, a3, a4, a5, a6) != 3 )
    return 0;
  v6 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v6 = *(_QWORD *)v6;
  return (*(_BYTE *)(v6 + 8) & 0x7F) != 0x13
      && (v7 = sub_B84890(a1)) != 0
      && sub_B8AC60(v7, *(_QWORD *)(a1 + 40), a2, v8, v9, v10);
}

