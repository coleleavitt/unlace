__int64 __fastcall sub_175CCF0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax

  v3 = sub_175C980(a1, *(_QWORD *)(a2 + 16), 0, a3);
  if ( v3 == 1 )
    return 1;
  else
    return sub_178B6E0(*a1, *(unsigned int *)(a2 + 8), v3 & 0xFFFFFFFFFFFFFFFELL, *(_BYTE *)(a2 + 32) & 1);
}
