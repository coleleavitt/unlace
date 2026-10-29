__int64 __fastcall sub_2A9CD0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = operator new(0xB8u);
  *(_QWORD *)(v2 + 8) = a2;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 64) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  *(_QWORD *)v2 = &grida_model_data_t___vtable;
  *(_QWORD *)(v2 + 160) = v2 + 144;
  *(_QWORD *)(v2 + 168) = v2 + 144;
  v3 = *a2;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_DWORD *)(v2 + 104) = -1;
  *(_QWORD *)(v2 + 112) = 0;
  *(_DWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 176) = 0;
  *(_OWORD *)(v2 + 80) = 0;
  *(_OWORD *)(v2 + 120) = 0;
  (*(void (__fastcall **)(__int64 *, __int64))(v3 + 312))(a2, v2 + 72);
  return v2;
}
