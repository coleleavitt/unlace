__int64 __fastcall sub_BAA820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx

  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      return 0;
    goto LABEL_3;
  }
  sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
  v15 = *(_QWORD *)(a1 + 104);
  v7 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
LABEL_3:
    v8 = *(__int64 **)(v7 + 8);
    v9 = &v8[*(unsigned int *)(v7 + 16)];
    goto LABEL_4;
  }
  if ( v15 )
    return 0;
  sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), 0, v12, v13, v14);
  if ( (*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  v8 = *(__int64 **)((*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v9 = nullptr;
LABEL_4:
  if ( v9 == v8 )
    return 0;
  while ( 1 )
  {
    result = *v8;
    v11 = *(_QWORD *)(*v8 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(*v8 + 40) & 7) != 0 )
      v11 = 0;
    if ( a2 == v11 )
      break;
    result = sub_BAA820(*v8, a2, v11, *(_QWORD *)(*v8 + 40) & 7LL);
    if ( result )
      break;
    if ( v9 == ++v8 )
      return 0;
  }
  return result;
}
