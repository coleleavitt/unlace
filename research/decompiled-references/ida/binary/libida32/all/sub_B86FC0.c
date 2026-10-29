__int64 __fastcall sub_B86FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax

  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
  {
    sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7 )
      goto LABEL_3;
    return 0;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v7 )
    return 0;
LABEL_3:
  if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
  {
    sub_B84BC0(a1);
    v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  return *(_QWORD *)(v7 + 56);
}

