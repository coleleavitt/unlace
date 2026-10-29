void __fastcall sub_D038B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // [rsp+0h] [rbp-28h]
  _BYTE v12[32]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a1 + 24;
  sub_1863170(a1 + 24, a2);
  v3 = *(_QWORD *)(a1 + 16);
  v11 = a1 + 24;
  sub_17F9A60(v12, "tactic");
  v4 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  v5 = a1 + 24;
  v6 = (unsigned __int64)v4 << 20;
  v7 = v4 == -1;
  v8 = -1;
  if ( !v7 )
    v8 = v6;
  *(_QWORD *)(v3 + 552) = v8;
  v9 = sub_1859980(v5, "blast_term_ite.max_steps", v12, 0xFFFFFFFFLL);
  *(_DWORD *)(v3 + 564) = sub_1859960(v2, "max_steps", v9);
  v10 = sub_1859980(v11, "blast_term_ite.max_inflation", v12, 0xFFFFFFFFLL);
  *(_DWORD *)(v3 + 568) = sub_1859960(v2, "max_inflation", v10);
  sub_18572D0(v12);
}

