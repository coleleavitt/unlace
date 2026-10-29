__int64 __fastcall sub_1FCC4C0(__int64 a1, unsigned __int64 a2, double a3)
{
  char v4; // si
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 3) & 8) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 4));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned __int8)(*(_WORD *)(a2 + 2) >> 3));
  v4 = *(_BYTE *)(a2 + 3);
  if ( (v4 & 8) != 0 )
  {
    v5 = (v4 & 0x10) != 0;
    sub_9B9C90(*(_QWORD *)(a1 + 24), v5);
  }
  else
  {
    v5 = a2 + 24;
    sub_1F986C0((__int64 *)(a1 + 8), (unsigned int *)(a2 + 24));
  }
  v6 = sub_EEC8C0(a2, v5, a3);
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), v6, *(_QWORD *)(a1 + 24));
  result = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)result )
  {
    v11 = 0;
    v12 = 8LL * (unsigned int)(result - 1) + 8;
    do
    {
      v11 += 8;
      v13 = (((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1;
      result = sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(v11 + a2 + 56 * v13 + 16), 7 * v13, v7, v8, v9);
    }
    while ( v12 != v11 );
  }
  *(_DWORD *)(a1 + 224) = 281;
  return result;
}
