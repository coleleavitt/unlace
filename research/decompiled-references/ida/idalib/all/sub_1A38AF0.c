unsigned __int64 __fastcall sub_1A38AF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 result; // rax
  int v16; // ecx
  unsigned __int64 v17; // rdx

  v7 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(v7 + 8) & 7LL;
  v9 = v8 | (*(__int64 *)(v7 + 8) >> 3) & 1;
  if ( v9 )
    v7 = sub_F64F00(**(_QWORD **)(a2 + 16), a2, v8, v9, a5);
  v10 = sub_F63270(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v9, a5, a6);
  result = sub_B94670((unsigned __int64)(v10 + 8), *(_QWORD *)a1, v11, v12, v13, v14);
  *(_QWORD *)(a3 + 120) = result;
  if ( !result )
    return 0;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a1 + 8);
    v17 = result & 0xFFFFFFFFFFFFFFF8LL;
    if ( (result & 4) == 0 )
      break;
    if ( !v17 )
      goto LABEL_9;
    if ( ((unsigned __int16)v16 & *(_WORD *)(*(_QWORD *)v17 + 30LL) & 0x3FFF) != 0 )
      return 1;
    result = *(_QWORD *)(v17 + 8);
    *(_QWORD *)(a3 + 120) = result;
    if ( !result )
      return result;
  }
  if ( ((unsigned __int16)v16 & *(_WORD *)(v17 + 30) & 0x3FFF) == 0 )
  {
LABEL_9:
    *(_QWORD *)(a3 + 120) = 0;
    return 0;
  }
  return 1;
}
