__int64 __fastcall sub_175CCA0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax

  v3 = sub_175C980(a1, *(_QWORD *)(a2 + 8), 0, a3);
  if ( v3 == 1 )
    return 1;
  else
    return sub_1C46CA0(*a1, *(unsigned int *)(a2 + 4), v3 & 0xFFFFFFFFFFFFFFFELL, 0);
}
