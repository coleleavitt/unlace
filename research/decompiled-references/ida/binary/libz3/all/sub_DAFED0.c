__int64 __fastcall sub_DAFED0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rax
  _QWORD v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = sub_186B270(0x28u);
  *(_DWORD *)(v1 + 8) = 0;
  v2 = v1;
  *(_QWORD *)v1 = off_1C5A910;
  *(_QWORD *)(v1 + 32) = 0;
  v8[0] = 0;
  v3 = sub_1859960(v8, "max_memory", 0xFFFFFFFFLL);
  v4 = (unsigned __int64)v3 << 20;
  v5 = v3 == -1;
  v6 = -1;
  if ( !v5 )
    v6 = v4;
  *(_QWORD *)(v2 + 16) = v6;
  sub_1859610(v8, "aig_default_gate_encoding", 1);
  sub_18572D0(v8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(v2 + 24) = *(_BYTE *)(a1 + 24);
  return v2;
}

