/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B8E0
// Address: 0x000000010002B8E0

//----- (000000010002B8E0) ----------------------------------------------------
__int64 __fastcall sub_10002B8E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  const char *v3; // rsi
  const char *v4; // rax
  const char *v6; // rsi

  if ( *(_DWORD *)(a1 + 216) != 1 || !*(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL) )
    return set_qerrno();
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * *(int *)(*(_QWORD *)(a1 + 184) + 24LL));
  v2 = *(_QWORD *)(v1 + 40);
  v3 = _s1;
  v4 = _s1;
  if ( v2 )
    v4 = *(const char **)(v1 + 32);
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  if ( strcmp(v4, v3) )
    return set_qerrno();
  if ( v2 )
    v6 = *(const char **)(v1 + 32);
  else
    v6 = _s1;
  return sub_10002B380(a1, v6);
}
