__int64 __fastcall sub_CF7140(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // rax
  __int64 result; // rax

  sub_1863170(a1 + 112, a2);
  v3 = sub_1859960(a1 + 112, "max_memory", 0xFFFFFFFFLL);
  v4 = a1 + 112;
  v5 = (unsigned __int64)v3 << 20;
  v6 = v3 == -1;
  v7 = -1;
  if ( !v6 )
    v7 = v5;
  *(_QWORD *)(a1 + 96) = v7;
  result = sub_1859960(v4, "max_steps", 0xFFFFFFFFLL);
  *(_DWORD *)(a1 + 104) = result;
  return result;
}

