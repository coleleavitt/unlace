bool __fastcall sub_7BE6E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi

  v8 = *a2;
  v9 = *(_QWORD *)(a1 + 1736);
  if ( v8 == -1 )
    return 0;
  v2 = v9;
  *(_WORD *)(v9 + 53) = 10;
  v3 = swap64(v8);
  *(_BYTE *)(v9 + 64) = 0;
  v4 = *(_QWORD *)v9;
  --*(_WORD *)(v2 + 53);
  *(_QWORD *)(v2 + 56) = v3;
  sub_7443D0(v4, (unsigned __int16 *)(v2 + 53));
  sub_741460(*(_QWORD *)v2);
  if ( v5 < 2 )
    return 0;
  v6 = *(_QWORD *)(v5 + 3);
  return v6 == swap64(v8);
}
