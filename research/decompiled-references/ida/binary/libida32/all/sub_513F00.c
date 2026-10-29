_QWORD *sub_513F00()
{
  _QWORD *v0; // rbp
  __int64 v1; // rbx
  void *v2; // rax
  unsigned int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 211;
  v0 = (_QWORD *)operator new(8u);
  v1 = operator new(0x28u);
  *(_QWORD *)v1 = &unk_2BD03E8;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  v2 = (void *)qvector_reserve(v1 + 16, 0, 15, 1);
  *(_QWORD *)(v1 + 16) = v2;
  *(_QWORD *)(v1 + 24) = 15;
  qmemcpy(v2, "$ dirtree/bpts", 14);
  *(_BYTE *)(*(_QWORD *)(v1 + 16) + 14LL) = 0;
  *(_QWORD *)v1 = &off_2B04030;
  *v0 = sub_414870((__int64)v0, v1, &v4);
  return v0;
}

