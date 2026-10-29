unsigned __int64 __fastcall sub_B735C0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 result; // rax

  v3 = sub_B685F0(a1);
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
    v8 = v7;
  }
  else
  {
    v7 = sub_A56D30(v3, a1, v1, v2, v4, v5);
    v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v9 = sub_B639C0(
         v3 + 17536,
         *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)(v8 + 8) | (unsigned __int8)v7) & 7);
  v14 = sub_B70930(a1 + 64, v9, v10, v11, v12, v13);
  if ( !v14 )
    return 0;
  while ( 1 )
  {
    v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    result = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v14 & 4) == 0 )
      break;
    if ( !v15 )
      return 0;
    result = *(_QWORD *)v15;
    if ( (*(_BYTE *)(*(_QWORD *)v15 + 28LL) & 0x7F) == 0x24 && (*(_BYTE *)(result + 83) & 0x10) == 0 )
      return result;
    v14 = *(_QWORD *)(v15 + 8);
    if ( !v14 )
      return 0;
  }
  if ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0x24 || (*(_BYTE *)(v15 + 83) & 0x10) != 0 )
    return 0;
  return result;
}

