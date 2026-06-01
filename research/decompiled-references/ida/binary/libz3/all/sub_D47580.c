__int64 __fastcall sub_D47580(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned __int64 v4; // rdx
  bool v5; // zf
  __int64 result; // rax

  sub_1863170(a1 + 24, a2);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v3 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  v4 = (unsigned __int64)v3 << 20;
  v5 = v3 == -1;
  result = -1;
  if ( !v5 )
    result = v4;
  *(_QWORD *)(v2 + 40) = result;
  return result;
}

