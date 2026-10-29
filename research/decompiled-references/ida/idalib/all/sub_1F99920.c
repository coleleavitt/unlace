__int64 __fastcall sub_1F99920(__int64 **a1, __int64 a2)
{
  bool v4; // al
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  __int64 v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v11[0] = *(_QWORD *)(a2 + 40);
  v4 = sub_F22B30(v11);
  v5 = *a1;
  v6 = 0;
  if ( !v4 )
    v6 = v11[0];
  sub_1F995C0(v5, v6);
  sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 24), (_QWORD *)(*a1)[2], v7, v8);
  v9 = 0;
  if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    v9 = ((unsigned __int64)*(unsigned __int8 *)(a2 + 17) >> 2) & 1;
  return sub_9B9C90((*a1)[2], v9);
}
