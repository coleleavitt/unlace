__int64 __fastcall sub_3F61E0(__int64 a1, __m128 a2)
{
  char v2; // r14
  unsigned int v3; // ebp

  sub_3F43F0((_QWORD *)(a1 + 24), (char *)(a1 + 424));
  v2 = *(_BYTE *)(a1 + 384);
  *(_BYTE *)(a1 + 384) = netnode_charval(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 104LL), *(_QWORD *)(a1 + 40), 256);
  v3 = sub_3F4C00(a1, 0, a2);
  sub_3F43F0((_QWORD *)(a1 + 24), (char *)(a1 + 424));
  *(_BYTE *)(a1 + 384) = v2;
  return v3;
}
