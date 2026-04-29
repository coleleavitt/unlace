__int64 __fastcall sub_3FAFB0(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax

  if ( *(_WORD *)(a1 + 48) == 435 )
    return 0;
  if ( *(_QWORD *)(a1 + 40) < *(_QWORD *)(a1 + 856) )
    return 0;
  v3 = *(_BYTE *)(a1 + 56) & 0xF;
  v4 = sub_3FAA90(a1, v3, a2);
  v9 = sub_3FA8C0(a1, a2, v3, v5, v6, v7, v8);
  sub_3F56D0(a1, 0x2Au, 0, v4, 0x3BEA45E214ADDC55LL, v9, 0);
  result = 1;
  if ( *(_WORD *)(a1 + 48) != 278 )
  {
    *(_QWORD *)(a1 + 16) = sub_679D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    return 0;
  }
  return result;
}
