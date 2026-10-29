void __fastcall sub_D822E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax
  _BYTE v6[32]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  v3 = (unsigned __int64)v2 << 20;
  v4 = v2 == -1;
  v5 = -1;
  if ( !v4 )
    v5 = v3;
  *(_QWORD *)(a1 + 48) = v5;
  *(_DWORD *)(a1 + 56) = sub_1859960(a2, "max_steps", 0xFFFFFFFFLL);
  sub_17F9A60(v6, "rewriter");
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 520LL) = sub_1859630(a2, "hi_fp_unspecified", v6, 0);
  sub_18572D0(v6);
}

