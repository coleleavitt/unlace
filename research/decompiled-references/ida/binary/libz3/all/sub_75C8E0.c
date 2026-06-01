__int64 __fastcall sub_75C8E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  __int64 result; // rax

  v2 = a1 + 24;
  sub_1863170(a1 + 24, a2);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL);
  v4 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  v5 = a1 + 24;
  v6 = (unsigned __int64)v4 << 20;
  v7 = v4 == -1;
  v8 = -1;
  if ( !v7 )
    v8 = v6;
  *(_QWORD *)(v3 + 112) = v8;
  *(_DWORD *)(v3 + 120) = sub_1859960(v5, "max_steps", 0xFFFFFFFFLL);
  result = sub_1859610(v2, "produce_models", 0);
  *(_BYTE *)(v3 + 124) = result;
  return result;
}

