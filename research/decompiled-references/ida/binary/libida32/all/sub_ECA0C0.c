const char *__fastcall sub_ECA0C0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  const char *result; // rax
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32)
                                         + 8LL * (unsigned int)(*(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20) + a2))
                             + 24LL)
                 + 40LL);
  if ( (v2 & 7) != 0 )
    return &byte_22CD811;
  result = &byte_22CD811;
  v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
    return (const char *)(*(_QWORD *)(v4 + 16) + 16LL);
  return result;
}

