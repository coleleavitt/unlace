char __fastcall sub_55D770(__int64 a1)
{
  int v1; // ecx
  __int64 v2; // rsi
  __int64 v4; // rax
  int v5; // edi
  unsigned __int64 v6; // rax
  int v7; // ecx

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    __assert_fail(
      "(uint32_t)((&self->cursor.stack)->size - 1) < (&self->cursor.stack)->size",
      "lib/src/./get_changed_ranges.c",
      0x9Fu,
      "iterator_tree_is_visible");
  v2 = *(_QWORD *)(a1 + 8);
  v4 = v2 + 32LL * (unsigned int)(v1 - 1);
  v5 = *(_DWORD *)(v4 + 24);
  v6 = **(_QWORD **)v4;
  if ( (v6 & 1) != 0 )
    v6 = (v6 >> 1) & 1;
  else
    LOBYTE(v6) = *(_BYTE *)(v6 + 44) & 1;
  if ( !(_BYTE)v6 && v1 != 1 )
  {
    v7 = *(unsigned __int16 *)(**(_QWORD **)(v2 + 32LL * (unsigned int)(v1 - 2)) + 66LL);
    if ( v7 )
      LOBYTE(v6) = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 128LL)
                            + 2LL * (v7 * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 36LL) + v5)) != 0;
  }
  return v6;
}
