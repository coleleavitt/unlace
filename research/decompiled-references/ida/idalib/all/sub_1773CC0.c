__int64 __fastcall sub_1773CC0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  __int64 v6; // rax

  v3 = sub_175C980(a1, *(_QWORD *)(a2 + 24), 0, a3);
  if ( v3 == 1 )
    return 1;
  v5 = v3;
  v6 = sub_1773CB0(a1, *(__int64 **)(a2 + 32));
  if ( v6 == 1 )
    return 1;
  else
    return sub_178D010(*a1, *(unsigned int *)(a2 + 16), v5 & 0xFFFFFFFFFFFFFFFELL, v6 & 0xFFFFFFFFFFFFFFFELL);
}
