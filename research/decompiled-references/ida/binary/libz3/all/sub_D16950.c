__int64 __fastcall sub_D16950(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // eax
  unsigned __int64 v4; // rdx
  bool v5; // zf
  __int64 result; // rax

  sub_1863170(a1 + 24, a2);
  v2 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(v2 + 378) = sub_1859610(a1 + 24, "common_patterns", 1);
  *(_BYTE *)(v2 + 379) = sub_1859610(a1 + 24, "distributivity", 1);
  *(_DWORD *)(v2 + 380) = sub_1859960(a1 + 24, "distributivity_blowup", 32);
  *(_BYTE *)(v2 + 384) = sub_1859610(a1 + 24, "ite_chains", 1);
  *(_BYTE *)(v2 + 385) = sub_1859610(a1 + 24, "ite_extra", 1);
  v3 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  v4 = (unsigned __int64)v3 << 20;
  v5 = v3 == -1;
  result = -1;
  if ( !v5 )
    result = v4;
  *(_QWORD *)(v2 + 392) = result;
  return result;
}

