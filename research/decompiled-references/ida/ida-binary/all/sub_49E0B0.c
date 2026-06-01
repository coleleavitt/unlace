__int64 __fastcall sub_49E0B0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = operator new(0x68u);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 56) = -1;
  *(_QWORD *)(v2 + 64) = -256;
  *(_QWORD *)(v2 + 72) = 255;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_OWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 40) = 0;
  *(_QWORD *)v2 = &chooser_folder_data_t___vtable;
  *(_QWORD *)(v2 + 96) = a1;
  return sub_48BC30(a1, v2, a2);
}
