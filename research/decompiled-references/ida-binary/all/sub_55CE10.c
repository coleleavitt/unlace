unsigned __int64 __fastcall sub_55CE10(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax
  int v4; // r9d
  unsigned int v5; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // esi
  int v10; // r8d

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    __assert_fail(
      "(uint32_t)((&self->cursor.stack)->size - 1) < (&self->cursor.stack)->size",
      "lib/src/./get_changed_ranges.c",
      0x95u,
      "iterator_end_position");
  v3 = *(_QWORD *)(a1 + 8) + 32LL * (unsigned int)(v1 - 1);
  v4 = *(_DWORD *)(v3 + 8);
  v5 = *(_DWORD *)(v3 + 12);
  v6 = **(_QWORD **)v3;
  if ( (v6 & 1) != 0 )
  {
    v7 = (v6 >> 40) & 0xF;
    v8 = v4 + BYTE6(v6);
    if ( (_DWORD)v7 )
      goto LABEL_4;
  }
  else
  {
    LODWORD(v7) = *(_DWORD *)(v6 + 8);
    v8 = v4 + *(_DWORD *)(v6 + 4);
    if ( (_DWORD)v7 )
LABEL_4:
      v5 += v7;
  }
  if ( !*(_BYTE *)(a1 + 44) )
  {
    if ( (v6 & 1) != 0 )
    {
      v8 += HIBYTE(v6);
    }
    else
    {
      v10 = *(_DWORD *)(v6 + 20);
      v8 += *(_DWORD *)(v6 + 16);
      if ( v10 )
        v5 += v10;
    }
  }
  return __PAIR64__(v5, v8);
}
