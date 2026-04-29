__int64 __fastcall sub_3DCC80(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rbx
  const char *v7; // rdi

  v2 = *(_QWORD *)(a1 + 1088);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(v2 + 432);
  v4 = 104LL * *(_QWORD *)(v2 + 440);
  v5 = v3 + v4;
  if ( !v4 )
    return 0xFFFFFFFFLL;
  v6 = v3;
  while ( 1 )
  {
    v7 = s1;
    if ( *(_QWORD *)(v6 + 40) )
      v7 = *(const char **)(v6 + 32);
    if ( !strcmp(v7, a2) )
      break;
    v6 += 104;
    if ( v5 == v6 )
      return 0xFFFFFFFFLL;
  }
  return -991146299 * (unsigned int)((v6 - v3) >> 3);
}
