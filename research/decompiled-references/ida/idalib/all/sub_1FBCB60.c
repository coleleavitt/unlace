__int64 __fastcall sub_1FBCB60(__int64 *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rsi
  __int64 *v6; // rsi
  __int64 v7; // rdx

  sub_1FBC930((__int64)a1, a2);
  sub_1F6F570((_QWORD *)a1[2], *(_DWORD *)(a2 + 64), a1[3]);
  sub_9B9C90(a1[3], (*(__int64 *)(a2 + 56) >> 2) & 1);
  v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 4) != 0
    && (sub_1F9A6F0(a1 + 1, v5 & 0xFFFFFFFFFFFFFFF8LL),
        sub_183F100((__int64)(a1 + 4), *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 40)),
        sub_9B9C90(a1[3], *(unsigned int *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 48)),
        v5 = *(_QWORD *)(a2 + 56),
        (v5 & 4) != 0) )
  {
    v6 = *(__int64 **)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 32);
  }
  else
  {
    v6 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  }
  v7 = 0;
  if ( v6 )
    v7 = *v6;
  return sub_1F85840(a1[2], a1[1], v7, (_QWORD *)a1[3], v3, v4);
}
