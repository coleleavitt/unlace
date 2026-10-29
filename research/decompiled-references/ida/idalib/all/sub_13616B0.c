void *__fastcall sub_13616B0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = &unk_2C434D0;
  *(_DWORD *)(a1 + 32) = 0;
  return &unk_2C434D0;
}
