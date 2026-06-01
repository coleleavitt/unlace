bool __fastcall netnode_exist(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi

  v7 = *a1;
  v8 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( v7 == -1 )
    JUMPOUT(0x7BA2E0);
  v1 = *(_QWORD *)(qword_2CCB598 + 1736);
  *(_WORD *)(v8 + 53) = 10;
  v2 = swap64(v7);
  *(_BYTE *)(v8 + 64) = 0;
  v3 = *(_QWORD *)v8;
  --*(_WORD *)(v1 + 53);
  *(_QWORD *)(v1 + 56) = v2;
  sub_7443D0(v3, (unsigned __int16 *)(v1 + 53));
  sub_741460(*(_QWORD *)v1);
  if ( v4 < 2 )
    JUMPOUT(0x7BA2D0);
  v5 = *(_QWORD *)(v4 + 3);
  return v5 == swap64(v7);
}
