__int64 __fastcall sub_7124C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = *a1;
  sub_1817FC0(a2, *a1 + 40);
  v3 = *(_QWORD *)(v2 + 80);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, a2);
  v4 = *(_QWORD *)(v2 + 120);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2);
  sub_18183E0(a2, "qsat num predicates", *(unsigned int *)(v2 + 196));
  sub_18183E0(a2, "qsat num rounds", *(unsigned int *)(v2 + 32));
  return sub_18183E0(a2, "qsat num predicates", *(unsigned int *)(v2 + 196));
}

