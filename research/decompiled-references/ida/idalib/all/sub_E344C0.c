__int64 __fastcall sub_E344C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 17448LL);
  v4 = *(unsigned int *)(v3 + 144);
  v5 = (unsigned int)sub_102DB30(v3, v4);
  sub_102DC90(v3, v4);
  v8 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)v8;
  if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) == 26
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && sub_F63050(v9, v4, v6, v7) )
  {
    v5 *= 2;
  }
  return v5;
}
