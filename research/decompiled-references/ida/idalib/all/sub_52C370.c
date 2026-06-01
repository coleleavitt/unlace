__int64 *__fastcall sub_52C370(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rbx
  void *v3; // rax
  unsigned int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = 205;
  v1 = (__int64 *)operator new(8u);
  v2 = operator new(0x30u);
  *(_QWORD *)v2 = &unk_2BFA3E8;
  *(_DWORD *)(v2 + 8) = 5;
  *(_QWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  v3 = (void *)qvector_reserve(v2 + 16, 0, 16, 1);
  *(_QWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 24) = 16;
  qmemcpy(v3, "$ dirtree/names", 15);
  *(_BYTE *)(*(_QWORD *)(v2 + 16) + 15LL) = 0;
  *(_QWORD *)v2 = &off_2B2DE70;
  *(_QWORD *)(v2 + 40) = a1;
  *v1 = sub_428210((__int64)v1, v2, &v5);
  return v1;
}
