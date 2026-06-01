unsigned __int64 __fastcall sub_1E49C80(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 result; // rax

  v4 = sub_BBF290(a2);
  v9 = sub_B94670(*(_QWORD *)(a1 + 24), *(_QWORD *)(v4 + 40), v5, v6, v7, v8);
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  if ( (v9 & 4) != 0 )
    v10 = *(_QWORD *)v10;
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x48 )
    return 0;
  result = sub_BC5510((_QWORD *)v10, a2);
  if ( !result )
    return sub_1E49670((__int64 *)a1, (_QWORD *)v10, a2, a3, a4);
  return result;
}
