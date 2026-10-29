__int64 __fastcall sub_48C840(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)operator new(0x60u);
  memset(v2, 0, 0x60u);
  v2[7] = -1;
  *v2 = &folder_data_t___vtable;
  v2[8] = -256;
  *((_WORD *)v2 + 36) = 255;
  return sub_48BC30(a1, (__int64)v2, a2);
}
