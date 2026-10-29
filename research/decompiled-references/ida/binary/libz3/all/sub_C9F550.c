__int64 __fastcall sub_C9F550(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax

  v2 = a1 + 24;
  sub_1863170(a1 + 24, a2);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  v5 = a1 + 24;
  v6 = (unsigned __int64)v4 << 20;
  v7 = v4 == -1;
  v8 = -1;
  if ( !v7 )
    v8 = v6;
  *(_QWORD *)(v3 + 496) = v8;
  *(_DWORD *)(v3 + 484) = sub_1859960(v5, "pb2bv_all_clauses_limit", 8);
  *(_DWORD *)(v3 + 488) = sub_1859960(v2, "pb2bv_cardinality_limit", 0xFFFFFFFFLL);
  sub_14DC230(v3 + 136, v2);
  return sub_1473C20(v3 + 352, v2);
}

