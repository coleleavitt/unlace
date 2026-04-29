__int64 __fastcall sub_23E3A0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx

  v1 = j__qalloc_or_throw();
  *(_QWORD *)v1 = -1;
  *(_QWORD *)(v1 + 8) = -4294967230LL;
  *(_QWORD *)(v1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  v2 = j__qalloc_or_throw();
  *(_DWORD *)(v2 + 8) = 70;
  *(_QWORD *)(v2 + 12) = -1;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v1 + 24) = v2;
  *(_QWORD *)v2 = a1;
  *(_DWORD *)(*(_QWORD *)(v1 + 24) + 8LL) = 82;
  v3 = qalloc_or_throw();
  *(_OWORD *)(v3 + 8) = 0;
  v4 = (_QWORD *)v3;
  *(_QWORD *)v3 = 0;
  v5 = qvector_reserve();
  v6 = v4[1];
  *v4 = v5;
  *(_QWORD *)(v5 + 8 * v6) = a1;
  ++v4[1];
  *(_QWORD *)(*(_QWORD *)(v1 + 24) + 24LL) = v4;
  *(_QWORD *)v1 = a1;
  return v1;
}
