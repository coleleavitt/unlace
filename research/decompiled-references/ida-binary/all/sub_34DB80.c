__int64 __fastcall sub_34DB80(__int64 a1, const char *a2)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rbx
  size_t v6; // rbp
  __int64 v7; // rax

  v2 = strlen(a2);
  v3 = *(_QWORD *)(a1 + 48);
  v4 = v3 + 24LL * *(_QWORD *)(a1 + 56);
  if ( !(24LL * *(_QWORD *)(a1 + 56)) )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = v2;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    if ( v7 )
    {
      if ( v6 < v7 - 1 && *(_BYTE *)(*(_QWORD *)v5 + v6) == 58 && !memcmp(*(const void **)v5, a2, v6) )
        break;
    }
    v5 += 24;
    if ( v5 == v4 )
      return 0xFFFFFFFFLL;
  }
  return -1431655765 * (unsigned int)((v5 - v3) >> 3);
}
