__int64 __fastcall sub_11590(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx

  v2 = sub_29E10(24);
  *(_QWORD *)v2 = 0;
  v3 = (__int64 *)v2;
  *(_OWORD *)(v2 + 8) = 0;
  if ( *(_QWORD *)(a2 + 8) > 1u )
    sub_10E50((__int64 *)v2, "name", *(const char **)a2);
  if ( *(_QWORD *)(a2 + 32) > 1u )
    sub_10E50(v3, "email", *(const char **)(a2 + 24));
  *(_DWORD *)a1 = 3;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}

