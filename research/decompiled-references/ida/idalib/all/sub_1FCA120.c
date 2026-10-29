__int64 __fastcall sub_1FCA120(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  __int64 result; // rax

  sub_1FC2690(a1, (__int64)a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*a2 >> 19) & 1LL);
  sub_1F92A90(*(_QWORD *)(a1 + 16), a2[2], *(_QWORD *)(a1 + 24));
  v3 = a2[3];
  if ( v3 )
    v3 = sub_B8C1B0(a2[3]);
  sub_1F92A90(*(_QWORD *)(a1 + 16), v3, *(_QWORD *)(a1 + 24));
  v7 = sub_C00A40((unsigned __int64)a2, v3, v4, v5, v6);
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), v7, *(_QWORD *)(a1 + 24));
  if ( (*a2 & 0x80000LL) != 0 )
    result = sub_183F100(a1 + 32, a2[4]);
  *(_DWORD *)(a1 + 224) = 265;
  return result;
}
