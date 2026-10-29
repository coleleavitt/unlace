__int64 __fastcall sub_DAFE70(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax
  __int64 result; // rax

  v2 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  v3 = (unsigned __int64)v2 << 20;
  v4 = v2 == -1;
  v5 = -1;
  if ( !v4 )
    v5 = v3;
  *(_QWORD *)(a1 + 16) = v5;
  result = sub_1859610(a2, "aig_default_gate_encoding", 1);
  *(_BYTE *)(a1 + 24) = result;
  return result;
}

