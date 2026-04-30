__int64 __fastcall sub_522EE0(__int64 a1, __int64 *a2, int a3)
{
  int v3; // eax
  int v4; // ebp
  __int64 v5; // rbx

  v3 = a3;
  v4 = a3;
  if ( (*(_BYTE *)(a1 + 1985) & 8) != 0 )
  {
    LOBYTE(v3) = a3 | 0x80;
    v4 = v3;
  }
  v5 = operator new(0x90u);
  *(_QWORD *)v5 = &filtered_widget_mixin_update_strategy_t___vtable;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_BYTE *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 64) = 0;
  *(_OWORD *)(v5 + 16) = 0;
  *(_OWORD *)(v5 + 40) = 0;
  sub_4DE320((__int64 *)(v5 + 8), a2);
  *(_DWORD *)(v5 + 64) = v4;
  *(_QWORD *)v5 = &standalone_dirtree_update_strategy_t___vtable;
  *(_QWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 136) = 0;
  *(_OWORD *)(v5 + 80) = 0;
  *(_OWORD *)(v5 + 96) = -1;
  *(_OWORD *)(v5 + 120) = 0;
  return v5;
}
