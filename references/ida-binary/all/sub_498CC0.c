__int64 (__fastcall **__fastcall sub_498CC0(__int64 a1, __int64 a2, __int64 a3, int a4))()
{
  __int64 v5; // rax

  sub_497880(a1, *(_QWORD *)(a2 + 2440), a3);
  *(_QWORD *)(a1 + 232) = a1 + 280;
  *(_QWORD *)(a1 + 240) = 1;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)a1 = &chooser_dirtree_item_model_t___vtable;
  *(_QWORD *)(a1 + 224) = &off_86FDF8;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 264) = 1065353216;
  *(_QWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = a1;
  *(_QWORD *)(a1 + 280) = 0;
  v5 = operator new(0x10u);
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0;
  sub_3CD2A0((char **)(a1 + 232), 0, 0, (char *)v5, 1u);
  *(_QWORD *)(a1 + 304) = a2;
  *(_QWORD *)(a1 + 224) = chooser_dirtree_item_model_t::lazy_loader_t___vtable;
  *(_DWORD *)(a1 + 312) = a4;
  return chooser_dirtree_item_model_t::lazy_loader_t___vtable;
}
