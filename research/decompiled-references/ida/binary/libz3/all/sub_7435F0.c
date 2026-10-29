__int64 __fastcall sub_7435F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rax
  __int64 result; // rax

  sub_1863170(a1 + 680, a2);
  v2 = *(_QWORD *)(a1 + 168);
  sub_1863170(v2 + 8, a1 + 680);
  v3 = sub_1859960(v2 + 8, "max_memory", 0xFFFFFFFFLL);
  v4 = (unsigned __int64)v3 << 20;
  v5 = v3 == -1;
  v6 = -1;
  if ( !v5 )
    v6 = v4;
  *(_QWORD *)(v2 + 80) = v6;
  *(_QWORD *)(v2 + 72) = (unsigned int)sub_1859960(v2 + 8, "max_steps", 0xFFFFFFFFLL);
  result = sub_1859960(v2 + 8, "max_bits", 4);
  *(_DWORD *)(v2 + 64) = result;
  return result;
}

