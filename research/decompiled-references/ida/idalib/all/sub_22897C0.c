__int64 __fastcall sub_22897C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  size_t v4; // rdx

  v2 = 0;
  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 != *(_QWORD *)(a2 + 24) || v4 && memcmp(*(const void **)(a1 + 16), *(const void **)(a2 + 16), v4) )
    return 0;
  LOBYTE(v2) = *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32);
  return v2;
}
