/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65EB0
// Address: 0x0000000000065EB0

//----- (0000000000065EB0) ----------------------------------------------------
__int64 __fastcall sub_65EB0(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r15
  const char *v4; // rsi
  const char *v5; // rdi
  const char *v7; // rsi

  if ( *(_DWORD *)(a1 + 216) != 1 )
    return set_qerrno(0x2Fu);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL) )
    return set_qerrno(0x632u);
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * *(int *)(*(_QWORD *)(a1 + 184) + 24LL));
  v3 = *(_QWORD *)(v2 + 40);
  v4 = s1;
  v5 = s1;
  if ( v3 )
    v5 = *(const char **)(v2 + 32);
  if ( *(_QWORD *)(a1 + 48) )
    v4 = *(const char **)(a1 + 40);
  if ( strcmp(v5, v4) )
    return set_qerrno(0x632u);
  if ( v3 )
    v7 = *(const char **)(v2 + 32);
  else
    v7 = s1;
  return sub_658A0((_QWORD *)a1, v7);
}
