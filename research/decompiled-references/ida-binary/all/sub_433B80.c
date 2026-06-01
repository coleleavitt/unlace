__int64 __fastcall map_to_other_filesystem_t__::vfunc_1(__int64 a1)
{
  __int64 v1; // rax
  const char *v2; // rbx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = "Show in Vault files";
  if ( *(_DWORD *)(v1 + 8) != 65 )
    v2 = "Show in Local files";
  v3 = sub_534430(*(_QWORD *)(v1 + 72));
  if ( v3 )
    sub_537630(v3, 1, v2);
  return 1;
}
