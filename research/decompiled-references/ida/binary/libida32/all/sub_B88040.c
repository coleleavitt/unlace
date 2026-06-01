__int64 __fastcall sub_B88040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      return 0;
  }
  else
  {
    sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      return 0;
  }
  if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
  {
    sub_B84BC0(a1);
    v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    v8 = *(unsigned int *)(v7 + 48);
    if ( (_DWORD)v8 )
      return *(_QWORD *)(v7 + 40) + 8 * v8;
    if ( !*(_QWORD *)(a1 + 120) )
    {
      sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v8, 0, v10, v11);
      v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v7 )
      goto LABEL_10;
    return 0;
  }
  v8 = *(unsigned int *)(v7 + 48);
  if ( (_DWORD)v8 )
    return *(_QWORD *)(v7 + 40) + 8 * v8;
LABEL_10:
  if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
  {
    sub_B84BC0(a1);
    v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  return *(_QWORD *)(v7 + 16) + 8LL * *(unsigned int *)(v7 + 24);
}

