__int64 __fastcall sub_7CC1D0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rdi

  sub_13D4C80(a1 + 1592);
  v3 = *(__int64 **)(a1 + 2392);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    while ( v4 != v3 )
    {
      v5 = *v3++;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 248LL))(v5, a2);
    }
  }
  sub_7F6100(a1 + 3144, a2);
  sub_18183E0(a2, "euf ackerman", *(unsigned int *)(a1 + 2184));
  return sub_18183E0(a2, "euf final check", *(unsigned int *)(a1 + 2188));
}

