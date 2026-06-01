unsigned __int64 __fastcall sub_1E01A20(__int64 *a1, __int64 a2)
{
  __int64 i; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  for ( i = *(_QWORD *)(a2 + 88); (*(_BYTE *)(i + 28) & 0x7F) == 0x4D; i = *(_QWORD *)(i + 88) )
    ;
  v4 = *(_QWORD *)(*a1 + 248);
  v5 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v5 = 0;
  v6 = sub_B99B00(
         v4,
         a1[3],
         *(_DWORD *)(a2 + 64),
         *(_DWORD *)(a2 + 24),
         v5,
         *(_DWORD *)(a2 + 68),
         *(_QWORD *)(a2 + 72),
         *(_QWORD *)(a2 + 80),
         i);
  sub_B94AD0((__m128i *)a1[3], v6, v7, v8, v9, v10);
  return v6;
}
