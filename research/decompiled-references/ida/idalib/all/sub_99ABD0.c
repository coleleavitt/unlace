__int64 __fastcall sub_99ABD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  if ( *(_BYTE *)(a1 + 320) )
    return 0;
  v6 = sub_999B20(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(v6 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  if ( *(_QWORD *)(a1 + 32) )
  {
    sub_99A450(
      (_QWORD *)a1,
      *(_QWORD *)(a1 + 128),
      *(_QWORD *)(a1 + 136),
      *(_QWORD *)(a1 + 40),
      *(_QWORD *)(a1 + 48),
      a2);
    sub_999860(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 32),
      2LL * (*(_QWORD *)(a1 + 32) == 0),
      (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL),
      v7,
      v8);
  }
  else
  {
    *(_BYTE *)(a1 + 320) = 1;
  }
  return *(_QWORD *)(a1 + 16);
}
