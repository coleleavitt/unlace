__int64 __fastcall sub_1FBDC30(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 176);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (2 * (_BYTE)v3) & 6 | (unsigned __int64)((v3 & 0xFFFFFFFFFFFFFFFCLL) != 0));
  if ( (v3 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    sub_183F100(a1 + 32, v3 & 0xFFFFFFFFFFFFFFFCLL);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 168), *(_QWORD *)(a1 + 24));
  sub_1FBD1D0(a1, a2, v4, v5, v6, v7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 85) & 3);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 184) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(__int64 *)(a2 + 184) >> 1) & 3);
  *(_DWORD *)(a1 + 224) = 100;
  return result;
}
