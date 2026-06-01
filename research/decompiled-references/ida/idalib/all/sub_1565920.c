__int64 __fastcall sub_1565920(__int64 a1, unsigned __int8 a2)
{
  __int16 v2; // ax
  void *v4[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v5; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int8 *v6[15]; // [rsp+20h] [rbp-78h] BYREF

  sub_FC70B0((__int64)v6, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 2001);
  sub_13D35F0(
    (__int64)v4,
    a1 + 16,
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
    nullptr);
  sub_AEC220(v6, (_BYTE *)v4[0], (signed __int64)v4[1]);
  sub_AE9DF0(v6, a2, 2u);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
  sub_AEA040((__int64)v6);
  if ( a2 )
  {
    v2 = *(_WORD *)(a1 + 32);
    if ( (unsigned __int16)(v2 - 7) <= 0xCu || v2 == 1 )
    {
      *(_QWORD *)&dword_0 = 0x10102464C4400LL;
      BUG();
    }
    **(_QWORD **)(a1 + 24) = **(_QWORD **)(a1 + 24) & 0xFFFFFFF7FFFFFE00LL | 0x800000005LL;
  }
  *(_WORD *)(a1 + 32) = 5;
  return 1;
}
