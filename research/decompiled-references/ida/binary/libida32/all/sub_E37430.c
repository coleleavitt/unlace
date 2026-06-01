__int64 __fastcall sub_E37430(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // cl
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  char v8; // cl
  unsigned __int64 v9; // rax
  __int64 v10; // rdi

  v3 = 0;
  v5 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v5;
  if ( *(_BYTE *)(*(_QWORD *)v5 + 16LL) != 26 )
  {
    v3 = 1;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
      v3 = sub_F3F310(v6, a2, a3, 1) == 0;
  }
  sub_E35E50(a1, (__int64)"isData", 6, v3);
  v8 = 1;
  v9 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_QWORD *)v9;
  if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) != 26 )
  {
    v8 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
      v8 = sub_F3F310(v10, "isData", v7, 0) != 0;
  }
  return sub_E35E50(a1, (__int64)"isFunction", 10, v8);
}

