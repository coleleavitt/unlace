_QWORD *__fastcall sub_5141E0(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  void *v3; // rax
  unsigned int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = 204;
  v1 = (_QWORD *)operator new(8u);
  v2 = operator new(0x30u);
  *(_QWORD *)v2 = &unk_2BD03E8;
  *(_DWORD *)(v2 + 8) = 5;
  *(_QWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  v3 = (void *)qvector_reserve(v2 + 16, 0, 16, 1);
  *(_QWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 24) = 16;
  qmemcpy(v3, "$ dirtree/funcs", 15);
  *(_BYTE *)(*(_QWORD *)(v2 + 16) + 15LL) = 0;
  *(_QWORD *)v2 = &off_2B03E68;
  *(_QWORD *)(v2 + 40) = a1;
  *v1 = sub_414870((__int64)v1, v2, &v5);
  return v1;
}

