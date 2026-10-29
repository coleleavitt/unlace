__int64 __fastcall sub_DAFDA0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax

  v1 = sub_186B270(0x28u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = off_1C5A910;
  *(_QWORD *)(v1 + 32) = 0;
  v2 = sub_1859960(a1, "max_memory", 0xFFFFFFFFLL);
  v3 = (unsigned __int64)v2 << 20;
  v4 = v2 == -1;
  v5 = -1;
  if ( !v4 )
    v5 = v3;
  *(_QWORD *)(v1 + 16) = v5;
  *(_BYTE *)(v1 + 24) = sub_1859610(a1, "aig_default_gate_encoding", 1);
  return sub_EE8D70(v1);
}

