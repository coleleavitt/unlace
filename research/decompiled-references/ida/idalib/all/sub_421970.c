_BOOL8 __fastcall sub_421970(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  _BOOL8 result; // rax

  v2 = *(_QWORD *)(switch_dbctx(*(int *)(a2 + 8)) + 1640);
  v3 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1640);
  result = 1;
  if ( *(_DWORD *)(v2 + 136) == *(_DWORD *)(v3 + 136) )
    return memcmp((const void *)(v2 + 8), (const void *)(v3 + 8), 0x80u) != 0;
  return result;
}
