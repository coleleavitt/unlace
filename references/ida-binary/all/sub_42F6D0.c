__int64 __fastcall sub_42F6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v9; // rax

  sub_497880(a1, a2, a4);
  *(_QWORD *)(a1 + 232) = a1 + 280;
  *(_QWORD *)(a1 + 240) = 1;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)a1 = &standalone_dirtree_item_model_t___vtable;
  *(_QWORD *)(a1 + 224) = &off_86FDF8;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 264) = 1065353216;
  *(_QWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = a1;
  *(_QWORD *)(a1 + 280) = 0;
  v9 = operator new(0x10u);
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 8) = 0;
  sub_3CD2A0((char **)(a1 + 232), 0, 0, (char *)v9, 1u);
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 360) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 224) = standalone_dirtree_item_model_t::lazy_loader_t___vtable;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 312) = a5;
  *(_QWORD *)a1 = &files_dirtree_item_model_t___vtable;
  *(_QWORD *)(a1 + 376) = a1 + 360;
  *(_QWORD *)(a1 + 384) = a1 + 360;
  *(_QWORD *)(a1 + 392) = 0;
  *(_BYTE *)(a1 + 320) = a6;
  *(_QWORD *)(a3 + 40) = a1;
  return a1 + 360;
}
